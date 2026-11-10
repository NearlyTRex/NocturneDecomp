// Name: core_set.cpp_CDemonSet_initScene_FUN_0052d980
// Address: 0052d980
// Address Range: [[0052d980, 0052dc0d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_initScene_FUN_0052d980(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_initScene_FUN_0052d980(CDemonSet *this_ptr)

{
  CDemonLight *this_ptr_00;
  char *text;
  uint uVar1;
  int iVar2;
  CVector3f *position;
  CDemonSet *pCVar3;
  int iVar4;
  
  iVar4 = 0;
  text = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Initializing scene");
  core_level_cpp_CLevelLoader_update_FUN_004e1600(0x01D03000,text,iVar4);
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_00449f60();
  core_dfilter_cpp_CFilterCache_free_FUN_00447610(g_CFilterCachePtr);
  _DAT_01fc9608 = 0;
  this_ptr->mirror_glass_actor_count = 0;
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0043b4c0(&g_CDemonCameraInstance);
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00442bf0
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
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00441e80
            (&g_CDemonCameraInstance,*(float *)&this_ptr->field_0x14d150);
  do {
    if (*(int *)(&DAT_01fc8d04 + iVar4) != 0) {
      _DAT_01d046a0 = "..\\core\\set.cpp";
      _DAT_01d046a4 = 0x3e4;
      core_main_c_FUN_004e4500("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 != 0x180);
  iVar4 = 0;
  _DAT_01fc8d00 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->light_count) {
    do {
      if (*(int *)pCVar3->lights == 0) {
        uVar1 = core_setutil_cpp_C3DSLight_create_FUN_0053b6b0(this_ptr->lights + iVar4);
        *(uint *)(&DAT_01fc8d04 + _DAT_01fc8d00 * 4) = uVar1;
        core_setutil_cpp_C3DSLight_apply_FUN_0053b810(this_ptr->lights + iVar4,uVar1);
        _DAT_01fc8d00 = _DAT_01fc8d00 + 1;
        if (0x60 < _DAT_01fc8d00) {
          _DAT_01d046a0 = "..\\core\\set.cpp";
          _DAT_01d046a4 = 0x3fb;
          core_main_c_FUN_004e4500("CDemonSet::initScene - Too many spotlights!");
        }
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CDemonSet *)&pCVar3->cameras[0xe].field_0x19c;
    } while (iVar4 < this_ptr->light_count);
  }
  iVar4 = 0;
  if (0 < _DAT_01fc8d00) {
    iVar2 = 0;
    do {
      this_ptr_00 = *(CDemonLight **)(&DAT_01fc8d04 + iVar2);
      core_dlight_cpp_CDemonLight_beginScene_FUN_0044a020(this_ptr_00,0);
      core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044ab60(this_ptr_00);
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0(this_ptr,9999.9,0);
      iVar2 = iVar2 + 4;
      iVar4 = iVar4 + 1;
      core_dlight_cpp_CDemonLight_endScene_FUN_0044a2d0(this_ptr_00,0);
    } while (iVar4 < _DAT_01fc8d00);
  }
  this_ptr->selected_camera_index = -1;
  this_ptr->previous_best_camera_index = -1;
  iVar4 = 0;
  _DAT_01fc8e84 = 0;
  _DAT_01fc9cd4 = 0;
  _DAT_01fc961c = 0;
  _DAT_01fc97b0 = 0;
  this_ptr->previous_best_camera_timer = 0.0;
  core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_0053a610(this_ptr);
  if (0 < this_ptr->camera_count) {
    position = (CVector3f *)&this_ptr->cameras[0].field_0x100;
    pCVar3 = this_ptr;
    do {
      iVar4 = iVar4 + 1;
      iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_0053a760(this_ptr,position);
      *(int *)&pCVar3->cameras[0].field_0x19c = iVar2;
      position = position + 0x23;
      pCVar3 = (CDemonSet *)&pCVar3->cameras[0].field_0x1a0;
    } while (iVar4 < this_ptr->camera_count);
  }
  core_weather_cpp_CWeather_setWeatherType_FUN_0058b470(0x02661F80,this_ptr->weather_type);
  return;
}
