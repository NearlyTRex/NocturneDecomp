#include "engine/keys/inputcodetype.h"
#include "engine/keys/keyname.h"

#include <gtest/gtest.h>

#include <string_view>

namespace nocturne::engine {
namespace {

TEST(GetKeyName, KeysAreNamedWhateverTheLayout) {
    EXPECT_EQ(getKeyName(EInputCodeType::DIK_ESCAPE), "Esc");
    EXPECT_EQ(getKeyName(EInputCodeType::DIK_W), "W");
    EXPECT_EQ(getKeyName(EInputCodeType::DIK_SPACE), "Space");
    EXPECT_EQ(getKeyName(EInputCodeType::DIK_NUMPADCENTER), "NumPadEnter");
}

TEST(GetKeyName, ExtendedKeysHaveTheirOwnNames) {
    EXPECT_EQ(getKeyName(EInputCodeType::DIK_LEFT), "Left");
    EXPECT_EQ(getKeyName(EInputCodeType::DIK_NUMPAD4), "NumPad4");
    EXPECT_EQ(getKeyName(EInputCodeType::DIK_DELETE), "Del");
}

TEST(GetKeyName, TheFirstTwoMouseButtonsAreNamed) {
    EXPECT_EQ(getKeyName(EInputCodeType::DIM_LBUTTON), "Left Mouse Button");
    EXPECT_EQ(getKeyName(EInputCodeType::DIM_RBUTTON), "Right Mouse Button");
}

TEST(GetKeyName, AnythingElseIsAnInvalidKey) {
    EXPECT_EQ(getKeyName(EInputCodeType::DIK_BACKSLASH), "(invalid key)");
    EXPECT_EQ(getKeyName(EInputCodeType::DIM_MBUTTON), "(invalid key)");
    EXPECT_EQ(getKeyName(EInputCodeType::INPUT_NONE), "(invalid key)");
}

} // namespace
} // namespace nocturne::engine
