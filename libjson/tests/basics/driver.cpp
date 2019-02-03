#include <iostream>
#include <libjson/json.hpp>

int main ()
{
  using json = nlohmann::json;
  // create object from string literal
  json j = "{ \"happy\": true, \"pi\": 3.141 }"_json;

  // or even nicer with a raw string literal
  auto j2 = R"(
  {
    "happy": true,
    "pi": 3.141
  }
)"_json;


  std::cout << "j: " << j << std::endl;
  std::cout << "j2: " << j2 << std::endl;
  return 0;
}
