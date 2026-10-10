#include "core/waypoint/waypoint.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CWayPoint, DerivesFromCTrigger) {
    static_assert(std::is_base_of_v<CTrigger, CWayPoint>);
}

TEST(CWayPoint, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CWayPoint>);
}

TEST(CWayPoint, IsConcrete) {
    static_assert(!std::is_abstract_v<CWayPoint>);
}

TEST(CWayPoint, Constructors) {
    static_assert(std::is_constructible_v<CWayPoint>);
}

TEST(CWayPoint, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CWayPoint::setup), void (CWayPoint::*)()>);
    static_assert(std::is_same_v<decltype(&CWayPoint::renderOpaque), int (CWayPoint::*)()>);
    static_assert(
        std::is_same_v<decltype(&CWayPoint::getActorType), CDemonActorType *(CWayPoint::*)()>);
    static_assert(std::is_same_v<decltype(&CWayPoint::archive), void (CWayPoint::*)()>);
    static_assert(std::is_same_v<decltype(&CWayPoint::findNearestReachable),
                                 CWayPoint *(CWayPoint::*)(CWayPoint *)>);
}

} // namespace
} // namespace nocturne::core
