#include "core/main/main.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreMainFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&displayErrorAndQuit), void (*)(char *, ...)>);
    static_assert(std::is_same_v<decltype(&showDeveloperToolsMenu), void (*)()>);
}

} // namespace
} // namespace nocturne::core
