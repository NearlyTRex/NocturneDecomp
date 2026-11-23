// Name: core_set.cpp_CDemonSet_initScene_FUN_00534420
// Address: 00534420
// Address Range: [[00534420, 005346ad]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_initScene_FUN_00534420(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_initScene_FUN_00534420(CDemonSet *this_ptr)

{
  char *text;
  CDemonLight *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  CDemonSet *pCVar5;
  int iVar6;
  
  iVar6 = 0;
  text = support_newmsg_cpp_getLocalizedString_FUN_00508960("Initializing scene");
  core_level_cpp_CLevelLoader_update_FUN_004e0000(g_CLevelLoaderPtr,text,iVar6);
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0045c470();
  core_dfilter_cpp_CFilterCache_free_FUN_004596c0(g_CFilterCachePtr);
  g_INT_0203ad1c = 0;
  this_ptr->mirror_glass_actor_count = 0;
  core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_00448ca0(&g_CDemonCameraInstance);
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004503f0
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
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
            (&g_CDemonCameraInstance,this_ptr->min_ambient_value);
  do {
    if (*(int *)((int)g_CDemonLight_PTR_ARRAY_0203a418 + iVar6) != 0) {
      g_CurrentFilename = "..\\core\\set.cpp";
      g_CurrentLineNumber = 1009;
      core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x180);
  iVar6 = 0;
  g_MasterLightCount = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->light_count) {
    do {
      if (pCVar5->lights[0].light_type == 0) {
        pCVar1 = core_setutil_cpp_C3DSLight_create_FUN_00542940(this_ptr->lights + iVar6);
        g_CDemonLight_PTR_ARRAY_0203a418[g_MasterLightCount] = pCVar1;
        core_setutil_cpp_C3DSLight_apply_FUN_00542aa0(this_ptr->lights + iVar6,pCVar1);
        g_MasterLightCount = g_MasterLightCount + 1;
        if (0x60 < g_MasterLightCount) {
          g_CurrentFilename = "..\\core\\set.cpp";
          g_CurrentLineNumber = 1032;
          core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonSet::initScene - Too many spotlights!");
        }
      }
      iVar6 = iVar6 + 1;
      pCVar5 = (CDemonSet *)&pCVar5->cameras[0xe].vdir_zone;
    } while (iVar6 < this_ptr->light_count);
  }
  iVar6 = 0;
  if (0 < g_MasterLightCount) {
    iVar2 = 0;
    do {
      pCVar1 = *(CDemonLight **)((int)g_CDemonLight_PTR_ARRAY_0203a418 + iVar2);
      core_dlight_cpp_CDemonLight_beginScene_FUN_0045c530(pCVar1,0);
      core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070(pCVar1);
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(this_ptr,9999.9,0);
      iVar2 = iVar2 + 4;
      iVar6 = iVar6 + 1;
      core_dlight_cpp_CDemonLight_endScene_FUN_0045c7e0(pCVar1,0);
    } while (iVar6 < g_MasterLightCount);
  }
  this_ptr->selected_camera_index = -1;
  this_ptr->previous_best_camera_index = -1;
  iVar6 = 0;
  g_SpotLightCount = 0;
  g_INT_0203b3e8 = 0;
  g_INT_0203ad30 = 0;
  g_QueuedCoronaGlobeCount = 0;
  this_ptr->previous_best_camera_timer = 0.0;
  core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_005418d0(this_ptr);
  if (0 < this_ptr->camera_count) {
    pCVar3 = &this_ptr->cameras[0].position;
    pCVar5 = this_ptr;
    do {
      iVar6 = iVar6 + 1;
      iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00541a20(this_ptr,pCVar3);
      pCVar5->cameras[0].vdir_zone = iVar2;
      pCVar3 = pCVar3 + 0x23;
      pCVar5 = (CDemonSet *)&pCVar5->cameras[0].enabled;
    } while (iVar6 < this_ptr->camera_count);
  }
  core_weather_cpp_CWeather_setWeatherType_FUN_0057d050(g_CWeatherPtr,this_ptr->weather_type);
  return;
}
