// Name: core_script.cpp_FUN_005675a0
// Address: 005675a0
// Address Range: [[005675a0, 00567623]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005675a0()
// Cross-references:
//   core_script.cpp_FUN_00567630 (00567630) at 005676af [DATA]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_005675a0(undefined4 param_1, undefined4 param_2) */

int core_script_cpp_FUN_005675a0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  char *in_stack_00000004;
  char *in_stack_00000008;
  
  iVar4 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,in_stack_00000008);
  if (iVar4 == 0) {
    if (*(int *)(in_stack_00000004 + 0x100) < *(int *)(in_stack_00000008 + 0x100)) {
      return -1;
    }
    if (*(int *)(in_stack_00000004 + 0x100) <= *(int *)(in_stack_00000008 + 0x100)) {
      uVar1 = *(uint *)(in_stack_00000004 + 0x104);
      if (uVar1 < *(uint *)(in_stack_00000008 + 0x104)) {
        return -1;
      }
      if (uVar1 <= *(uint *)(in_stack_00000008 + 0x104)) {
        if (uVar1 == 0) {
          iVar4 = *(int *)(in_stack_00000008 + 0x10c);
          iVar2 = *(int *)(in_stack_00000004 + 0x10c);
          bVar6 = SBORROW4(iVar2,iVar4);
          iVar3 = iVar2 - iVar4;
          bVar5 = iVar2 == iVar4;
          if (iVar2 < iVar4) {
            return -1;
          }
        }
        else {
          iVar4 = *(int *)(in_stack_00000008 + 0x108);
          iVar2 = *(int *)(in_stack_00000004 + 0x108);
          bVar6 = SBORROW4(iVar2,iVar4);
          iVar3 = iVar2 - iVar4;
          bVar5 = iVar2 == iVar4;
          if (iVar2 < iVar4) {
            return -1;
          }
        }
        if (bVar5 || bVar6 != iVar3 < 0) {
          return 0;
        }
      }
    }
    iVar4 = 1;
  }
  return iVar4;
}


// Assembly code:
// 005675a0: PUSH EBX
//   Label: core_script.cpp_FUN_005675a0
// 005675a1: PUSH ESI
// 005675a2: PUSH EDI
// 005675a3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005675a7: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005675ab: PUSH ESI
// 005675ac: PUSH EBX
// 005675ad: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005675b2: ADD ESP,0x8
// 005675b5: TEST EAX,EAX
// 005675b7: JNZ 0x005675f8
//   XREF to: 005675f8 (CONDITIONAL_JUMP)
// 005675b9: MOV EDX,dword ptr [ESI + 0x100]
// 005675bf: MOV EAX,dword ptr [EBX + 0x100]
// 005675c5: CMP EAX,EDX
// 005675c7: JL 0x005675fc
//   XREF to: 005675fc (CONDITIONAL_JUMP)
// 005675c9: JG 0x005675f3
//   XREF to: 005675f3 (CONDITIONAL_JUMP)
// 005675cb: MOV EDI,dword ptr [ESI + 0x104]
// 005675d1: MOV EAX,dword ptr [EBX + 0x104]
// 005675d7: CMP EAX,EDI
// 005675d9: JC 0x005675fc
//   XREF to: 005675fc (CONDITIONAL_JUMP)
// 005675db: JA 0x005675f3
//   XREF to: 005675f3 (CONDITIONAL_JUMP)
// 005675dd: TEST EAX,EAX
// 005675df: JNZ 0x00567605
//   XREF to: 00567605 (CONDITIONAL_JUMP)
// 005675e1: MOV EDI,dword ptr [ESI + 0x10c]
// 005675e7: MOV EAX,dword ptr [EBX + 0x10c]
// 005675ed: CMP EAX,EDI
// 005675ef: JL 0x005675fc
//   XREF to: 005675fc (CONDITIONAL_JUMP)
// 005675f1: JLE 0x0056761e
//   Label: LAB_005675f1
//   XREF to: 0056761e (CONDITIONAL_JUMP)
// 005675f3: MOV EAX,0x1
//   Label: LAB_005675f3
// 005675f8: POP EDI
//   Label: LAB_005675f8
// 005675f9: POP ESI
// 005675fa: POP EBX
// 005675fb: RET
// 005675fc: MOV EAX,0xffffffff
//   Label: LAB_005675fc
// 00567601: POP EDI
// 00567602: POP ESI
// 00567603: POP EBX
// 00567604: RET
// 00567605: MOV EDX,dword ptr [ESI + 0x108]
//   Label: LAB_00567605
// 0056760b: MOV EAX,dword ptr [EBX + 0x108]
// 00567611: CMP EAX,EDX
// 00567613: JGE 0x005675f1
//   XREF to: 005675f1 (CONDITIONAL_JUMP)
// 00567615: MOV EAX,0xffffffff
// 0056761a: POP EDI
// 0056761b: POP ESI
// 0056761c: POP EBX
// 0056761d: RET
// 0056761e: XOR EAX,EAX
//   Label: LAB_0056761e
// 00567620: POP EDI
// 00567621: POP ESI
// 00567622: POP EBX
// 00567623: RET
