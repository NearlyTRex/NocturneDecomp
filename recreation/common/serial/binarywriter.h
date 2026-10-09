#pragma once

#include "common/serial/binaryvalue.h"

#include <bit>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::common {

// Appends little-endian values to a growing buffer.
class CBinaryWriter {
public:
    template <BinaryValue T>
    void write(T value);
    void writeBytes(std::span<const std::byte> bytes);
    // A fixed-size field: truncated to leave room for the NUL, then NUL-padded.
    void writeString(std::string_view text, std::size_t field_size);

    [[nodiscard]] std::span<const std::byte> getData() const;

private:
    void encode(std::uint64_t value, std::size_t size);

    std::vector<std::byte> data_;
};

template <BinaryValue T>
void CBinaryWriter::write(T value) {
    using Bits = std::conditional_t<
        sizeof(T) == 1, std::uint8_t,
        std::conditional_t<sizeof(T) == 2, std::uint16_t,
                           std::conditional_t<sizeof(T) == 4, std::uint32_t, std::uint64_t>>>;
    encode(std::bit_cast<Bits>(value), sizeof(T));
}

} // namespace nocturne::common
