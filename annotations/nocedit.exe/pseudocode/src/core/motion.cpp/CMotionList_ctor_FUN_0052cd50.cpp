// Name: core_motion.cpp_CMotionList_ctor_FUN_0052cd50
// Address: 0052cd50
// Address Range: [[0052cd50, 0052cd64]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionList_ctor_FUN_0052cd50(CMotionList * this_ptr)
// Cross-references:
//   core_skeleton.cpp_CSkeleton_ctor_FUN_00599880 (00599880) at 0059988f [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionList_ctor_FUN_0052cd50(CMotionList *this_ptr)

{
  this_ptr->motion_count = 0;
  this_ptr->state_count = 0;
  return;
}


// Assembly code:
// 0052cd50: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_motion.cpp_CMotionList_ctor_FUN_0052cd50
//   XREF to: Stack[0x4] (READ)
// 0052cd54: MOV dword ptr [EAX + 0x964],0x0
// 0052cd5e: MOV dword ptr [EAX],0x0
// 0052cd64: RET
