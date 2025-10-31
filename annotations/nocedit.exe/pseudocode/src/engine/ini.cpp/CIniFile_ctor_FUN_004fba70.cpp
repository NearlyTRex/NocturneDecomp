// Name: engine_ini.cpp_CIniFile_ctor_FUN_004fba70
// Address: 004fba70
// Address Range: [[004fba70, 004fba94]]
// Convention: __cdecl
// Signature: CIniFile * engine_ini.cpp_CIniFile_ctor_FUN_004fba70(CIniFile * this, char * filename, int read_mode)
// Cross-references:
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e1dac [UNCONDITIONAL_CALL]
//   core_inivar.cpp_readIniData_FUN_004fbd90 (004fbd90) at 004fbdc0 [UNCONDITIONAL_CALL]
//   core_inivar.cpp_writeIniData_FUN_004fc510 (004fc510) at 004fc526 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005073d5 [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 00507109 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055d23d [UNCONDITIONAL_CALL]
// Function calls:
//   engine_ini.cpp_CIniFile_init_FUN_004fbaa0
//   engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0

#include "nocturne.h"

CIniFile * __cdecl
engine_ini_cpp_CIniFile_ctor_FUN_004fba70(CIniFile *this,char *filename,int read_mode)

{
  char *in_stack_00000010;
  
  engine_ini_cpp_CIniFile_init_FUN_004fbaa0(this->filename,filename);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(this,in_stack_00000010);
  return this;
}


// Assembly code:
// 004fba70: PUSH EBX
//   Label: engine_ini.cpp_CIniFile_ctor_FUN_004fba70
// 004fba71: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004fba75: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004fba79: PUSH EDX
// 004fba7a: PUSH EBX
// 004fba7b: CALL engine_ini.cpp_CIniFile_init_FUN_004fbaa0
//   XREF to: 004fbaa0 (UNCONDITIONAL_CALL)
// 004fba80: ADD ESP,0x8
// 004fba83: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004fba87: PUSH ECX
// 004fba88: PUSH EBX
// 004fba89: CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
//   XREF to: 004fbae0 (UNCONDITIONAL_CALL)
// 004fba8e: ADD ESP,0x8
// 004fba91: MOV EAX,EBX
// 004fba93: POP EBX
// 004fba94: RET
