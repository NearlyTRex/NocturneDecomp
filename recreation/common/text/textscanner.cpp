#include "common/text/textscanner.h"

#include "common/text/scan.h"

#include <algorithm>

namespace nocturne::common {

CTextScanner::CTextScanner(std::string_view text) : text_(text) {}

bool CTextScanner::atEnd() const {
    return position_ >= text_.size();
}

void CTextScanner::skipWhitespace() {
    position_ = std::min(text_.find_first_not_of(kWhitespace, position_), text_.size());
}

void CTextScanner::skipLine() {
    static_cast<void>(readLine());
}

std::string_view CTextScanner::readLine() {
    const std::size_t end = std::min(text_.find('\n', position_), text_.size());
    const std::string_view line = text_.substr(position_, end - position_);
    position_ = std::min(end + 1, text_.size());
    return line;
}

bool CTextScanner::expect(char literal) {
    if (atEnd() || text_[position_] != literal) {
        return false;
    }
    ++position_;
    return true;
}

std::optional<int> CTextScanner::scanInteger() {
    const std::optional<SScanned<int>> scanned = scanIntegerPrefix(text_.substr(position_));
    if (!scanned) {
        skipWhitespace();
        return std::nullopt;
    }
    position_ += scanned->length;
    return scanned->value;
}

std::optional<float> CTextScanner::scanFloat() {
    const std::optional<SScanned<float>> scanned = scanFloatPrefix(text_.substr(position_));
    if (!scanned) {
        skipWhitespace();
        return std::nullopt;
    }
    position_ += scanned->length;
    return scanned->value;
}

std::string_view CTextScanner::scanWord() {
    skipWhitespace();
    const std::size_t end = std::min(text_.find_first_of(kWhitespace, position_), text_.size());
    const std::string_view word = text_.substr(position_, end - position_);
    position_ = end;
    return word;
}

std::optional<std::string_view> CTextScanner::scanUntil(char delimiter) {
    return scanUntilAny({&delimiter, 1});
}

std::optional<std::string_view> CTextScanner::scanUntilAny(std::string_view delimiters) {
    const std::size_t end = std::min(text_.find_first_of(delimiters, position_), text_.size());
    if (end == position_) {
        return std::nullopt;
    }
    const std::string_view match = text_.substr(position_, end - position_);
    position_ = end;
    return match;
}

std::size_t CTextScanner::getPosition() const {
    return position_;
}

} // namespace nocturne::common
