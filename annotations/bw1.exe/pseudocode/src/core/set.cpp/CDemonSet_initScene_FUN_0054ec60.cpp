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
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  CDemonSet *pCVar5;
  int iVar6;
  
  iVar6 = 0;
  text = support_newmsg_cpp_getLocalizedString_FUN_00531090("Initializing scene");
  core_level_cpp_CLevelLoader_update_FUN_004fe9c0(0x01D1BD1C,text,iVar6);
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_00462760();
  core_dfilter_cpp_CFilterCache_free_FUN_0045d770(g_CFilterCachePtr);
  _DAT_01fe55bc = 0;
  this_ptr->mirror_glass_actor_count = 0;
  core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0044cb60(&g_CDemonCameraInstance);
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004542a0
            (&g_CDemonCameraInstance,&this_ptr->scene_fog);
  pCVar4 = &(this_ptr->scene_fog).scroll;
  (this_ptr->active_fog).color_index.r = (this_ptr->scene_fog).color_index.r;
  (this_ptr->active_fog).color_index.g = (this_ptr->scene_fog).color_index.g;
  pCVar3 = &(this_ptr->active_fog).scroll;
  (this_ptr->active_fog).color_index.b = (this_ptr->scene_fog).color_index.b;
  if (pCVar3 != pCVar4) {
    pCVar3->x = pCVar4->x;
    (this_ptr->active_fog).scroll.y = (this_ptr->scene_fog).scroll.y;
    (this_ptr->active_fog).scroll.z = (this_ptr->scene_fog).scroll.z;
  }
  (this_ptr->active_fog).height_threshold = (this_ptr->scene_fog).height_threshold;
  (this_ptr->active_fog).density_multiplier = (this_ptr->scene_fog).density_multiplier;
  (this_ptr->active_fog).temperature = (this_ptr->scene_fog).temperature;
  iVar6 = 0;
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00453540
            (&g_CDemonCameraInstance,this_ptr->min_ambient_value);
  do {
    if (*(int *)(&DAT_01fe4cb8 + iVar6) != 0) {
      _DAT_01d1d400 = "..\\core\\set.cpp";
      _DAT_01d1d404 = 0x3e3;
      core_main_c_FUN_005030e0("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x180);
  iVar6 = 0;
  _DAT_01fe4cb4 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->light_count) {
    do {
      if (pCVar5->lights[0].light_type == 0) {
        uVar1 = core_setutil_cpp_C3DSLight_create_FUN_0055cf80(this_ptr->lights + iVar6);
        *(uint *)(&DAT_01fe4cb8 + _DAT_01fe4cb4 * 4) = uVar1;
        core_setutil_cpp_C3DSLight_apply_FUN_0055d0e0(this_ptr->lights + iVar6,uVar1);
        _DAT_01fe4cb4 = _DAT_01fe4cb4 + 1;
        if (0x60 < _DAT_01fe4cb4) {
          _DAT_01d1d400 = "..\\core\\set.cpp";
          _DAT_01d1d404 = 0x3fa;
          core_main_c_FUN_005030e0("CDemonSet::initScene - Too many spotlights!");
        }
      }
      iVar6 = iVar6 + 1;
      pCVar5 = (CDemonSet *)&pCVar5->cameras[0xe].vdir_zone;
    } while (iVar6 < this_ptr->light_count);
  }
  iVar6 = 0;
  if (0 < _DAT_01fe4cb4) {
    iVar2 = 0;
    do {
      this_ptr_00 = *(CDemonLight **)(&DAT_01fe4cb8 + iVar2);
      core_dlight_cpp_CDemonLight_beginScene_FUN_00462820(this_ptr_00,0);
      core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_00463360(this_ptr_00);
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(this_ptr,9999.9,0);
      iVar2 = iVar2 + 4;
      iVar6 = iVar6 + 1;
      core_dlight_cpp_CDemonLight_endScene_FUN_00462ad0(this_ptr_00,0);
    } while (iVar6 < _DAT_01fe4cb4);
  }
  this_ptr->selected_camera_index = -1;
  this_ptr->previous_best_camera_index = -1;
  iVar6 = 0;
  _DAT_01fe4e38 = 0;
  _DAT_01fe5c88 = 0;
  _DAT_01fe55d0 = 0;
  _DAT_01fe5764 = 0;
  this_ptr->previous_best_camera_timer = 0.0;
  core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_0055bf10(this_ptr);
  if (0 < this_ptr->camera_count) {
    pCVar3 = &this_ptr->cameras[0].position;
    pCVar5 = this_ptr;
    do {
      iVar6 = iVar6 + 1;
      iVar2 = core_setdir_cpp_FUN_0055c060(this_ptr,pCVar3);
      pCVar5->cameras[0].vdir_zone = iVar2;
      pCVar3 = pCVar3 + 0x23;
      pCVar5 = (CDemonSet *)&pCVar5->cameras[0].enabled;
    } while (iVar6 < this_ptr->camera_count);
  }
  core_weather_cpp_CWeather_setWeatherType_FUN_005aefc0(0x02C997C0,this_ptr->weather_type);
  return;
}
