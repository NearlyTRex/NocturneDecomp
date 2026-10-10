#pragma once

#include "platform/gl/glframepresenter.h"

#include <gmock/gmock.h>

namespace nocturne::platform::gl {

class MockGlFramePresenter : public IGlFramePresenter {
public:
    MOCK_METHOD(void, presentScene, (GLuint texture, int width, int height), (override));
};

} // namespace nocturne::platform::gl
