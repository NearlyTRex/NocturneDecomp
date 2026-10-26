#include "support/newmsg/newmsg.h"

#include "common/error/error.h"
#include "common/text/textscanner.h"
#include "engine/dosio/dosio.h"

#include <cstddef>
#include <format>
#include <optional>
#include <string>
#include <utility>

namespace nocturne::support {
namespace {

// MS PGothic, in Shift-JIS: the font when the message file names none.
constexpr std::string_view kDefaultOSFontName =
    "\x82\x6C\x82\x72\x20\x82\x6F\x83\x53\x83\x56\x83\x62\x83\x4E";

// "%[^\"]" between quotes: the quoted text, or nothing when it is empty.
std::optional<std::string_view> scanQuoted(common::CTextScanner &scanner) {
    if (!scanner.expect('"')) {
        return std::nullopt;
    }
    const std::optional<std::string_view> text = scanner.scanUntil('"');
    if (text) {
        scanner.expect('"');
    }
    return text;
}

// One "key", "text" pair; a missing comma or an empty key or text is nothing.
std::optional<SMessage> scanMessage(common::CTextScanner &scanner) {
    const std::optional<std::string_view> key = scanQuoted(scanner);
    if (!key || !scanner.expect(',')) {
        return std::nullopt;
    }
    scanner.skipWhitespace();
    const std::optional<std::string_view> text = scanQuoted(scanner);
    if (!text) {
        return std::nullopt;
    }
    return SMessage{.key = std::string(*key), .text = std::string(*text)};
}

} // namespace

CNewMsg::CNewMsg(const engine::CDosIo &dosio) : dosio_(dosio), os_font_name_(kDefaultOSFontName) {}

// A comment line heads each of the three settings, which are the version (0), whether to draw
// text with an OS font, and that font's quoted name. Then come "key", "text" pairs. The shipped
// game has no message file, so every key reads as itself.
// nocedit 0x00543e40
void CNewMsg::readMessageFile(std::string_view message_file) {
    const std::optional<std::string> text = dosio_.readFile("", message_file);
    if (!text || text->empty()) {
        return;
    }
    common::CTextScanner scanner(*text);
    scanner.skipLine();
    const int version = scanner.scanInteger().value_or(0);
    scanner.skipWhitespace();
    scanner.skipLine();
    if (const std::optional<int> use_os_fonts = scanner.scanInteger()) {
        use_os_fonts_ = *use_os_fonts != 0;
    }
    scanner.skipWhitespace();
    if (version != 0) {
        common::displayErrorAndQuit("Unknown message file version");
    }
    scanner.skipLine();
    if (const std::optional<std::string_view> font_name = scanQuoted(scanner)) {
        os_font_name_ = *font_name;
    }
    readMessages(scanner, message_file);
}

// The original copied keys and texts into fixed 128- and 256-byte slots without a length check.
void CNewMsg::readMessages(common::CTextScanner &scanner, std::string_view message_file) {
    while (true) {
        scanner.skipWhitespace();
        if (scanner.atEnd()) {
            break;
        }
        std::optional<SMessage> message = scanMessage(scanner);
        if (!message) {
            common::displayErrorAndQuit(std::format("Error reading {}", message_file));
        }
        if (messages_.size() >= kMaxMessages) {
            common::displayErrorAndQuit(std::format("Too many messages in {}", message_file));
        }
        messages_.push_back(std::move(*message));
    }
    sortMessages();
}

// The original's exchange sort: each place takes any later key that sorts before it. It isn't
// stable, so which of a key listed twice the search finds is the original's.
void CNewMsg::sortMessages() {
    for (std::size_t i = 0; i + 1 < messages_.size(); ++i) {
        for (std::size_t j = i + 1; j < messages_.size(); ++j) {
            if (messages_[i].key > messages_[j].key) {
                std::swap(messages_[i], messages_[j]);
            }
        }
    }
}

// nocedit 0x005441f0
std::string_view CNewMsg::getLocalizedString(std::string_view key) const {
    return findLocalizedString(key, 0, static_cast<int>(messages_.size()) - 1);
}

bool CNewMsg::getUseOSFonts() const {
    return use_os_fonts_;
}

const std::string &CNewMsg::getOSFontName() const {
    return os_font_name_;
}

// nocedit 0x00544170
std::string_view CNewMsg::findLocalizedString(std::string_view key, int lower_bound,
                                              int upper_bound) const {
    while (lower_bound <= upper_bound) {
        const int middle = (lower_bound + upper_bound) / 2;
        const SMessage &message = messages_[static_cast<std::size_t>(middle)];
        const int order = key.compare(message.key);
        if (order == 0) {
            return message.text;
        }
        if (order < 0) {
            upper_bound = middle - 1;
        } else {
            lower_bound = middle + 1;
        }
    }
    return key;
}

} // namespace nocturne::support
