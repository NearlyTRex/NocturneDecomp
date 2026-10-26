#include "common/error/fatalerror.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <format>
#include <string>

namespace nocturne::support {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr std::string_view kHeader = "; version\r\n"
                                     "0\r\n"
                                     "; use OS fonts\r\n"
                                     "1\r\n"
                                     "; font\r\n"
                                     "\"Arial\"\r\n";

class CNewMsgTest : public engine::CPodFixture {
protected:
    void givenMessages(std::string_view body) {
        givenFile("msglist.txt", std::string(kHeader) + std::string(body));
    }

    CNewMsg messages_{dosio_};
};

TEST_F(CNewMsgTest, WithNoTableEveryKeyIsItsOwnText) {
    EXPECT_EQ(messages_.getLocalizedString("SAVE"), "SAVE");
    EXPECT_FALSE(messages_.getUseOSFonts());
}

TEST_F(CNewMsgTest, AMissingOrEmptyFileLoadsNothing) {
    messages_.readMessageFile("msglist.txt");
    givenFile("empty.txt", "");
    messages_.readMessageFile("empty.txt");
    EXPECT_EQ(messages_.getLocalizedString("SAVE"), "SAVE");
}

TEST_F(CNewMsgTest, ReadsTheFontSettings) {
    givenMessages("");
    messages_.readMessageFile("msglist.txt");
    EXPECT_TRUE(messages_.getUseOSFonts());
    EXPECT_EQ(messages_.getOSFontName(), "Arial");
}

TEST_F(CNewMsgTest, WithoutAFontNameTheDefaultIsMsPGothic) {
    givenFile("msglist.txt", "; version\n0\n; use OS fonts\n0\n; font\n");
    messages_.readMessageFile("msglist.txt");
    EXPECT_FALSE(messages_.getUseOSFonts());
    EXPECT_EQ(messages_.getOSFontName(),
              "\x82\x6C\x82\x72\x20\x82\x6F\x83\x53\x83\x56\x83\x62\x83\x4E");
}

TEST_F(CNewMsgTest, AnyVersionButZeroIsFatal) {
    givenFile("msglist.txt", "; version\n1\n; use OS fonts\n0\n");
    EXPECT_THAT([this] { messages_.readMessageFile("msglist.txt"); },
                ThrowsMessage<common::CFatalError>(StrEq("Unknown message file version")));
}

TEST_F(CNewMsgTest, AMissingVersionCountsAsZero) {
    givenFile("msglist.txt", "; version\n; use OS fonts\n1\n; font\n\"Arial\"\n");
    messages_.readMessageFile("msglist.txt");
    EXPECT_EQ(messages_.getOSFontName(), "Arial");
}

TEST_F(CNewMsgTest, AMissingOsFontSwitchLeavesItAsItWas) {
    givenMessages("");
    messages_.readMessageFile("msglist.txt");
    givenFile("other.txt", "; version\n0\n; use OS fonts\n; font\n\"Courier\"\n");
    messages_.readMessageFile("other.txt");
    EXPECT_TRUE(messages_.getUseOSFonts());
    EXPECT_EQ(messages_.getOSFontName(), "Courier");
}

TEST_F(CNewMsgTest, FindsEveryKeyInTheTable) {
    givenMessages("\"SAVE\", \"Sauver\"\r\n"
                  "\"back\",\"Retour\"\r\n"
                  "\"LOAD\",\t\"Charger\"\r\n"
                  "\"Zoom\", \"Agrandir\"\r\n"
                  "\"QUIT\", \"Quitter\"\r\n");
    messages_.readMessageFile("msglist.txt");
    EXPECT_EQ(messages_.getLocalizedString("LOAD"), "Charger");
    EXPECT_EQ(messages_.getLocalizedString("QUIT"), "Quitter");
    EXPECT_EQ(messages_.getLocalizedString("SAVE"), "Sauver");
    EXPECT_EQ(messages_.getLocalizedString("Zoom"), "Agrandir");
    EXPECT_EQ(messages_.getLocalizedString("back"), "Retour");
}

TEST_F(CNewMsgTest, AKeyNotInTheTableIsItsOwnText) {
    givenMessages("\"LOAD\", \"Charger\"\n\"SAVE\", \"Sauver\"\n");
    messages_.readMessageFile("msglist.txt");
    EXPECT_EQ(messages_.getLocalizedString("AAA"), "AAA");
    EXPECT_EQ(messages_.getLocalizedString("PAUSE"), "PAUSE");
    EXPECT_EQ(messages_.getLocalizedString("zzz"), "zzz");
}

// The original's sort moves the second B ahead of the first as A comes to the front, and the
// search lands on it.
TEST_F(CNewMsgTest, AKeyListedTwiceGivesTheTextTheOriginalsSortLeavesWhereTheSearchLands) {
    givenMessages("\"B\", \"first\"\n\"B\", \"second\"\n\"A\", \"a\"\n");
    messages_.readMessageFile("msglist.txt");
    EXPECT_EQ(messages_.getLocalizedString("B"), "second");
    EXPECT_EQ(messages_.getLocalizedString("A"), "a");
}

// strcmp order: upper case sorts before lower case, so "save" isn't "SAVE".
TEST_F(CNewMsgTest, KeysAreCaseSensitive) {
    givenMessages("\"SAVE\", \"Sauver\"\n");
    messages_.readMessageFile("msglist.txt");
    EXPECT_EQ(messages_.getLocalizedString("save"), "save");
}

TEST_F(CNewMsgTest, KeysAndTextsAreNotLimitedInLength) {
    const std::string key(200, 'k');
    const std::string text(400, 't');
    givenMessages(std::format("\"{}\", \"{}\"\n", key, text));
    messages_.readMessageFile("msglist.txt");
    EXPECT_EQ(messages_.getLocalizedString(key), text);
}

TEST_F(CNewMsgTest, ATextWithoutAClosingQuoteRunsToTheEnd) {
    givenMessages(R"("OK", "D'accord)");
    messages_.readMessageFile("msglist.txt");
    EXPECT_EQ(messages_.getLocalizedString("OK"), "D'accord");
}

TEST_F(CNewMsgTest, AMalformedEntryIsFatal) {
    for (const std::string_view entry : {"OK, \"D'accord\"\n", "\"\", \"D'accord\"\n",
                                         "\"OK\" \"D'accord\"\n", "\"OK\", \n", "\"OK\", \"\"\n"}) {
        CNewMsg messages(dosio_);
        givenMessages(entry);
        EXPECT_THAT([&] { messages.readMessageFile("msglist.txt"); },
                    ThrowsMessage<common::CFatalError>(StrEq("Error reading msglist.txt")))
            << entry;
    }
}

TEST_F(CNewMsgTest, MoreThanFiveHundredMessagesIsFatal) {
    std::string body;
    for (std::size_t i = 0; i <= CNewMsg::kMaxMessages; ++i) {
        body += std::format("\"{}\", \"x\"\n", i);
    }
    givenMessages(body);
    EXPECT_THAT([this] { messages_.readMessageFile("msglist.txt"); },
                ThrowsMessage<common::CFatalError>(StrEq("Too many messages in msglist.txt")));
}

TEST_F(CNewMsgTest, ExactlyFiveHundredMessagesLoad) {
    std::string body;
    for (std::size_t i = 0; i < CNewMsg::kMaxMessages; ++i) {
        body += std::format("\"{}\", \"x{}\"\n", i, i);
    }
    givenMessages(body);
    messages_.readMessageFile("msglist.txt");
    EXPECT_EQ(messages_.getLocalizedString("499"), "x499");
}

} // namespace
} // namespace nocturne::support
