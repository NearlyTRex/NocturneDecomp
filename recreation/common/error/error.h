#pragma once

#include <source_location>
#include <string_view>

namespace nocturne::common {

// Throws a CFatalError naming the caller's file and line.
[[noreturn]] void displayErrorAndQuit(std::string_view message,
                                      std::source_location where = std::source_location::current());

} // namespace nocturne::common
