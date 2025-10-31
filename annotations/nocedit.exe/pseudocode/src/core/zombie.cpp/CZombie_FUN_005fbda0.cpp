// Name: core_zombie.cpp_CZombie_FUN_005fbda0
// Address: 005fbda0
// Address Range: [[005fbda0, 005fbdd5]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_FUN_005fbda0()
// Cross-references:
//   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530 (005fb530) at 005fb728 [UNCONDITIONAL_CALL]
// Function calls:
//   core_zombie.cpp_CZombie_FUN_005fbd00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_zombie.cpp_CZombie_FUN_005fbda0(CZombie* param_1, undefined4
   param_2) */

undefined4 core_zombie_cpp_CZombie_FUN_005fbda0(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = core_zombie_cpp_CZombie_FUN_005fbd00();
  if ((-1 < iVar1) && (iVar1 = *(int *)(in_stack_00000004 + 0x24b0 + iVar1 * 0x44), -1 < iVar1)) {
    return *(undefined4 *)(in_stack_00000004 + 0x2298 + iVar1 * 4);
  }
  return 0;
}


// Assembly code:
// 005fbda0: PUSH EBX
//   Label: core_zombie.cpp_CZombie_FUN_005fbda0
// 005fbda1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005fbda5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005fbda9: PUSH EDX
// 005fbdaa: PUSH EBX
// 005fbdab: CALL core_zombie.cpp_CZombie_FUN_005fbd00
//   XREF to: 005fbd00 (UNCONDITIONAL_CALL)
// 005fbdb0: ADD ESP,0x8
// 005fbdb3: TEST EAX,EAX
// 005fbdb5: JL 0x005fbdd2
//   XREF to: 005fbdd2 (CONDITIONAL_JUMP)
// 005fbdb7: MOV EDX,EAX
// 005fbdb9: SHL EAX,0x4
// 005fbdbc: ADD EAX,EDX
// 005fbdbe: MOV EAX,dword ptr [EBX + EAX*0x4 + 0x24b0]
// 005fbdc5: TEST EAX,EAX
// 005fbdc7: JL 0x005fbdd2
//   XREF to: 005fbdd2 (CONDITIONAL_JUMP)
// 005fbdc9: MOV EAX,dword ptr [EBX + EAX*0x4 + 0x2298]
// 005fbdd0: POP EBX
// 005fbdd1: RET
// 005fbdd2: XOR EAX,EAX
//   Label: LAB_005fbdd2
// 005fbdd4: POP EBX
// 005fbdd5: RET
