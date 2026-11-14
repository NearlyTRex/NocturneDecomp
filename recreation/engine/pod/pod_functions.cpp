#include "engine/pod/pod_functions.h"

#include "common/text/ascii.h"
#include "engine/pod/pod.h"
#include "engine/pod/podfile.h"

#include <algorithm>
#include <array>
#include <memory>

namespace nocturne::engine {
namespace {

constexpr std::uint32_t kCrc32Polynomial = 0x04C11DB7;
constexpr std::uint32_t kCrc32TopBit = 0x80000000;
constexpr int kBitsPerByte = 8;
constexpr int kTopByteShift = 24;
constexpr std::size_t kCrc32TableSize = 256;

// Each top byte's eight shift-and-XOR steps, taken at once.
consteval std::array<std::uint32_t, kCrc32TableSize> makeCrc32Table() {
    std::array<std::uint32_t, kCrc32TableSize> table{};
    for (std::size_t index = 0; index < kCrc32TableSize; ++index) {
        auto crc = static_cast<std::uint32_t>(index) << kTopByteShift;
        for (int bit = 0; bit < kBitsPerByte; ++bit) {
            crc = (crc & kCrc32TopBit) != 0 ? (crc << 1U) ^ kCrc32Polynomial : crc << 1U;
        }
        table.at(index) = crc;
    }
    return table;
}

constexpr std::array<std::uint32_t, kCrc32TableSize> kCrc32Table = makeCrc32Table();

} // namespace

// The original shifts the byte through one bit at a time; the table holds the same eight steps.
// nocedit 0x0054f2e0
std::uint32_t crc32UpdateByte(std::uint32_t current_crc, std::uint8_t data_byte) {
    const std::size_t index = (current_crc >> kTopByteShift) ^ data_byte;
    return (current_crc << kBitsPerByte) ^ kCrc32Table.at(index);
}

// nocedit 0x0054f3a0
std::uint32_t crc32UpdateBuffer(std::span<const std::byte> data, std::uint32_t initial_crc) {
    std::uint32_t crc = initial_crc;
    for (const std::byte value : data) {
        crc = crc32UpdateByte(crc, std::to_integer<std::uint8_t>(value));
    }
    return crc;
}

// The tail is compared case-sensitively, as the original did.
// nocedit 0x00550ce0
std::vector<std::string> findFilesByExtension(const CPod &pod, std::string_view extension,
                                              std::size_t max_results,
                                              std::size_t result_string_length) {
    const std::string wanted = common::toUpperAscii(extension);
    const std::vector<std::unique_ptr<CPodFile>> &pods = pod.getPodFiles();
    std::vector<std::string> names;
    for (auto current = pods.begin(); current != pods.end(); ++current) {
        for (const CPodDirectoryEntry &entry : (*current)->getEntries()) {
            if (!entry.name.ends_with(wanted)) {
                continue;
            }
            const bool earlier = std::any_of(pods.begin(), current, [&entry](const auto &other) {
                return other->findFileIndex(entry.name) >= 0;
            });
            if (earlier) {
                continue;
            }
            names.push_back(entry.name.substr(0, result_string_length - 1));
            if (names.size() >= max_results) {
                return names;
            }
        }
    }
    return names;
}

} // namespace nocturne::engine
