#include "common/error/fatalerror.h"
#include "engine/ini/ini.h"
#include "engine/ini/inifile.h"
#include "tests/mocks/platform/mockfilesystem.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>

namespace nocturne::engine {
namespace {

using ::testing::Return;

constexpr const char *kFile = ".\\system\\nocturne.ini";
constexpr const char *kText = "[Graphics]\n"
                              "gamePIXX=640\n"
                              "gamma=x\n"
                              "rendererDLLPath=trigl.dll\n"
                              "fogStart=0.25\n"
                              "[Sound]\n"
                              "sfxVolume=7\n";

class CIniFileTest : public ::testing::Test {
protected:
    CIniFileTest() {
        ON_CALL(file_system_, readFile(std::string_view(kFile))).WillByDefault(Return(kText));
        EXPECT_CALL(file_system_, readFile(::testing::_)).Times(::testing::AnyNumber());
    }

    platform::MockFileSystem file_system_;
    CIni ini_{file_system_};
};

TEST_F(CIniFileTest, ReadsFromItsFileAndSection) {
    const CIniFile file(ini_, kFile, "Graphics");
    EXPECT_EQ(file.getString("rendererDLLPath", "none", 250), "trigl.dll");
    EXPECT_EQ(file.getString("missing", "none", 250), "none");
}

TEST_F(CIniFileTest, ReadIniHeaderMovesToAnotherSection) {
    CIniFile file(ini_, kFile);
    file.readIniHeader("Sound");
    EXPECT_EQ(file.getInteger("sfxVolume", 0), 7);
}

TEST_F(CIniFileTest, AValueTooLongForTheBufferLeavesTheDefault) {
    const CIniFile file(ini_, kFile, "Graphics");
    EXPECT_EQ(file.getString("rendererDLLPath", "none", 9), "none");
}

TEST_F(CIniFileTest, ReadingWithoutAFilenameIsFatal) {
    const CIniFile file(ini_, "", "Graphics");
    EXPECT_THAT([&file] { (void)file.getString("gamma", "", 10); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("CIniFile::getString - filename not write!")));
}

TEST_F(CIniFileTest, ReadingWithoutASectionIsFatal) {
    const CIniFile file(ini_, kFile);
    EXPECT_THAT([&file] { (void)file.getString("gamma", "", 10); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("CIniFile::getString - section not write!")));
}

TEST_F(CIniFileTest, GetIntegerReadsTheNumber) {
    const CIniFile file(ini_, kFile, "Graphics");
    EXPECT_EQ(file.getInteger("gamePIXX", 320), 640);
}

TEST_F(CIniFileTest, GetIntegerKeepsTheValueWhenTheKeyIsMissingOrNotANumber) {
    const CIniFile file(ini_, kFile, "Graphics");
    EXPECT_EQ(file.getInteger("gamePIXY", -480), -480);
    EXPECT_EQ(file.getInteger("gamma", 2), 2);
}

TEST_F(CIniFileTest, GetFloatReadsTheNumber) {
    const CIniFile file(ini_, kFile, "Graphics");
    EXPECT_EQ(file.getFloat("fogStart", 1.0F), 0.25F);
    EXPECT_EQ(file.getFloat("gamma", 1.5F), 1.5F);
}

// The default goes out through "%g" and back, so a missing key rounds to six digits.
TEST_F(CIniFileTest, GetFloatRoundsTheDefaultToSixSignificantDigits) {
    const CIniFile file(ini_, kFile, "Graphics");
    EXPECT_EQ(file.getFloat("missing", 1.2345678F), 1.23457F);
}

} // namespace
} // namespace nocturne::engine
