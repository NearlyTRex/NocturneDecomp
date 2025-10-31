// Name: engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30
// Address: 004fbd30
// Address Range: [[004fbd30, 004fbd67]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30(CIniFile * this, char * key, float value)
// Cross-references:
//   sound_sndmain.cpp_writeIni_FUN_005ac220 (005ac220) at 005ac3d1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_g_0062fd8e
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_ini.cpp_CIniFile_setString_FUN_004fbbb0

#include "nocturne.h"

void __cdecl
engine_ini_cpp_CIniFile_setFloatValue_FUN_004fbd30(CIniFile *this,char *key,float value)

{
  BADSPACEBASE *in_ESP;
  char local_60;
  
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff9c,"%g",(double)value);
  engine_ini_cpp_CIniFile_setString_FUN_004fbbb0((CIniFile *)key,(char *)value,&local_60);
  return;
}


// Assembly code:
// 004fbd30: SUB ESP,0x64
//   Label: engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30
// 004fbd33: FLD float ptr [ESP + 0x70]
//   XREF to: Stack[0xc] (READ)
// 004fbd37: SUB ESP,0x8
// 004fbd3a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x6c] (DATA)
// 004fbd3d: PUSH 0x62fd8e
//   XREF to: 0062fd8e (DATA)
// 004fbd42: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x64] (DATA)
// 004fbd46: PUSH EAX
// 004fbd47: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004fbd4c: ADD ESP,0x10
// 004fbd4f: MOV EAX,ESP
// 004fbd51: PUSH EAX
// 004fbd52: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 004fbd56: PUSH EDX
// 004fbd57: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 004fbd5b: PUSH ECX
// 004fbd5c: CALL engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
//   XREF to: 004fbbb0 (UNCONDITIONAL_CALL)
// 004fbd61: ADD ESP,0xc
// 004fbd64: ADD ESP,0x64
// 004fbd67: RET
