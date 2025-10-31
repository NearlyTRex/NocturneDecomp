// Name: engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
// Address: 004fbc90
// Address Range: [[004fbc90, 004fbcc4]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
// Cross-references:
//   core_inivar.cpp_writeIniData_FUN_004fc510 (004fc510) at 004fc740 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 00507665 [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 00507345 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_writeIni_FUN_005375d0 (005375d0) at 005375e6 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055ef72 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_writeIni_FUN_005ac220 (005ac220) at 005ac2e6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_0062fd85
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_ini.cpp_CIniFile_setString_FUN_004fbbb0

#include "nocturne.h"

void __cdecl engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile *this_ptr,char *key,int value)

{
  BADSPACEBASE *in_ESP;
  char acStack_64 [8];
  char local_5c;
  
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff98,"%d",value);
  engine_ini_cpp_CIniFile_setString_FUN_004fbbb0((CIniFile *)key,(char *)value,acStack_64);
  return;
}


// Assembly code:
// 004fbc90: PUSH EBX
//   Label: engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
// 004fbc91: SUB ESP,0x64
// 004fbc94: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0xc] (READ)
// 004fbc98: PUSH EDX
// 004fbc99: PUSH 0x62fd85
//   XREF to: 0062fd85 (DATA)
// 004fbc9e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x68] (DATA)
// 004fbca2: PUSH EAX
// 004fbca3: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004fbca8: ADD ESP,0xc
// 004fbcab: MOV EAX,ESP
// 004fbcad: PUSH EAX
// 004fbcae: MOV ECX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 004fbcb2: PUSH ECX
// 004fbcb3: MOV EBX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 004fbcb7: PUSH EBX
// 004fbcb8: CALL engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
//   XREF to: 004fbbb0 (UNCONDITIONAL_CALL)
// 004fbcbd: ADD ESP,0xc
// 004fbcc0: ADD ESP,0x64
// 004fbcc3: POP EBX
// 004fbcc4: RET
