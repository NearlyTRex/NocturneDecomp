// Name: core_set.cpp_CDemonSet_initScene_FUN_0052d980
// Address: 0052d980
// Address Range: [[0052d980, 0052dc0d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_initScene_FUN_0052d980(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_initScene_FUN_0052d980(CDemonSet *this_ptr)

{
  char *text;
  CDemonLight *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  CDemonSet *pCVar5;
  int iVar6;
  
  iVar6 = 0;
  text = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Initializing scene");
  core_level_cpp_CLevelLoader_update_FUN_004e1600(0x01D03000,text,iVar6);
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_00449f60();
  core_dfilter_cpp_CFilterCache_free_FUN_00447610(g_CFilterCachePtr);
  _DAT_01fc9608 = 0;
  this_ptr->mirror_glass_actor_count = 0;
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0043b4c0(&g_CDemonCameraInstance);
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00442bf0
            (&g_CDemonCameraInstance,&this_ptr->scene_fog);
  pCVar2 = &(this_ptr->scene_fog).scroll;
  (this_ptr->active_fog).color_index.r = (this_ptr->scene_fog).color_index.r;
  (this_ptr->active_fog).color_index.g = (this_ptr->scene_fog).color_index.g;
  pCVar4 = &(this_ptr->active_fog).scroll;
  (this_ptr->active_fog).color_index.b = (this_ptr->scene_fog).color_index.b;
  if (pCVar4 != pCVar2) {
    pCVar4->x = pCVar2->x;
    (this_ptr->active_fog).scroll.y = (this_ptr->scene_fog).scroll.y;
    (this_ptr->active_fog).scroll.z = (this_ptr->scene_fog).scroll.z;
  }
  (this_ptr->active_fog).height_threshold = (this_ptr->scene_fog).height_threshold;
  (this_ptr->active_fog).density_multiplier = (this_ptr->scene_fog).density_multiplier;
  (this_ptr->active_fog).temperature = (this_ptr->scene_fog).temperature;
  iVar6 = 0;
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00441e80
            (&g_CDemonCameraInstance,this_ptr->min_ambient_value);
  do {
    if (*(int *)(&DAT_01fc8d04 + iVar6) != 0) {
      _DAT_01d046a0 = "..\\core\\set.cpp";
      _DAT_01d046a4 = 0x3e4;
      core_main_c_FUN_004e4500("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x180);
  iVar6 = 0;
  _DAT_01fc8d00 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->light_count) {
    do {
      if (pCVar5->lights[0].light_type == 0) {
        pCVar1 = core_setutil_cpp_C3DSLight_create_FUN_0053b6b0(this_ptr->lights + iVar6);
        *(CDemonLight **)(&DAT_01fc8d04 + _DAT_01fc8d00 * 4) = pCVar1;
        core_setutil_cpp_C3DSLight_apply_FUN_0053b810(this_ptr->lights + iVar6,pCVar1);
        _DAT_01fc8d00 = _DAT_01fc8d00 + 1;
        if (0x60 < _DAT_01fc8d00) {
          _DAT_01d046a0 = "..\\core\\set.cpp";
          _DAT_01d046a4 = 0x3fb;
          core_main_c_FUN_004e4500("CDemonSet::initScene - Too many spotlights!");
        }
      }
      iVar6 = iVar6 + 1;
      pCVar5 = (CDemonSet *)&pCVar5->cameras[0xe].vdir_zone;
    } while (iVar6 < this_ptr->light_count);
  }
  iVar6 = 0;
  if (0 < _DAT_01fc8d00) {
    iVar3 = 0;
    do {
      pCVar1 = *(CDemonLight **)(&DAT_01fc8d04 + iVar3);
      core_dlight_cpp_CDemonLight_beginScene_FUN_0044a020(pCVar1,0);
      core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044ab60(pCVar1);
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0(this_ptr,9999.9,0);
      iVar3 = iVar3 + 4;
      iVar6 = iVar6 + 1;
      core_dlight_cpp_CDemonLight_endScene_FUN_0044a2d0(pCVar1,0);
    } while (iVar6 < _DAT_01fc8d00);
  }
  this_ptr->selected_camera_index = -1;
  this_ptr->previous_best_camera_index = -1;
  iVar6 = 0;
  _DAT_01fc8e84 = 0;
  _DAT_01fc9cd4 = 0;
  _DAT_01fc961c = 0;
  _DAT_01fc97b0 = 0;
  this_ptr->previous_best_camera_timer = 0.0;
  core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_0053a610(this_ptr);
  if (0 < this_ptr->camera_count) {
    pCVar4 = &this_ptr->cameras[0].position;
    pCVar5 = this_ptr;
    do {
      iVar6 = iVar6 + 1;
      iVar3 = core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_0053a760(this_ptr,pCVar4);
      pCVar5->cameras[0].vdir_zone = iVar3;
      pCVar4 = pCVar4 + 0x23;
      pCVar5 = (CDemonSet *)&pCVar5->cameras[0].enabled;
    } while (iVar6 < this_ptr->camera_count);
  }
  core_weather_cpp_CWeather_setWeatherType_FUN_0058b470(0x02661F80,this_ptr->weather_type);
  return;
}
