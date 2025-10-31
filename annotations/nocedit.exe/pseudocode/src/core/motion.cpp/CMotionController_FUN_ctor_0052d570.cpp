// Name: core_motion.cpp_CMotionController_FUN_ctor_0052d570
// Address: 0052d570
// Address Range: [[0052d570, 0052d592]]
// Convention: __cdecl
// Signature: CMotionController * core_motion.cpp_CMotionController_FUN_ctor_0052d570(CMotionController * this_ptr)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0 (0059ddc0) at 0059ddc5 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_core_motion.cpp_CMotionController_free_FUN_0052d5a0_00661bc4 = 0052d5a0
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052dad0

#include "nocturne.h"

CMotionController * __cdecl
core_motion_cpp_CMotionController_FUN_ctor_0052d570(CMotionController *this_ptr)

{
  *(void ***)(this_ptr->field8_0x34 + 0x1c) =
       &PTR_core_motion_cpp_CMotionController_free_FUN_0052d5a0_00661bc4;
  this_ptr->currentMotionName[0] = '\0';
  this_ptr->motionListPtr = (CMotionList *)0x0;
  core_motion_cpp_CMotionController_FUN_0052dad0();
  return this_ptr;
}


// Assembly code:
// 0052d570: PUSH EBX
//   Label: core_motion.cpp_CMotionController_FUN_ctor_0052d570
// 0052d571: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0052d575: MOV dword ptr [EBX + 0x50],0x661bc4
//   XREF to: 00661bc4 (DATA)
// 0052d57c: MOV byte ptr [EBX + 0x30],0x0
// 0052d580: PUSH EBX
// 0052d581: MOV dword ptr [EBX],0x0
// 0052d587: CALL core_motion.cpp_CMotionController_FUN_0052dad0
//   XREF to: 0052dad0 (UNCONDITIONAL_CALL)
// 0052d58c: ADD ESP,0x4
// 0052d58f: MOV EAX,EBX
// 0052d591: POP EBX
// 0052d592: RET
