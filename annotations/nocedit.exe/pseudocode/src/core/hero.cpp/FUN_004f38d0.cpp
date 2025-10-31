// Name: core_hero.cpp_FUN_004f38d0
// Address: 004f38d0
// Address Range: [[004f38d0, 004f390f]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f38d0()
// Cross-references:
//   core_gabriela.cpp_FUN_004d4890 (004d4890) at 004d49b8 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005bdfc3 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5270 (005c5270) at 005c542a [UNCONDITIONAL_CALL]
// Function calls:
//   core_inv.cpp_CInventory_addItem_FUN_004fd600

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f38d0(undefined4 param_1, undefined4 param_2)
    */

void core_hero_cpp_FUN_004f38d0(void)

{
  int iVar1;
  CDemonActor *item_actor;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = in_stack_00000004 + in_stack_00000008 * 0x44;
  item_actor = *(CDemonActor **)(iVar1 + 0x24b4);
  if (item_actor == (CDemonActor *)0x0) {
    return;
  }
  core_inv_cpp_CInventory_addItem_FUN_004fd600
            ((CInventory *)(in_stack_00000004 + 0x1f738),item_actor,1);
  *(undefined4 *)(iVar1 + 0x24b4) = 0;
  return;
}


// Assembly code:
// 004f38d0: PUSH EBX
//   Label: core_hero.cpp_FUN_004f38d0
// 004f38d1: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f38d5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f38d9: MOV EAX,EDX
// 004f38db: SHL EAX,0x4
// 004f38de: ADD EAX,EDX
// 004f38e0: SHL EAX,0x2
// 004f38e3: LEA EBX,[ECX + EAX*0x1]
// 004f38e6: MOV EAX,dword ptr [EBX + 0x24b4]
// 004f38ec: TEST EAX,EAX
// 004f38ee: JNZ 0x004f38f2
//   XREF to: 004f38f2 (CONDITIONAL_JUMP)
// 004f38f0: POP EBX
// 004f38f1: RET
// 004f38f2: PUSH 0x1
//   Label: LAB_004f38f2
// 004f38f4: PUSH EAX
// 004f38f5: LEA EAX,[ECX + 0x1f738]
// 004f38fb: PUSH EAX
// 004f38fc: CALL core_inv.cpp_CInventory_addItem_FUN_004fd600
//   XREF to: 004fd600 (UNCONDITIONAL_CALL)
// 004f3901: ADD ESP,0xc
// 004f3904: MOV dword ptr [EBX + 0x24b4],0x0
// 004f390e: POP EBX
// 004f390f: RET
