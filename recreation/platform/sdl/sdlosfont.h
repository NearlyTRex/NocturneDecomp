#pragma once

#include "platform/osfont.h"

#include <memory>

struct TTF_Font;

namespace nocturne::platform::sdl {

class CSdlOsFont final : public IOsFont {
public:
    // Takes ownership of font.
    explicit CSdlOsFont(TTF_Font *font);

    [[nodiscard]] common::SExtent measureText(std::string_view text) override;
    [[nodiscard]] STextMask renderText(std::string_view text) override;

private:
    struct SFontDeleter {
        void operator()(TTF_Font *font) const;
    };

    std::unique_ptr<TTF_Font, SFontDeleter> font_;
};

} // namespace nocturne::platform::sdl
