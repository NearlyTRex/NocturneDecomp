#pragma once

#include "platform/clipboard.h"

namespace nocturne::platform::sdl {

// Needs a CSdlContext: the clipboard belongs to the video subsystem.
class CSdlClipboard final : public IClipboard {
public:
    [[nodiscard]] std::string getClipboardText() override;
    void setClipboardText(std::string_view text_data) override;
};

} // namespace nocturne::platform::sdl
