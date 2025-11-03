// Name: core_event.cpp_FUN_004aa6c0
// Address: 004aa6c0
// Address Range: [[004aa6c0, 004aa7cd]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa6c0()
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ab821 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_No_opening_parenthesis_00624532
//   TerminatedCString s_Argument_too_long_00624549
//   TerminatedCString s_Can_t_find_closing_paren_0062455b
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

char * core_event_cpp_FUN_004aa6c0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  SIZE_T n;
  int iVar6;
  int *in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_0000000c;
  
  pcVar3 = (char *)*in_stack_00000004;
  while ((g_CharacterClassificationTable[(byte)(*pcVar3 + 1)] & 2U) != 0) {
    pcVar3 = pcVar3 + 1;
  }
  *in_stack_00000004 = (int)pcVar3;
  if (*pcVar3 != '(') {
    return "No opening parenthesis";
  }
  iVar6 = 0;
  iVar4 = 0;
  if (0 < in_stack_0000000c) {
    do {
      iVar2 = *in_stack_00000004;
      pcVar3 = (char *)(iVar2 + 1);
      *in_stack_00000004 = (int)pcVar3;
      if (*pcVar3 == '\0') {
        return "Can't find closing parenthesis";
      }
      if (*pcVar3 == '(') {
        iVar6 = iVar6 + 1;
      }
      else if (*pcVar3 == ')') {
        if (iVar6 == 0) {
          *in_stack_00000004 = iVar2 + 2;
          in_stack_00000008[iVar4] = '\0';
          uVar5 = 0xffffffff;
          pcVar3 = in_stack_00000008;
          goto code_r0x004aa759;
        }
        iVar6 = iVar6 + -1;
      }
      pcVar3 = in_stack_00000008 + iVar4;
      iVar4 = iVar4 + 1;
      *pcVar3 = *(char *)*in_stack_00000004;
    } while (iVar4 < in_stack_0000000c);
  }
  return "Argument too long";
  while( true ) {
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    if (cVar1 == '\0') break;
code_r0x004aa759:
    if (uVar5 == 0) break;
  }
  n = ~uVar5 - 1;
  if (0 < (int)n) {
    pcVar3 = in_stack_00000008 + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar3[-1] + 1)] & 2U) == 0) break;
      n = n - 1;
      pcVar3 = pcVar3 + -1;
    } while (0 < (int)n);
  }
  in_stack_00000008[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(*in_stack_00000008 + 1)] & 2U) != 0) {
    crt_string_c_memmove_FUN_005fe5e0(in_stack_00000008,in_stack_00000008 + 1,n);
    n = n - 1;
  }
  pcVar3 = (char *)*in_stack_00000004;
  while ((g_CharacterClassificationTable[(byte)(*pcVar3 + 1)] & 2U) != 0) {
    pcVar3 = pcVar3 + 1;
  }
  *in_stack_00000004 = (int)pcVar3;
  return (char *)0x0;
}


// Assembly code:
// 004aa6c0: PUSH EBX
//   Label: core_event.cpp_FUN_004aa6c0
// 004aa6c1: PUSH ESI
// 004aa6c2: PUSH EDI
// 004aa6c3: PUSH EBP
// 004aa6c4: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004aa6c8: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004aa6cc: MOV ECX,dword ptr [ESI]
// 004aa6ce: MOV AL,byte ptr [ECX]
//   Label: LAB_004aa6ce
// 004aa6d0: INC AL
// 004aa6d2: AND EAX,0xff
// 004aa6d7: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004aa6de: JZ 0x004aa6e3
//   XREF to: 004aa6e3 (CONDITIONAL_JUMP)
// 004aa6e0: INC ECX
// 004aa6e1: JMP 0x004aa6ce
//   XREF to: 004aa6ce (UNCONDITIONAL_JUMP)
// 004aa6e3: MOV dword ptr [ESI],ECX
//   Label: LAB_004aa6e3
// 004aa6e5: CMP byte ptr [ECX],0x28
// 004aa6e8: JNZ 0x004aa724
//   XREF to: 004aa724 (CONDITIONAL_JUMP)
// 004aa6ea: XOR EBX,EBX
// 004aa6ec: XOR ECX,ECX
// 004aa6ee: TEST EDI,EDI
// 004aa6f0: JLE 0x004aa71a
//   XREF to: 004aa71a (CONDITIONAL_JUMP)
// 004aa6f2: MOV EDX,dword ptr [ESI]
//   Label: LAB_004aa6f2
// 004aa6f4: INC EDX
// 004aa6f5: MOV dword ptr [ESI],EDX
// 004aa6f7: MOV EAX,EDX
// 004aa6f9: CMP byte ptr [EDX],0x0
// 004aa6fc: JZ 0x004aa72e
//   XREF to: 004aa72e (CONDITIONAL_JUMP)
// 004aa6fe: MOV DH,byte ptr [EAX]
// 004aa700: CMP DH,0x28
// 004aa703: JNZ 0x004aa738
//   XREF to: 004aa738 (CONDITIONAL_JUMP)
// 004aa705: INC EBX
// 004aa706: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_004aa706
//   XREF to: Stack[0x8] (READ)
// 004aa70a: MOV EAX,ECX
// 004aa70c: MOV EBP,dword ptr [ESI]
// 004aa70e: ADD EDX,EAX
// 004aa710: MOV AL,byte ptr [EBP]
// 004aa713: INC ECX
// 004aa714: MOV byte ptr [EDX],AL
// 004aa716: CMP ECX,EDI
// 004aa718: JL 0x004aa6f2
//   XREF to: 004aa6f2 (CONDITIONAL_JUMP)
// 004aa71a: MOV EAX,0x624549
//   Label: LAB_004aa71a
//   XREF to: 00624549 (DATA)
// 004aa71f: POP EBP
// 004aa720: POP EDI
// 004aa721: POP ESI
// 004aa722: POP EBX
// 004aa723: RET
// 004aa724: MOV EAX,0x624532
//   Label: LAB_004aa724
//   XREF to: 00624532 (DATA)
// 004aa729: POP EBP
// 004aa72a: POP EDI
// 004aa72b: POP ESI
// 004aa72c: POP EBX
// 004aa72d: RET
// 004aa72e: MOV EAX,0x62455b
//   Label: LAB_004aa72e
//   XREF to: 0062455b (DATA)
// 004aa733: POP EBP
// 004aa734: POP EDI
// 004aa735: POP ESI
// 004aa736: POP EBX
// 004aa737: RET
// 004aa738: CMP DH,0x29
//   Label: LAB_004aa738
// 004aa73b: JNZ 0x004aa706
//   XREF to: 004aa706 (CONDITIONAL_JUMP)
// 004aa73d: TEST EBX,EBX
// 004aa73f: JZ 0x004aa744
//   XREF to: 004aa744 (CONDITIONAL_JUMP)
// 004aa741: DEC EBX
// 004aa742: JMP 0x004aa706
//   XREF to: 004aa706 (UNCONDITIONAL_JUMP)
// 004aa744: MOV EBX,dword ptr [ESP + 0x18]
//   Label: LAB_004aa744
//   XREF to: Stack[0x8] (READ)
// 004aa748: INC EAX
// 004aa749: MOV EBP,EBX
// 004aa74b: ADD ECX,EBX
// 004aa74d: MOV dword ptr [ESI],EAX
// 004aa74f: MOV EDI,EBX
// 004aa751: MOV byte ptr [ECX],0x0
// 004aa754: SUB ECX,ECX
// 004aa756: DEC ECX
// 004aa757: XOR EAX,EAX
// 004aa759: SCASB.REPNE ES:EDI
// 004aa75b: NOT ECX
// 004aa75d: DEC ECX
// 004aa75e: MOV EAX,ECX
// 004aa760: MOV EBX,ECX
// 004aa762: TEST ECX,ECX
// 004aa764: JLE 0x004aa77d
//   XREF to: 004aa77d (CONDITIONAL_JUMP)
// 004aa766: LEA EAX,[ECX + EBP*0x1]
// 004aa769: MOV DL,byte ptr [EAX + -0x1]
//   Label: LAB_004aa769
// 004aa76c: INC DL
// 004aa76e: AND EDX,0xff
// 004aa774: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004aa77b: JNZ 0x004aa7a7
//   XREF to: 004aa7a7 (CONDITIONAL_JUMP)
// 004aa77d: LEA EAX,[EBX + EBP*0x1]
//   Label: LAB_004aa77d
// 004aa780: LEA EDI,[EBP + 0x1]
// 004aa783: MOV byte ptr [EAX],0x0
// 004aa786: MOV AL,byte ptr [EBP]
//   Label: LAB_004aa786
// 004aa789: INC AL
// 004aa78b: AND EAX,0xff
// 004aa790: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004aa797: JZ 0x004aa7af
//   XREF to: 004aa7af (CONDITIONAL_JUMP)
// 004aa799: PUSH EBX
// 004aa79a: PUSH EDI
// 004aa79b: PUSH EBP
// 004aa79c: DEC EBX
// 004aa79d: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004aa7a2: ADD ESP,0xc
// 004aa7a5: JMP 0x004aa786
//   XREF to: 004aa786 (UNCONDITIONAL_JUMP)
// 004aa7a7: DEC EBX
//   Label: LAB_004aa7a7
// 004aa7a8: DEC EAX
// 004aa7a9: TEST EBX,EBX
// 004aa7ab: JG 0x004aa769
//   XREF to: 004aa769 (CONDITIONAL_JUMP)
// 004aa7ad: JMP 0x004aa77d
//   XREF to: 004aa77d (UNCONDITIONAL_JUMP)
// 004aa7af: MOV EAX,dword ptr [ESI]
//   Label: LAB_004aa7af
// 004aa7b1: MOV BL,byte ptr [EAX]
//   Label: LAB_004aa7b1
// 004aa7b3: XOR ECX,ECX
// 004aa7b5: INC BL
// 004aa7b7: MOV CL,BL
// 004aa7b9: TEST byte ptr [ECX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004aa7c0: JZ 0x004aa7c5
//   XREF to: 004aa7c5 (CONDITIONAL_JUMP)
// 004aa7c2: INC EAX
// 004aa7c3: JMP 0x004aa7b1
//   XREF to: 004aa7b1 (UNCONDITIONAL_JUMP)
// 004aa7c5: MOV dword ptr [ESI],EAX
//   Label: LAB_004aa7c5
// 004aa7c7: XOR EAX,EAX
// 004aa7c9: POP EBP
// 004aa7ca: POP EDI
// 004aa7cb: POP ESI
// 004aa7cc: POP EBX
// 004aa7cd: RET
