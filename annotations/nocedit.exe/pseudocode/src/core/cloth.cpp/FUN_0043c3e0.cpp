// Name: core_cloth.cpp_FUN_0043c3e0
// Address: 0043c3e0
// Address Range: [[0043c3e0, 0043c42f]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043c3e0()

#include "nocturne.h"

void core_cloth_cpp_FUN_0043c3e0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  iVar3 = 0;
  piVar2 = in_stack_00000004;
  if (0 < *in_stack_00000004) {
    do {
      while( true ) {
        iVar1 = piVar2[0x65];
        if ((undefined4 *)(iVar1 + 0x3fe64) == in_stack_00000008) break;
        *(undefined4 *)(iVar1 + 0x3fe64) = *in_stack_00000008;
        *(undefined4 *)(iVar1 + 0x3fe68) = in_stack_00000008[1];
        *(undefined4 *)(iVar1 + 0x3fe6c) = in_stack_00000008[2];
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
        if (*in_stack_00000004 <= iVar3) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *in_stack_00000004);
  }
  return;
}


// Assembly code:
// 0043c3e0: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043c3e0
// 0043c3e1: PUSH ESI
// 0043c3e2: PUSH EDI
// 0043c3e3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0043c3e7: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0043c3eb: MOV ECX,dword ptr [ESI]
// 0043c3ed: XOR EBX,EBX
// 0043c3ef: TEST ECX,ECX
// 0043c3f1: JLE 0x0043c40e
//   XREF to: 0043c40e (CONDITIONAL_JUMP)
// 0043c3f3: MOV ECX,ESI
// 0043c3f5: MOV EAX,dword ptr [ECX + 0x194]
//   Label: LAB_0043c3f5
// 0043c3fb: ADD EAX,0x3fe64
// 0043c400: CMP EAX,EDX
// 0043c402: JNZ 0x0043c412
//   XREF to: 0043c412 (CONDITIONAL_JUMP)
// 0043c404: INC EBX
// 0043c405: MOV EDI,dword ptr [ESI]
// 0043c407: ADD ECX,0x4
// 0043c40a: CMP EBX,EDI
// 0043c40c: JL 0x0043c3f5
//   XREF to: 0043c3f5 (CONDITIONAL_JUMP)
// 0043c40e: POP EDI
//   Label: LAB_0043c40e
// 0043c40f: POP ESI
// 0043c410: POP EBX
// 0043c411: RET
// 0043c412: MOV EDI,dword ptr [EDX]
//   Label: LAB_0043c412
// 0043c414: MOV dword ptr [EAX],EDI
// 0043c416: MOV EDI,dword ptr [EDX + 0x4]
// 0043c419: MOV dword ptr [EAX + 0x4],EDI
// 0043c41c: MOV EDI,dword ptr [EDX + 0x8]
// 0043c41f: MOV dword ptr [EAX + 0x8],EDI
// 0043c422: INC EBX
// 0043c423: MOV EDI,dword ptr [ESI]
// 0043c425: ADD ECX,0x4
// 0043c428: CMP EBX,EDI
// 0043c42a: JL 0x0043c3f5
//   XREF to: 0043c3f5 (CONDITIONAL_JUMP)
// 0043c42c: POP EDI
// 0043c42d: POP ESI
// 0043c42e: POP EBX
// 0043c42f: RET
