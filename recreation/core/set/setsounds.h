#pragma once

#include <string>

namespace nocturne::core {

// The wind a set blows, louder the farther the ground and the sky are from the camera, as
// Nocturne's castle's: the sound it plays.
struct SSetWind {
    std::string sound = "wind-ctl.wav";

    bool operator==(const SSetWind &) const = default;
};

// The water a set laps, louder the more of it shows, as Nocturne's dungeon's: the sound it plays,
// and the loudest it gets.
struct SSetWater {
    std::string sound = "water-2.wav";
    float loudest = 0.7F;

    bool operator==(const SSetWater &) const = default;
};

} // namespace nocturne::core
