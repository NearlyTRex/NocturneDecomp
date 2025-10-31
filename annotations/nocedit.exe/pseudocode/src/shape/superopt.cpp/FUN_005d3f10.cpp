// Name: shape_superopt.cpp_FUN_005d3f10
// Address: 005d3f10
// Address Range: [[005d3f10, 005d3f5f]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d3f10()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d3f10(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void shape_superopt_cpp_FUN_005d3f10(void)

{
  int iVar1;
  uint uVar2;
  int in_stack_00000004;
  uint in_stack_0000000c;
  
  iVar1 = *(int *)(in_stack_00000004 + 0xc);
  uVar2 = 0;
  if (*(int *)(in_stack_00000004 + 8) != 0) {
    do {
      while ((*(uint *)(iVar1 + 0x60) & in_stack_0000000c) == in_stack_0000000c) {
        (**(code **)(*(int *)(iVar1 + 100) + 0x50))();
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x68;
        if (*(uint *)(in_stack_00000004 + 8) <= uVar2) {
          return;
        }
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x68;
    } while (uVar2 < *(uint *)(in_stack_00000004 + 8));
  }
  return;
}


// Assembly code:
// 005d3f10: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d3f10
// 005d3f11: PUSH ESI
// 005d3f12: PUSH EDI
// 005d3f13: PUSH EBP
// 005d3f14: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3f18: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d3f1c: MOV EDX,dword ptr [EBP + 0x8]
// 005d3f1f: MOV EBX,dword ptr [EBP + 0xc]
// 005d3f22: XOR ESI,ESI
// 005d3f24: TEST EDX,EDX
// 005d3f26: JBE 0x005d3f3c
//   XREF to: 005d3f3c (CONDITIONAL_JUMP)
// 005d3f28: MOV EAX,dword ptr [EBX + 0x60]
//   Label: LAB_005d3f28
// 005d3f2b: AND EAX,EDI
// 005d3f2d: CMP EAX,EDI
// 005d3f2f: JZ 0x005d3f41
//   XREF to: 005d3f41 (CONDITIONAL_JUMP)
// 005d3f31: INC ESI
// 005d3f32: MOV ECX,dword ptr [EBP + 0x8]
// 005d3f35: ADD EBX,0x68
// 005d3f38: CMP ESI,ECX
// 005d3f3a: JC 0x005d3f28
//   XREF to: 005d3f28 (CONDITIONAL_JUMP)
// 005d3f3c: POP EBP
//   Label: LAB_005d3f3c
// 005d3f3d: POP EDI
// 005d3f3e: POP ESI
// 005d3f3f: POP EBX
// 005d3f40: RET
// 005d3f41: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_005d3f41
//   XREF to: Stack[0x8] (READ)
// 005d3f45: PUSH EDX
// 005d3f46: MOV EAX,dword ptr [EBX + 0x64]
// 005d3f49: PUSH EBX
// 005d3f4a: CALL dword ptr [EAX + 0x50]
// 005d3f4d: ADD ESP,0x8
// 005d3f50: INC ESI
// 005d3f51: MOV ECX,dword ptr [EBP + 0x8]
// 005d3f54: ADD EBX,0x68
// 005d3f57: CMP ESI,ECX
// 005d3f59: JC 0x005d3f28
//   XREF to: 005d3f28 (CONDITIONAL_JUMP)
// 005d3f5b: POP EBP
// 005d3f5c: POP EDI
// 005d3f5d: POP ESI
// 005d3f5e: POP EBX
// 005d3f5f: RET
