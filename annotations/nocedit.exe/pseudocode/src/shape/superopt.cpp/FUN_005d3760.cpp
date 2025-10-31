// Name: shape_superopt.cpp_FUN_005d3760
// Address: 005d3760
// Address Range: [[005d3760, 005d37a8]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d3760()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d3760(undefined4 param_1) */

void shape_superopt_cpp_FUN_005d3760(void)

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
      puVar1[6] = *puVar1;
      puVar1[7] = puVar1[1];
      puVar1[8] = puVar1[2];
      puVar1[9] = puVar1[3];
      puVar1[10] = puVar1[4];
      puVar1[0xb] = puVar1[5];
      iVar3 = iVar3 + 0x38;
    } while (uVar2 < *in_stack_00000004);
  }
  return;
}


// Assembly code:
// 005d3760: PUSH ESI
//   Label: shape_superopt.cpp_FUN_005d3760
// 005d3761: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d3765: MOV EDX,dword ptr [ESI]
// 005d3767: XOR ECX,ECX
// 005d3769: TEST EDX,EDX
// 005d376b: JBE 0x005d37a7
//   XREF to: 005d37a7 (CONDITIONAL_JUMP)
// 005d376d: PUSH EDI
// 005d376e: PUSH EBX
// 005d376f: XOR EBX,EBX
// 005d3771: MOV EAX,dword ptr [ESI + 0x4]
//   Label: LAB_005d3771
// 005d3774: ADD EAX,EBX
// 005d3776: INC ECX
// 005d3777: LEA EDX,[EAX + 0x18]
// 005d377a: MOV EDI,dword ptr [EAX]
// 005d377c: MOV dword ptr [EDX],EDI
// 005d377e: MOV EDI,dword ptr [EAX + 0x4]
// 005d3781: MOV dword ptr [EDX + 0x4],EDI
// 005d3784: MOV EDI,dword ptr [EAX + 0x8]
// 005d3787: MOV dword ptr [EDX + 0x8],EDI
// 005d378a: MOV EDI,dword ptr [EAX + 0xc]
// 005d378d: MOV dword ptr [EDX + 0xc],EDI
// 005d3790: MOV EDI,dword ptr [EAX + 0x10]
// 005d3793: MOV dword ptr [EDX + 0x10],EDI
// 005d3796: MOV EDI,dword ptr [EAX + 0x14]
// 005d3799: MOV dword ptr [EDX + 0x14],EDI
// 005d379c: MOV EDI,dword ptr [ESI]
// 005d379e: ADD EBX,0x38
// 005d37a1: CMP ECX,EDI
// 005d37a3: JC 0x005d3771
//   XREF to: 005d3771 (CONDITIONAL_JUMP)
// 005d37a5: POP EBX
// 005d37a6: POP EDI
// 005d37a7: POP ESI
//   Label: LAB_005d37a7
// 005d37a8: RET
