#include "platform/clock.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(IClock, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IClock>);
    static_assert(std::has_virtual_destructor_v<IClock>);
}

TEST(IClock, PublicInterface) {
    static_assert(std::is_same_v<decltype(&IClock::getCounter), std::uint64_t (IClock::*)()>);
    static_assert(
        std::is_same_v<decltype(&IClock::getCounterFrequency), std::uint64_t (IClock::*)()>);
    static_assert(
        std::is_same_v<decltype(&IClock::sleep), void (IClock::*)(std::chrono::duration<double>)>);
}

} // namespace
} // namespace nocturne::platform
