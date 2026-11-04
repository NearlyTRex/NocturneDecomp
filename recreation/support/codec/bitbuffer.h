#pragma once

#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::support {

// Bits taken from bytes lowest first: those of the last byte not taken yet.
struct SBitBuffer {
    std::uint32_t accumulated_bits = 0;
    int bits_available = 0;
};

void resetBitBuffer(SBitBuffer &bit_buffer);
// The next bit_count bits, at most 32, the first taken lowest: the kept ones, then the input's
// bytes, which it steps past. -1 when the input runs out first, the bits it took kept for the
// next call.
int extractBitsFromBuffer(SBitBuffer &bit_buffer, int bit_count, std::span<const std::byte> &input);

} // namespace nocturne::support
