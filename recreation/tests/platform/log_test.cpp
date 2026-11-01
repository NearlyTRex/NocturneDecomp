#include "platform/log.h"
#include "tests/mocks/platform/mocklog.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::platform {
namespace {

using ::testing::StrictMock;

TEST(ILog, PublicInterface) {
    static_assert(std::is_abstract_v<ILog>);
    static_assert(std::has_virtual_destructor_v<ILog>);
    static_assert(
        std::is_same_v<decltype(&ILog::write), void (ILog::*)(ELogSubsystem, std::string_view)>);
    static_assert(std::is_same_v<std::underlying_type_t<ELogSubsystem>, std::uint8_t>);
}

// The line leads with the file it was written in, without its directory, and the line number.
TEST(ILog, APrintedLineLeadsWithWhereItWasWritten) {
    StrictMock<MockLog> log;
    const int line = __LINE__ + 3;
    EXPECT_CALL(log, write(ELogSubsystem::Sound,
                           std::string_view(std::format("[log_test.cpp:{}] 3 voices", line))));
    log.print(ELogSubsystem::Sound, "{} voices", 3);
}

TEST(CNullLog, WritesNothingAnywhere) {
    CNullLog log;
    log.print(ELogSubsystem::Render, "nothing");
    SUCCEED();
}

} // namespace
} // namespace nocturne::platform
