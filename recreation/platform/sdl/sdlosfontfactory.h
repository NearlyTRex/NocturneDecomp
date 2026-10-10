#pragma once

#include "platform/osfontfactory.h"

namespace nocturne::platform::sdl {

// Holds SDL_ttf initialised; every font it creates must be destroyed before it. The face name is
// not honoured: the first monospace system font found is used, as the decomp's CreateFontA does.
class CSdlOsFontFactory final : public IOsFontFactory {
public:
    CSdlOsFontFactory();
    ~CSdlOsFontFactory() override;
    CSdlOsFontFactory(const CSdlOsFontFactory &) = delete;
    CSdlOsFontFactory &operator=(const CSdlOsFontFactory &) = delete;

    [[nodiscard]] std::unique_ptr<IOsFont> createOsFont(std::string_view face_name,
                                                        int pixel_height) override;
};

} // namespace nocturne::platform::sdl
