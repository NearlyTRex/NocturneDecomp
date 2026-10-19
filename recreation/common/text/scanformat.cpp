#include "common/text/scanformat.h"

#include "common/text/scan.h"

#include <optional>

namespace nocturne::common {

int scanFields(CTextScanner &scanner, std::string_view format, std::span<const ScanField> fields) {
    int filled = 0;
    for (std::size_t i = 0; i < format.size(); ++i) {
        const char directive = format[i];
        if (kWhitespace.contains(directive)) {
            scanner.skipWhitespace();
            continue;
        }
        if (directive != '%') {
            if (!scanner.expect(directive)) {
                return filled;
            }
            continue;
        }
        const ScanField &field = fields[static_cast<std::size_t>(filled)];
        const char conversion = format[++i];
        if (conversion == 'd') {
            const std::optional<int> value = scanner.scanInteger();
            if (!value) {
                return filled;
            }
            *std::get<int *>(field) = *value;
        } else if (conversion == 'f') {
            const std::optional<float> value = scanner.scanFloat();
            if (!value) {
                return filled;
            }
            *std::get<float *>(field) = *value;
        } else if (conversion == 's') {
            const std::string_view word = scanner.scanWord();
            if (word.empty()) {
                return filled;
            }
            *std::get<std::string *>(field) = word;
        } else {
            const std::optional<std::string_view> match = scanner.scanUntil(format[i + 2]);
            i += 3;
            if (!match) {
                return filled;
            }
            *std::get<std::string *>(field) = *match;
        }
        ++filled;
    }
    return filled;
}

} // namespace nocturne::common
