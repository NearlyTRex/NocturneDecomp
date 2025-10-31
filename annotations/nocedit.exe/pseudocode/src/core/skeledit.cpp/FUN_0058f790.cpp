// Name: core_skeledit.cpp_FUN_0058f790
// Address: 0058f790
// Address Range: [[0058f790, 0058f80d]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058f790()
// Cross-references:
//   core_skeledit.cpp_FUN_0058b660 (0058b660) at 0058b8aa [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c35e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_TheOnlyPart_0064b4bf
//   undefined4 s_heOnlyPart_0064b4c0
//   undefined4 s_eOnlyPart_0064b4c1
//   undefined4 s_OnlyPart_0064b4c2
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

undefined8 core_skeledit_cpp_FUN_0058f790(void)

{
  char cVar1;
  int *piVar2;
  undefined3 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int *in_stack_0000000c;
  
  piVar2 = (int *)crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  pcVar5 = "TheOnlyPart";
  piVar6 = in_stack_0000000c + 0x1c51;
  in_stack_0000000c[0x1c50] = 1;
  do {
    cVar1 = *pcVar5;
    uVar3 = (undefined3)((uint)piVar2 >> 8);
    piVar2 = (int *)CONCAT31(uVar3,cVar1);
    *(char *)piVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    piVar2 = (int *)CONCAT31(uVar3,cVar1);
    pcVar5 = pcVar5 + 2;
    *(char *)((int)piVar6 + 1) = cVar1;
    piVar6 = (int *)((int)piVar6 + 2);
  } while (cVar1 != '\0');
  iVar4 = 0;
  piVar6 = in_stack_0000000c;
  if (0 < *in_stack_0000000c) {
    do {
      piVar6[0x1c5e] = 0;
      piVar6[0x1c59] = piVar6[0x15];
      iVar4 = iVar4 + 1;
      piVar2 = piVar6 + 1;
      piVar6 = piVar2;
    } while (iVar4 < *in_stack_0000000c);
  }
  in_stack_0000000c[0x1c63] = 0;
  return CONCAT44(iVar4,piVar2);
}


// Assembly code:
// 0058f790: PUSH 0x10
//   Label: core_skeledit.cpp_FUN_0058f790
// 0058f795: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058f79a: PUSH EBX
// 0058f79b: PUSH ESI
// 0058f79c: PUSH EDI
// 0058f79d: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0058f7a1: MOV ESI,0x64b4bf
//   XREF to: 0064b4bf (DATA)
// 0058f7a6: LEA EDI,[EBX + 0x7144]
// 0058f7ac: MOV dword ptr [EBX + 0x7140],0x1
// 0058f7b6: PUSH EDI
// 0058f7b7: MOV AL,byte ptr [ESI]
//   Label: LAB_0058f7b7
//   XREF to: 0064b4bf (READ)
//   XREF to: 0064b4c1 (READ)
// 0058f7b9: MOV byte ptr [EDI],AL
// 0058f7bb: CMP AL,0x0
// 0058f7bd: JZ 0x0058f7cf
//   XREF to: 0058f7cf (CONDITIONAL_JUMP)
// 0058f7bf: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0064b4c0 (READ)
//   XREF to: 0064b4c2 (READ)
// 0058f7c2: ADD ESI,0x2
// 0058f7c5: MOV byte ptr [EDI + 0x1],AL
// 0058f7c8: ADD EDI,0x2
// 0058f7cb: CMP AL,0x0
// 0058f7cd: JNZ 0x0058f7b7
//   XREF to: 0058f7b7 (CONDITIONAL_JUMP)
// 0058f7cf: POP EDI
//   Label: LAB_0058f7cf
// 0058f7d0: MOV ECX,dword ptr [EBX]
// 0058f7d2: XOR EDX,EDX
// 0058f7d4: TEST ECX,ECX
// 0058f7d6: JLE 0x0058f800
//   XREF to: 0058f800 (CONDITIONAL_JUMP)
// 0058f7d8: MOV EAX,EBX
// 0058f7da: MOV ECX,dword ptr [EAX + 0x54]
//   Label: LAB_0058f7da
// 0058f7dd: MOV dword ptr [EAX + 0x7178],0x0
// 0058f7e7: MOV dword ptr [EAX + 0x7164],ECX
// 0058f7ed: INC EDX
// 0058f7ee: MOV ESI,dword ptr [EBX]
// 0058f7f0: ADD EAX,0x4
// 0058f7f3: CMP EDX,ESI
// 0058f7f5: JL 0x0058f7da
//   XREF to: 0058f7da (CONDITIONAL_JUMP)
// 0058f7f7: LEA EAX,[EAX]
// 0058f7fd: LEA EDX,[EDX]
// 0058f800: MOV dword ptr [EBX + 0x718c],0x0
//   Label: LAB_0058f800
// 0058f80a: POP EDI
// 0058f80b: POP ESI
// 0058f80c: POP EBX
// 0058f80d: RET
