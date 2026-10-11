#pragma once

#include "platform/file.h"
#include "platform/filesystem.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockFileSystem : public IFileSystem {
public:
    MOCK_METHOD(std::vector<SFileInfo>, findFiles, (std::string_view pattern), (override));
    MOCK_METHOD(std::optional<std::string>, readFile, (std::string_view path), (override));
    MOCK_METHOD(bool, appendFile, (std::string_view path, std::string_view text), (override));
    MOCK_METHOD(bool, removeFile, (std::string_view path), (override));
    MOCK_METHOD(std::unique_ptr<IFile>, openFile, (std::string_view path, EFileMode mode),
                (override));
    MOCK_METHOD(std::optional<std::string>, getFullPath, (std::string_view path), (override));
    MOCK_METHOD(std::optional<SFileInfo>, getFileInfo, (std::string_view path), (override));
    MOCK_METHOD(bool, makeDirectory, (std::string_view path), (override));
    MOCK_METHOD(bool, setModifiedTime, (std::string_view path, std::time_t modified), (override));
    MOCK_METHOD(bool, setReadOnly, (std::string_view path, bool read_only), (override));
};

} // namespace nocturne::platform
