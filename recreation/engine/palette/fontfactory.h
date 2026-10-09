#pragma once

#include "engine/fwd.h"

#include <memory>
#include <string_view>

namespace nocturne::engine {

// Stands in for constructing a CWinFont: the adapter rasterises an OS font.
class IFontFactory {
public:
    virtual ~IFontFactory() = default;

    [[nodiscard]] virtual std::unique_ptr<CFont>
    createWinFont(std::string_view font_name, int font_height, int y_offset1, int y_offset2) = 0;
};

} // namespace nocturne::engine
