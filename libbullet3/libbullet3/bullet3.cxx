#include <libbullet3/bullet3.hxx>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace bullet3
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
