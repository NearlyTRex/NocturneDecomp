#include "core/chain/chain_functions.h"

#include <bit>
#include <cstdint>

namespace nocturne::core {
namespace {

// Half of 1.0's bits, as flattn.cpp's static initialiser sets it at startup.
constexpr std::int32_t kFastSqrtMagic = 0x3f800000 >> 1;

} // namespace

// nocedit 0x00431350
float fastSqrt(float value) {
    return std::bit_cast<float>((std::bit_cast<std::int32_t>(value) >> 1) + kFastSqrtMagic);
}

} // namespace nocturne::core
