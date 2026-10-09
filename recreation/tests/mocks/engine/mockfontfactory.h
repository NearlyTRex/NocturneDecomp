#pragma once

#include "engine/palette/font.h"
#include "engine/palette/fontfactory.h"

#include <gmock/gmock.h>

namespace nocturne::engine {

class MockFontFactory : public IFontFactory {
public:
    MOCK_METHOD(std::unique_ptr<CFont>, createWinFont,
                (std::string_view font_name, int font_height, int y_offset1, int y_offset2),
                (override));
};

} // namespace nocturne::engine
