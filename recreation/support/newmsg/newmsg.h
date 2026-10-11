#pragma once

#include <string>
#include <string_view>
#include <vector>

namespace nocturne::support {

struct SMessage {
    std::string key;
    std::string text;
};

// The localised message table. Until one is loaded every key is its own text.
class CNewMsg {
public:
    CNewMsg() = default;
    // The table as readMessageFile leaves it: sorted by key, compared as strcmp does.
    explicit CNewMsg(std::vector<SMessage> messages);

    // The key's text, or the key itself when the table doesn't have it.
    [[nodiscard]] std::string_view getLocalizedString(std::string_view key) const;
    char *decryptMessage(char *encrypted_msg);

private:
    [[nodiscard]] std::string_view findLocalizedString(std::string_view key, int lower_bound,
                                                       int upper_bound) const;

    std::vector<SMessage> messages_;
};

} // namespace nocturne::support
