// Name: core_melee.cpp_FUN_0050eab0
// Address: 0050eab0
// Address Range: [[0050eab0, 0050eade]]
// Convention: unknown
// Signature: undefined core_melee.cpp_FUN_0050eab0()
// Globals:
//   TerminatedCString s_CHero_00635cdc
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_melee.cpp_FUN_0050eab0(undefined4 param_1, undefined4
   param_2) */

undefined4 core_melee_cpp_FUN_0050eab0(void)

{
  int iVar1;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x588) != 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
    if (iVar1 != 0) {
      return 2;
    }
  }
  return 3;
}


// Assembly code:
// 0050eab0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_melee.cpp_FUN_0050eab0
//   XREF to: Stack[0x4] (READ)
// 0050eab4: CMP dword ptr [EAX + 0x588],0x0
// 0050eabb: JNZ 0x0050eac3
//   XREF to: 0050eac3 (CONDITIONAL_JUMP)
// 0050eabd: MOV EAX,0x3
//   Label: LAB_0050eabd
// 0050eac2: RET
// 0050eac3: PUSH 0x635cdc
//   Label: LAB_0050eac3
//   XREF to: 00635cdc (DATA)
// 0050eac8: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050eacc: PUSH ECX
// 0050eacd: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0050ead2: ADD ESP,0x8
// 0050ead5: TEST EAX,EAX
// 0050ead7: JZ 0x0050eabd
//   XREF to: 0050eabd (CONDITIONAL_JUMP)
// 0050ead9: MOV EAX,0x2
// 0050eade: RET
