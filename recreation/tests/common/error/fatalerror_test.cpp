#include "common/error/fatalerror.h"

#include <gtest/gtest.h>

#include <cerrno>
#include <cstring>
#include <ctime>
#include <string>

namespace nocturne::common {
namespace {

std::tm sunday() {
    std::tm time{};
    time.tm_year = 99;
    time.tm_mon = 9;
    time.tm_mday = 3;
    time.tm_wday = 0;
    time.tm_hour = 7;
    time.tm_min = 5;
    time.tm_sec = 9;
    return time;
}

TEST(CFatalError, CarriesTheMessageAndWhereItWasRaised) {
    const CFatalError error("CIniFile::getString - section not write!", "inifile.cpp", 41, 0);
    EXPECT_STREQ(error.what(), "CIniFile::getString - section not write!");
    EXPECT_EQ(error.getFile(), "inifile.cpp");
    EXPECT_EQ(error.getLine(), 41);
}

// The layout displayErrorAndQuit appends to gtfo.txt, with asctime's padded day.
TEST(CFatalError, LogEntryFollowsTheOriginalLayout) {
    const CFatalError error("Out of memory", "main.cpp", 128, ENOENT);
    const std::string expected = std::string(64, '-') +
                                 "\nMsg: Out of memory\n"
                                 "File: main.cpp line 128\n"
                                 "Time: Sun Oct  3 07:05:09 1999\n"
                                 "errno = " +
                                 std::to_string(ENOENT) + " (" + std::strerror(ENOENT) + ")\n";
    EXPECT_EQ(error.getLogEntry(sunday()), expected);
}

} // namespace
} // namespace nocturne::common
