#pragma once

#include "common/text/textscanner.h"

#include <array>
#include <cstddef>
#include <span>
#include <string>
#include <string_view>
#include <type_traits>
#include <variant>

namespace nocturne::common {

// Where one conversion of a scanf format stores what it reads.
using ScanField = std::variant<int *, float *, std::string *>;

namespace detail {

// Called only when a format and its fields disagree, which stops the format compiling.
void scanFormatDoesNotMatchItsFields();

template <typename Field>
consteval char conversionFor() {
    if constexpr (std::is_same_v<Field, int>) {
        return 'd';
    } else if constexpr (std::is_same_v<Field, float>) {
        return 'f';
    } else {
        static_assert(std::is_same_v<Field, std::string>);
        return 's';
    }
}

} // namespace detail

// A scanf format whose conversions are checked against its fields as it compiles: "%d" takes an
// int, "%f" a float, and "%s" and "%[^c]" a std::string.
template <typename... Fields>
class CScanFormat {
public:
    // Implicit, so a literal converts as it does to std::format_string.
    consteval CScanFormat(const char *format) : format_(format) {
        constexpr std::array<char, sizeof...(Fields)> kExpected{detail::conversionFor<Fields>()...};
        std::size_t field = 0;
        for (std::size_t i = 0; i < format_.size(); ++i) {
            if (format_[i] != '%') {
                continue;
            }
            char conversion = format_[++i];
            if (conversion == '[') {
                if (format_.substr(i + 1, 1) != "^" || format_.substr(i + 3, 1) != "]") {
                    detail::scanFormatDoesNotMatchItsFields();
                }
                i += 3;
                conversion = 's';
            }
            if (field >= kExpected.size() || kExpected.at(field) != conversion) {
                detail::scanFormatDoesNotMatchItsFields();
            }
            ++field;
        }
        if (field != kExpected.size()) {
            detail::scanFormatDoesNotMatchItsFields();
        }
    }

    [[nodiscard]] std::string_view get() const {
        return format_;
    }

private:
    std::string_view format_;
};

// fscanf over the scanner: whitespace in the format skips any run of it, other characters must
// match, and the first conversion or character that fails stops the scan, leaving the fields
// after it as they were. Returns how many fields were filled.
int scanFields(CTextScanner &scanner, std::string_view format, std::span<const ScanField> fields);

template <typename... Fields>
int scanFormat(CTextScanner &scanner, std::type_identity_t<CScanFormat<Fields...>> format,
               Fields &...fields) {
    const std::array<ScanField, sizeof...(Fields)> targets{&fields...};
    return scanFields(scanner, format.get(), targets);
}

} // namespace nocturne::common
