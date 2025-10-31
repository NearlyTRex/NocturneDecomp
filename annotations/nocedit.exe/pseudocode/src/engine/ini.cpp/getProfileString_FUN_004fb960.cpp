// Name: engine_ini.cpp_getProfileString_FUN_004fb960
// Address: 004fb960
// Address Range: [[004fb960, 004fb993]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_getProfileString_FUN_004fb960(char * section, char * key, char * default_value, char * output_buffer, int buffer_size, char * filename)
// Cross-references:
//   engine_ini.cpp_CIniFile_getString_FUN_004fbb20 (004fbb20) at 004fbb4c [UNCONDITIONAL_CALL]
// Globals:
//   CIni g_CIniInstance
// Function calls:
//   engine_ini.cpp_CIni_getProfileString_FUN_004fb250

#include "nocturne.h"

void __cdecl
engine_ini_cpp_getProfileString_FUN_004fb960
          (char *section,char *key,char *default_value,char *output_buffer,int buffer_size,
          char *filename)

{
  engine_ini_cpp_CIni_getProfileString_FUN_004fb250
            (&g_CIniInstance,section,key,default_value,output_buffer,buffer_size,filename);
  return;
}


// Assembly code:
// 004fb960: PUSH EBX
//   Label: engine_ini.cpp_getProfileString_FUN_004fb960
// 004fb961: PUSH ESI
// 004fb962: PUSH EDI
// 004fb963: PUSH EBP
// 004fb964: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004fb968: PUSH EDX
// 004fb969: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 004fb96d: PUSH ECX
// 004fb96e: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 004fb972: PUSH EBX
// 004fb973: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 004fb977: PUSH ESI
// 004fb978: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 004fb97c: PUSH EDI
// 004fb97d: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 004fb981: PUSH EBP
// 004fb982: PUSH 0x2db8a60
//   XREF to: 02db8a60 (DATA)
// 004fb987: CALL engine_ini.cpp_CIni_getProfileString_FUN_004fb250
//   XREF to: 004fb250 (UNCONDITIONAL_CALL)
// 004fb98c: ADD ESP,0x1c
// 004fb98f: POP EBP
// 004fb990: POP EDI
// 004fb991: POP ESI
// 004fb992: POP EBX
// 004fb993: RET
