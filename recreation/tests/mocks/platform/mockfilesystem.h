#pragma once

#include "platform/filesystem.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockFileSystem : public IFileSystem {
public:
    MOCK_METHOD(std::vector<SFileInfo>, findFiles, (std::string_view pattern), (override));
};

} // namespace nocturne::platform
