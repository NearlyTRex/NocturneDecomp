// Name: engine_ini.cpp_writeProfileString_FUN_004fba40
// Address: 004fba40
// Address Range: [[004fba40, 004fba65]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_writeProfileString_FUN_004fba40(char * section, char * key, char * value, char * filename)
// Cross-references:
//   engine_ini.cpp_CIniFile_setString_FUN_004fbbb0 (004fbbb0) at 004fbbd6 [UNCONDITIONAL_CALL]
// Globals:
//   CIni g_CIniInstance
// Function calls:
//   engine_ini.cpp_CIni_writeProfileString_FUN_004fb660

#include "nocturne.h"

void __cdecl
engine_ini_cpp_writeProfileString_FUN_004fba40(char *section,char *key,char *value,char *filename)

{
  engine_ini_cpp_CIni_writeProfileString_FUN_004fb660(&g_CIniInstance,section,key,value,filename);
  return;
}


// Assembly code:
// 004fba40: PUSH EBX
//   Label: engine_ini.cpp_writeProfileString_FUN_004fba40
// 004fba41: PUSH ESI
// 004fba42: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 004fba46: PUSH EDX
// 004fba47: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004fba4b: PUSH ECX
// 004fba4c: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004fba50: PUSH EBX
// 004fba51: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004fba55: PUSH ESI
// 004fba56: PUSH 0x2db8a60
//   XREF to: 02db8a60 (DATA)
// 004fba5b: CALL engine_ini.cpp_CIni_writeProfileString_FUN_004fb660
//   XREF to: 004fb660 (UNCONDITIONAL_CALL)
// 004fba60: ADD ESP,0x14
// 004fba63: POP ESI
// 004fba64: POP EBX
// 004fba65: RET
