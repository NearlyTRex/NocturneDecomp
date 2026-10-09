#pragma once

#include "common/serial/binaryvalue.h"

#include <bit>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <type_traits>

namespace nocturne::common {

// Reads little-endian values out of a buffer. A read past the end fails the reader for good and
// yields zero, so a record can be read whole and checked once.
class CBinaryReader {
public:
    explicit CBinaryReader(std::span<const std::byte> data);

    template <BinaryValue T>
    [[nodiscard]] T read();
    void readBytes(std::span<std::byte> out);
    // A fixed-size field holding a NUL-terminated string.
    [[nodiscard]] std::string readString(std::size_t field_size);
    void skip(std::size_t count);
    void seek(std::size_t position);

    [[nodiscard]] std::size_t getPosition() const;
    [[nodiscard]] std::size_t getRemaining() const;
    [[nodiscard]] bool hasFailed() const;

private:
    // Empty, and the reader failed, when fewer than count bytes are left.
    [[nodiscard]] std::span<const std::byte> take(std::size_t count);
    [[nodiscard]] static std::uint64_t decode(std::span<const std::byte> bytes);

    std::span<const std::byte> data_;
    std::size_t position_ = 0;
    bool failed_ = false;
};

template <BinaryValue T>
T CBinaryReader::read() {
    const std::span<const std::byte> bytes = take(sizeof(T));
    if (bytes.empty()) {
        return T{};
    }
    using Bits = std::conditional_t<
        sizeof(T) == 1, std::uint8_t,
        std::conditional_t<sizeof(T) == 2, std::uint16_t,
                           std::conditional_t<sizeof(T) == 4, std::uint32_t, std::uint64_t>>>;
    return std::bit_cast<T>(static_cast<Bits>(decode(bytes)));
}

} // namespace nocturne::common
