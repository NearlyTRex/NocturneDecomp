#include "core/dlight/demonlight.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonLight, DerivesFromCDemonCamera) {
    static_assert(std::is_base_of_v<CDemonCamera, CDemonLight>);
}

TEST(CDemonLight, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDemonLight>);
}

TEST(CDemonLight, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonLight>);
}

TEST(CDemonLight, Constructors) {
    static_assert(std::is_constructible_v<CDemonLight, int, int>);
}

TEST(CDemonLight, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonLight::init), void (CDemonLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::allocMasterZBuffer), void (CDemonLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::freeMasterZBuffer), void (CDemonLight::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonLight::beginScene), void (CDemonLight::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonLight::endScene), void (CDemonLight::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::beginBackgroundScene), void (CDemonLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::endBackgroundScene), void (CDemonLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::restoreDirtyRegions), void (CDemonLight::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonLight::projectLightAndMarkVisibility),
                                 std::uint16_t *(CDemonLight::*)(common::CVector3i *, std::uint8_t,
                                                                 std::uint8_t)>);
    static_assert(std::is_same_v<decltype(&CDemonLight::renderShadowMapDebugView),
                                 void (CDemonLight::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonLight::clearCircularShadowMapEdges),
                                 void (CDemonLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::renderCoronaGeometry), void (CDemonLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::renderLightBloomQuad), void (CDemonLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::renderLightGlowSprites), void (CDemonLight::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonLight::allocateFilter), void (CDemonLight::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonLight::applyFilter),
                                 void (CDemonLight::*)(CDemonFilter *, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonLight::initializeVisibilityBuffer),
                                 void (CDemonLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::testShadowMapRegion), int (CDemonLight::*)(CRect *)>);
    static_assert(std::is_same_v<decltype(&CDemonLight::setVolumetricIntensity),
                                 void (CDemonLight::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDemonLight::drawShadowDepthBuffer),
                                 void (CDemonLight::*)(int, int, int)>);
}

} // namespace
} // namespace nocturne::core
