#pragma once

#include "engine/dosio/dosio.h"
#include "tests/mocks/platform/memoryfile.h"
#include "tests/mocks/platform/mockfilesystem.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <ctime>
#include <memory>
#include <string>

namespace nocturne::engine {

// A disk under /game holding whatever files a test gives it; each open reads a fresh copy.
class CPodFixture : public ::testing::Test {
protected:
    static constexpr std::time_t kPodTime = 880000000;

    CPodFixture() {
        ON_CALL(file_system_, getFullPath).WillByDefault([](std::string_view path) {
            return std::optional<std::string>(path.starts_with('/') ? std::string(path)
                                                                    : "/game/" + std::string(path));
        });
        ON_CALL(file_system_, getFileInfo).WillByDefault(::testing::Return(std::nullopt));
        ON_CALL(file_system_, openFile).WillByDefault(::testing::ReturnNull());
    }

    void givenFile(const std::string &name, const std::string &contents) {
        const std::string full = "/game/" + name;
        ON_CALL(file_system_, getFileInfo(std::string_view(full)))
            .WillByDefault(::testing::Return(
                platform::SFileInfo{.name = name, .size = contents.size(), .modified = kPodTime}));
        ON_CALL(file_system_, openFile(std::string_view(full), platform::EFileMode::Read))
            .WillByDefault([contents](std::string_view, platform::EFileMode) {
                return std::make_unique<platform::CMemoryFile>(contents);
            });
    }

    ::testing::NiceMock<platform::MockFileSystem> file_system_;
    CDosIo dosio_{file_system_};
};

} // namespace nocturne::engine
