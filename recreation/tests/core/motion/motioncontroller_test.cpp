#include "core/motion/motioncontroller.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMotionController, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CMotionController>);
}

TEST(CMotionController, IsConcrete) {
    static_assert(!std::is_abstract_v<CMotionController>);
}

TEST(CMotionController, Constructors) {
    static_assert(std::is_constructible_v<CMotionController>);
}

TEST(CMotionController, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMotionController::findPatchToFrame),
                                 int (CMotionController::*)()>);
    static_assert(std::is_same_v<decltype(&CMotionController::accumulateScaledRootMotion),
                                 void (CMotionController::*)(float, float, float)>);
    static_assert(
        std::is_same_v<decltype(&CMotionController::advance), int (CMotionController::*)(float *)>);
    static_assert(std::is_same_v<decltype(&CMotionController::getCurrentMotion),
                                 SMotion *(CMotionController::*)()>);
    static_assert(std::is_same_v<decltype(&CMotionController::setDesiredState),
                                 void (CMotionController::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CMotionController::setDesiredStateByName),
                                 void (CMotionController::*)(char *, int)>);
    static_assert(std::is_same_v<decltype(&CMotionController::setMotionList),
                                 void (CMotionController::*)(CMotionList *)>);
    static_assert(std::is_same_v<decltype(&CMotionController::getMotionList),
                                 CMotionList *(CMotionController::*)()>);
    static_assert(std::is_same_v<decltype(&CMotionController::getCurrentStateName),
                                 char *(CMotionController::*)()>);
    static_assert(std::is_same_v<decltype(&CMotionController::getStateBlendWeight),
                                 float (CMotionController::*)(int)>);
    static_assert(std::is_same_v<decltype(&CMotionController::jumpToMotionByName),
                                 void (CMotionController::*)(char *, float)>);
    static_assert(std::is_same_v<decltype(&CMotionController::jumpToMotion),
                                 void (CMotionController::*)(int, float)>);
    static_assert(std::is_same_v<decltype(&CMotionController::frameToMarkerPosition),
                                 float (CMotionController::*)()>);
    static_assert(std::is_same_v<decltype(&CMotionController::markerPositionToFrame),
                                 float (CMotionController::*)(int, float)>);
    static_assert(std::is_same_v<decltype(&CMotionController::getFramesForInterpolation),
                                 void (CMotionController::*)(int, float, int *, int *, float *)>);
    static_assert(std::is_same_v<decltype(&CMotionController::load),
                                 void (CMotionController::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CMotionController::save),
                                 void (CMotionController::*)(std::FILE *, char *)>);
    static_assert(std::is_same_v<decltype(&CMotionController::render),
                                 void (CMotionController::*)(CDemonActor *)>);
}

} // namespace
} // namespace nocturne::core
