// Name: core_msnedit.cpp_CDemonMission_readIni_FUN_00537530
// Address: 00537530
// Address Range: [[00537530, 005375c8]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_readIni_FUN_00537530(CDemonMission *this_ptr,CIniFile *ini_file)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_readIni_FUN_00537530(CDemonMission *this_ptr,CIniFile *ini_file)

{
  this_ptr->render_sky_in_editor = 0;
  this_ptr->render_water_in_editor = 0;
  this_ptr->full_light_in_editor = 1;
  g_DisableMouseHitOnBarrier = 0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"renderSkyInEditor",&this_ptr->render_sky_in_editor);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"renderWaterInEditor",&this_ptr->render_water_in_editor);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"fullLightInEditor",&this_ptr->full_light_in_editor);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"disableMouseHitOnBarriers",&g_DisableMouseHitOnBarrier);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"dynamicRenderMode",&g_DynamicRenderMode);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (ini_file,"confirmNewActorNames",&g_ConfirmNewActorNames);
  return;
}
