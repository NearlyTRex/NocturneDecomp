// Name: shape_meshlod.cpp_FUN_00516480
// Address: 00516480
// Address Range: [[00516480, 005164cc]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00516480()

#include "nocturne.h"

int shape_meshlod_cpp_FUN_00516480(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = 0;
  iVar4 = 0;
  iVar3 = 0;
  while (iVar2 = *(int *)(in_stack_00000004 + 4) + in_stack_00000008 * 0x4c4,
        iVar1 < *(int *)(iVar2 + 0x3f8)) {
    if (*(int *)(*(int *)(iVar2 + 0x3fc + iVar3) * 0xf0 + 0x18 + *(int *)(in_stack_00000004 + 0x48))
        < 2) {
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 4;
    }
    else {
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 4;
    }
  }
  return iVar4;
}


// Assembly code:
// 00516480: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00516480
// 00516481: PUSH ESI
// 00516482: PUSH EDI
// 00516483: SUB ESP,0x4
// 00516486: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051648a: IMUL EDX,dword ptr [ESP + 0x18],0x4c4
//   XREF to: Stack[0x8] (READ)
// 00516492: XOR EAX,EAX
// 00516494: XOR EBX,EBX
// 00516496: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x10] (DATA)
// 00516499: XOR EDX,EDX
// 0051649b: MOV ESI,dword ptr [ESP]
//   Label: LAB_0051649b
//   XREF to: Stack[-0x10] (DATA)
// 0051649e: MOV ECX,dword ptr [EDI + 0x4]
// 005164a1: ADD ECX,ESI
// 005164a3: CMP EAX,dword ptr [ECX + 0x3f8]
// 005164a9: JGE 0x00516469
//   XREF to: 00516469 (CONDITIONAL_JUMP)
// 005164ab: IMUL ECX,dword ptr [ECX + EDX*0x1 + 0x3fc],0xf0
// 005164b6: MOV ESI,dword ptr [EDI + 0x48]
// 005164b9: CMP dword ptr [ECX + ESI*0x1 + 0x18],0x1
// 005164be: JG 0x005164c6
//   XREF to: 005164c6 (CONDITIONAL_JUMP)
// 005164c0: INC EAX
// 005164c1: ADD EDX,0x4
// 005164c4: JMP 0x0051649b
//   XREF to: 0051649b (UNCONDITIONAL_JUMP)
// 005164c6: INC EBX
//   Label: LAB_005164c6
// 005164c7: INC EAX
// 005164c8: ADD EDX,0x4
// 005164cb: JMP 0x0051649b
//   XREF to: 0051649b (UNCONDITIONAL_JUMP)
