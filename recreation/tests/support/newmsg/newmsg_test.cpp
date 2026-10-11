#include "support/newmsg/newmsg.h"

#include <gtest/gtest.h>

#include <string>
#include <vector>

namespace nocturne::support {
namespace {

CNewMsg table() {
    return CNewMsg({{.key = "LOAD", .text = "Charger"},
                    {.key = "QUIT", .text = "Quitter"},
                    {.key = "SAVE", .text = "Sauver"},
                    {.key = "Zoom", .text = "Agrandir"},
                    {.key = "back", .text = "Retour"}});
}

TEST(CNewMsg, WithNoTableEveryKeyIsItsOwnText) {
    const CNewMsg messages;
    EXPECT_EQ(messages.getLocalizedString("SAVE"), "SAVE");
}

TEST(CNewMsg, FindsEveryKeyInTheTable) {
    const CNewMsg messages = table();
    EXPECT_EQ(messages.getLocalizedString("LOAD"), "Charger");
    EXPECT_EQ(messages.getLocalizedString("QUIT"), "Quitter");
    EXPECT_EQ(messages.getLocalizedString("SAVE"), "Sauver");
    EXPECT_EQ(messages.getLocalizedString("Zoom"), "Agrandir");
    EXPECT_EQ(messages.getLocalizedString("back"), "Retour");
}

TEST(CNewMsg, AKeyNotInTheTableIsItsOwnText) {
    const CNewMsg messages = table();
    EXPECT_EQ(messages.getLocalizedString("AAA"), "AAA");
    EXPECT_EQ(messages.getLocalizedString("PAUSE"), "PAUSE");
    EXPECT_EQ(messages.getLocalizedString("zzz"), "zzz");
}

// strcmp order: upper case sorts before lower case, so "save" isn't "SAVE".
TEST(CNewMsg, KeysAreCaseSensitive) {
    const CNewMsg messages = table();
    EXPECT_EQ(messages.getLocalizedString("save"), "save");
}

TEST(CNewMsg, ASingleEntryTableFindsItsKey) {
    const CNewMsg messages({{.key = "OK", .text = "D'accord"}});
    EXPECT_EQ(messages.getLocalizedString("OK"), "D'accord");
    EXPECT_EQ(messages.getLocalizedString("NO"), "NO");
}

} // namespace
} // namespace nocturne::support
