#include "core/game/controlbindings.h"
#include "core/game/keychord.h"
#include "tests/mocks/core/keychords.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;
using ::testing::ElementsAre;
using ::testing::IsEmpty;

TEST(CControlBindings, StartsUnbound) {
    const CControlBindings bindings;
    EXPECT_THAT(bindings.getBindings(EGameAction::Fire), IsEmpty());
}

TEST(CControlBindings, AnActionTakesAnyNumberOfBindingsInOrder) {
    CControlBindings bindings;
    bindings.setBindings(EGameAction::Fire,
                         chords({EInputCodeType::DIK_SPACE, EInputCodeType::DIM_LBUTTON,
                                 EInputCodeType::PAD_RTRIGGER}));
    EXPECT_THAT(codesOf(bindings.getBindings(EGameAction::Fire)),
                ElementsAre(EInputCodeType::DIK_SPACE, EInputCodeType::DIM_LBUTTON,
                            EInputCodeType::PAD_RTRIGGER));
    EXPECT_THAT(bindings.getBindings(EGameAction::Jump), IsEmpty());
}

TEST(CControlBindings, InputNoneIsNotABinding) {
    CControlBindings bindings;
    bindings.setBindings(EGameAction::Strafe,
                         chords({EInputCodeType::INPUT_NONE, EInputCodeType::DIK_LMENU}));
    EXPECT_THAT(codesOf(bindings.getBindings(EGameAction::Strafe)),
                ElementsAre(EInputCodeType::DIK_LMENU));
}

TEST(CControlBindings, FormatsAsADecimalListPrimaryFirst) {
    CControlBindings bindings;
    bindings.setBindings(EGameAction::Fire, chords({EInputCodeType::DIK_SPACE}));
    EXPECT_EQ(bindings.formatBindings(EGameAction::Fire), "57");
    bindings.setBindings(EGameAction::Fire,
                         chords({EInputCodeType::DIK_SPACE, EInputCodeType::DIM_LBUTTON}));
    EXPECT_EQ(bindings.formatBindings(EGameAction::Fire), "57,512");
}

// Each modifier by its left key, before the code.
TEST(CControlBindings, AChordFormatsWithItsModifiersFirst) {
    CControlBindings bindings;
    bindings.setBindings(EGameAction::Map,
                         {{.code = EInputCodeType::DIK_F5},
                          {.code = EInputCodeType::DIK_M, .control = true},
                          {.code = EInputCodeType::DIK_A, .alt = true, .shift = true}});
    EXPECT_EQ(bindings.formatBindings(EGameAction::Map), "63,29+50,56+42+30");
}

// What the original wrote for an unassigned key.
TEST(CControlBindings, AnUnboundActionFormatsAsInputNone) {
    const CControlBindings bindings;
    EXPECT_EQ(bindings.formatBindings(EGameAction::Strafe), "599");
}

TEST(CControlBindings, ParsesTheOriginalsSingleCode) {
    CControlBindings bindings;
    bindings.parseBindings(EGameAction::Fire, "57");
    EXPECT_THAT(bindings.getBindings(EGameAction::Fire),
                ElementsAre(SKeyChord{.code = EInputCodeType::DIK_SPACE}));
}

TEST(CControlBindings, ParsesAList) {
    CControlBindings bindings;
    bindings.parseBindings(EGameAction::Fire, "57, 512,379");
    EXPECT_THAT(codesOf(bindings.getBindings(EGameAction::Fire)),
                ElementsAre(EInputCodeType::DIK_SPACE, EInputCodeType::DIM_LBUTTON,
                            EInputCodeType::PAD_RTRIGGER));
}

// Either key of a modifier names it; it is written back by its left key.
TEST(CControlBindings, ParsesChords) {
    CControlBindings bindings;
    bindings.parseBindings(EGameAction::Map, "29+50,285+56+54+30");
    EXPECT_THAT(
        bindings.getBindings(EGameAction::Map),
        ElementsAre(
            SKeyChord{.code = EInputCodeType::DIK_M, .control = true},
            SKeyChord{.code = EInputCodeType::DIK_A, .control = true, .alt = true, .shift = true}));
    EXPECT_EQ(bindings.formatBindings(EGameAction::Map), "29+50,29+56+42+30");
}

// A leading part that isn't a modifier, or a missing code, spoils the entry.
TEST(CControlBindings, AChordOfABadPartIsSkipped) {
    CControlBindings bindings;
    bindings.parseBindings(EGameAction::Map, "57,30+50,29+,x+50,29+600,29+50");
    EXPECT_THAT(bindings.getBindings(EGameAction::Map),
                ElementsAre(SKeyChord{.code = EInputCodeType::DIK_SPACE},
                            SKeyChord{.code = EInputCodeType::DIK_M, .control = true}));
}

TEST(CControlBindings, InputNoneParsesAsUnbound) {
    CControlBindings bindings;
    bindings.setBindings(EGameAction::Strafe, chords({EInputCodeType::DIK_LMENU}));
    bindings.parseBindings(EGameAction::Strafe, "599");
    EXPECT_THAT(bindings.getBindings(EGameAction::Strafe), IsEmpty());
}

TEST(CControlBindings, ABadPrimaryKeepsTheBindings) {
    CControlBindings bindings;
    bindings.setBindings(EGameAction::Fire, chords({EInputCodeType::DIK_SPACE}));
    bindings.parseBindings(EGameAction::Fire, "space,512");
    EXPECT_THAT(codesOf(bindings.getBindings(EGameAction::Fire)),
                ElementsAre(EInputCodeType::DIK_SPACE));
}

TEST(CControlBindings, NumbersOutsideTheCodeSpaceAreNotCodes) {
    CControlBindings bindings;
    bindings.setBindings(EGameAction::Fire, chords({EInputCodeType::DIK_SPACE}));
    bindings.parseBindings(EGameAction::Fire, "-1");
    bindings.parseBindings(EGameAction::Fire, "600");
    EXPECT_THAT(codesOf(bindings.getBindings(EGameAction::Fire)),
                ElementsAre(EInputCodeType::DIK_SPACE));
    bindings.parseBindings(EGameAction::Fire, "512,70000,-3,1");
    EXPECT_THAT(codesOf(bindings.getBindings(EGameAction::Fire)),
                ElementsAre(EInputCodeType::DIM_LBUTTON, EInputCodeType::DIK_ESCAPE));
}

TEST(CControlBindings, BadLaterEntriesAreSkipped) {
    CControlBindings bindings;
    bindings.parseBindings(EGameAction::Fire, "57,,x,512,");
    EXPECT_THAT(codesOf(bindings.getBindings(EGameAction::Fire)),
                ElementsAre(EInputCodeType::DIK_SPACE, EInputCodeType::DIM_LBUTTON));
}

} // namespace
} // namespace nocturne::core
