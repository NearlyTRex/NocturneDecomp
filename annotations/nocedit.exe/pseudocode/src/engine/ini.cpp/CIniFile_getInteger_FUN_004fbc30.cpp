// Name: engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
// Address: 004fbc30
// Address Range: [[004fbc30, 004fbc83]]
// Convention: __cdecl
// Signature: void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
// Cross-references:
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e1e21 [UNCONDITIONAL_CALL]
//   core_inivar.cpp_readIniData_FUN_004fbd90 (004fbd90) at 004fbe21 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005073f8 [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 0050712c [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_readIni_FUN_00537530 (00537530) at 00537561 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055d27a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005ac0c7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_0062fd7f
//   TerminatedCString s_d_0062fd82
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c
//   engine_ini.cpp_CIniFile_getString_FUN_004fbb20

#include "nocturne.h"

void __cdecl
engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile *ini_file,char *key_name,int *value_ptr)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_ffffff98;
  char acStack_64 [92];
  
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff94,"%d",*value_ptr);
  engine_ini_cpp_CIniFile_getString_FUN_004fbb20
            ((CIniFile *)key_name,(char *)value_ptr,&stack0xffffff98,100,in_stack_ffffff98);
  crt_stdio_c_sscanf_FUN_0060013c(acStack_64,"%d");
  return;
}


// Assembly code:
// 004fbc30: PUSH EBX
//   Label: engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
// 004fbc31: PUSH ESI
// 004fbc32: SUB ESP,0x64
// 004fbc35: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0xc] (READ)
// 004fbc39: MOV EDX,dword ptr [EAX]
// 004fbc3b: PUSH EDX
// 004fbc3c: PUSH 0x62fd7f
//   XREF to: 0062fd7f (DATA)
// 004fbc41: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 004fbc45: PUSH EAX
// 004fbc46: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004fbc4b: ADD ESP,0xc
// 004fbc4e: PUSH 0x64
// 004fbc50: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6c] (DATA)
// 004fbc54: PUSH EAX
// 004fbc55: MOV ECX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x8] (READ)
// 004fbc59: PUSH ECX
// 004fbc5a: MOV EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 004fbc5e: PUSH EBX
// 004fbc5f: CALL engine_ini.cpp_CIniFile_getString_FUN_004fbb20
//   XREF to: 004fbb20 (UNCONDITIONAL_CALL)
// 004fbc64: ADD ESP,0x10
// 004fbc67: MOV ESI,dword ptr [ESP + 0x78]
//   XREF to: Stack[0xc] (READ)
// 004fbc6b: PUSH ESI
// 004fbc6c: PUSH 0x62fd82
//   XREF to: 0062fd82 (DATA)
// 004fbc71: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 004fbc75: PUSH EAX
// 004fbc76: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 004fbc7b: ADD ESP,0xc
// 004fbc7e: ADD ESP,0x64
// 004fbc81: POP ESI
// 004fbc82: POP EBX
// 004fbc83: RET
