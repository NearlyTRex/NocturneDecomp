#include "common/text/ascii.h"

#include <algorithm>

namespace nocturne::common {

char foldAscii(char c) {
    return c >= 'A' && c <= 'Z' ? static_cast<char>(c - 'A' + 'a') : c;
}

char upperAscii(char c) {
    return c >= 'a' && c <= 'z' ? static_cast<char>(c - 'a' + 'A') : c;
}

bool isAsciiAlnum(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
}

std::string toUpperAscii(std::string_view text) {
    std::string upper(text);
    std::ranges::transform(upper, upper.begin(), upperAscii);
    return upper;
}

bool equalsIgnoringAsciiCase(std::string_view a, std::string_view b) {
    return std::ranges::equal(a, b, {}, foldAscii, foldAscii);
}

int compareIgnoringAsciiCase(std::string_view a, std::string_view b) {
    const auto unsignedFold = [](char c) { return static_cast<unsigned char>(foldAscii(c)); };
    const auto [mismatch_a, mismatch_b] =
        std::ranges::mismatch(a, b, {}, unsignedFold, unsignedFold);
    if (mismatch_a == a.end()) {
        return mismatch_b == b.end() ? 0 : -1;
    }
    if (mismatch_b == b.end()) {
        return 1;
    }
    return unsignedFold(*mismatch_a) < unsignedFold(*mismatch_b) ? -1 : 1;
}

} // namespace nocturne::common
