// Name: core_set.cpp_CDemonSet_initScene_FUN_0056aa10
// Address: 0056aa10
// Address Range: [[0056aa10, 0056ac9d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet *this_ptr)

{
  char *text;
  CVector3f *pCVar1;
  CDemonLight *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  CDemonSet *pCVar5;
  int iVar6;
  
  iVar6 = 0;
  text = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Initializing scene");
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,text,iVar6);
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_004729c0();
  core_dfilter_cpp_CFilterCache_free_FUN_00470000(g_CFilterCachePtr);
  g_DynamicLightCount = 0;
  this_ptr->mirror_glass_actor_count = 0;
  core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0044c0f0(&g_CDemonCameraInstance);
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00453640
            (&g_CDemonCameraInstance,&this_ptr->scene_fog);
  pCVar4 = &(this_ptr->scene_fog).scroll;
  (this_ptr->active_fog).color_index.r = (this_ptr->scene_fog).color_index.r;
  (this_ptr->active_fog).color_index.g = (this_ptr->scene_fog).color_index.g;
  pCVar1 = &(this_ptr->active_fog).scroll;
  (this_ptr->active_fog).color_index.b = (this_ptr->scene_fog).color_index.b;
  if (pCVar1 != pCVar4) {
    pCVar1->x = pCVar4->x;
    (this_ptr->active_fog).scroll.y = (this_ptr->scene_fog).scroll.y;
    (this_ptr->active_fog).scroll.z = (this_ptr->scene_fog).scroll.z;
  }
  (this_ptr->active_fog).height_threshold = (this_ptr->scene_fog).height_threshold;
  (this_ptr->active_fog).density_multiplier = (this_ptr->scene_fog).density_multiplier;
  (this_ptr->active_fog).reserved = (this_ptr->scene_fog).reserved;
  iVar6 = 0;
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
            (&g_CDemonCameraInstance,this_ptr->min_ambient_value);
  do {
    if (*(int *)((int)g_MasterLightList + iVar6) != 0) {
      g_CurrentFilename = "..\\core\\set.cpp";
      g_CurrentLineNumber = 899;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x180);
  iVar6 = 0;
  g_MasterLightCount = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->light_count) {
    do {
      if (pCVar5->lights[0].light_type == 0) {
        pCVar2 = core_setutil_cpp_C3DSLight_create_FUN_00586a90(this_ptr->lights + iVar6);
        g_MasterLightList[g_MasterLightCount] = pCVar2;
        core_setutil_cpp_C3DSLight_apply_FUN_00586bf0(this_ptr->lights + iVar6,pCVar2);
        g_MasterLightCount = g_MasterLightCount + 1;
        if (0x60 < g_MasterLightCount) {
          g_CurrentFilename = "..\\core\\set.cpp";
          g_CurrentLineNumber = 0x39a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::initScene - Too many spotlights!");
        }
      }
      iVar6 = iVar6 + 1;
      pCVar5 = (CDemonSet *)&pCVar5->cameras[0xe].vdir_zone;
    } while (iVar6 < this_ptr->light_count);
  }
  iVar6 = 0;
  if (0 < g_MasterLightCount) {
    iVar3 = 0;
    do {
      pCVar2 = *(CDemonLight **)((int)g_MasterLightList + iVar3);
      core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(pCVar2,0);
      core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(pCVar2);
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
      iVar3 = iVar3 + 4;
      iVar6 = iVar6 + 1;
      core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(pCVar2);
    } while (iVar6 < g_MasterLightCount);
  }
  this_ptr->selected_camera_index = -1;
  this_ptr->previous_best_camera_index = -1;
  iVar6 = 0;
  g_ActiveLightCount = 0;
  g_OmniLightCount = 0;
  g_CoronaGlobeCount = 0;
  g_QueuedCoronaGlobeCount = 0;
  this_ptr->previous_best_camera_timer = 0.0;
  core_setdir_cpp_CDemonSet_FUN_00576710(this_ptr);
  pCVar5 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      iVar6 = iVar6 + 1;
      iVar3 = core_setdir_cpp_CDemonSet_FUN_00576870(this_ptr);
      pCVar5->cameras[0].vdir_zone = iVar3;
      pCVar5 = (CDemonSet *)&pCVar5->cameras[0].enabled;
    } while (iVar6 < this_ptr->camera_count);
  }
  core_weather_cpp_CWeather_setWeatherType_FUN_005ef8c0(g_CWeatherPtr,this_ptr->weather_type);
  return;
}
