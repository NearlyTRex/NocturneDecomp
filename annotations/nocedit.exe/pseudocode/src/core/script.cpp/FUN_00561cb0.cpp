// Name: core_script.cpp_FUN_00561cb0
// Address: 00561cb0
// Address Range: [[00561cb0, 00561da0]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00561cb0()
// Cross-references:
//   core_script.cpp_SCmdParse_parse_FUN_00561fd0 (00561fd0) at 0056230e [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00561cb0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

undefined4 core_script_cpp_FUN_00561cb0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *in_stack_00000004;
  int in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  
  uVar4 = 0xffffffff;
  pcVar6 = in_stack_00000004;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  iVar5 = ~uVar4 - 1;
  iVar1 = *in_stack_0000000c;
  while ((iVar1 < in_stack_00000010 &&
         ((g_CharacterClassificationTable
           [(byte)(*(char *)(*in_stack_0000000c + in_stack_00000008) + 1)] & 2U) != 0))) {
    iVar1 = *in_stack_0000000c;
    *in_stack_0000000c = iVar1 + 1;
    in_stack_00000004[iVar5] = *(char *)(in_stack_00000008 + iVar1);
    iVar1 = *in_stack_0000000c;
    iVar5 = iVar5 + 1;
  }
  in_stack_00000004[iVar5] = '\0';
  iVar5 = 0;
  iVar1 = *in_stack_0000000c;
  iVar3 = 0;
  while ((iVar1 < in_stack_00000010 &&
         (((*(char *)(*in_stack_0000000c + in_stack_00000008) != ',' || (iVar5 != 0)) ||
          (*(int *)(in_stack_00000004 + 600) == 2))))) {
    if (*(char *)(*in_stack_0000000c + in_stack_00000008) == '(') {
      iVar5 = iVar5 + 1;
    }
    if (*(char *)(*in_stack_0000000c + in_stack_00000008) == ')') {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
    }
    iVar1 = *in_stack_0000000c;
    *in_stack_0000000c = iVar1 + 1;
    in_stack_00000004[iVar3 + 100] = *(char *)(in_stack_00000008 + iVar1);
    iVar1 = *in_stack_0000000c;
    iVar3 = iVar3 + 1;
  }
  pcVar6 = in_stack_00000004 + iVar3;
  while ((0 < iVar3 && ((g_CharacterClassificationTable[(byte)(pcVar6[99] + 1)] & 2U) != 0))) {
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar6 + -1;
    *in_stack_0000000c = *in_stack_0000000c + -1;
  }
  in_stack_00000004[iVar3 + 100] = '\0';
  return 1;
}


// Assembly code:
// 00561cb0: PUSH EBX
//   Label: core_script.cpp_FUN_00561cb0
// 00561cb1: PUSH ESI
// 00561cb2: PUSH EDI
// 00561cb3: PUSH EBP
// 00561cb4: SUB ESP,0x4
// 00561cb7: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00561cbb: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00561cbf: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00561cc3: MOV EDI,EBP
// 00561cc5: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00561cc9: SUB ECX,ECX
// 00561ccb: DEC ECX
// 00561ccc: XOR EAX,EAX
// 00561cce: SCASB.REPNE ES:EDI
// 00561cd0: NOT ECX
// 00561cd2: DEC ECX
// 00561cd3: MOV EAX,ECX
// 00561cd5: CMP EBX,dword ptr [EDX]
// 00561cd7: JLE 0x00561d09
//   XREF to: 00561d09 (CONDITIONAL_JUMP)
// 00561cd9: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00561cdd: MOV ECX,dword ptr [EDX]
//   Label: LAB_00561cdd
// 00561cdf: MOV BL,byte ptr [ECX + ESI*0x1]
// 00561ce2: INC BL
// 00561ce4: XOR ECX,ECX
// 00561ce6: MOV CL,BL
// 00561ce8: TEST byte ptr [ECX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 00561cef: JZ 0x00561d09
//   XREF to: 00561d09 (CONDITIONAL_JUMP)
// 00561cf1: MOV ECX,dword ptr [EDX]
// 00561cf3: LEA EBX,[ECX + 0x1]
// 00561cf6: MOV dword ptr [EDX],EBX
// 00561cf8: LEA EBX,[ESI + ECX*0x1]
// 00561cfb: MOV ECX,EAX
// 00561cfd: MOV BL,byte ptr [EBX]
// 00561cff: MOV byte ptr [ECX + EBP*0x1],BL
// 00561d02: MOV ECX,dword ptr [EDX]
// 00561d04: INC EAX
// 00561d05: CMP ECX,EDI
// 00561d07: JL 0x00561cdd
//   XREF to: 00561cdd (CONDITIONAL_JUMP)
// 00561d09: MOV EDI,dword ptr [ESP + 0x24]
//   Label: LAB_00561d09
//   XREF to: Stack[0x10] (READ)
// 00561d0d: MOV byte ptr [EAX + EBP*0x1],0x0
// 00561d11: XOR ECX,ECX
// 00561d13: MOV EBX,dword ptr [EDX]
// 00561d15: XOR EAX,EAX
// 00561d17: CMP EBX,EDI
// 00561d19: JGE 0x00561d30
//   XREF to: 00561d30 (CONDITIONAL_JUMP)
// 00561d1b: MOV EDI,dword ptr [EDX]
//   Label: LAB_00561d1b
// 00561d1d: CMP byte ptr [EDI + ESI*0x1],0x2c
// 00561d21: JNZ 0x00561d57
//   XREF to: 00561d57 (CONDITIONAL_JUMP)
// 00561d23: TEST ECX,ECX
// 00561d25: JNZ 0x00561d57
//   XREF to: 00561d57 (CONDITIONAL_JUMP)
// 00561d27: CMP dword ptr [EBP + 0x258],0x2
// 00561d2e: JZ 0x00561d57
//   XREF to: 00561d57 (CONDITIONAL_JUMP)
// 00561d30: MOV EDI,0xffffffff
//   Label: LAB_00561d30
// 00561d35: LEA ECX,[EAX + EBP*0x1]
// 00561d38: TEST EAX,EAX
//   Label: LAB_00561d38
// 00561d3a: JLE 0x00561d8f
//   XREF to: 00561d8f (CONDITIONAL_JUMP)
// 00561d3c: MOV BL,byte ptr [ECX + 0x63]
// 00561d3f: INC BL
// 00561d41: MOVZX ESI,BL
// 00561d44: TEST byte ptr [ESI + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 00561d4b: JZ 0x00561d8f
//   XREF to: 00561d8f (CONDITIONAL_JUMP)
// 00561d4d: MOV ESI,dword ptr [EDX]
// 00561d4f: DEC EAX
// 00561d50: ADD ESI,EDI
// 00561d52: DEC ECX
// 00561d53: MOV dword ptr [EDX],ESI
// 00561d55: JMP 0x00561d38
//   XREF to: 00561d38 (UNCONDITIONAL_JUMP)
// 00561d57: MOV EDI,dword ptr [EDX]
//   Label: LAB_00561d57
// 00561d59: CMP byte ptr [EDI + ESI*0x1],0x28
// 00561d5d: JNZ 0x00561d60
//   XREF to: 00561d60 (CONDITIONAL_JUMP)
// 00561d5f: INC ECX
// 00561d60: MOV EDI,dword ptr [EDX]
//   Label: LAB_00561d60
// 00561d62: CMP byte ptr [EDI + ESI*0x1],0x29
// 00561d66: JNZ 0x00561d6d
//   XREF to: 00561d6d (CONDITIONAL_JUMP)
// 00561d68: TEST ECX,ECX
// 00561d6a: JZ 0x00561d30
//   XREF to: 00561d30 (CONDITIONAL_JUMP)
// 00561d6c: DEC ECX
// 00561d6d: MOV EBX,dword ptr [EDX]
//   Label: LAB_00561d6d
// 00561d6f: LEA EDI,[EBX + 0x1]
// 00561d72: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00561d75: MOV dword ptr [EDX],EDI
// 00561d77: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00561d7a: ADD EDI,EBP
// 00561d7c: MOV BL,byte ptr [ESI + EBX*0x1]
// 00561d7f: MOV byte ptr [EDI + 0x64],BL
// 00561d82: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00561d86: MOV EBX,dword ptr [EDX]
// 00561d88: INC EAX
// 00561d89: CMP EBX,EDI
// 00561d8b: JL 0x00561d1b
//   XREF to: 00561d1b (CONDITIONAL_JUMP)
// 00561d8d: JMP 0x00561d30
//   XREF to: 00561d30 (UNCONDITIONAL_JUMP)
// 00561d8f: MOV byte ptr [EAX + EBP*0x1 + 0x64],0x0
//   Label: LAB_00561d8f
// 00561d94: MOV EAX,0x1
// 00561d99: ADD ESP,0x4
// 00561d9c: POP EBP
// 00561d9d: POP EDI
// 00561d9e: POP ESI
// 00561d9f: POP EBX
// 00561da0: RET
