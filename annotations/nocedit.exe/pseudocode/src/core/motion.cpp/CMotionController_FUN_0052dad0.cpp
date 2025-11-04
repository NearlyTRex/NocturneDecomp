// Name: core_motion.cpp_CMotionController_FUN_0052dad0
// Address: 0052dad0
// Address Range: [[0052dad0, 0052daf9]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_FUN_0052dad0(CMotionController * this_ptr)
// Cross-references:
//   core_motion.cpp_CMotionController_ctor_FUN_0052d570 (0052d570) at 0052d587 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00596ae9 [UNCONDITIONAL_CALL]
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052de40

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_FUN_0052dad0(CMotionController *this_ptr)

{
  this_ptr->current_motion_index = 0;
  this_ptr->current_frame_number = 0.0;
  this_ptr->in_transition = 0;
  this_ptr->state_index = -1;
  core_motion_cpp_CMotionController_FUN_0052de40(this_ptr);
  return;
}


// Assembly code:
// 0052dad0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_motion.cpp_CMotionController_FUN_0052dad0
//   XREF to: Stack[0x4] (READ)
// 0052dad4: MOV dword ptr [EAX + 0x4],0x0
// 0052dadb: MOV dword ptr [EAX + 0x8],0x0
// 0052dae2: MOV dword ptr [EAX + 0x2c],0x0
// 0052dae9: PUSH EAX
// 0052daea: MOV dword ptr [EAX + 0x28],0xffffffff
// 0052daf1: CALL core_motion.cpp_CMotionController_FUN_0052de40
//   XREF to: 0052de40 (UNCONDITIONAL_CALL)
// 0052daf6: ADD ESP,0x4
// 0052daf9: RET
