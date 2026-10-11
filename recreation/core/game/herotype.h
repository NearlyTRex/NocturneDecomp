#pragma once

#include <cstdint>

namespace nocturne::core {

// The INI's heroNumber and the saves' hero; the values are frozen.
enum class EHeroType : std::uint8_t {
    HERO_TYPE_GABRIELLA = 0,
    HERO_TYPE_SVETLANA = 1,
    HERO_TYPE_STRANGER = 2,
    HERO_TYPE_SCAT = 3,
    HERO_TYPE_BARON = 4,
    HERO_TYPE_ICEPICK = 5,
    HERO_TYPE_HAYSTACK = 6,
    HERO_TYPE_COLONEL = 7,
    HERO_TYPE_MOLOCH = 8,
};

} // namespace nocturne::core
