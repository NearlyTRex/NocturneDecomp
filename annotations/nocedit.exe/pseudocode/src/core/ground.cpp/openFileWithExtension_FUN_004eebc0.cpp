// Name: core_ground.cpp_openFileWithExtension_FUN_004eebc0
// Address: 004eebc0
// Address Range: [[004eebc0, 004eec9e]]
// Convention: __cdecl
// Signature: FILE * core_ground.cpp_openFileWithExtension_FUN_004eebc0(char * base_filename, char * file_extension, char * open_mode)
// Globals:
//   TerminatedCString s_core_ground_cpp_0062e571
//   TerminatedCString s_eopen_ext_not_found_0062e584
//   TerminatedCString s_core_ground_cpp_0062e59b
//   TerminatedCString s_eopen_Cannot_open_file_0062e5ae
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_dosio.c_getFile_FUN_00481a50

#include "nocturne.h"

FILE * __cdecl
core_ground_cpp_openFileWithExtension_FUN_004eebc0
          (char *base_filename,char *file_extension,char *open_mode)

{
  char cVar1;
  FILE *pFVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *in_stack_00000010;
  char *in_stack_00000014;
  
  pcVar5 = &stack0xffffffa0;
  pcVar3 = file_extension;
  do {
    cVar1 = *pcVar3;
    *pcVar5 = cVar1;
    pcVar4 = &stack0xffffffa0;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
    pcVar4 = &stack0xffffffa0;
  } while (cVar1 != '\0');
  do {
    pcVar3 = pcVar4;
    if (*pcVar4 == '.') goto LAB_004eec03;
    if (*pcVar4 == '\0') break;
    pcVar3 = pcVar4 + 1;
    if (*pcVar3 == '.') goto LAB_004eec03;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_004eec03:
  if (pcVar3 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x40;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - ext not found!");
  }
  pcVar3 = pcVar3 + 1;
  do {
    cVar1 = *in_stack_00000010;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000010[1];
    in_stack_00000010 = in_stack_00000010 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50(file_extension,&stack0xffffffa4,in_stack_00000014);
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x44;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - Cannot open file");
    return (FILE *)0x0;
  }
  return pFVar2;
}


// Assembly code:
// 004eebc0: PUSH EBX
//   Label: core_ground.cpp_openFileWithExtension_FUN_004eebc0
// 004eebc1: PUSH ESI
// 004eebc2: PUSH EDI
// 004eebc3: PUSH EBP
// 004eebc4: SUB ESP,0x50
// 004eebc7: MOV ESI,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x8] (READ)
// 004eebcb: MOV EDI,ESP
// 004eebcd: MOV DL,0x2e
// 004eebcf: PUSH EDI
// 004eebd0: MOV AL,byte ptr [ESI]
//   Label: LAB_004eebd0
// 004eebd2: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x60] (DATA)
// 004eebd4: CMP AL,0x0
// 004eebd6: JZ 0x004eebe8
//   XREF to: 004eebe8 (CONDITIONAL_JUMP)
// 004eebd8: MOV AL,byte ptr [ESI + 0x1]
// 004eebdb: ADD ESI,0x2
// 004eebde: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x5f] (WRITE)
// 004eebe1: ADD EDI,0x2
// 004eebe4: CMP AL,0x0
// 004eebe6: JNZ 0x004eebd0
//   XREF to: 004eebd0 (CONDITIONAL_JUMP)
// 004eebe8: POP EDI
//   Label: LAB_004eebe8
// 004eebe9: MOV ESI,ESP
// 004eebeb: MOV AL,byte ptr [ESI]
//   Label: LAB_004eebeb
//   XREF to: Stack[-0x60] (DATA)
// 004eebed: CMP AL,DL
// 004eebef: JZ 0x004eec03
//   XREF to: 004eec03 (CONDITIONAL_JUMP)
// 004eebf1: CMP AL,0x0
// 004eebf3: JZ 0x004eec01
//   XREF to: 004eec01 (CONDITIONAL_JUMP)
// 004eebf5: INC ESI
// 004eebf6: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x5f] (DATA)
// 004eebf8: CMP AL,DL
// 004eebfa: JZ 0x004eec03
//   XREF to: 004eec03 (CONDITIONAL_JUMP)
// 004eebfc: INC ESI
// 004eebfd: CMP AL,0x0
// 004eebff: JNZ 0x004eebeb
//   XREF to: 004eebeb (CONDITIONAL_JUMP)
// 004eec01: SUB ESI,ESI
//   Label: LAB_004eec01
// 004eec03: MOV EDI,ESI
//   Label: LAB_004eec03
// 004eec05: TEST ESI,ESI
// 004eec07: JNZ 0x004eec2c
//   XREF to: 004eec2c (CONDITIONAL_JUMP)
// 004eec09: MOV EDX,0x62e571
//   XREF to: 0062e571 (DATA)
// 004eec0e: MOV ECX,0x40
// 004eec13: PUSH 0x62e584
//   XREF to: 0062e584 (DATA)
// 004eec18: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004eec1e: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004eec24: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004eec29: ADD ESP,0x4
// 004eec2c: MOV ESI,dword ptr [ESP + 0x6c]
//   Label: LAB_004eec2c
//   XREF to: Stack[0xc] (READ)
// 004eec30: INC EDI
// 004eec31: MOV EBX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x10] (READ)
// 004eec35: PUSH EDI
// 004eec36: MOV AL,byte ptr [ESI]
//   Label: LAB_004eec36
// 004eec38: MOV byte ptr [EDI],AL
// 004eec3a: CMP AL,0x0
// 004eec3c: JZ 0x004eec4e
//   XREF to: 004eec4e (CONDITIONAL_JUMP)
// 004eec3e: MOV AL,byte ptr [ESI + 0x1]
// 004eec41: ADD ESI,0x2
// 004eec44: MOV byte ptr [EDI + 0x1],AL
// 004eec47: ADD EDI,0x2
// 004eec4a: CMP AL,0x0
// 004eec4c: JNZ 0x004eec36
//   XREF to: 004eec36 (CONDITIONAL_JUMP)
// 004eec4e: POP EDI
//   Label: LAB_004eec4e
// 004eec4f: PUSH EBX
// 004eec50: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x60] (DATA)
// 004eec54: PUSH EAX
// 004eec55: MOV ESI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 004eec59: PUSH ESI
// 004eec5a: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004eec5f: ADD ESP,0xc
// 004eec62: MOV ESI,EAX
// 004eec64: TEST EAX,EAX
// 004eec66: JZ 0x004eec72
//   XREF to: 004eec72 (CONDITIONAL_JUMP)
// 004eec68: MOV EAX,ESI
// 004eec6a: ADD ESP,0x50
// 004eec6d: POP EBP
// 004eec6e: POP EDI
// 004eec6f: POP ESI
// 004eec70: POP EBX
// 004eec71: RET
// 004eec72: MOV EDI,0x62e59b
//   Label: LAB_004eec72
//   XREF to: 0062e59b (DATA)
// 004eec77: MOV EBP,0x44
// 004eec7c: PUSH 0x62e5ae
//   XREF to: 0062e5ae (DATA)
// 004eec81: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004eec87: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004eec8d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004eec92: ADD ESP,0x4
// 004eec95: MOV EAX,ESI
// 004eec97: ADD ESP,0x50
// 004eec9a: POP EBP
// 004eec9b: POP EDI
// 004eec9c: POP ESI
// 004eec9d: POP EBX
// 004eec9e: RET
