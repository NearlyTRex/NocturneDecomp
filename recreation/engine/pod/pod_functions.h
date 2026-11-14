#pragma once

#include "engine/fwd.h"

#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

// The POD checksums are CRC-32/MPEG-2: polynomial 0x04C11DB7 most significant bit first, started
// from this value and stored with no final XOR.
inline constexpr std::uint32_t kCrc32Initial = 0xFFFFFFFF;

[[nodiscard]] std::uint32_t crc32UpdateByte(std::uint32_t current_crc, std::uint8_t data_byte);
[[nodiscard]] std::uint32_t crc32UpdateBuffer(std::span<const std::byte> data,
                                              std::uint32_t initial_crc);

// The names, pod by pod, that end in extension (in upper case, as the pods store them); a name
// an earlier pod also holds is skipped. At most max_results, each cut to result_string_length - 1
// characters as the caller's buffer held them.
[[nodiscard]] std::vector<std::string> findFilesByExtension(const CPod &pod,
                                                            std::string_view extension,
                                                            std::size_t max_results,
                                                            std::size_t result_string_length);

} // namespace nocturne::engine
