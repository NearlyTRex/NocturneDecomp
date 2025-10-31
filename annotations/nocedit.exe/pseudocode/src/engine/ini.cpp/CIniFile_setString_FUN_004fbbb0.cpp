// Name: engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
// Address: 004fbbb0
// Address Range: [[004fbbb0, 004fbc2e]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_CIniFile_setString_FUN_004fbbb0(CIniFile * this, char * key, char * value)
// Cross-references:
//   core_inivar.cpp_writeIniData_FUN_004fc510 (004fc510) at 004fc5b8 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_writeIni_FUN_00584920 (00584920) at 0058492f [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30 (004fbd30) at 004fbd5c [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 (004fbc90) at 004fbcb8 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_writeIni_FUN_005ac220 (005ac220) at 005ac29a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_ini_cpp_0062fd08
//   TerminatedCString s_CIniFile_setString_filen_0062fd1a
//   TerminatedCString s_engine_ini_cpp_0062fd44
//   TerminatedCString s_CIniFile_setString_secti_0062fd56
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_ini.cpp_writeProfileString_FUN_004fba40

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setString_FUN_004fbbb0(CIniFile *this,char *key,char *value)

{
  char *in_stack_00000010;
  
  if (this->filename[0] == '\0') {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x275;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CIniFile::setString - filename not write!");
  }
  if (this->section[0] == '\0') {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x276;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CIniFile::setString - section not write!");
  }
  engine_ini_cpp_writeProfileString_FUN_004fba40
            (this->section,value,in_stack_00000010,this->filename);
  return;
}


// Assembly code:
// 004fbbb0: PUSH EBX
//   Label: engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
// 004fbbb1: PUSH EBP
// 004fbbb2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004fbbb6: CMP byte ptr [EBX],0x0
// 004fbbb9: JZ 0x004fbbe1
//   XREF to: 004fbbe1 (CONDITIONAL_JUMP)
// 004fbbbb: CMP byte ptr [EBX + 0x100],0x0
//   Label: LAB_004fbbbb
// 004fbbc2: JZ 0x004fbc06
//   XREF to: 004fbc06 (CONDITIONAL_JUMP)
// 004fbbc4: PUSH EBX
//   Label: LAB_004fbbc4
// 004fbbc5: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004fbbc9: PUSH EBP
// 004fbbca: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004fbbce: PUSH EAX
// 004fbbcf: ADD EBX,0x100
// 004fbbd5: PUSH EBX
// 004fbbd6: CALL engine_ini.cpp_writeProfileString_FUN_004fba40
//   XREF to: 004fba40 (UNCONDITIONAL_CALL)
// 004fbbdb: ADD ESP,0x10
// 004fbbde: POP EBP
// 004fbbdf: POP EBX
// 004fbbe0: RET
// 004fbbe1: MOV EDX,0x62fd08
//   Label: LAB_004fbbe1
//   XREF to: 0062fd08 (PARAM)
// 004fbbe6: MOV ECX,0x275
// 004fbbeb: PUSH 0x62fd1a
//   XREF to: 0062fd1a (DATA)
// 004fbbf0: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004fbbf6: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004fbbfc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004fbc01: ADD ESP,0x4
// 004fbc04: JMP 0x004fbbbb
//   XREF to: 004fbbbb (UNCONDITIONAL_JUMP)
// 004fbc06: PUSH EDI
//   Label: LAB_004fbc06
// 004fbc07: PUSH ESI
// 004fbc08: MOV ESI,0x62fd44
//   XREF to: 0062fd44 (DATA)
// 004fbc0d: MOV EDI,0x276
// 004fbc12: PUSH 0x62fd56
//   XREF to: 0062fd56 (DATA)
// 004fbc17: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004fbc1d: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004fbc23: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004fbc28: ADD ESP,0x4
// 004fbc2b: POP ESI
// 004fbc2c: POP EDI
// 004fbc2d: JMP 0x004fbbc4
//   XREF to: 004fbbc4 (UNCONDITIONAL_JUMP)
