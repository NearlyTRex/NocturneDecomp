// Name: core_werewolf.cpp_FUN_005f1db0
// Address: 005f1db0
// Address Range: [[005f1db0, 005f1dea]]
// Convention: unknown
// Signature: undefined core_werewolf.cpp_FUN_005f1db0()
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052dab0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_werewolf.cpp_FUN_005f1db0(undefined4 param_1) */

undefined4 core_werewolf_cpp_FUN_005f1db0(void)

{
  uint uVar1;
  int iVar2;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x70) == 2) {
    return 2;
  }
  iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0
                    ((CMotionController *)(in_stack_00000004 + 0x158));
  uVar1 = *(uint *)(iVar2 + 0x24);
  if (0xb < uVar1) {
    if (uVar1 < 0xd) {
      return 1;
    }
    if (uVar1 == 0xd) {
      return 2;
    }
  }
  return 0;
}


// Assembly code:
// 005f1db0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_werewolf.cpp_FUN_005f1db0
//   XREF to: Stack[0x4] (READ)
// 005f1db4: MOV EDX,dword ptr [EAX + 0x70]
// 005f1db7: CMP EDX,0x2
// 005f1dba: JNZ 0x005f1dcb
//   XREF to: 005f1dcb (CONDITIONAL_JUMP)
// 005f1dbc: MOV EAX,EDX
// 005f1dbe: RET
// 005f1dbf: MOV EAX,0x1
//   Label: LAB_005f1dbf
// 005f1dc4: RET
// 005f1dc5: MOV EAX,0x2
//   Label: LAB_005f1dc5
// 005f1dca: RET
// 005f1dcb: ADD EAX,0x158
//   Label: LAB_005f1dcb
// 005f1dd0: PUSH EAX
// 005f1dd1: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005f1dd6: MOV EAX,dword ptr [EAX + 0x24]
// 005f1dd9: ADD ESP,0x4
// 005f1ddc: CMP EAX,0xc
// 005f1ddf: JC 0x005f1de8
//   XREF to: 005f1de8 (CONDITIONAL_JUMP)
// 005f1de1: JBE 0x005f1dbf
//   XREF to: 005f1dbf (CONDITIONAL_JUMP)
// 005f1de3: CMP EAX,0xd
// 005f1de6: JZ 0x005f1dc5
//   XREF to: 005f1dc5 (CONDITIONAL_JUMP)
// 005f1de8: XOR EAX,EAX
//   Label: LAB_005f1de8
// 005f1dea: RET
