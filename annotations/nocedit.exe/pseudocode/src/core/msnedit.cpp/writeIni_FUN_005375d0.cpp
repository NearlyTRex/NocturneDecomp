// Name: core_msnedit.cpp_writeIni_FUN_005375d0
// Address: 005375d0
// Address Range: [[005375d0, 00537654]]
// Convention: __cdecl
// Signature: void core_msnedit.cpp_writeIni_FUN_005375d0(CDemonMission * mission, CIniFile * ini_file)
// Cross-references:
//   core_inivar.cpp_writeIniData_FUN_004fc510 (004fc510) at 004fcbad [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_renderSkyInEditor_0063b846
//   TerminatedCString s_renderWaterInEditor_0063b858
//   TerminatedCString s_fullLightInEditor_0063b86c
//   TerminatedCString s_disableMouseHitOnBarrier_0063b87e
//   TerminatedCString s_dynamicRenderMode_0063b898
//   TerminatedCString s_confirmNewActorNames_0063b8aa
//   undefined4 g_DynamicRenderMode
//   int g_ConfirmNewActorNames = 0x1
//   int g_DisableMouseHitOnBarrier
// Function calls:
//   engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90

#include "nocturne.h"

void __cdecl core_msnedit_cpp_writeIni_FUN_005375d0(CDemonMission *mission,CIniFile *ini_file)

{
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"renderSkyInEditor",*(int *)(mission->field2_0xc + 0x24));
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"renderWaterInEditor",*(int *)(mission->field2_0xc + 0x28));
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"fullLightInEditor",*(int *)(mission->field2_0xc + 0x2c));
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"disableMouseHitOnBarriers",g_DisableMouseHitOnBarrier);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"dynamicRenderMode",g_DynamicRenderMode);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"confirmNewActorNames",g_ConfirmNewActorNames);
  return;
}


// Assembly code:
// 005375d0: PUSH EBX
//   Label: core_msnedit.cpp_writeIni_FUN_005375d0
// 005375d1: PUSH ESI
// 005375d2: PUSH EDI
// 005375d3: PUSH EBP
// 005375d4: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005375d8: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005375dc: MOV EDX,dword ptr [ESI + 0x30]
// 005375df: PUSH EDX
// 005375e0: PUSH 0x63b846
//   XREF to: 0063b846 (DATA)
// 005375e5: PUSH EBX
// 005375e6: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 005375eb: ADD ESP,0xc
// 005375ee: MOV ECX,dword ptr [ESI + 0x34]
// 005375f1: PUSH ECX
// 005375f2: PUSH 0x63b858
//   XREF to: 0063b858 (DATA)
// 005375f7: PUSH EBX
// 005375f8: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 005375fd: ADD ESP,0xc
// 00537600: MOV EDI,dword ptr [ESI + 0x38]
// 00537603: PUSH EDI
// 00537604: PUSH 0x63b86c
//   XREF to: 0063b86c (DATA)
// 00537609: PUSH EBX
// 0053760a: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 0053760f: ADD ESP,0xc
// 00537612: MOV EBP,dword ptr [0x02f7a020]
//   XREF to: 02f7a020 (READ)
// 00537618: PUSH EBP
// 00537619: PUSH 0x63b87e
//   XREF to: 0063b87e (DATA)
// 0053761e: PUSH EBX
// 0053761f: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 00537624: ADD ESP,0xc
// 00537627: MOV EAX,[0x00680810]
//   XREF to: 00680810 (READ)
// 0053762c: PUSH EAX
// 0053762d: PUSH 0x63b898
//   XREF to: 0063b898 (DATA)
// 00537632: PUSH EBX
// 00537633: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 00537638: ADD ESP,0xc
// 0053763b: MOV EDX,dword ptr [0x00680814]
//   XREF to: 00680814 (READ)
// 00537641: PUSH EDX
// 00537642: PUSH 0x63b8aa
//   XREF to: 0063b8aa (DATA)
// 00537647: PUSH EBX
// 00537648: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 0053764d: ADD ESP,0xc
// 00537650: POP EBP
// 00537651: POP EDI
// 00537652: POP ESI
// 00537653: POP EBX
// 00537654: RET
