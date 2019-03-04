#pragma once

#include <iosfwd>
#include <string>

#include <libbullet3/export.hxx>

namespace bullet3
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBBULLET3_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
