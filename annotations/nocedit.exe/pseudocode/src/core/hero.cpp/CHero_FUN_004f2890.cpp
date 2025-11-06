// Name: core_hero.cpp_CHero_FUN_004f2890
// Address: 004f2890
// Address Range: [[004f2890, 004f289f] [004f28a6, 004f28cd]]
// Convention: __cdecl
// Signature: int core_hero.cpp_CHero_FUN_004f2890(CHero * this_ptr)
// Globals:
//   TerminatedCString s_GETGRABBED_0062eb75
// Function calls:
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f2890(CHero *this_ptr)

{
  CMotionList *this_ptr_00;
  int iVar1;
  int in_stack_0000000c;
  
  if (in_stack_0000000c == 0) {
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&(this_ptr->base_character).model.motion_controller);
    iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00);
    if (iVar1 < 0) {
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 004f2890: MOV EDX,dword ptr [ESP + 0xc]
//   Label: core_hero.cpp_CHero_FUN_004f2890
//   XREF to: Stack[0xc] (READ)
// 004f2894: TEST EDX,EDX
// 004f2896: JZ 0x004f28a6
//   XREF to: 004f28a6 (CONDITIONAL_JUMP)
// 004f2898: LEA EAX,[EAX]
// 004f289e: MOV EDX,EDX
// 004f28a6: PUSH EDX
//   Label: LAB_004f28a6
// 004f28a7: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f28ab: PUSH 0x62eb75
//   XREF to: 0062eb75 (DATA)
// 004f28b0: ADD EAX,0x158
// 004f28b5: PUSH EAX
// 004f28b6: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 004f28bb: ADD ESP,0x4
// 004f28be: PUSH EAX
// 004f28bf: CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)
// 004f28c4: ADD ESP,0xc
// 004f28c7: TEST EAX,EAX
// 004f28c9: JGE 0x004f28a0
//   XREF to: 004f28a0 (CONDITIONAL_JUMP)
// 004f28cb: XOR EAX,EAX
// 004f28cd: RET
