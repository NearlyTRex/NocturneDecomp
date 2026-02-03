#pragma once

// Function prototypes for core/motion.cpp
// Generated from Ghidra function signatures

// Original: core_motion.cpp_CMotionList_ctor_FUN_0052cd50
// Address: 0052cd50
void __cdecl CMotionList::ctor(CMotionList *this_ptr);

// Original: core_motion.cpp_CMotionList_load_FUN_0052cd70
// Address: 0052cd70
void __cdecl CMotionList::load(CMotionList *this_ptr,_FILE *file_handle);

// Original: core_motion.cpp_CMotionList_save_FUN_0052d170
// Address: 0052d170
void __cdecl CMotionList::save(CMotionList *this_ptr,_FILE *file_handle);

// Original: core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
// Address: 0052d460
int __cdecl CMotionList::findMotionIndex(CMotionList *this_ptr);

// Original: core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
// Address: 0052d4f0
int __cdecl CMotionList::findStateIndex(CMotionList *this_ptr);

// Original: core_motion.cpp_CMotionController_ctor_FUN_0052d570
// Address: 0052d570
CMotionController * __cdecl CMotionController::ctor(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_dtor_FUN_0052d5a0
// Address: 0052d5a0
CMotionController * __cdecl CMotionController::dtor(CMotionController *this_ptr,uint flags);

// Original: core_motion.cpp_CMotionController_advance_FUN_0052d610
// Address: 0052d610
int __cdecl CMotionController::advance(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950
// Address: 0052d950
int __cdecl CMotionController::findAndStartTransition(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_reverseTransition_FUN_0052da50
// Address: 0052da50
void __cdecl CMotionController::reverseTransition(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
// Address: 0052dab0
SMotion * __cdecl CMotionController::getCurrentMotion(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_reset_FUN_0052dad0
// Address: 0052dad0
void __cdecl CMotionController::reset(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
// Address: 0052db00
void __cdecl CMotionController::setDesiredState(CMotionController *this_ptr,int desired_state_index,int force_immediate);

// Original: core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90
// Address: 0052db90
void __cdecl CMotionController::setDesiredStateByName(CMotionController *this_ptr,char *state_name,int force_immediate);

// Original: core_motion.cpp_CMotionController_startTransition_FUN_0052dbc0
// Address: 0052dbc0
void __cdecl CMotionController::startTransition(CMotionController *this_ptr,SMotionTransition *transition);

// Original: core_motion.cpp_CMotionController_findPatchToFrame_FUN_0052dc80
// Address: 0052dc80
int __cdecl CMotionController::findPatchToFrame(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_setMotionList_FUN_0052dcb0
// Address: 0052dcb0
void __cdecl CMotionController::setMotionList(CMotionController *this_ptr,CMotionList *motion_list);

// Original: core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
// Address: 0052dce0
CMotionList * __cdecl CMotionController::getMotionList(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
// Address: 0052dcf0
char * __cdecl CMotionController::getCurrentStateName(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
// Address: 0052dd20
float __cdecl CMotionController::getStateBlendWeight(CMotionController *this_ptr,int desired_state_index);

// Original: core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
// Address: 0052ddb0
void __cdecl CMotionController::jumpToMotionByName(CMotionController *this_ptr,char *motion_name,float frame_number);

// Original: core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0
// Address: 0052dde0
void __cdecl CMotionController::jumpToMotion(CMotionController *this_ptr,int target_motion_index,float target_frame_number);

// Original: core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40
// Address: 0052de40
void __cdecl CMotionController::clearTweenState(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_0052de70
// Address: 0052de70
int __cdecl CMotionController::advanceFrameAndCheckSignals(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number, float delta_time,float scale_factor);

// Original: core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_0052e020
// Address: 0052e020
int __cdecl CMotionController::advanceFrameToExitPoint(CMotionController *this_ptr,int motion_index,float current_frame,float *inout_delta_time, SMotionTransition *out_transition);

// Original: core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0
// Address: 0052e1d0
void __cdecl CMotionController::advanceTween(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
// Address: 0052e2b0
float __cdecl CMotionController::frameToMarkerPosition(CMotionController *this_ptr);

// Original: core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
// Address: 0052e3a0
float __cdecl CMotionController::markerPositionToFrame(CMotionController *this_ptr,int motion_index,float marker_position);

// Original: core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
// Address: 0052e4c0
void __cdecl CMotionController::getFramesForInterpolation(CMotionController *this_ptr,int motion_index,float frame_number,int *out_frame1, int *out_frame2,float *out_blend_weight);

// Original: core_motion.cpp_CMotionController_accumulateScaledRootMotion_FUN_0052e570
// Address: 0052e570
void __cdecl CMotionController::accumulateScaledRootMotion(CMotionController *this_ptr,float start_frame,float end_frame,float scale_factor);

// Original: core_motion.cpp_CMotionController_load_FUN_0052e5d0
// Address: 0052e5d0
void __cdecl CMotionController::load(CMotionController *this_ptr,_FILE *file_handle);

// Original: core_motion.cpp_CMotionController_save_FUN_0052e670
// Address: 0052e670
void __cdecl CMotionController::save(CMotionController *this_ptr,_FILE *file_handle);

// Original: core_motion.cpp_CMotionController_render_FUN_0052e700
// Address: 0052e700
void __cdecl CMotionController::render(CMotionController *this_ptr,CDemonActor *actor);
