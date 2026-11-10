// Name: core_set.cpp_CDemonSet_initScene_FUN_00534420
// Address: 00534420
// Address Range: [[00534420, 005346ad]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_initScene_FUN_00534420(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_initScene_FUN_00534420(CDemonSet *this_ptr)

{
  CDemonLight *this_ptr_00;
  char *pcVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  CDemonSet *pCVar5;
  uint uVar6;
  
  uVar6 = 0;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Initializing scene");
  core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar1,uVar6);
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0045c470();
  core_dfilter_cpp_CFilterCache_free_FUN_004596c0(g_CFilterCachePtr);
  _DAT_0203ad1c = 0;
  this_ptr->mirror_glass_actor_count = 0;
  core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_00448ca0(&g_CDemonCameraInstance);
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004503f0
            (&g_CDemonCameraInstance,(SFog *)&this_ptr->field_0x15ac40);
  *(uint *)&this_ptr->field_0x15ac64 = *(uint *)&this_ptr->field_0x15ac40;
  *(uint *)&this_ptr->field_0x15ac68 = *(uint *)&this_ptr->field_0x15ac44;
  *(uint *)&this_ptr->field_0x15ac6c = *(uint *)&this_ptr->field_0x15ac48;
  if (&this_ptr->field_0x15ac70 != &this_ptr->field_0x15ac4c) {
    *(uint *)&this_ptr->field_0x15ac70 = *(uint *)&this_ptr->field_0x15ac4c;
    *(uint *)&this_ptr->field_0x15ac74 = *(uint *)&this_ptr->field_0x15ac50;
    *(uint *)&this_ptr->field_0x15ac78 = *(uint *)&this_ptr->field_0x15ac54;
  }
  *(uint *)&this_ptr->field_0x15ac7c = *(uint *)&this_ptr->field_0x15ac58;
  *(uint *)&this_ptr->field_0x15ac80 = *(uint *)&this_ptr->field_0x15ac5c;
  *(uint *)&this_ptr->field_0x15ac84 = *(uint *)&this_ptr->field_0x15ac60;
  iVar4 = 0;
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
            (&g_CDemonCameraInstance,this_ptr->min_ambient_value);
  do {
    if (*(int *)(&DAT_0203a418 + iVar4) != 0) {
      _DAT_01d71de0 = "..\\core\\set.cpp";
      _DAT_01d71de4 = 0x3f1;
      core_main_c_FUN_004e4330("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 != 0x180);
  iVar4 = 0;
  _DAT_0203a414 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->light_count) {
    do {
      if (*(int *)pCVar5->lights == 0) {
        uVar6 = core_setutil_cpp_C3DSLight_create_FUN_00542940(this_ptr->lights + iVar4);
        *(uint *)(&DAT_0203a418 + _DAT_0203a414 * 4) = uVar6;
        core_setutil_cpp_C3DSLight_apply_FUN_00542aa0(this_ptr->lights + iVar4,uVar6);
        _DAT_0203a414 = _DAT_0203a414 + 1;
        if (0x60 < _DAT_0203a414) {
          _DAT_01d71de0 = "..\\core\\set.cpp";
          _DAT_01d71de4 = 0x408;
          core_main_c_FUN_004e4330("CDemonSet::initScene - Too many spotlights!");
        }
      }
      iVar4 = iVar4 + 1;
      pCVar5 = (CDemonSet *)&pCVar5->cameras[0xe].field_0x19c;
    } while (iVar4 < this_ptr->light_count);
  }
  iVar4 = 0;
  if (0 < _DAT_0203a414) {
    iVar2 = 0;
    do {
      this_ptr_00 = *(CDemonLight **)(&DAT_0203a418 + iVar2);
      core_dlight_cpp_CDemonLight_beginScene_FUN_0045c530(this_ptr_00,0);
      core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070(this_ptr_00);
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(this_ptr,9999.9,0);
      iVar2 = iVar2 + 4;
      iVar4 = iVar4 + 1;
      core_dlight_cpp_CDemonLight_endScene_FUN_0045c7e0(this_ptr_00,0);
    } while (iVar4 < _DAT_0203a414);
  }
  this_ptr->selected_camera_index = -1;
  this_ptr->previous_best_camera_index = -1;
  iVar4 = 0;
  _DAT_0203a598 = 0;
  _DAT_0203b3e8 = 0;
  _DAT_0203ad30 = 0;
  _DAT_0203aec4 = 0;
  this_ptr->previous_best_camera_timer = 0.0;
  core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_005418d0(this_ptr);
  if (0 < this_ptr->camera_count) {
    puVar3 = &this_ptr->cameras[0].field_0x100;
    pCVar5 = this_ptr;
    do {
      iVar4 = iVar4 + 1;
      uVar6 = core_setdir_cpp_FUN_00541a20(this_ptr,puVar3);
      *(uint *)&pCVar5->cameras[0].field_0x19c = uVar6;
      puVar3 = puVar3 + 0x1a4;
      pCVar5 = (CDemonSet *)&pCVar5->cameras[0].field_0x1a0;
    } while (iVar4 < this_ptr->camera_count);
  }
  core_weather_cpp_FUN_0057d050(0x02D0C1A0,this_ptr->weather_type);
  return;
}
