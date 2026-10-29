#include "platform/filelog.h"
#include "platform/log.h"
#include "tests/mocks/platform/mockfilesystem.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string_view>
#include <type_traits>

namespace nocturne::platform {
namespace {

using ::testing::InSequence;
using ::testing::Return;
using ::testing::StrictMock;

TEST(CFileLog, PublicInterface) {
    static_assert(std::is_base_of_v<ILog, CFileLog>);
    static_assert(std::is_constructible_v<CFileLog, IFileSystem &>);
}

// The run's first line empties the file; the rest are added to it.
TEST(CFileLog, EachSubsystemHasAFileTheRunStartsAfresh) {
    StrictMock<MockFileSystem> file_system;
    CFileLog log(file_system);
    const InSequence order;
    EXPECT_CALL(file_system,
                writeFile(std::string_view("nocturne_render.log"), std::string_view("one\n")))
        .WillOnce(Return(true));
    EXPECT_CALL(file_system,
                appendFile(std::string_view("nocturne_render.log"), std::string_view("two\n")))
        .WillOnce(Return(true));
    EXPECT_CALL(file_system,
                writeFile(std::string_view("nocturne_netplay.log"), std::string_view("three\n")))
        .WillOnce(Return(true));
    log.write(ELogSubsystem::Render, "one");
    log.write(ELogSubsystem::Render, "two");
    log.write(ELogSubsystem::Netplay, "three");
}

TEST(CFileLog, EverySubsystemHasItsOwnName) {
    StrictMock<MockFileSystem> file_system;
    CFileLog log(file_system);
    for (const std::string_view name : {"sound", "frontend", "fileio", "input"}) {
        EXPECT_CALL(file_system,
                    writeFile(std::string_view(std::format("nocturne_{}.log", name)), testing::_))
            .WillOnce(Return(true));
    }
    log.write(ELogSubsystem::Sound, "");
    log.write(ELogSubsystem::Frontend, "");
    log.write(ELogSubsystem::FileIo, "");
    log.write(ELogSubsystem::Input, "");
}

// A file that couldn't be started is tried afresh with the next line.
TEST(CFileLog, AFileThatWontOpenIsTriedAgain) {
    StrictMock<MockFileSystem> file_system;
    CFileLog log(file_system);
    EXPECT_CALL(file_system, writeFile(std::string_view("nocturne_render.log"), testing::_))
        .WillOnce(Return(false))
        .WillOnce(Return(true));
    log.write(ELogSubsystem::Render, "one");
    log.write(ELogSubsystem::Render, "two");
}

} // namespace
} // namespace nocturne::platform
