#include "core/game/controlbindings.h"

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
    bindings.setBindings(EGameAction::Fire, {EInputCodeType::DIK_SPACE, EInputCodeType::DIM_LBUTTON,
                                             EInputCodeType::PAD_RTRIGGER});
    EXPECT_THAT(bindings.getBindings(EGameAction::Fire),
                ElementsAre(EInputCodeType::DIK_SPACE, EInputCodeType::DIM_LBUTTON,
                            EInputCodeType::PAD_RTRIGGER));
    EXPECT_THAT(bindings.getBindings(EGameAction::Jump), IsEmpty());
}

TEST(CControlBindings, InputNoneIsNotABinding) {
    CControlBindings bindings;
    bindings.setBindings(EGameAction::Strafe,
                         {EInputCodeType::INPUT_NONE, EInputCodeType::DIK_LMENU});
    EXPECT_THAT(bindings.getBindings(EGameAction::Strafe), ElementsAre(EInputCodeType::DIK_LMENU));
}

TEST(CControlBindings, FormatsAsADecimalListPrimaryFirst) {
    CControlBindings bindings;
    bindings.setBindings(EGameAction::Fire, {EInputCodeType::DIK_SPACE});
    EXPECT_EQ(bindings.formatBindings(EGameAction::Fire), "57");
    bindings.setBindings(EGameAction::Fire,
                         {EInputCodeType::DIK_SPACE, EInputCodeType::DIM_LBUTTON});
    EXPECT_EQ(bindings.formatBindings(EGameAction::Fire), "57,512");
}

// What the original wrote for an unassigned key.
TEST(CControlBindings, AnUnboundActionFormatsAsInputNone) {
    const CControlBindings bindings;
    EXPECT_EQ(bindings.formatBindings(EGameAction::Strafe), "599");
}

TEST(CControlBindings, ParsesTheOriginalsSingleCode) {
    CControlBindings bindings;
    bindings.parseBindings(EGameAction::Fire, "57");
    EXPECT_THAT(bindings.getBindings(EGameAction::Fire), ElementsAre(EInputCodeType::DIK_SPACE));
}

TEST(CControlBindings, ParsesAList) {
    CControlBindings bindings;
    bindings.parseBindings(EGameAction::Fire, "57, 512,379");
    EXPECT_THAT(bindings.getBindings(EGameAction::Fire),
                ElementsAre(EInputCodeType::DIK_SPACE, EInputCodeType::DIM_LBUTTON,
                            EInputCodeType::PAD_RTRIGGER));
}

TEST(CControlBindings, InputNoneParsesAsUnbound) {
    CControlBindings bindings;
    bindings.setBindings(EGameAction::Strafe, {EInputCodeType::DIK_LMENU});
    bindings.parseBindings(EGameAction::Strafe, "599");
    EXPECT_THAT(bindings.getBindings(EGameAction::Strafe), IsEmpty());
}

TEST(CControlBindings, ABadPrimaryKeepsTheBindings) {
    CControlBindings bindings;
    bindings.setBindings(EGameAction::Fire, {EInputCodeType::DIK_SPACE});
    bindings.parseBindings(EGameAction::Fire, "space,512");
    EXPECT_THAT(bindings.getBindings(EGameAction::Fire), ElementsAre(EInputCodeType::DIK_SPACE));
}

TEST(CControlBindings, NumbersOutsideTheCodeSpaceAreNotCodes) {
    CControlBindings bindings;
    bindings.setBindings(EGameAction::Fire, {EInputCodeType::DIK_SPACE});
    bindings.parseBindings(EGameAction::Fire, "-1");
    bindings.parseBindings(EGameAction::Fire, "600");
    EXPECT_THAT(bindings.getBindings(EGameAction::Fire), ElementsAre(EInputCodeType::DIK_SPACE));
    bindings.parseBindings(EGameAction::Fire, "512,70000,-3,1");
    EXPECT_THAT(bindings.getBindings(EGameAction::Fire),
                ElementsAre(EInputCodeType::DIM_LBUTTON, EInputCodeType::DIK_ESCAPE));
}

TEST(CControlBindings, BadLaterEntriesAreSkipped) {
    CControlBindings bindings;
    bindings.parseBindings(EGameAction::Fire, "57,,x,512,");
    EXPECT_THAT(bindings.getBindings(EGameAction::Fire),
                ElementsAre(EInputCodeType::DIK_SPACE, EInputCodeType::DIM_LBUTTON));
}

} // namespace
} // namespace nocturne::core
