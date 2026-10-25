#include "core/cloth/cloth_functions.h"

#include <bit>
#include <cstdint>

namespace nocturne::core {
namespace {

// 1.0's bits plus half of them, as flattn.cpp's static initialiser computes it at startup.
// deferred: the fast square root's half of 1.0's bits, with its first reader
// nocedit 0x004cbcb0
constexpr std::int32_t kFastInvSqrtMagic = 0x3f800000 + (0x3f800000 >> 1);

} // namespace

// nocedit 0x0043e2a0
float fastInvSqrt(float dist_sq) {
    return std::bit_cast<float>(kFastInvSqrtMagic - (std::bit_cast<std::int32_t>(dist_sq) >> 1));
}

} // namespace nocturne::core
