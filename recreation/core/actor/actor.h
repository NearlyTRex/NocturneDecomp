#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

#include <cstddef>
#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

namespace nocturne::core {

// actor.cpp's shared state: the actor classes missions can name, and the game's random draws.
// Those come off its sim stream while a sim frame runs and off the CRT's stream outside one; only
// the sim stream is seeded alike on every machine.
class CActor {
public:
    // The most actor classes there can be.
    static constexpr std::size_t kMaxActorTypes = 200;

    // Registers the actor classes ported so far.
    CActor(const CGame &game, common::CWatcomRandom &crt_random);

    // More than kMaxActorTypes is fatal.
    void registerActorClass(const CDemonActorType &type);
    // The class whose name has the same hash, letters and digits in either case; null when none.
    [[nodiscard]] const CDemonActorType *getActorClassByName(std::string_view class_name) const;
    // A new actor of the named class; fatal when the class is unknown or can't be created.
    [[nodiscard]] std::unique_ptr<CDemonActor> createActorByName(std::string_view class_name) const;
    [[nodiscard]] std::size_t getActorClassCount() const;

    void setRandomSeed(std::uint32_t seed_value);
    [[nodiscard]] float getRandomFloatFromRange(float min_value, float max_value);
    // A draw past either end is clamped to it.
    [[nodiscard]] int getRandomInt(int min_value, int max_value);
    // 1 when a draw from 0 to 1 falls below the threshold.
    [[nodiscard]] int randomChance(float probability_threshold);

private:
    void registerActorClasses();
    // 24 bits.
    std::uint32_t generateRandomValue();
    // 0 to 1 from whichever stream is current.
    float drawUnitFloat();

    const CGame &game_;
    common::CWatcomRandom &crt_random_;
    std::uint32_t random_seed_value_ = 0;
    std::vector<const CDemonActorType *> registrations_;
};

} // namespace nocturne::core
