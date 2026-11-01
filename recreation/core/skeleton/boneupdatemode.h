#pragma once

#include <cstdint>

namespace nocturne::core {

// How posing a bone and those below it takes the motion's turns.
enum class EBoneUpdateMode : std::uint8_t {
    // Each bone turned as the motion turns it.
    kAbsolute = 0,
    // Each bone's turn from its parent in the motion, carried onto its parent's turn in the pose.
    kRelative = 1,
    // How far the motion has turned each bone from its first frame, added to the pose.
    kAdditive = 2,
};

} // namespace nocturne::core
