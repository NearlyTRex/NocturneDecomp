#include "engine/light/light.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CLight, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CLight::setAmbientLightLevel), void (CLight::*)(int)>);
    static_assert(std::is_same_v<decltype(&CLight::setDirectionalLightVector),
                                 void (CLight::*)(int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CLight::calculateLighting), int (CLight::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CLight::calculateAndStoreVertexLight),
                                 void (CLight::*)(int, common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CLight::getLightDirection),
                                 const common::CVector3i &(CLight::*)() const>);
    static_assert(std::is_same_v<decltype(&CLight::setLightDirection),
                                 void (CLight::*)(const common::CVector3i &)>);
}

TEST(CLight, TheDirectionalLightSetsTheDirection) {
    CLight light;
    light.setDirectionalLightVector(1, -2, 3);
    EXPECT_EQ(light.getLightDirection(), (common::CVector3i{.x = 1, .y = -2, .z = 3}));
}

TEST(CLight, TheDirectionCanBePutBack) {
    CLight light;
    light.setLightDirection({.x = 4, .y = 5, .z = 6});
    EXPECT_EQ(light.getLightDirection(), (common::CVector3i{.x = 4, .y = 5, .z = 6}));
}

} // namespace
} // namespace nocturne::engine
