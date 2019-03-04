#include <cassert>
#include <sstream>
#include <stdexcept>

#include <libbullet3/version.hxx>
#include <libbullet3/bullet3.hxx>

int main ()
{
  using namespace std;
  using namespace bullet3;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
