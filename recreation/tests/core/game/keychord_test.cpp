#include "core/game/keychord.h"
#include "engine/keys/inputcodetype.h"
#include "tests/mocks/core/keychords.h"

#include <gtest/gtest.h>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;

// The same key with every modifier the other has and more; a chord doesn't outrank itself.
TEST(KeyChord, AChordOutranksOneWithFewerOfItsModifiers) {
    const SKeyChord shift_c{.code = EInputCodeType::DIK_C, .shift = true};
    const SKeyChord ctrl_shift_c{.code = EInputCodeType::DIK_C, .control = true, .shift = true};
    const SKeyChord ctrl_c{.code = EInputCodeType::DIK_C, .control = true};
    EXPECT_TRUE(outranks(ctrl_shift_c, shift_c));
    EXPECT_FALSE(outranks(shift_c, ctrl_shift_c));
    EXPECT_FALSE(outranks(ctrl_c, shift_c));
    EXPECT_FALSE(outranks(shift_c, shift_c));
    EXPECT_FALSE(
        outranks({.code = EInputCodeType::DIK_V, .control = true, .shift = true}, shift_c));
}

} // namespace
} // namespace nocturne::core
