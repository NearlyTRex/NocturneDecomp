#pragma once

#include "platform/gl/glframepresenter.h"

#include <gmock/gmock.h>

namespace nocturne::platform::gl {

class MockGlFramePresenter : public IGlFramePresenter {
public:
    MOCK_METHOD(void, presentScene, (GLuint texture, int width, int height), (override));
    MOCK_METHOD(EAntialias, getAntialias, (), (const, override));
    MOCK_METHOD(std::optional<common::SSceneReframe>, getSceneReframe, (int width, int height),
                (const, override));
};

} // namespace nocturne::platform::gl
