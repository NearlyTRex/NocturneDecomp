#include "support/codec/bitbuffer.h"

#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::support {
namespace {

constexpr int kByteBits = 8;

std::uint32_t lowBits(std::uint32_t bits, int count) {
    return bits & ~(~std::uint32_t{0} << count);
}

std::uint32_t takeByte(std::span<const std::byte> &input) {
    const auto byte = std::to_integer<std::uint32_t>(input.front());
    input = input.subspan(1);
    return byte;
}

} // namespace

// nocedit 0x0043e510
void resetBitBuffer(SBitBuffer &bit_buffer) {
    bit_buffer = {};
}

// nocedit 0x0043e840
int extractBitsFromBuffer(SBitBuffer &bit_buffer, int bit_count,
                          std::span<const std::byte> &input) {
    if (bit_count < bit_buffer.bits_available) {
        const std::uint32_t bits = lowBits(bit_buffer.accumulated_bits, bit_count);
        bit_buffer.accumulated_bits >>= bit_count;
        bit_buffer.bits_available -= bit_count;
        return static_cast<int>(bits);
    }
    int taken = bit_buffer.bits_available;
    std::uint32_t bits = lowBits(bit_buffer.accumulated_bits, taken);
    bit_buffer = {};
    int remaining = bit_count - taken;
    for (; remaining >= kByteBits; remaining -= kByteBits) {
        if (input.empty()) {
            bit_buffer = {.accumulated_bits = bits, .bits_available = taken};
            return -1;
        }
        bits |= takeByte(input) << taken;
        taken += kByteBits;
    }
    if (remaining > 0) {
        if (input.empty()) {
            bit_buffer = {.accumulated_bits = bits, .bits_available = taken};
            return -1;
        }
        const std::uint32_t byte = takeByte(input);
        bits |= lowBits(byte, remaining) << taken;
        bit_buffer = {.accumulated_bits = byte >> remaining,
                      .bits_available = kByteBits - remaining};
    }
    return static_cast<int>(bits);
}

} // namespace nocturne::support
