#include "common/error/fatalerror.h"
#include "core/script/script.h"
#include "platform/filesystem.h"
#include "tests/mocks/core/scriptfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::ElementsAre;
using ::testing::IsEmpty;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

class CScriptLoadTest : public CScriptFixture {
protected:
    // A file a lookup finds, at the given size, that won't open.
    void givenUnopenableFile(const std::string &name) {
        ON_CALL(file_system_, getFileInfo(std::string_view("/game/" + name)))
            .WillByDefault(
                Return(platform::SFileInfo{.name = name, .size = 1, .modified = kPodTime}));
    }

    [[nodiscard]] std::vector<SScriptLine> lines() const {
        const auto parsed = script_.getParsedLines();
        return {parsed.begin(), parsed.end()};
    }

    [[nodiscard]] std::vector<SDialogEntry> dialogue() const {
        const auto entries = script_.getDialogEntries();
        return {entries.begin(), entries.end()};
    }
};

TEST_F(CScriptLoadTest, AMissingScriptLoadsEmptyWithoutReadingItsDialogue) {
    givenFile("world\\m1.txt", "hello, gabriela, Hi.\n");
    EXPECT_TRUE(script_.loadScript("m1.scr", true));
    EXPECT_THAT(lines(), IsEmpty());
    EXPECT_THAT(dialogue(), IsEmpty());
}

TEST_F(CScriptLoadTest, AnEmptyScriptLoadsEmpty) {
    givenFile("world\\m1.scr", "");
    givenFile("world\\m1.txt", "hello, gabriela, Hi.\n");
    EXPECT_TRUE(script_.loadScript("m1.scr", true));
    EXPECT_THAT(dialogue(), IsEmpty());
}

TEST_F(CScriptLoadTest, AScriptThatWontOpenLoadsEmptyAfterItsDialogue) {
    givenUnopenableFile("world\\m1.scr");
    givenFile("world\\m1.txt", "hello, gabriela, Hi.\n");
    EXPECT_TRUE(script_.loadScript("m1.scr", true));
    EXPECT_THAT(lines(), IsEmpty());
    EXPECT_EQ(dialogue().size(), 1U);
}

TEST_F(CScriptLoadTest, LinesThatHoldSomethingKeepTheirLineInTheFile) {
    givenFile("world\\m1.scr", "  \r\nwait(1) // a second\r\n// none\r\n\r\n  :top\n");
    EXPECT_TRUE(script_.loadScript("m1.scr", true));
    EXPECT_THAT(lines(), ElementsAre(SScriptLine{.line_number = 2, .text = "wait(1)"},
                                     SScriptLine{.line_number = 5, .text = ":top"}));
}

TEST_F(CScriptLoadTest, ACarriageReturnInsideALineIsDropped) {
    givenFile("world\\m1.scr", "wa\rit(1)\n");
    EXPECT_TRUE(script_.loadScript("m1.scr", true));
    EXPECT_THAT(lines(), ElementsAre(SScriptLine{.line_number = 1, .text = "wait(1)"}));
}

TEST_F(CScriptLoadTest, TheLastLineNeedsNoNewline) {
    givenFile("world\\m1.scr", "{\nend");
    EXPECT_TRUE(script_.loadScript("m1.scr", true));
    EXPECT_THAT(lines(), ElementsAre(SScriptLine{.line_number = 1, .text = "{"},
                                     SScriptLine{.line_number = 2, .text = "end"}));
}

TEST_F(CScriptLoadTest, ANulMeansTheFileIsNotTextAndNothingIsKept) {
    givenFile("world\\m1.scr", std::string("wait(1)\nwa\0it(2)\n", 17));
    givenFile("world\\m1.txt", "hello, gabriela, Hi.\n");
    EXPECT_CALL(raw_input_, getNextKeypress(_)).WillOnce(Return('x'));
    EXPECT_FALSE(script_.loadScript("m1.scr", true));
    EXPECT_THAT(lines(), IsEmpty());
    EXPECT_THAT(dialogue(), IsEmpty());
}

TEST_F(CScriptLoadTest, LoadingAScriptReplacesTheOneBefore) {
    givenFile("world\\m1.scr", "first\n");
    givenFile("world\\m1.txt", "hello, gabriela, Hi.\n");
    givenFile("world\\m2.scr", "second\n");
    EXPECT_TRUE(script_.loadScript("m1.scr", true));
    EXPECT_TRUE(script_.loadScript("m2.scr", true));
    EXPECT_THAT(lines(), ElementsAre(SScriptLine{.line_number = 1, .text = "second"}));
    EXPECT_THAT(dialogue(), IsEmpty());
}

TEST_F(CScriptLoadTest, LoadingAMissingScriptForgetsTheOneBefore) {
    givenFile("world\\m1.scr", "first\n");
    EXPECT_TRUE(script_.loadScript("m1.scr", true));
    EXPECT_TRUE(script_.loadScript("none.scr", true));
    EXPECT_THAT(lines(), IsEmpty());
}

TEST_F(CScriptLoadTest, ClearForgetsTheLinesAndTheDialogue) {
    givenFile("world\\m1.scr", "wait(1)\n");
    givenFile("world\\m1.txt", "hello, gabriela, Hi.\n");
    EXPECT_TRUE(script_.loadScript("m1.scr", true));
    script_.clear();
    EXPECT_THAT(lines(), IsEmpty());
    EXPECT_THAT(dialogue(), IsEmpty());
}

// A script whose dialogue database is the given text.
class CScriptDialogueTest : public CScriptLoadTest {
protected:
    void load(const std::string &database) {
        givenFile("world\\m1.scr", "wait(1)\n");
        givenFile("world\\m1.txt", database);
        EXPECT_TRUE(script_.loadScript("m1.scr", true));
    }

    void expectFatal(const std::string &database, const std::string &message) {
        EXPECT_THAT([&] { load(database); }, ThrowsMessage<common::CFatalError>(StrEq(message)));
    }
};

TEST_F(CScriptDialogueTest, EachRecordIsTrimmed) {
    givenFile("sound\\hello.wav", "RIFF");
    load("  hello , Gabriela\t,  Hi there, stranger.  \r\n");
    EXPECT_THAT(dialogue(), ElementsAre(SDialogEntry{.name = "hello",
                                                     .sound_file = "hello.wav",
                                                     .speaker = "Gabriela",
                                                     .text = "Hi there, stranger."}));
}

TEST_F(CScriptDialogueTest, TheNameIsTheStemOfWhatTheRecordGives) {
    load("lines\\hello.mp3, a, b\n");
    EXPECT_EQ(dialogue().at(0).name, "hello");
}

TEST_F(CScriptDialogueTest, TheSoundIsAWavThenAnMp3ThenTheNameItself) {
    givenFile("sound\\both.wav", "RIFF");
    givenFile("sound\\both.mp3", "ID3");
    givenFile("sound\\mp3.mp3", "ID3");
    givenFile("sound\\empty.wav", "");
    load("both, a, b\nmp3, a, b\nempty, a, b\nnone, a, b\n");
    const std::vector<SDialogEntry> entries = dialogue();
    ASSERT_EQ(entries.size(), 4U);
    EXPECT_EQ(entries[0].sound_file, "both.wav");
    EXPECT_EQ(entries[1].sound_file, "mp3.mp3");
    EXPECT_EQ(entries[2].sound_file, "empty");
    EXPECT_EQ(entries[3].sound_file, "none");
}

TEST_F(CScriptDialogueTest, TheStrangerSpeaksAsTheDollarSign) {
    load("a, STRANGER, b\nc, strangers, d\n");
    const std::vector<SDialogEntry> entries = dialogue();
    ASSERT_EQ(entries.size(), 2U);
    EXPECT_EQ(entries[0].speaker, "$");
    EXPECT_EQ(entries[1].speaker, "strangers");
}

TEST_F(CScriptDialogueTest, ADuplicateNameWarnsAndIsKept) {
    EXPECT_CALL(raw_input_, getNextKeypress(_)).WillOnce(Return('x'));
    load("hello, a, first\nlines\\HELLO.wav, b, second\n");
    const std::vector<SDialogEntry> entries = dialogue();
    ASSERT_EQ(entries.size(), 2U);
    EXPECT_EQ(entries[1].text, "second");
}

TEST_F(CScriptDialogueTest, AnEmptyOrBlankDatabaseHoldsNothing) {
    load("");
    EXPECT_THAT(dialogue(), IsEmpty());
    load(" \r\n\t\n");
    EXPECT_THAT(dialogue(), IsEmpty());
}

TEST_F(CScriptDialogueTest, ARecordMissingAFieldQuitsNamingIt) {
    expectFatal("a, b, c\nd, e\n", "SCScipt::dbLoad - error parsing m1.txt record 1");
}

TEST_F(CScriptDialogueTest, AnEmptyFieldQuits) {
    expectFatal(", b, c\n", "SCScipt::dbLoad - error parsing m1.txt record 0");
}

TEST_F(CScriptDialogueTest, ADatabaseThatWontOpenQuits) {
    givenFile("world\\m1.scr", "wait(1)\n");
    givenUnopenableFile("world\\m1.txt");
    EXPECT_THAT([this] { (void)script_.loadScript("m1.scr", true); },
                ThrowsMessage<common::CFatalError>(StrEq("Can't open world\\m1.txt")));
}

} // namespace
} // namespace nocturne::core
