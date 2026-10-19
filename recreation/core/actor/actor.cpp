#include "core/actor/actor.h"

#include "common/math/fixed.h"
#include "common/random/watcomrandom.h"
#include "core/game/game.h"

#include <bit>

namespace nocturne::core {
namespace {

// 1/32767 and just over 2^-24, as the original stores them.
constexpr float kCrtRandomScale = std::bit_cast<float>(0x38000100U);
constexpr float kSimRandomScale = std::bit_cast<float>(0x33800001U);
// Widens the range so the top value is drawn as often as the others.
constexpr double kRandomIntSpan = 0.99999;

} // namespace

CActor::CActor(const CGame &game, common::CWatcomRandom &crt_random)
    : game_(game), crt_random_(crt_random) {
    registerActorClasses();
}

// nocedit 0x0040cb90
void CActor::setRandomSeed(std::uint32_t seed_value) {
    random_seed_value_ = seed_value;
}

// nocedit 0x0040cba0
std::uint32_t CActor::generateRandomValue() {
    random_seed_value_ = ((random_seed_value_ * 0x2ff0bdU) + 1U) & 0xffffffU;
    return random_seed_value_;
}

float CActor::drawUnitFloat() {
    if (game_.is_processing != 0) {
        return static_cast<float>(static_cast<double>(generateRandomValue()) * kSimRandomScale);
    }
    return static_cast<float>(static_cast<double>(crt_random_.rand()) * kCrtRandomScale);
}

// nocedit 0x0040cc10
float CActor::getRandomFloatFromRange(float min_value, float max_value) {
    const auto span = static_cast<float>(static_cast<double>(max_value) - min_value);
    const float unit = drawUnitFloat();
    return static_cast<float>((static_cast<double>(unit) * span) + min_value);
}

// nocedit 0x0040cc70
int CActor::getRandomInt(int min_value, int max_value) {
    const double span =
        static_cast<double>(common::wrappingSubtract(max_value, min_value)) + kRandomIntSpan;
    const float unit = drawUnitFloat();
    const int value = common::truncateToInt((static_cast<double>(unit) * span) + min_value);
    if (value < min_value) {
        return min_value;
    }
    if (value > max_value) {
        return max_value;
    }
    return value;
}

// A NaN threshold counts as a hit, as the original's unordered compare sets the carry.
// nocedit 0x0040cd10
int CActor::randomChance(float probability_threshold) {
    return drawUnitFloat() >= probability_threshold ? 0 : 1;
}

} // namespace nocturne::core
