// Name: shape_superopt.cpp_FUN_005d30c0
// Address: 005d30c0
// Address Range: [[005d30c0, 005d30e9]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d30c0()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d30c0(undefined4 param_1, undefined4 param_2) */

undefined4 shape_superopt_cpp_FUN_005d30c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  
  iVar1 = (**(code **)(*(int *)(in_stack_00000004 + 0x18) + 0x60))();
  if (iVar1 == -1) {
    return 0;
  }
  uVar2 = (**(code **)(*(int *)(in_stack_00000004 + 0x18) + 0x48))();
  return uVar2;
}


// Assembly code:
// 005d30c0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d30c0
// 005d30c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d30c5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005d30c9: PUSH EDX
// 005d30ca: MOV EAX,dword ptr [EBX + 0x18]
// 005d30cd: PUSH EBX
// 005d30ce: CALL dword ptr [EAX + 0x60]
// 005d30d1: ADD ESP,0x8
// 005d30d4: CMP EAX,-0x1
// 005d30d7: JNZ 0x005d30dd
//   XREF to: 005d30dd (CONDITIONAL_JUMP)
// 005d30d9: XOR EAX,EAX
// 005d30db: POP EBX
// 005d30dc: RET
// 005d30dd: PUSH EAX
//   Label: LAB_005d30dd
// 005d30de: MOV EDX,dword ptr [EBX + 0x18]
// 005d30e1: PUSH EBX
// 005d30e2: CALL dword ptr [EDX + 0x48]
// 005d30e5: ADD ESP,0x8
// 005d30e8: POP EBX
// 005d30e9: RET
