#pragma once

// Function prototypes for core/motion.cpp
// Generated from Ghidra function signatures

// Original: core_motion.cpp_CMotionList_ctor_FUN_004e0900
// Address: 004e0900
void __cdecl CMotionList::ctor(undefined4 *param_1);

// Original: core_motion.cpp_CMotionList_load_FUN_004e0920
// Address: 004e0920
void __cdecl CMotionList::load(int *param_1,undefined4 param_2);

// Original: core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
// Address: 004e1010
int __cdecl CMotionList::findMotionIndex(int param_1,undefined4 param_2,int param_3);

// Original: core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0
// Address: 004e10a0
int __cdecl CMotionList::findStateIndex(int *param_1,undefined4 param_2,int param_3);

// Original: core_motion.cpp_CMotionController_ctor_FUN_004e1120
// Address: 004e1120
undefined4 * __cdecl CMotionController::ctor(undefined4 *param_1);

// Original: core_motion.cpp_CMotionController_dtor_FUN_004e1150
// Address: 004e1150
int __cdecl CMotionController::dtor(int param_1,uint param_2);

// Original: core_motion.cpp_CMotionController_advance_FUN_004e11c0
// Address: 004e11c0
int __cdecl CMotionController::advance(int param_1,float *param_2);

// Original: core_motion.cpp_CMotionController_findAndStartTransition_FUN_004e1500
// Address: 004e1500
undefined4 __cdecl CMotionController::findAndStartTransition(int param_1);

// Original: core_motion.cpp_CMotionController_reverseTransition_FUN_004e1600
// Address: 004e1600
void __cdecl CMotionController::reverseTransition(int param_1);

// Original: core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
// Address: 004e1660
int __cdecl CMotionController::getCurrentMotion(int *param_1);

// Original: core_motion.cpp_CMotionController_reset_FUN_004e1680
// Address: 004e1680
void __cdecl CMotionController::reset(int param_1);

// Original: core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
// Address: 004e16b0
void __cdecl CMotionController::setDesiredState(undefined4 *param_1,int param_2,int param_3);

// Original: core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740
// Address: 004e1740
void __cdecl CMotionController::setDesiredStateByName(undefined4 *param_1,undefined4 param_2,undefined4 param_3);

// Original: core_motion.cpp_CMotionController_startTransition_FUN_004e1770
// Address: 004e1770
void __cdecl CMotionController::startTransition(int param_1,int param_2);

// Original: core_motion.cpp_CMotionController_setMotionList_FUN_004e1860
// Address: 004e1860
void __cdecl CMotionController::setMotionList(undefined4 *param_1,undefined4 param_2);

// Original: core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
// Address: 004e1890
undefined4 __cdecl CMotionController::getMotionList(undefined4 *param_1);

// Original: core_motion.cpp_CMotionController_getCurrentStateName_FUN_004e18a0
// Address: 004e18a0
int __cdecl CMotionController::getCurrentStateName(int *param_1);

// Original: core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
// Address: 004e18d0
float CMotionController::getStateBlendWeight(int *param_1,int param_2);

// Original: core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960
// Address: 004e1960
void __cdecl CMotionController::jumpToMotionByName(undefined4 *param_1,undefined4 param_2,undefined4 param_3);

// Original: core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990
// Address: 004e1990
void __cdecl CMotionController::jumpToMotion(int param_1,undefined4 param_2,float param_3);

// Original: core_motion.cpp_CMotionController_clearTweenState_FUN_004e19f0
// Address: 004e19f0
void __cdecl CMotionController::clearTweenState(int param_1);

// Original: core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004e1a20
// Address: 004e1a20
undefined4 __cdecl CMotionController::advanceFrameAndCheckSignals(int *param_1,int *param_2,float *param_3,float param_4,undefined4 param_5);

// Original: core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_004e1bd0
// Address: 004e1bd0
undefined4 __cdecl CMotionController::advanceFrameToExitPoint(int *param_1,int param_2,float param_3,float *param_4,undefined4 *param_5);

// Original: core_motion.cpp_CMotionController_advanceTween_FUN_004e1d80
// Address: 004e1d80
void __cdecl CMotionController::advanceTween(int *param_1,int param_2,float param_3,float *param_4);

// Original: core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
// Address: 004e1e60
float __cdecl CMotionController::frameToMarkerPosition(int *param_1);

// Original: core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
// Address: 004e1f50
float CMotionController::markerPositionToFrame(int *param_1,int param_2,float param_3);

// Original: core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004e2070
// Address: 004e2070
int __cdecl CMotionController::getFramesForInterpolation(int *param_1,float param_2,float param_3,int *param_4,int *param_5,float *param_6);

// Original: core_motion.cpp_CMotionController_load_FUN_004e2180
// Address: 004e2180
void __cdecl CMotionController::load(int param_1,undefined4 param_2);

// Original: core_motion.cpp_CMotionController_save_FUN_004e2220
// Address: 004e2220
void __cdecl CMotionController::save(int *param_1,undefined4 param_2,undefined4 param_3);

// Original: core_motion.cpp_CMotionController_render_FUN_004e22b0
// Address: 004e22b0
void __cdecl CMotionController::render(int param_1,int param_2);
