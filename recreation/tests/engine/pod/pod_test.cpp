#include "engine/pod/pod.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CPod, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CPod>);
}

TEST(CPod, IsConcrete) {
    static_assert(!std::is_abstract_v<CPod>);
}

TEST(CPod, Constructors) {
    static_assert(std::is_constructible_v<CPod>);
}

TEST(CPod, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CPod::load), void (CPod::*)()>);
    static_assert(std::is_same_v<decltype(&CPod::findFile), int (CPod::*)(SFoundFileInfo *)>);
    static_assert(std::is_same_v<decltype(&CPod::mount), void (CPod::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CPod::dismount), void (CPod::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CPod::remount), void (CPod::*)()>);
    static_assert(std::is_same_v<decltype(&CPod::init), void (CPod::*)()>);
    static_assert(std::is_same_v<decltype(&CPod::cleanup), void (CPod::*)()>);
    static_assert(
        std::is_same_v<decltype(&CPod::initSearch), void (CPod::*)(char *, CPodSearchContext *)>);
    static_assert(
        std::is_same_v<decltype(&CPod::getNextSearchResult), int (CPod::*)(CPodSearchContext *)>);
}

} // namespace
} // namespace nocturne::engine
