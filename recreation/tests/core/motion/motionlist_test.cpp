#include "core/motion/motionlist.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMotionList, IsConcrete) {
    static_assert(!std::is_abstract_v<CMotionList>);
}

TEST(CMotionList, Constructors) {
    static_assert(std::is_constructible_v<CMotionList>);
}

TEST(CMotionList, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMotionList::load), void (CMotionList::*)(std::FILE *)>);
    static_assert(
        std::is_same_v<decltype(&CMotionList::findMotionIndex), int (CMotionList::*)(char *, int)>);
    static_assert(
        std::is_same_v<decltype(&CMotionList::findStateIndex), int (CMotionList::*)(char *, int)>);
}

} // namespace
} // namespace nocturne::core
