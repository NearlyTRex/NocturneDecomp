#pragma once

#include "platform/osfont.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockOsFont : public IOsFont {
public:
    MOCK_METHOD(common::SExtent, measureText, (std::string_view text), (override));
    MOCK_METHOD(STextMask, renderText, (std::string_view text), (override));
};

} // namespace nocturne::platform
