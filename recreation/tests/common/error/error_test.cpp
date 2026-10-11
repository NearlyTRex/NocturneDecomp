#include "common/error/error.h"
#include "common/error/fatalerror.h"

#include <gtest/gtest.h>

#include <cerrno>
#include <source_location>
#include <string>

namespace nocturne::common {
namespace {

TEST(DisplayErrorAndQuit, ThrowsWithTheCallersFileLeafAndLine) {
    const std::source_location here = std::source_location::current();
    try {
        displayErrorAndQuit("Please copy Nocturne to your hard drive", here);
    } catch (const CFatalError &error) {
        EXPECT_STREQ(error.what(), "Please copy Nocturne to your hard drive");
        EXPECT_EQ(error.getFile(), "error_test.cpp");
        EXPECT_EQ(error.getLine(), static_cast<int>(here.line()));
        return;
    }
    FAIL() << "displayErrorAndQuit returned";
}

TEST(DisplayErrorAndQuit, DefaultsToTheCallSite) {
    const int line = static_cast<int>(std::source_location::current().line()) + 2;
    try {
        displayErrorAndQuit("x");
    } catch (const CFatalError &error) {
        EXPECT_EQ(error.getLine(), line);
        return;
    }
    FAIL() << "displayErrorAndQuit returned";
}

// errno at the call, as the original's log line reads it.
TEST(DisplayErrorAndQuit, RecordsErrno) {
    errno = ERANGE;
    try {
        displayErrorAndQuit("x");
    } catch (const CFatalError &error) {
        EXPECT_NE(error.getLogEntry({}).find("errno = " + std::to_string(ERANGE)),
                  std::string::npos);
        return;
    }
    FAIL() << "displayErrorAndQuit returned";
}

} // namespace
} // namespace nocturne::common
