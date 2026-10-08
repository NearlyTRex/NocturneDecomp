#include "core/gore/bloodpool.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBloodPool, IsConcrete) {
    static_assert(!std::is_abstract_v<CBloodPool>);
}

TEST(CBloodPool, Constructors) {
    static_assert(std::is_constructible_v<CBloodPool>);
}

TEST(CBloodPool, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBloodPool::setupRenderState), int (CBloodPool::*)()>);
    static_assert(std::is_same_v<decltype(&CBloodPool::render), void (CBloodPool::*)(int)>);
    static_assert(std::is_same_v<decltype(&CBloodPool::processAge), void (CBloodPool::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBloodPool::init), void (CBloodPool::*)(CVector3f *, int)>);
    static_assert(std::is_same_v<decltype(&CBloodPool::load), int (CBloodPool::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CBloodPool::save), int (CBloodPool::*)(std::FILE *)>);
}

} // namespace
} // namespace nocturne::core
