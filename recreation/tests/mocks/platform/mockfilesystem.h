#pragma once

#include "platform/filesystem.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockFileSystem : public IFileSystem {
public:
    MOCK_METHOD(std::vector<SFileInfo>, findFiles, (std::string_view pattern), (override));
    MOCK_METHOD(std::optional<std::string>, readFile, (std::string_view path), (override));
    MOCK_METHOD(bool, appendFile, (std::string_view path, std::string_view text), (override));
    MOCK_METHOD(bool, removeFile, (std::string_view path), (override));
};

} // namespace nocturne::platform
