// Name: engine_ini.cpp_CIniFile_getString_FUN_004fbb20
// Address: 004fbb20
// Address Range: [[004fbb20, 004fbba4]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_CIniFile_getString_FUN_004fbb20(CIniFile * this, char * key, char * output_buffer, int buffer_size, char * default_value)
// Cross-references:
//   core_inivar.cpp_readIniData_FUN_004fbd90 (004fbd90) at 004fbe6b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_readIni_FUN_00584900 (00584900) at 00584914 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0 (004fbcd0) at 004fbd03 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 (004fbc30) at 004fbc5f [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005abf8b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_ini_cpp_0062fc91
//   TerminatedCString s_CIniFile_getString_filen_0062fca3
//   TerminatedCString s_engine_ini_cpp_0062fccd
//   TerminatedCString s_CIniFile_getString_secti_0062fcdf
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_ini.cpp_getProfileString_FUN_004fb960

#include "nocturne.h"

void __cdecl
engine_ini_cpp_CIniFile_getString_FUN_004fbb20
          (CIniFile *this,char *key,char *output_buffer,int buffer_size,char *default_value)

{
  if (this->filename[0] == '\0') {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x26f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CIniFile::getString - filename not write!");
  }
  if (this->section[0] == '\0') {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x270;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CIniFile::getString - section not write!");
  }
  engine_ini_cpp_getProfileString_FUN_004fb960
            (this->section,output_buffer,(char *)buffer_size,(char *)buffer_size,(int)default_value,
             this->filename);
  return;
}


// Assembly code:
// 004fbb20: PUSH EBX
//   Label: engine_ini.cpp_CIniFile_getString_FUN_004fbb20
// 004fbb21: PUSH EBP
// 004fbb22: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004fbb26: CMP byte ptr [EBX],0x0
// 004fbb29: JZ 0x004fbb57
//   XREF to: 004fbb57 (CONDITIONAL_JUMP)
// 004fbb2b: CMP byte ptr [EBX + 0x100],0x0
//   Label: LAB_004fbb2b
// 004fbb32: JZ 0x004fbb7c
//   XREF to: 004fbb7c (CONDITIONAL_JUMP)
// 004fbb34: PUSH EBX
//   Label: LAB_004fbb34
// 004fbb35: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 004fbb39: PUSH EBP
// 004fbb3a: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004fbb3e: PUSH EAX
// 004fbb3f: PUSH EAX
// 004fbb40: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004fbb44: PUSH ECX
// 004fbb45: ADD EBX,0x100
// 004fbb4b: PUSH EBX
// 004fbb4c: CALL engine_ini.cpp_getProfileString_FUN_004fb960
//   XREF to: 004fb960 (UNCONDITIONAL_CALL)
// 004fbb51: ADD ESP,0x18
// 004fbb54: POP EBP
// 004fbb55: POP EBX
// 004fbb56: RET
// 004fbb57: MOV EDX,0x62fc91
//   Label: LAB_004fbb57
//   XREF to: 0062fc91 (PARAM)
// 004fbb5c: MOV ECX,0x26f
// 004fbb61: PUSH 0x62fca3
//   XREF to: 0062fca3 (DATA)
// 004fbb66: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004fbb6c: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004fbb72: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004fbb77: ADD ESP,0x4
// 004fbb7a: JMP 0x004fbb2b
//   XREF to: 004fbb2b (UNCONDITIONAL_JUMP)
// 004fbb7c: PUSH EDI
//   Label: LAB_004fbb7c
// 004fbb7d: PUSH ESI
// 004fbb7e: MOV ESI,0x62fccd
//   XREF to: 0062fccd (DATA)
// 004fbb83: MOV EDI,0x270
// 004fbb88: PUSH 0x62fcdf
//   XREF to: 0062fcdf (DATA)
// 004fbb8d: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004fbb93: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004fbb99: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004fbb9e: ADD ESP,0x4
// 004fbba1: POP ESI
// 004fbba2: POP EDI
// 004fbba3: JMP 0x004fbb34
//   XREF to: 004fbb34 (UNCONDITIONAL_JUMP)
