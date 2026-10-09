#pragma once

#include <string>
#include <string_view>

namespace nocturne::platform {

class IClipboard {
public:
    virtual ~IClipboard() = default;

    // Empty when the clipboard holds no text.
    [[nodiscard]] virtual std::string getClipboardText() = 0;
    virtual void setClipboardText(std::string_view text_data) = 0;
};

} // namespace nocturne::platform
