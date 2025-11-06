// Name: core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40
// Address: 0052de40
// Address Range: [[0052de40, 0052de52]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40(CMotionController * this_ptr)
// Cross-references:
//   core_motion.cpp_CMotionController_advance_FUN_0052d610 (0052d610) at 0052d77a [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950 (0052d950) at 0052d9b5 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0 (0052dde0) at 0052de0d [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_reset_FUN_0052dad0 (0052dad0) at 0052daf1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_motion_cpp_CMotionController_clearTweenState_FUN_0052de40(CMotionController *this_ptr)

{
  this_ptr->tween_progress = -1.0;
  this_ptr->tween_type = 0;
  return;
}


// Assembly code:
// 0052de40: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40
//   XREF to: Stack[0x4] (READ)
// 0052de44: MOV dword ptr [EAX + 0x14],0xbf800000
// 0052de4b: MOV dword ptr [EAX + 0xc],0x0
// 0052de52: RET
