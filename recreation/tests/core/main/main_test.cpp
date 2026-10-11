#include "common/error/fatalerror.h"
#include "core/main/main.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreMainFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&showDeveloperToolsMenu), void (*)()>);
}

TEST(CoreMainFunctions, DisplayErrorAndQuitIsTheCommonOne) {
    EXPECT_THAT([] { displayErrorAndQuit("Out of memory"); },
                ::testing::ThrowsMessage<common::CFatalError>(::testing::StrEq("Out of memory")));
}

} // namespace
} // namespace nocturne::core
