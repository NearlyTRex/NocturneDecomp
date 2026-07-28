#pragma once

// Function prototypes for core/motion.cpp
// Generated from Ghidra function signatures

// Original: core_motion.cpp_FUN_004e08e0
// Address: 004e08e0
void FUN_004e08e0(_FILE *param_1);

// Original: core_motion.cpp_CMotionList_ctor_FUN_004e0900
// Address: 004e0900
CMotionList * __cdecl CMotionList::ctor(CMotionList *this_ptr);

// Original: core_motion.cpp_CMotionList_load_FUN_004e0920
// Address: 004e0920
void __cdecl CMotionList::load(CMotionList *this_ptr,_FILE *file_handle);

// Original: core_motion.cpp_CMotionList_save_FUN_004e0d20
// Address: 004e0d20
void CMotionList::save(int *param_1,undefined4 param_2);

// Original: core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
// Address: 004e1010
int __cdecl CMotionList::findMotionIndex(CMotionList *this_ptr,char *motion_name,int error_on_not_found);

// Original: core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0
// Address: 004e10a0
int __cdecl CMotionList::findStateIndex(CMotionList *this_ptr,char *state_name,int error_on_not_found);

// Original: core_motion.cpp_CMotionController_ctor_FUN_004e1120
// Address: 004e1120
CMotionController * __cdecl CMotionController::ctor(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_dtor_FUN_004e1150
// Address: 004e1150
CMotionController * __cdecl CMotionController::dtor(CMotionController *this_ptr,uint flags);

// Original: core_motion.cpp_CMotionController_advance_FUN_004e11c0
// Address: 004e11c0
int __cdecl CMotionController::advance(CMotionController *this_ptr,float *delta_time);

// Original: core_motion.cpp_CMotionController_findAndStartTransition_FUN_004e1500
// Address: 004e1500
int __cdecl CMotionController::findAndStartTransition(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_reverseTransition_FUN_004e1600
// Address: 004e1600
void __cdecl CMotionController::reverseTransition(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
// Address: 004e1660
SMotion * __cdecl CMotionController::getCurrentMotion(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_reset_FUN_004e1680
// Address: 004e1680
void __cdecl CMotionController::reset(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
// Address: 004e16b0
void __cdecl CMotionController::setDesiredState(CMotionController *this_ptr,int desired_state_index,int force_immediate);

// Original: core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740
// Address: 004e1740
void __cdecl CMotionController::setDesiredStateByName(CMotionController *this_ptr,char *state_name,int force_immediate);

// Original: core_motion.cpp_CMotionController_startTransition_FUN_004e1770
// Address: 004e1770
void __cdecl CMotionController::startTransition(CMotionController *this_ptr,SMotionTransition *transition);

// Original: core_motion.cpp_CMotionController_findPatchToFrame_FUN_004e1830
// Address: 004e1830
undefined4 CMotionController::findPatchToFrame(void);

// Original: core_motion.cpp_CMotionController_setMotionList_FUN_004e1860
// Address: 004e1860
void __cdecl CMotionController::setMotionList(CMotionController *this_ptr,CMotionList *motion_list);

// Original: core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
// Address: 004e1890
CMotionList * __cdecl CMotionController::getMotionList(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_getCurrentStateName_FUN_004e18a0
// Address: 004e18a0
char * __cdecl CMotionController::getCurrentStateName(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
// Address: 004e18d0
float CMotionController::getStateBlendWeight(int *param_1,int param_2);

// Original: core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960
// Address: 004e1960
void __cdecl CMotionController::jumpToMotionByName(CMotionController *this_ptr,char *motion_name,float frame_number);

// Original: core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990
// Address: 004e1990
void __cdecl CMotionController::jumpToMotion(CMotionController *this_ptr,int target_motion_index,float target_frame_number);

// Original: core_motion.cpp_CMotionController_clearTweenState_FUN_004e19f0
// Address: 004e19f0
void __cdecl CMotionController::clearTweenState(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004e1a20
// Address: 004e1a20
int __cdecl CMotionController::advanceFrameAndCheckSignals(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor);

// Original: core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_004e1bd0
// Address: 004e1bd0
int __cdecl CMotionController::advanceFrameToExitPoint(CMotionController *this_ptr,int motion_index,float current_frame,float *inout_delta_time,SMotionTransition *out_transition);

// Original: core_motion.cpp_CMotionController_advanceTween_FUN_004e1d80
// Address: 004e1d80
void __cdecl CMotionController::advanceTween(CMotionController *this_ptr,int motion_index,float current_frame,float *remaining_time);

// Original: core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
// Address: 004e1e60
float __cdecl CMotionController::frameToMarkerPosition(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
// Address: 004e1f50
float CMotionController::markerPositionToFrame(int *param_1,int param_2,float param_3);

// Original: core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004e2070
// Address: 004e2070
void __cdecl CMotionController::getFramesForInterpolation(CMotionController *this_ptr,int motion_index,float frame_number,int *out_frame1,int *out_frame2,float *out_blend_weight);

// Original: core_motion.cpp_CMotionController_accumulateScaledRootMotion_FUN_004e2120
// Address: 004e2120
void CMotionController::accumulateScaledRootMotion(void);

// Original: core_motion.cpp_CMotionController_load_FUN_004e2180
// Address: 004e2180
void __cdecl CMotionController::load(CMotionController *this_ptr,_FILE *file_handle);

// Original: core_motion.cpp_CMotionController_save_FUN_004e2220
// Address: 004e2220
void __cdecl CMotionController::save(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix);

// Original: core_motion.cpp_CMotionController_render_FUN_004e22b0
// Address: 004e22b0
void __cdecl CMotionController::render(CMotionController *this_ptr,CDemonActor *actor);
