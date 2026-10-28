#include "common/text/scanformat.h"

#include "common/text/scan.h"

#include <optional>

namespace nocturne::common {
namespace {

struct SScanOutcome {
    int filled = 0;
    bool complete = false;
};

bool scanConversion(CTextScanner &scanner, char conversion, std::string_view set,
                    const ScanField &field) {
    if (conversion == 'd') {
        const std::optional<int> value = scanner.scanInteger();
        if (value) {
            *std::get<int *>(field) = *value;
        }
        return value.has_value();
    }
    if (conversion == 'f') {
        const std::optional<float> value = scanner.scanFloat();
        if (value) {
            *std::get<float *>(field) = *value;
        }
        return value.has_value();
    }
    if (conversion == 's') {
        const std::string_view word = scanner.scanWord();
        if (!word.empty()) {
            *std::get<std::string *>(field) = word;
        }
        return !word.empty();
    }
    const std::optional<std::string_view> match = scanner.scanUntilAny(set);
    if (match) {
        *std::get<std::string *>(field) = *match;
    }
    return match.has_value();
}

SScanOutcome scan(CTextScanner &scanner, std::string_view format,
                  std::span<const ScanField> fields) {
    SScanOutcome outcome;
    for (std::size_t i = 0; i < format.size(); ++i) {
        const char directive = format[i];
        if (kWhitespace.contains(directive)) {
            scanner.skipWhitespace();
            continue;
        }
        if (directive != '%') {
            if (!scanner.expect(directive)) {
                return outcome;
            }
            continue;
        }
        const char conversion = format[++i];
        std::string_view set;
        if (conversion == '[') {
            const std::size_t close = format.find(']', i + 3);
            set = format.substr(i + 2, close - (i + 2));
            i = close;
        }
        const ScanField &field = fields[static_cast<std::size_t>(outcome.filled)];
        if (!scanConversion(scanner, conversion, set, field)) {
            return outcome;
        }
        ++outcome.filled;
    }
    outcome.complete = true;
    return outcome;
}

} // namespace

int scanFields(CTextScanner &scanner, std::string_view format, std::span<const ScanField> fields) {
    return scan(scanner, format, fields).filled;
}

std::optional<std::size_t> scanPrefixFields(std::string_view text, std::string_view format,
                                            std::span<const ScanField> fields) {
    CTextScanner scanner(text);
    if (!scan(scanner, format, fields).complete) {
        return std::nullopt;
    }
    return scanner.getPosition();
}

} // namespace nocturne::common
