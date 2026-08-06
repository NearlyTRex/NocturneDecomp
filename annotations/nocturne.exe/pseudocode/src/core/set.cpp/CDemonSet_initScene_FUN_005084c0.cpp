// Name: core_set.cpp_CDemonSet_initScene_FUN_005084c0
// Address: 005084c0
// Address Range: [[005084c0, 0050874d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_initScene_FUN_005084c0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_initScene_FUN_005084c0(CDemonSet *this_ptr)

{
  char *text;
  CDemonLight *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  CDemonSet *pCVar5;
  int iVar6;
  
  iVar6 = 0;
  text = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Initializing scene");
  core_level_cpp_CLevelLoader_update_FUN_004c59e0(g_CLevelLoader_PTR_005baca0,text,iVar6);
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0044e3b0();
  core_dfilter_cpp_CFilterCache_free_FUN_0044bcd0(0x014B8DE8);
  _DAT_01fba2d8 = 0;
  this_ptr->mirror_glass_actor_count = 0;
  core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0043ff50(&g_CDemonCamera_01fb8508);
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004474e0
            (&g_CDemonCamera_01fb8508,&this_ptr->scene_fog);
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
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740
            (&g_CDemonCamera_01fb8508,this_ptr->min_ambient_value);
  do {
    if (*(int *)(&DAT_01fb99d4 + iVar6) != 0) {
      g_CurrentFilename = "..\\core\\set.cpp";
      g_CurrentLineNumber = 859;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x180);
  iVar6 = 0;
  _DAT_01fb99d0 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->light_count) {
    do {
      if (pCVar5->lights[0].light_type == 0) {
        pCVar1 = core_setutil_cpp_C3DSLight_create_FUN_005151f0(this_ptr->lights + iVar6);
        *(CDemonLight **)(&DAT_01fb99d4 + _DAT_01fb99d0 * 4) = pCVar1;
        core_setutil_cpp_C3DSLight_apply_FUN_00515350(this_ptr->lights + iVar6,pCVar1);
        _DAT_01fb99d0 = _DAT_01fb99d0 + 1;
        if (0x60 < _DAT_01fb99d0) {
          g_CurrentFilename = "..\\core\\set.cpp";
          g_CurrentLineNumber = 882;
          core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonSet::initScene - Too many spotlights!");
        }
      }
      iVar6 = iVar6 + 1;
      pCVar5 = (CDemonSet *)(pCVar5->cameras[0xf].name + 0x34);
    } while (iVar6 < this_ptr->light_count);
  }
  iVar6 = 0;
  if (0 < _DAT_01fb99d0) {
    iVar2 = 0;
    do {
      pCVar1 = *(CDemonLight **)(&DAT_01fb99d4 + iVar2);
      core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(pCVar1,0);
      core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0(pCVar1);
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(this_ptr,9999.9,0);
      iVar2 = iVar2 + 4;
      iVar6 = iVar6 + 1;
      core_dlight_cpp_CDemonLight_endScene_FUN_0044e720(pCVar1,0);
    } while (iVar6 < _DAT_01fb99d0);
  }
  this_ptr->selected_camera_index = -1;
  this_ptr->previous_best_camera_index = -1;
  iVar6 = 0;
  _DAT_01fb9b54 = 0;
  _DAT_01fba9a4 = 0;
  _DAT_01fba2ec = 0;
  _DAT_01fba480 = 0;
  this_ptr->previous_best_camera_timer = 0.0;
  core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0(this_ptr);
  if (0 < this_ptr->camera_count) {
    pCVar3 = &this_ptr->cameras[0].position;
    pCVar5 = this_ptr;
    do {
      iVar6 = iVar6 + 1;
      iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340(this_ptr,pCVar3);
      pCVar5->cameras[0].vdir_zone = iVar2;
      pCVar3 = (CVector3f *)&pCVar3[0x22].z;
      pCVar5 = (CDemonSet *)&pCVar5->cameras[0].enabled;
    } while (iVar6 < this_ptr->camera_count);
  }
  core_weather_cpp_CWeather_setWeatherType_FUN_00555750(0x02DDF9F0,this_ptr->weather_type);
  return;
}
