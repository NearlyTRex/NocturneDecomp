#include "common/text/windows1252.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <optional>

namespace nocturne::common {
namespace {

struct SCodePage {
    char32_t code_point;
    std::uint8_t byte;
};

// The 0x80-0x9F row; the rest of Windows-1252 is Latin-1.
constexpr std::array kUpperControlRow = std::to_array<SCodePage>({
    {0x20ac, 0x80}, {0x201a, 0x82}, {0x0192, 0x83}, {0x201e, 0x84}, {0x2026, 0x85}, {0x2020, 0x86},
    {0x2021, 0x87}, {0x02c6, 0x88}, {0x2030, 0x89}, {0x0160, 0x8a}, {0x2039, 0x8b}, {0x0152, 0x8c},
    {0x017d, 0x8e}, {0x2018, 0x91}, {0x2019, 0x92}, {0x201c, 0x93}, {0x201d, 0x94}, {0x2022, 0x95},
    {0x2013, 0x96}, {0x2014, 0x97}, {0x02dc, 0x98}, {0x2122, 0x99}, {0x0161, 0x9a}, {0x203a, 0x9b},
    {0x0153, 0x9c}, {0x017e, 0x9e}, {0x0178, 0x9f},
});

bool isContinuation(std::uint8_t byte) {
    return (byte & 0xc0U) == 0x80U;
}

// Decodes the sequence at position and moves past it; empty for a malformed one, which is
// skipped up to the next lead byte.
std::optional<char32_t> decode(std::string_view text, std::size_t &position) {
    const auto lead = static_cast<std::uint8_t>(text[position++]);
    std::size_t length = 0;
    char32_t code_point = 0;
    char32_t minimum = 0;
    if (lead < 0x80U) {
        return lead;
    }
    if ((lead & 0xe0U) == 0xc0U) {
        length = 1;
        code_point = lead & 0x1fU;
        minimum = 0x80;
    } else if ((lead & 0xf0U) == 0xe0U) {
        length = 2;
        code_point = lead & 0x0fU;
        minimum = 0x800;
    } else if ((lead & 0xf8U) == 0xf0U) {
        length = 3;
        code_point = lead & 0x07U;
        minimum = 0x10000;
    }
    std::size_t taken = 0;
    while (taken < length && position < text.size() &&
           isContinuation(static_cast<std::uint8_t>(text[position]))) {
        code_point = (code_point << 6U) | (static_cast<std::uint8_t>(text[position]) & 0x3fU);
        ++position;
        ++taken;
    }
    if (length == 0 || taken < length || code_point < minimum) {
        while (position < text.size() &&
               isContinuation(static_cast<std::uint8_t>(text[position]))) {
            ++position;
        }
        return std::nullopt;
    }
    return code_point;
}

std::optional<char> encode(char32_t code_point) {
    if (code_point < 0x80 || (code_point >= 0xa0 && code_point <= 0xff)) {
        return static_cast<char>(code_point);
    }
    const auto *const found =
        std::ranges::find(kUpperControlRow, code_point, &SCodePage::code_point);
    if (found == kUpperControlRow.end()) {
        return std::nullopt;
    }
    return static_cast<char>(found->byte);
}

} // namespace

std::string utf8ToWindows1252(std::string_view text) {
    std::string out;
    std::size_t position = 0;
    while (position < text.size()) {
        const std::optional<char32_t> code_point = decode(text, position);
        const std::optional<char> encoded = code_point ? encode(*code_point) : std::nullopt;
        if (encoded) {
            out.push_back(*encoded);
        }
    }
    return out;
}

} // namespace nocturne::common
