// Name: core_msnedit.cpp_readIni_FUN_00537530
// Address: 00537530
// Address Range: [[00537530, 005375c8]]
// Convention: __cdecl
// Signature: void core_msnedit.cpp_readIni_FUN_00537530(CDemonMission * mission_ptr, CIniFile * ini_file)
// Cross-references:
//   core_inivar.cpp_readIniData_FUN_004fbd90 (004fbd90) at 004fc4c3 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_renderSkyInEditor_0063b7cd
//   TerminatedCString s_renderWaterInEditor_0063b7df
//   TerminatedCString s_fullLightInEditor_0063b7f3
//   TerminatedCString s_disableMouseHitOnBarrier_0063b805
//   TerminatedCString s_dynamicRenderMode_0063b81f
//   TerminatedCString s_confirmNewActorNames_0063b831
//   undefined4 g_DynamicRenderMode
//   int g_ConfirmNewActorNames = 0x1
//   int g_DisableMouseHitOnBarrier
// Function calls:
//   engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30

#include "nocturne.h"

void __cdecl core_msnedit_cpp_readIni_FUN_00537530(CDemonMission *mission_ptr,CIniFile *ini_file)

{
  mission_ptr->field2_0xc[0x24] = '\0';
  mission_ptr->field2_0xc[0x25] = '\0';
  mission_ptr->field2_0xc[0x26] = '\0';
  mission_ptr->field2_0xc[0x27] = '\0';
  mission_ptr->field2_0xc[0x28] = '\0';
  mission_ptr->field2_0xc[0x29] = '\0';
  mission_ptr->field2_0xc[0x2a] = '\0';
  mission_ptr->field2_0xc[0x2b] = '\0';
  mission_ptr->field2_0xc[0x2c] = '\x01';
  mission_ptr->field2_0xc[0x2d] = '\0';
  mission_ptr->field2_0xc[0x2e] = '\0';
  mission_ptr->field2_0xc[0x2f] = '\0';
  g_DisableMouseHitOnBarrier = 0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"renderSkyInEditor",(int *)(mission_ptr->field2_0xc + 0x24));
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"renderWaterInEditor",(int *)(mission_ptr->field2_0xc + 0x28));
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"fullLightInEditor",(int *)(mission_ptr->field2_0xc + 0x2c));
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"disableMouseHitOnBarriers",&g_DisableMouseHitOnBarrier);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"dynamicRenderMode",&g_DynamicRenderMode);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"confirmNewActorNames",&g_ConfirmNewActorNames);
  return;
}


// Assembly code:
// 00537530: PUSH EBX
//   Label: core_msnedit.cpp_readIni_FUN_00537530
// 00537531: PUSH ESI
// 00537532: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00537536: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0053753a: LEA EAX,[EBX + 0x30]
// 0053753d: MOV dword ptr [EBX + 0x30],0x0
// 00537544: PUSH EAX
// 00537545: MOV dword ptr [EBX + 0x34],0x0
// 0053754c: PUSH 0x63b7cd
//   XREF to: 0063b7cd (DATA)
// 00537551: MOV dword ptr [EBX + 0x38],0x1
// 00537558: XOR EDX,EDX
// 0053755a: PUSH ESI
// 0053755b: MOV dword ptr [0x02f7a020],EDX
//   XREF to: 02f7a020 (WRITE)
// 00537561: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 00537566: ADD ESP,0xc
// 00537569: LEA EAX,[EBX + 0x34]
// 0053756c: PUSH EAX
// 0053756d: PUSH 0x63b7df
//   XREF to: 0063b7df (DATA)
// 00537572: PUSH ESI
// 00537573: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 00537578: ADD ESP,0xc
// 0053757b: ADD EBX,0x38
// 0053757e: PUSH EBX
// 0053757f: PUSH 0x63b7f3
//   XREF to: 0063b7f3 (DATA)
// 00537584: PUSH ESI
// 00537585: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 0053758a: ADD ESP,0xc
// 0053758d: PUSH 0x2f7a020
//   XREF to: 02f7a020 (DATA)
// 00537592: PUSH 0x63b805
//   XREF to: 0063b805 (DATA)
// 00537597: PUSH ESI
// 00537598: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 0053759d: ADD ESP,0xc
// 005375a0: PUSH 0x680810
//   XREF to: 00680810 (DATA)
// 005375a5: PUSH 0x63b81f
//   XREF to: 0063b81f (DATA)
// 005375aa: PUSH ESI
// 005375ab: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 005375b0: ADD ESP,0xc
// 005375b3: PUSH 0x680814
//   XREF to: 00680814 (DATA)
// 005375b8: PUSH 0x63b831
//   XREF to: 0063b831 (DATA)
// 005375bd: PUSH ESI
// 005375be: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 005375c3: ADD ESP,0xc
// 005375c6: POP ESI
// 005375c7: POP EBX
// 005375c8: RET
