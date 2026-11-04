#pragma once

#include <cstdint>

namespace nocturne::core {

// Whether a door or platform moves only once, and how far it has got; files save the number. One
// that has moved stays put, so it is drawn into the camera's backdrop once and not each frame.
enum class EOneShotState : std::uint8_t {
    kNo = 0,
    kYes = 1,
    kDone = 2,
    kDoneInBackground = 3,
};

} // namespace nocturne::core
