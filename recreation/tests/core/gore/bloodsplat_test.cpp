#include "core/gore/bloodsplat.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBloodSplat, IsConcrete) {
    static_assert(!std::is_abstract_v<CBloodSplat>);
}

TEST(CBloodSplat, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBloodSplat::initGroundSplat),
                                 void (CBloodSplat::*)(common::CVector3f *, int)>);
    static_assert(
        std::is_same_v<decltype(&CBloodSplat::initWallSplat),
                       void (CBloodSplat::*)(common::CVector3f *, common::CVector3f *, int)>);
    static_assert(
        std::is_same_v<decltype(&CBloodSplat::setupRenderState), void (CBloodSplat::*)()>);
    static_assert(std::is_same_v<decltype(&CBloodSplat::render), void (CBloodSplat::*)(int)>);
    static_assert(std::is_same_v<decltype(&CBloodSplat::processAge), void (CBloodSplat::*)()>);
    static_assert(std::is_same_v<decltype(&CBloodSplat::load), int (CBloodSplat::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CBloodSplat::save), int (CBloodSplat::*)(std::FILE *)>);
}

} // namespace
} // namespace nocturne::core
