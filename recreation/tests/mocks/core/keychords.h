#pragma once

#include "core/game/keychord.h"
#include "engine/keys/inputcodetype.h"

#include <algorithm>
#include <initializer_list>
#include <iterator>
#include <ostream>
#include <span>
#include <vector>

namespace nocturne::core {

// Chords of no modifiers, one a code.
inline std::vector<SKeyChord> chords(std::initializer_list<engine::EInputCodeType> codes) {
    std::vector<SKeyChord> result;
    std::ranges::transform(codes, std::back_inserter(result),
                           [](engine::EInputCodeType code) { return SKeyChord{.code = code}; });
    return result;
}

// The chords' codes, their modifiers dropped.
inline std::vector<engine::EInputCodeType> codesOf(std::span<const SKeyChord> bound) {
    std::vector<engine::EInputCodeType> result;
    std::ranges::transform(bound, std::back_inserter(result), &SKeyChord::code);
    return result;
}

inline void PrintTo(const SKeyChord &chord, std::ostream *out) {
    *out << formatChord(chord);
}

} // namespace nocturne::core
