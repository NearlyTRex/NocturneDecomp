// Name: core_zombie.cpp_CZombie_FUN_005fbde0
// Address: 005fbde0
// Address Range: [[005fbde0, 005fbe18]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_FUN_005fbde0()
// Cross-references:
//   core_zombie.cpp_CZombie_FUN_005fc4f0 (005fc4f0) at 005fc582 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_zombie.cpp_CZombie_FUN_005fbde0(CZombie* param_1) */

void core_zombie_cpp_CZombie_FUN_005fbde0(void)

{
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0xbecc) = 0;
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x13c))();
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x13c))();
  return;
}


// Assembly code:
// 005fbde0: PUSH EBX
//   Label: core_zombie.cpp_CZombie_FUN_005fbde0
// 005fbde1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005fbde5: PUSH 0x0
// 005fbde7: PUSH 0x0
// 005fbde9: MOV EAX,dword ptr [EBX + 0x154]
// 005fbdef: PUSH EBX
// 005fbdf0: MOV dword ptr [EBX + 0xbecc],0x0
// 005fbdfa: CALL dword ptr [EAX + 0x13c]
// 005fbe00: ADD ESP,0xc
// 005fbe03: PUSH 0x0
// 005fbe05: PUSH 0x1
// 005fbe07: MOV EAX,dword ptr [EBX + 0x154]
// 005fbe0d: PUSH EBX
// 005fbe0e: CALL dword ptr [EAX + 0x13c]
// 005fbe14: ADD ESP,0xc
// 005fbe17: POP EBX
// 005fbe18: RET
