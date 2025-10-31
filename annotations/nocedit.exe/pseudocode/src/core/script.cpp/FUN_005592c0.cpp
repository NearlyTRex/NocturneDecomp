// Name: core_script.cpp_FUN_005592c0
// Address: 005592c0
// Address Range: [[005592c0, 00559352]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005592c0()
// Cross-references:
//   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370 (0055a370) at 0055a3b8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_0064151b
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_string.c_strstr_FUN_005fedd0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_005592c0(undefined4 param_1, undefined4 param_2) */

void core_script_cpp_FUN_005592c0(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *in_stack_00000004;
  char *in_stack_00000008;
  
  *in_stack_00000008 = '\0';
  while (pcVar3 = in_stack_00000008,
        (g_CharacterClassificationTable[(byte)(*in_stack_00000004 + 1)] & 2U) != 0) {
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  do {
    cVar1 = *in_stack_00000004;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000004[1];
    in_stack_00000004 = in_stack_00000004 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar2 = crt_string_c_strstr_FUN_005fedd0(in_stack_00000008,"//");
  pcVar3 = in_stack_00000008;
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == '\0') goto joined_r0x00559334;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == '\0') goto joined_r0x00559334;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
joined_r0x00559334:
  while ((in_stack_00000008 < pcVar2 &&
         ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2U) != 0))) {
    pcVar2[-1] = '\0';
    pcVar2 = pcVar2 + -1;
  }
  return;
}


// Assembly code:
// 005592c0: PUSH EBX
//   Label: core_script.cpp_FUN_005592c0
// 005592c1: PUSH ESI
// 005592c2: PUSH EDI
// 005592c3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005592c7: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005592cb: MOV byte ptr [EBX],0x0
// 005592ce: MOV AL,byte ptr [ESI]
//   Label: LAB_005592ce
// 005592d0: INC AL
// 005592d2: AND EAX,0xff
// 005592d7: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 005592de: JZ 0x005592e3
//   XREF to: 005592e3 (CONDITIONAL_JUMP)
// 005592e0: INC ESI
// 005592e1: JMP 0x005592ce
//   XREF to: 005592ce (UNCONDITIONAL_JUMP)
// 005592e3: MOV EDI,EBX
//   Label: LAB_005592e3
// 005592e5: PUSH EDI
// 005592e6: MOV AL,byte ptr [ESI]
//   Label: LAB_005592e6
// 005592e8: MOV byte ptr [EDI],AL
// 005592ea: CMP AL,0x0
// 005592ec: JZ 0x005592fe
//   XREF to: 005592fe (CONDITIONAL_JUMP)
// 005592ee: MOV AL,byte ptr [ESI + 0x1]
// 005592f1: ADD ESI,0x2
// 005592f4: MOV byte ptr [EDI + 0x1],AL
// 005592f7: ADD EDI,0x2
// 005592fa: CMP AL,0x0
// 005592fc: JNZ 0x005592e6
//   XREF to: 005592e6 (CONDITIONAL_JUMP)
// 005592fe: POP EDI
//   Label: LAB_005592fe
// 005592ff: PUSH 0x64151b
//   XREF to: 0064151b (DATA)
// 00559304: PUSH EBX
// 00559305: CALL crt_string.c_strstr_FUN_005fedd0
//   XREF to: 005fedd0 (UNCONDITIONAL_CALL)
// 0055930a: ADD ESP,0x8
// 0055930d: TEST EAX,EAX
// 0055930f: JZ 0x00559314
//   XREF to: 00559314 (CONDITIONAL_JUMP)
// 00559311: MOV byte ptr [EAX],0x0
// 00559314: MOV ESI,EBX
//   Label: LAB_00559314
// 00559316: XOR DL,DL
// 00559318: MOV AL,byte ptr [ESI]
//   Label: LAB_00559318
// 0055931a: CMP AL,DL
// 0055931c: JZ 0x00559330
//   XREF to: 00559330 (CONDITIONAL_JUMP)
// 0055931e: CMP AL,0x0
// 00559320: JZ 0x0055932e
//   XREF to: 0055932e (CONDITIONAL_JUMP)
// 00559322: INC ESI
// 00559323: MOV AL,byte ptr [ESI]
// 00559325: CMP AL,DL
// 00559327: JZ 0x00559330
//   XREF to: 00559330 (CONDITIONAL_JUMP)
// 00559329: INC ESI
// 0055932a: CMP AL,0x0
// 0055932c: JNZ 0x00559318
//   XREF to: 00559318 (CONDITIONAL_JUMP)
// 0055932e: SUB ESI,ESI
//   Label: LAB_0055932e
// 00559330: MOV EAX,ESI
//   Label: LAB_00559330
// 00559332: CMP ESI,EBX
// 00559334: JBE 0x0055934f
//   XREF to: 0055934f (CONDITIONAL_JUMP)
// 00559336: MOV DL,byte ptr [EAX + -0x1]
//   Label: LAB_00559336
// 00559339: INC DL
// 0055933b: MOVZX ESI,DL
// 0055933e: TEST byte ptr [ESI + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 00559345: JZ 0x0055934f
//   XREF to: 0055934f (CONDITIONAL_JUMP)
// 00559347: DEC EAX
// 00559348: MOV byte ptr [EAX],0x0
// 0055934b: CMP EAX,EBX
// 0055934d: JA 0x00559336
//   XREF to: 00559336 (CONDITIONAL_JUMP)
// 0055934f: POP EDI
//   Label: LAB_0055934f
// 00559350: POP ESI
// 00559351: POP EBX
// 00559352: RET
