#pragma once

#include "platform/osfont.h"
#include "platform/osfontfactory.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockOsFontFactory : public IOsFontFactory {
public:
    MOCK_METHOD(std::unique_ptr<IOsFont>, createOsFont,
                (std::string_view face_name, int pixel_height), (override));
};

} // namespace nocturne::platform
