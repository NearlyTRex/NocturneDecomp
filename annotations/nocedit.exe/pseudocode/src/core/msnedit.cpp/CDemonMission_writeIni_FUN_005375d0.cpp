// Name: core_msnedit.cpp_CDemonMission_writeIni_FUN_005375d0
// Address: 005375d0
// Address Range: [[005375d0, 00537654]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_writeIni_FUN_005375d0(CDemonMission *this_ptr,CIniFile *ini_file)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_writeIni_FUN_005375d0(CDemonMission *this_ptr,CIniFile *ini_file)

{
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"renderSkyInEditor",this_ptr->render_sky_in_editor);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"renderWaterInEditor",this_ptr->render_water_in_editor);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"fullLightInEditor",this_ptr->full_light_in_editor);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"disableMouseHitOnBarriers",g_DisableMouseHitOnBarrier);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"dynamicRenderMode",g_DynamicRenderMode);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
            (ini_file,"confirmNewActorNames",g_ConfirmNewActorNames);
  return;
}
