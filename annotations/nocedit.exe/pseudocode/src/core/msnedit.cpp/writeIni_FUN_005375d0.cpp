// Name: core_msnedit.cpp_writeIni_FUN_005375d0
// Address: 005375d0
// Address Range: [[005375d0, 00537654]]
// Convention: __cdecl
// Signature: void core_msnedit.cpp_writeIni_FUN_005375d0(CDemonMission * mission, CIniFile * ini_file)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_writeIni_FUN_005375d0(CDemonMission *mission,CIniFile *ini_file)

{
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"renderSkyInEditor",*(int *)(mission->unk2 + 0x24));
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"renderWaterInEditor",*(int *)(mission->unk2 + 0x28));
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"fullLightInEditor",*(int *)(mission->unk2 + 0x2c));
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"disableMouseHitOnBarriers",g_DisableMouseHitOnBarrier);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"dynamicRenderMode",g_DynamicRenderMode);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"confirmNewActorNames",g_ConfirmNewActorNames);
  return;
}
