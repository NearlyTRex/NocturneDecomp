#include "common/error/fatalerror.h"
#include "engine/ini/ini.h"
#include "tests/mocks/platform/mockfilesystem.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <optional>
#include <string>

namespace nocturne::engine {
namespace {

using ::testing::Return;

constexpr const char *kFile = ".\\system\\nocturne.ini";
constexpr std::size_t kRoomy = 100;

class CIniTest : public ::testing::Test {
protected:
    void givenFile(const std::optional<std::string> &text) {
        EXPECT_CALL(file_system_, readFile(std::string_view(kFile))).WillOnce(Return(text));
    }

    std::optional<std::string> read(std::string_view section, std::string_view key,
                                    std::size_t buffer_size = kRoomy) {
        return ini_.getProfileString(section, key, "fallback", buffer_size, kFile);
    }

    platform::MockFileSystem file_system_;
    CIni ini_{file_system_};
};

TEST_F(CIniTest, ReadsTheKeyInItsSection) {
    givenFile("[Graphics]\ngamePIXX=640\ngamePIXY=480\n");
    EXPECT_EQ(read("Graphics", "gamePIXY"), "480");
}

TEST_F(CIniTest, AMissingKeyGivesTheDefault) {
    givenFile("[Graphics]\ngamePIXX=640\n");
    EXPECT_EQ(read("Graphics", "gamma"), "fallback");
}

TEST_F(CIniTest, KeysBeforeTheHeaderAreNotInTheSection) {
    givenFile("gamma=3\n[Graphics]\ngamePIXX=640\n");
    EXPECT_EQ(read("Graphics", "gamma"), "fallback");
}

TEST_F(CIniTest, TheHeaderMatchesExactly) {
    givenFile("[graphics]\ngamma=3\n");
    EXPECT_EQ(read("Graphics", "gamma"), "fallback");
}

// The original's search never stops at the next header.
TEST_F(CIniTest, TheSearchRunsOnPastTheNextHeader) {
    givenFile("[Graphics]\ngamePIXX=640\n[Sound]\nsfxVolume=7\n");
    EXPECT_EQ(read("Graphics", "sfxVolume"), "7");
}

TEST_F(CIniTest, AKeyMatchesOnlyUpToItsEqualsSign) {
    givenFile("[Control]\nkeyRun\nkeyRunFast=1\nkeyRun=42\n");
    EXPECT_EQ(read("Control", "keyRun"), "42");
}

TEST_F(CIniTest, ValuesKeepEverythingAfterTheFirstEquals) {
    givenFile("[Graphics]\nrendererDLLPath=C:\\a=b.dll\n");
    EXPECT_EQ(read("Graphics", "rendererDLLPath"), "C:\\a=b.dll");
}

TEST_F(CIniTest, CrlfLinesReadAsTextMode) {
    givenFile("[Graphics]\r\ngamma=3\r\n");
    EXPECT_EQ(read("Graphics", "gamma"), "3");
}

// The original dropped the last character of a final line with no newline.
TEST_F(CIniTest, AFinalLineWithoutANewlineKeepsItsWholeValue) {
    givenFile("[Graphics]\ngamma=12");
    EXPECT_EQ(read("Graphics", "gamma"), "12");
}

TEST_F(CIniTest, AValueThatFillsTheBufferIsRefused) {
    givenFile("[Graphics]\ngamma=1234\n");
    EXPECT_EQ(read("Graphics", "gamma", 4), std::nullopt);
}

TEST_F(CIniTest, AValueOneShortOfTheBufferFits) {
    givenFile("[Graphics]\ngamma=1234\n");
    EXPECT_EQ(read("Graphics", "gamma", 5), "1234");
}

TEST_F(CIniTest, ADefaultThatFillsTheBufferIsRefused) {
    givenFile("[Graphics]\n");
    EXPECT_EQ(read("Graphics", "gamma", 8), std::nullopt);
    givenFile("[Graphics]\n");
    EXPECT_EQ(read("Graphics", "gamma", 9), "fallback");
}

class CIniWriteTest : public CIniTest {
protected:
    void expectWritten(std::string_view text) {
        EXPECT_CALL(file_system_, writeFile(std::string_view(kFile), text)).WillOnce(Return(true));
    }

    void write(std::string_view section, std::string_view key, std::string_view value) {
        ini_.writeProfileString(section, key, value, kFile);
    }
};

TEST_F(CIniWriteTest, ReplacesTheKeysLineInPlace) {
    givenFile("[Graphics]\ngamePIXX=640\ngamma=3\n[Sound]\nsfxVolume=7\n");
    expectWritten("[Graphics]\r\ngamePIXX=800\r\ngamma=3\r\n[Sound]\r\nsfxVolume=7\r\n");
    write("Graphics", "gamePIXX", "800");
}

// The original took this key for missing and added a second copy of it on every write.
TEST_F(CIniWriteTest, AKeyJustUnderAHeaderOnTheFirstLineIsReplacedNotRepeated) {
    givenFile("[Graphics]\ngamma=3\n");
    expectWritten("[Graphics]\r\ngamma=4\r\n");
    write("Graphics", "gamma", "4");
}

TEST_F(CIniWriteTest, AnUnchangedValueLeavesTheFileAlone) {
    givenFile("[Graphics]\ngamma=3\n");
    EXPECT_CALL(file_system_, writeFile).Times(0);
    write("Graphics", "gamma", "3");
}

TEST_F(CIniWriteTest, AMissingKeyGoesStraightUnderItsHeader) {
    givenFile("[Graphics]\ngamePIXX=640\n[Sound]\nsfxVolume=7\n");
    expectWritten("[Graphics]\r\ngamePIXX=640\r\n[Sound]\r\nmusicVolume=5\r\nsfxVolume=7\r\n");
    write("Sound", "musicVolume", "5");
}

TEST_F(CIniWriteTest, AMissingSectionIsAddedAtTheEnd) {
    givenFile("[Graphics]\r\ngamePIXX=640");
    expectWritten("[Graphics]\r\ngamePIXX=640\r\n[Sound]\r\nmusicVolume=5\r\n");
    write("Sound", "musicVolume", "5");
}

// Matching the reader, the key is found past the next header.
TEST_F(CIniWriteTest, TheKeyIsFoundPastTheNextHeader) {
    givenFile("[Graphics]\n[Sound]\ngamma=3\n");
    expectWritten("[Graphics]\r\n[Sound]\r\ngamma=4\r\n");
    write("Graphics", "gamma", "4");
}

TEST_F(CIniWriteTest, PercentSignsAreCopiedAsWritten) {
    givenFile("[Graphics]\nname=%s%d\ngamma=3\n");
    expectWritten("[Graphics]\r\nname=%s%d\r\ngamma=4\r\n");
    write("Graphics", "gamma", "4");
}

TEST_F(CIniWriteTest, AnUnreadableFileIsFatal) {
    givenFile(std::nullopt);
    EXPECT_THAT([this] { write("Graphics", "gamma", "4"); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("cIni::writeProfileString: Unable to open input")));
}

TEST_F(CIniWriteTest, AnUnwritableFileIsFatal) {
    givenFile("[Graphics]\ngamma=3\n");
    EXPECT_CALL(file_system_, writeFile).WillOnce(Return(false));
    EXPECT_THAT([this] { write("Graphics", "gamma", "4"); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("cIni::writeProfileString: Unable to open output")));
}

TEST_F(CIniTest, AnUnreadableFileIsFatal) {
    givenFile(std::nullopt);
    EXPECT_THAT([this] { (void)read("Graphics", "gamma"); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("cIni::getProfileString: Unable to open input")));
}

} // namespace
} // namespace nocturne::engine
