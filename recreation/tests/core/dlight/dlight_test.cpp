#include "common/error/fatalerror.h"
#include "core/dcamera/cameratables.h"
#include "core/dlight/dlight.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

// The pool holds 0x300060 depths and a 256 by 256 map takes 8 over its 65536: 47 maps fit, and the
// 48th is refused.
TEST(CoreDlightRestoreMemory, TheBudgetHoldsFortySevenMapsOf256By256) {
    SCameraTables tables;
    constexpr std::size_t kMap = std::size_t{256} * 256;
    for (int map = 0; map < 47; ++map) {
        getRestoreMemory(tables, kMap);
    }
    EXPECT_EQ(tables.restore_memory_used, 47 * (kMap + 8));
    EXPECT_THAT(
        [&tables] { getRestoreMemory(tables, kMap); },
        ThrowsMessage<common::CFatalError>(StrEq("getRestoreMemory - Need more static memory")));
    resetRestoreMemoryAllocator(tables);
    EXPECT_EQ(tables.restore_memory_used, 0U);
    getRestoreMemory(tables, kMap);
}

TEST(CoreDlightRestoreMemory, MoreThanTheWholePoolIsFatal) {
    SCameraTables tables;
    EXPECT_THAT(
        [&tables] { getRestoreMemory(tables, 0x300061); },
        ThrowsMessage<common::CFatalError>(StrEq("getRestoreMemory - Need more static memory")));
}

TEST(CoreDlightFunctions, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&resetRestoreMemoryAllocator), void (*)(SCameraTables &)>);
    static_assert(
        std::is_same_v<decltype(&getRestoreMemory), void (*)(SCameraTables &, std::size_t)>);
    static_assert(std::is_same_v<decltype(&captureLightTextures),
                                 void (*)(engine::CDemonRenderer &, SLightGlowTextures &)>);
    static_assert(std::is_same_v<decltype(&renderConeLightGeometry),
                                 void (*)(common::CVector3f *, common::CVector3f *, float, float)>);
}

} // namespace
} // namespace nocturne::core
