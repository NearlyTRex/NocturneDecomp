// Name: core_skeledit.cpp_LoadFileBoneStructureMaybe_FUN_005895f0
// Address: 005895f0
// Address Range: [[005895f0, 005896a1]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_LoadFileBoneStructureMaybe_FUN_005895f0()
// Cross-references:
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00592a7a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeledit_cpp_00649cda
//   TerminatedCString s_Unexpected_end_of_file_00649cef
//   TerminatedCString s_anon_00649d07
//   char[256] g_CharacterClassificationTable
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_string.c_strstr_FUN_005fedd0

#include "nocturne.h"

/* Signature: undefined4 core_skeledit.cpp_LoadFileBoneStructureMaybe(char* param_1, FILE* param_2,
   int param_3, undefined4 param_4) */

undefined4 core_skeledit_cpp_LoadFileBoneStructureMaybe_FUN_005895f0(void)

{
  int iVar1;
  char *pcVar2;
  char *in_stack_0000000c;
  FILE *in_stack_00000010;
  int in_stack_00000018;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x1c);
  do {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000010);
      if (iVar1 == -1) {
        if (in_stack_00000018 != 0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xd0;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Unexpected end of file!");
        }
        return 0;
      }
      pcVar2 = in_stack_0000000c;
    } while ((g_CharacterClassificationTable[(byte)((char)iVar1 + 1)] & 2U) != 0);
    do {
      *pcVar2 = (char)iVar1;
      pcVar2 = pcVar2 + 1;
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000010);
      if ((iVar1 == -1) || (iVar1 == 0xd)) break;
    } while (iVar1 != 10);
    *pcVar2 = '\0';
    pcVar2 = crt_string_c_strstr_FUN_005fedd0(in_stack_0000000c,"//");
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
    }
    if (*in_stack_0000000c != '\0') {
      return 1;
    }
  } while( true );
}


// Assembly code:
// 005895f0: PUSH 0x1c
//   Label: core_skeledit.cpp_LoadFileBoneStructureMaybe_FUN_005895f0
// 005895f5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 005895fa: PUSH EBX
// 005895fb: PUSH ESI
// 005895fc: PUSH EDI
// 005895fd: PUSH EBP
// 005895fe: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00589602: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00589606: MOV ESI,EBP
//   Label: LAB_00589606
// 00589608: PUSH EDI
//   Label: LAB_00589608
// 00589609: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0058960e: ADD ESP,0x4
// 00589611: MOV EBX,EAX
// 00589613: CMP EAX,-0x1
// 00589616: JNZ 0x00589649
//   XREF to: 00589649 (CONDITIONAL_JUMP)
// 00589618: CMP dword ptr [ESP + 0x1c],0x0
//   XREF to: Stack[0xc] (READ)
// 0058961d: JZ 0x00589642
//   XREF to: 00589642 (CONDITIONAL_JUMP)
// 0058961f: MOV ECX,0x649cda
//   XREF to: 00649cda (PARAM)
// 00589624: MOV EBX,0xd0
// 00589629: PUSH 0x649cef
//   XREF to: 00649cef (DATA)
// 0058962e: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00589634: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0058963a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058963f: ADD ESP,0x4
// 00589642: XOR EAX,EAX
//   Label: LAB_00589642
// 00589644: POP EBP
// 00589645: POP EDI
// 00589646: POP ESI
// 00589647: POP EBX
// 00589648: RET
// 00589649: INC AL
//   Label: LAB_00589649
// 0058964b: AND EAX,0xff
// 00589650: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 00589657: JNZ 0x00589608
//   XREF to: 00589608 (CONDITIONAL_JUMP)
// 00589659: PUSH EDI
//   Label: LAB_00589659
// 0058965a: MOV byte ptr [ESI],BL
// 0058965c: INC ESI
// 0058965d: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00589662: ADD ESP,0x4
// 00589665: MOV EBX,EAX
// 00589667: CMP EAX,-0x1
// 0058966a: JZ 0x00589676
//   XREF to: 00589676 (CONDITIONAL_JUMP)
// 0058966c: CMP EAX,0xd
// 0058966f: JZ 0x00589676
//   XREF to: 00589676 (CONDITIONAL_JUMP)
// 00589671: CMP EAX,0xa
// 00589674: JNZ 0x00589659
//   XREF to: 00589659 (CONDITIONAL_JUMP)
// 00589676: PUSH 0x649d07
//   Label: LAB_00589676
//   XREF to: 00649d07 (DATA)
// 0058967b: PUSH EBP
// 0058967c: MOV byte ptr [ESI],0x0
// 0058967f: CALL crt_string.c_strstr_FUN_005fedd0
//   XREF to: 005fedd0 (UNCONDITIONAL_CALL)
// 00589684: ADD ESP,0x8
// 00589687: TEST EAX,EAX
// 00589689: JZ 0x0058968e
//   XREF to: 0058968e (CONDITIONAL_JUMP)
// 0058968b: MOV byte ptr [EAX],0x0
// 0058968e: CMP byte ptr [EBP],0x0
//   Label: LAB_0058968e
// 00589692: JZ 0x00589606
//   XREF to: 00589606 (CONDITIONAL_JUMP)
// 00589698: MOV EAX,0x1
// 0058969d: POP EBP
// 0058969e: POP EDI
// 0058969f: POP ESI
// 005896a0: POP EBX
// 005896a1: RET
