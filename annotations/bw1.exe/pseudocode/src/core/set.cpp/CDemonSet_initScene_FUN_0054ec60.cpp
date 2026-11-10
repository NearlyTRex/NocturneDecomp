// Name: core_set.cpp_CDemonSet_initScene_FUN_0054ec60
// Address: 0054ec60
// Address Range: [[0054ec60, 0054eeed]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_initScene_FUN_0054ec60(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_initScene_FUN_0054ec60(CDemonSet *this_ptr)

{
  CDemonLight *this_ptr_00;
  char *text;
  uint uVar1;
  int iVar2;
  byte *puVar3;
  CDemonSet *pCVar4;
  int iVar5;
  
  iVar5 = 0;
  text = support_newmsg_cpp_getLocalizedString_FUN_00531090("Initializing scene");
  core_level_cpp_CLevelLoader_update_FUN_004fe9c0(0x01D1BD1C,text,iVar5);
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_00462760();
  core_dfilter_cpp_CFilterCache_free_FUN_0045d770(g_CFilterCachePtr);
  _DAT_01fe55bc = 0;
  this_ptr->mirror_glass_actor_count = 0;
  core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0044cb60(&g_CDemonCameraInstance);
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004542a0
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
  iVar5 = 0;
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00453540
            (&g_CDemonCameraInstance,this_ptr->min_ambient_value);
  do {
    if (*(int *)(&DAT_01fe4cb8 + iVar5) != 0) {
      _DAT_01d1d400 = "..\\core\\set.cpp";
      _DAT_01d1d404 = 0x3e3;
      core_main_c_FUN_005030e0("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 != 0x180);
  iVar5 = 0;
  _DAT_01fe4cb4 = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->light_count) {
    do {
      if (*(int *)pCVar4->lights == 0) {
        uVar1 = core_setutil_cpp_C3DSLight_create_FUN_0055cf80(this_ptr->lights + iVar5);
        *(uint *)(&DAT_01fe4cb8 + _DAT_01fe4cb4 * 4) = uVar1;
        core_setutil_cpp_C3DSLight_apply_FUN_0055d0e0(this_ptr->lights + iVar5,uVar1);
        _DAT_01fe4cb4 = _DAT_01fe4cb4 + 1;
        if (0x60 < _DAT_01fe4cb4) {
          _DAT_01d1d400 = "..\\core\\set.cpp";
          _DAT_01d1d404 = 0x3fa;
          core_main_c_FUN_005030e0("CDemonSet::initScene - Too many spotlights!");
        }
      }
      iVar5 = iVar5 + 1;
      pCVar4 = (CDemonSet *)&pCVar4->cameras[0xe].field_0x19c;
    } while (iVar5 < this_ptr->light_count);
  }
  iVar5 = 0;
  if (0 < _DAT_01fe4cb4) {
    iVar2 = 0;
    do {
      this_ptr_00 = *(CDemonLight **)(&DAT_01fe4cb8 + iVar2);
      core_dlight_cpp_CDemonLight_beginScene_FUN_00462820(this_ptr_00,0);
      core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_00463360(this_ptr_00);
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(this_ptr,9999.9,0);
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_endScene_FUN_00462ad0(this_ptr_00,0);
    } while (iVar5 < _DAT_01fe4cb4);
  }
  this_ptr->selected_camera_index = -1;
  this_ptr->previous_best_camera_index = -1;
  iVar5 = 0;
  _DAT_01fe4e38 = 0;
  _DAT_01fe5c88 = 0;
  _DAT_01fe55d0 = 0;
  _DAT_01fe5764 = 0;
  this_ptr->previous_best_camera_timer = 0.0;
  core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_0055bf10(this_ptr);
  if (0 < this_ptr->camera_count) {
    puVar3 = &this_ptr->cameras[0].field_0x100;
    pCVar4 = this_ptr;
    do {
      iVar5 = iVar5 + 1;
      uVar1 = core_setdir_cpp_FUN_0055c060(this_ptr,puVar3);
      *(uint *)&pCVar4->cameras[0].field_0x19c = uVar1;
      puVar3 = puVar3 + 0x1a4;
      pCVar4 = (CDemonSet *)&pCVar4->cameras[0].field_0x1a0;
    } while (iVar5 < this_ptr->camera_count);
  }
  core_weather_cpp_CWeather_setWeatherType_FUN_005aefc0(0x02C997C0,this_ptr->weather_type);
  return;
}
