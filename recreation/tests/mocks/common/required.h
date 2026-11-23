#pragma once

#include <optional>
#include <stdexcept>
#include <string>
#include <string_view>

namespace nocturne::common {

[[noreturn]] inline void failRequired(std::string_view what) {
    throw std::logic_error("the test's setup gave no " + std::string(what));
}

// The value a test's setup gave the optional; empty, the test fails there naming what was missing.
template <typename T>
[[nodiscard]] T &required(std::optional<T> &value, std::string_view what = "value") {
    if (!value.has_value()) {
        failRequired(what);
    }
    return *value;
}

template <typename T>
[[nodiscard]] const T &required(const std::optional<T> &value, std::string_view what = "value") {
    if (!value.has_value()) {
        failRequired(what);
    }
    return *value;
}

} // namespace nocturne::common
