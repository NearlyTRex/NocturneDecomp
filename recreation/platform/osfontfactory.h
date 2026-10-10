#pragma once

#include "platform/fwd.h"

#include <memory>
#include <string_view>

namespace nocturne::platform {

class IOsFontFactory {
public:
    virtual ~IOsFontFactory() = default;

    // CreateFontA with a negative height: pixel_height is the em height, not the cell. Null when
    // no font can be found.
    [[nodiscard]] virtual std::unique_ptr<IOsFont> createOsFont(std::string_view face_name,
                                                                int pixel_height) = 0;
};

} // namespace nocturne::platform
