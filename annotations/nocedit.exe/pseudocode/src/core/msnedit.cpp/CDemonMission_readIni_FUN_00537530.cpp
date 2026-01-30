// Name: core_msnedit.cpp_CDemonMission_readIni_FUN_00537530
// Address: 00537530
// Address Range: [[00537530, 005375c8]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_readIni_FUN_00537530(CDemonMission *this_ptr,CIniFile *ini_file)

#include "nocturne.h"

void __cdecl
core_msnedit_cpp_CDemonMission_readIni_FUN_00537530(CDemonMission *this_ptr,CIniFile *ini_file)

{
  this_ptr->unk2[0x24] = '\0';
  this_ptr->unk2[0x25] = '\0';
  this_ptr->unk2[0x26] = '\0';
  this_ptr->unk2[0x27] = '\0';
  this_ptr->unk2[0x28] = '\0';
  this_ptr->unk2[0x29] = '\0';
  this_ptr->unk2[0x2a] = '\0';
  this_ptr->unk2[0x2b] = '\0';
  this_ptr->unk2[0x2c] = '\x01';
  this_ptr->unk2[0x2d] = '\0';
  this_ptr->unk2[0x2e] = '\0';
  this_ptr->unk2[0x2f] = '\0';
  g_DisableMouseHitOnBarrier = 0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"renderSkyInEditor",(int *)(this_ptr->unk2 + 0x24));
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"renderWaterInEditor",(int *)(this_ptr->unk2 + 0x28));
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"fullLightInEditor",(int *)(this_ptr->unk2 + 0x2c));
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"disableMouseHitOnBarriers",&g_DisableMouseHitOnBarrier);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"dynamicRenderMode",&g_DynamicRenderMode);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"confirmNewActorNames",&g_ConfirmNewActorNames);
  return;
}
