// Name: core_msnedit.cpp_readIni_FUN_00537530
// Address: 00537530
// Address Range: [[00537530, 005375c8]]
// Convention: __cdecl
// Signature: void core_msnedit.cpp_readIni_FUN_00537530(CDemonMission * mission_ptr, CIniFile * ini_file)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_readIni_FUN_00537530(CDemonMission *mission_ptr,CIniFile *ini_file)

{
  mission_ptr->unk2[0x24] = '\0';
  mission_ptr->unk2[0x25] = '\0';
  mission_ptr->unk2[0x26] = '\0';
  mission_ptr->unk2[0x27] = '\0';
  mission_ptr->unk2[0x28] = '\0';
  mission_ptr->unk2[0x29] = '\0';
  mission_ptr->unk2[0x2a] = '\0';
  mission_ptr->unk2[0x2b] = '\0';
  mission_ptr->unk2[0x2c] = '\x01';
  mission_ptr->unk2[0x2d] = '\0';
  mission_ptr->unk2[0x2e] = '\0';
  mission_ptr->unk2[0x2f] = '\0';
  g_DisableMouseHitOnBarrier = 0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"renderSkyInEditor",(int *)(mission_ptr->unk2 + 0x24));
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"renderWaterInEditor",(int *)(mission_ptr->unk2 + 0x28));
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"fullLightInEditor",(int *)(mission_ptr->unk2 + 0x2c));
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"disableMouseHitOnBarriers",&g_DisableMouseHitOnBarrier);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"dynamicRenderMode",&g_DynamicRenderMode);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"confirmNewActorNames",&g_ConfirmNewActorNames);
  return;
}
