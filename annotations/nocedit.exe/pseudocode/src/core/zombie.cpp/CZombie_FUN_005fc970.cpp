// Name: core_zombie.cpp_CZombie_FUN_005fc970
// Address: 005fc970
// Address Range: [[005fc970, 005fc9d0]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_FUN_005fc970()

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_zombie.cpp_CZombie_FUN_005fc970(CZombie* param_1, undefined4
   param_2, undefined4 param_3) */

undefined4 core_zombie_cpp_CZombie_FUN_005fc970(void)

{
  int iVar1;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_0000000c == 1) {
    if (*(int *)(in_stack_00000004 + 0xbe3c) != 0) {
      iVar1 = (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0xbe3c) + 0x154) + 0x108))();
      if (iVar1 == in_stack_00000004) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0xbe3c) + 0x154) + 0x104))();
      }
    }
    *(undefined4 *)(in_stack_00000004 + 0x2598) = in_stack_00000008;
    *(undefined4 *)(in_stack_00000004 + 0x259c) = 1;
    return 1;
  }
  return 0;
}


// Assembly code:
// 005fc970: PUSH EBX
//   Label: core_zombie.cpp_CZombie_FUN_005fc970
// 005fc971: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005fc975: CMP dword ptr [ESP + 0x10],0x1
//   XREF to: Stack[0xc] (READ)
// 005fc97a: JNZ 0x005fc9a1
//   XREF to: 005fc9a1 (CONDITIONAL_JUMP)
// 005fc97c: MOV ECX,dword ptr [EBX + 0xbe3c]
// 005fc982: TEST ECX,ECX
// 005fc984: JNZ 0x005fc9a5
//   XREF to: 005fc9a5 (CONDITIONAL_JUMP)
// 005fc986: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_005fc986
//   XREF to: Stack[0x8] (READ)
// 005fc98a: MOV dword ptr [EBX + 0x2598],EAX
// 005fc990: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005fc994: MOV dword ptr [EBX + 0x259c],EAX
// 005fc99a: MOV EAX,0x1
// 005fc99f: POP EBX
// 005fc9a0: RET
// 005fc9a1: XOR EAX,EAX
//   Label: LAB_005fc9a1
// 005fc9a3: POP EBX
// 005fc9a4: RET
// 005fc9a5: PUSH ECX
//   Label: LAB_005fc9a5
// 005fc9a6: MOV EDX,dword ptr [ECX + 0x154]
// 005fc9ac: CALL dword ptr [EDX + 0x108]
// 005fc9b2: ADD ESP,0x4
// 005fc9b5: CMP EAX,EBX
// 005fc9b7: JNZ 0x005fc986
//   XREF to: 005fc986 (CONDITIONAL_JUMP)
// 005fc9b9: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005fc9bf: PUSH EAX
// 005fc9c0: MOV EDX,dword ptr [EAX + 0x154]
// 005fc9c6: CALL dword ptr [EDX + 0x104]
// 005fc9cc: ADD ESP,0x4
// 005fc9cf: JMP 0x005fc986
//   XREF to: 005fc986 (UNCONDITIONAL_JUMP)
