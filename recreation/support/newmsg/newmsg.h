#pragma once

#include "common/fwd.h"
#include "engine/fwd.h"

#include <cstddef>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::support {

struct SMessage {
    std::string key;
    std::string text;
};

// The localised message table, and the OS font the language wants. Until a table is loaded every
// key is its own text.
class CNewMsg {
public:
    static constexpr std::size_t kMaxMessages = 500;

    explicit CNewMsg(const engine::CDosIo &dosio);

    // A missing or empty file leaves the table as it is.
    void readMessageFile(std::string_view message_file);
    // The key's text, or the key itself when the table doesn't have it.
    [[nodiscard]] std::string_view getLocalizedString(std::string_view key) const;
    [[nodiscard]] bool getUseOSFonts() const;
    // Windows-1252 or Shift-JIS bytes, as the message file has them.
    [[nodiscard]] const std::string &getOSFontName() const;
    char *decryptMessage(char *encrypted_msg);

private:
    void readMessages(common::CTextScanner &scanner, std::string_view message_file);
    // Into key order, for the search.
    void sortMessages();
    [[nodiscard]] std::string_view findLocalizedString(std::string_view key, int lower_bound,
                                                       int upper_bound) const;

    const engine::CDosIo &dosio_;
    std::vector<SMessage> messages_;
    bool use_os_fonts_ = false;
    std::string os_font_name_;
};

} // namespace nocturne::support
