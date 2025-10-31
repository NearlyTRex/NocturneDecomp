// Name: core_morph.cpp_FUN_0052a490
// Address: 0052a490
// Address Range: [[0052a490, 0052a4b7]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052a490()

#include "nocturne.h"

int core_morph_cpp_FUN_0052a490(void)

{
  int *piVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar2 = 0;
  if (0 < in_stack_00000004) {
    do {
      piVar1 = (int *)(in_stack_00000008 + 4);
      in_stack_00000004 = in_stack_00000004 + -1;
      in_stack_00000008 = in_stack_00000008 + in_stack_0000000c;
      iVar2 = iVar2 + *piVar1 + -2;
    } while (0 < in_stack_00000004);
  }
  return iVar2;
}


// Assembly code:
// 0052a490: PUSH ESI
//   Label: core_morph.cpp_FUN_0052a490
// 0052a491: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0052a495: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0052a499: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0052a49d: XOR ECX,ECX
// 0052a49f: TEST EAX,EAX
// 0052a4a1: JLE 0x0052a4b4
//   XREF to: 0052a4b4 (CONDITIONAL_JUMP)
// 0052a4a3: PUSH EBX
// 0052a4a4: MOV EBX,dword ptr [EDX + 0x4]
//   Label: LAB_0052a4a4
// 0052a4a7: DEC EAX
// 0052a4a8: SUB EBX,0x2
// 0052a4ab: ADD EDX,ESI
// 0052a4ad: ADD ECX,EBX
// 0052a4af: TEST EAX,EAX
// 0052a4b1: JG 0x0052a4a4
//   XREF to: 0052a4a4 (CONDITIONAL_JUMP)
// 0052a4b3: POP EBX
// 0052a4b4: MOV EAX,ECX
//   Label: LAB_0052a4b4
// 0052a4b6: POP ESI
// 0052a4b7: RET
