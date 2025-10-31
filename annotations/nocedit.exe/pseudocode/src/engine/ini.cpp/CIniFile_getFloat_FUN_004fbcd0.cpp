// Name: engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0
// Address: 004fbcd0
// Address Range: [[004fbcd0, 004fbd26]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0(CIniFile * this, char * key, float * output)
// Cross-references:
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005ac06c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_g_0062fd88
//   TerminatedCString s_f_0062fd8b
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c
//   engine_ini.cpp_CIniFile_getString_FUN_004fbb20

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_getFloat_FUN_004fbcd0(CIniFile *this,char *key,float *output)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_ffffff9c;
  char acStack_60 [92];
  
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff98,"%g",(double)*output);
  engine_ini_cpp_CIniFile_getString_FUN_004fbb20
            ((CIniFile *)key,(char *)output,&stack0xffffff9c,100,in_stack_ffffff9c);
  crt_stdio_c_sscanf_FUN_0060013c(acStack_60,"%f");
  return;
}


// Assembly code:
// 004fbcd0: PUSH EBX
//   Label: engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0
// 004fbcd1: SUB ESP,0x64
// 004fbcd4: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0xc] (READ)
// 004fbcd8: SUB ESP,0x8
// 004fbcdb: FLD float ptr [EAX]
// 004fbcdd: FSTP double ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 004fbce0: PUSH 0x62fd88
//   XREF to: 0062fd88 (DATA)
// 004fbce5: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x68] (DATA)
// 004fbce9: PUSH EAX
// 004fbcea: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004fbcef: ADD ESP,0x10
// 004fbcf2: PUSH 0x64
// 004fbcf4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x68] (DATA)
// 004fbcf8: PUSH EAX
// 004fbcf9: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x8] (READ)
// 004fbcfd: PUSH EDX
// 004fbcfe: MOV ECX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 004fbd02: PUSH ECX
// 004fbd03: CALL engine_ini.cpp_CIniFile_getString_FUN_004fbb20
//   XREF to: 004fbb20 (UNCONDITIONAL_CALL)
// 004fbd08: ADD ESP,0x10
// 004fbd0b: MOV EBX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0xc] (READ)
// 004fbd0f: PUSH EBX
// 004fbd10: PUSH 0x62fd8b
//   XREF to: 0062fd8b (DATA)
// 004fbd15: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x68] (DATA)
// 004fbd19: PUSH EAX
// 004fbd1a: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 004fbd1f: ADD ESP,0xc
// 004fbd22: ADD ESP,0x64
// 004fbd25: POP EBX
// 004fbd26: RET
