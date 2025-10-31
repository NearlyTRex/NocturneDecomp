// Name: core_skeledit.cpp_FUN_0058b160
// Address: 0058b160
// Address Range: [[0058b160, 0058b1f3]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058b160()
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c25f [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058b160(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int *in_stack_0000000c;
  int in_stack_00000010;
  int iStackY_8;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  iVar2 = *(int *)(in_stack_00000010 + 0x28558);
  iVar5 = 0;
  *in_stack_0000000c = iVar2;
  if (0 < iVar2) {
    pcVar7 = (char *)(in_stack_00000010 + 0x2855c);
    piVar8 = in_stack_0000000c + 1;
    iStackY_8 = in_stack_00000010;
    piVar6 = in_stack_0000000c;
    pcVar4 = pcVar7;
    piVar3 = piVar8;
LAB_0058b1a1:
    do {
      cVar1 = *pcVar7;
      *(char *)piVar8 = cVar1;
      if (cVar1 != '\0') {
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        *(char *)((int)piVar8 + 1) = cVar1;
        piVar8 = (int *)((int)piVar8 + 2);
        if (cVar1 != '\0') goto LAB_0058b1a1;
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar3 + 0x21;
      piVar6[9] = *(int *)(iStackY_8 + 0x2857c);
      pcVar7 = pcVar4 + 0x24;
      iStackY_8 = iStackY_8 + 0x24;
      piVar6 = piVar6 + 0x21;
      pcVar4 = pcVar7;
      piVar3 = piVar8;
    } while (iVar5 < *in_stack_0000000c);
  }
  return;
}


// Assembly code:
// 0058b160: PUSH 0x14
//   Label: core_skeledit.cpp_FUN_0058b160
// 0058b165: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058b16a: PUSH EBX
// 0058b16b: PUSH ESI
// 0058b16c: PUSH EBP
// 0058b16d: SUB ESP,0x4
// 0058b170: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0058b174: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058b178: MOV EAX,dword ptr [ESI + 0x28558]
// 0058b17e: XOR EBX,EBX
// 0058b180: MOV dword ptr [EDX],EAX
// 0058b182: TEST EAX,EAX
// 0058b184: JLE 0x0058b1ed
//   XREF to: 0058b1ed (CONDITIONAL_JUMP)
// 0058b186: PUSH EDI
// 0058b187: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0058b18b: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0058b18f: LEA EDX,[ESI + 0x2855c]
// 0058b195: ADD ECX,0x4
// 0058b198: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 0058b19c: MOV ESI,EDX
//   Label: LAB_0058b19c
// 0058b19e: MOV EDI,ECX
// 0058b1a0: PUSH EDI
// 0058b1a1: MOV AL,byte ptr [ESI]
//   Label: LAB_0058b1a1
// 0058b1a3: MOV byte ptr [EDI],AL
// 0058b1a5: CMP AL,0x0
// 0058b1a7: JZ 0x0058b1b9
//   XREF to: 0058b1b9 (CONDITIONAL_JUMP)
// 0058b1a9: MOV AL,byte ptr [ESI + 0x1]
// 0058b1ac: ADD ESI,0x2
// 0058b1af: MOV byte ptr [EDI + 0x1],AL
// 0058b1b2: ADD EDI,0x2
// 0058b1b5: CMP AL,0x0
// 0058b1b7: JNZ 0x0058b1a1
//   XREF to: 0058b1a1 (CONDITIONAL_JUMP)
// 0058b1b9: POP EDI
//   Label: LAB_0058b1b9
// 0058b1ba: ADD EBP,0x84
// 0058b1c0: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (READ)
// 0058b1c4: INC EBX
// 0058b1c5: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (READ)
// 0058b1c9: MOV EAX,dword ptr [EAX + 0x2857c]
// 0058b1cf: ADD ECX,0x84
// 0058b1d5: MOV dword ptr [EBP + -0x60],EAX
// 0058b1d8: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0058b1dc: ADD EDX,0x24
// 0058b1df: ADD ESI,0x24
// 0058b1e2: MOV EDI,dword ptr [EAX]
// 0058b1e4: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 0058b1e8: CMP EBX,EDI
// 0058b1ea: JL 0x0058b19c
//   XREF to: 0058b19c (CONDITIONAL_JUMP)
// 0058b1ec: POP EDI
// 0058b1ed: ADD ESP,0x4
//   Label: LAB_0058b1ed
// 0058b1f0: POP EBP
// 0058b1f1: POP ESI
// 0058b1f2: POP EBX
// 0058b1f3: RET
