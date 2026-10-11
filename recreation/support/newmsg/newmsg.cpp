#include "support/newmsg/newmsg.h"

#include <cstddef>
#include <utility>

namespace nocturne::support {

CNewMsg::CNewMsg(std::vector<SMessage> messages) : messages_(std::move(messages)) {}

// nocedit 0x005441f0
std::string_view CNewMsg::getLocalizedString(std::string_view key) const {
    return findLocalizedString(key, 0, static_cast<int>(messages_.size()) - 1);
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
