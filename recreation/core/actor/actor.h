#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

#include <cstdint>

namespace nocturne::core {

// actor.cpp's shared state. The game's random draws come off its sim stream while a sim frame runs
// and off the CRT's stream outside one; only the sim stream is seeded alike on every machine.
class CActor {
public:
    CActor(const CGame &game, common::CWatcomRandom &crt_random);

    void setRandomSeed(std::uint32_t seed_value);
    [[nodiscard]] float getRandomFloatFromRange(float min_value, float max_value);
    // A draw past either end is clamped to it.
    [[nodiscard]] int getRandomInt(int min_value, int max_value);
    // 1 when a draw from 0 to 1 falls below the threshold.
    [[nodiscard]] int randomChance(float probability_threshold);

private:
    // 24 bits.
    std::uint32_t generateRandomValue();
    // 0 to 1 from whichever stream is current.
    float drawUnitFloat();

    const CGame &game_;
    common::CWatcomRandom &crt_random_;
    std::uint32_t random_seed_value_ = 0;
};

} // namespace nocturne::core
