#include "core/werewolf/werewolf_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreWerewolfFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncWerewolf), CWerewolf *(*)()>);
}

} // namespace
} // namespace nocturne::core
