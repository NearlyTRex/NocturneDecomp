// Name: shape_superopt.cpp_FUN_005d3860
// Address: 005d3860
// Address Range: [[005d3860, 005d38a8]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d3860()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d3860(undefined4 param_1) */

void shape_superopt_cpp_FUN_005d3860(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint *in_stack_00000004;
  
  uVar2 = 0;
  if (*in_stack_00000004 != 0) {
    iVar3 = 0;
    do {
      puVar1 = (undefined4 *)(in_stack_00000004[1] + iVar3);
      uVar2 = uVar2 + 1;
      *puVar1 = puVar1[6];
      puVar1[1] = puVar1[7];
      puVar1[2] = puVar1[8];
      puVar1[3] = puVar1[9];
      puVar1[4] = puVar1[10];
      puVar1[5] = puVar1[0xb];
      iVar3 = iVar3 + 0x38;
    } while (uVar2 < *in_stack_00000004);
  }
  return;
}


// Assembly code:
// 005d3860: PUSH ESI
//   Label: shape_superopt.cpp_FUN_005d3860
// 005d3861: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d3865: MOV EDX,dword ptr [ESI]
// 005d3867: XOR ECX,ECX
// 005d3869: TEST EDX,EDX
// 005d386b: JBE 0x005d38a7
//   XREF to: 005d38a7 (CONDITIONAL_JUMP)
// 005d386d: PUSH EDI
// 005d386e: PUSH EBX
// 005d386f: XOR EBX,EBX
// 005d3871: MOV EAX,dword ptr [ESI + 0x4]
//   Label: LAB_005d3871
// 005d3874: ADD EAX,EBX
// 005d3876: LEA EDX,[EAX + 0x18]
// 005d3879: INC ECX
// 005d387a: MOV EDI,dword ptr [EDX]
// 005d387c: MOV dword ptr [EAX],EDI
// 005d387e: MOV EDI,dword ptr [EDX + 0x4]
// 005d3881: MOV dword ptr [EAX + 0x4],EDI
// 005d3884: MOV EDI,dword ptr [EDX + 0x8]
// 005d3887: MOV dword ptr [EAX + 0x8],EDI
// 005d388a: MOV EDI,dword ptr [EDX + 0xc]
// 005d388d: MOV dword ptr [EAX + 0xc],EDI
// 005d3890: MOV EDI,dword ptr [EDX + 0x10]
// 005d3893: MOV dword ptr [EAX + 0x10],EDI
// 005d3896: MOV EDI,dword ptr [EDX + 0x14]
// 005d3899: MOV dword ptr [EAX + 0x14],EDI
// 005d389c: MOV EDI,dword ptr [ESI]
// 005d389e: ADD EBX,0x38
// 005d38a1: CMP ECX,EDI
// 005d38a3: JC 0x005d3871
//   XREF to: 005d3871 (CONDITIONAL_JUMP)
// 005d38a5: POP EBX
// 005d38a6: POP EDI
// 005d38a7: POP ESI
//   Label: LAB_005d38a7
// 005d38a8: RET
