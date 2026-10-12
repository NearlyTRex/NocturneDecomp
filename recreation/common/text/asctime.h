#pragma once

#include <ctime>
#include <string>

namespace nocturne::common {

// asctime's layout, newline included: "Sun Oct  3 07:05:09 1999\n".
[[nodiscard]] std::string formatAsctime(const std::tm &time);

} // namespace nocturne::common
