#pragma once

namespace nocturne::core {

// The ambient level a menu bat this far along a course of this many frames leaves for the next.
[[nodiscard]] int getBatAmbient(float course_position, int length);

} // namespace nocturne::core
