// Name: shape_superopt.cpp_FUN_005d3020
// Address: 005d3020
// Address Range: [[005d3020, 005d3049]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d3020()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d3020(undefined4 param_1, undefined4 param_2) */

undefined4 shape_superopt_cpp_FUN_005d3020(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  
  iVar1 = (**(code **)(*(int *)(in_stack_00000004 + 0x18) + 0x6c))();
  if (iVar1 == -1) {
    return 0;
  }
  uVar2 = (**(code **)(*(int *)(in_stack_00000004 + 0x18) + 0x40))();
  return uVar2;
}


// Assembly code:
// 005d3020: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d3020
// 005d3021: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d3025: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005d3029: PUSH EDX
// 005d302a: MOV EAX,dword ptr [EBX + 0x18]
// 005d302d: PUSH EBX
// 005d302e: CALL dword ptr [EAX + 0x6c]
// 005d3031: ADD ESP,0x8
// 005d3034: CMP EAX,-0x1
// 005d3037: JNZ 0x005d303d
//   XREF to: 005d303d (CONDITIONAL_JUMP)
// 005d3039: XOR EAX,EAX
// 005d303b: POP EBX
// 005d303c: RET
// 005d303d: PUSH EAX
//   Label: LAB_005d303d
// 005d303e: MOV EDX,dword ptr [EBX + 0x18]
// 005d3041: PUSH EBX
// 005d3042: CALL dword ptr [EDX + 0x40]
// 005d3045: ADD ESP,0x8
// 005d3048: POP EBX
// 005d3049: RET
