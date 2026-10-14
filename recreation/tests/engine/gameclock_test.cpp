#include "engine/gameclock.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(IGameClock, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IGameClock>);
    static_assert(std::has_virtual_destructor_v<IGameClock>);
}

TEST(IGameClock, PublicInterface) {
    static_assert(std::is_same_v<decltype(&IGameClock::getTime), int (IGameClock::*)()>);
    static_assert(IGameClock::kTicksPerSecond == 65536 * 18);
}

} // namespace
} // namespace nocturne::engine
