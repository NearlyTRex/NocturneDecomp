#pragma once

#include <string_view>

namespace nocturne::core {

// Quits, naming a class's function that is not ported yet.
[[noreturn]] void quitNotPorted(std::string_view class_name, std::string_view function);

} // namespace nocturne::core
