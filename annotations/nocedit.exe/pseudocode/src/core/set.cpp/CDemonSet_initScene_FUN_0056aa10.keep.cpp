// Name: core_set.cpp_CDemonSet_initScene_FUN_0056aa10
// Address: 0056aa10
// MANUAL RECONSTRUCTION
// Address Range: [[0056aa10, 0056ac9d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet *this_ptr)

{
  CDemonLight *this_ptr_00;
  char *text;
  int iVar3;
  CDemonLight *pCVar1;
  int iVar4;
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
  this_ptr->active_fog = this_ptr->scene_fog;
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
            (&g_CDemonCameraInstance,this_ptr->min_ambient_value);
  for (iVar4 = 0; iVar4 < 96; iVar4 = iVar4 + 1) {
    if (g_MasterLightList[iVar4] != (CDemonLight *)0x0) {
      g_CurrentFilename = "..\\core\\set.cpp";
      g_CurrentLineNumber = 899;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
  }
  g_MasterLightCount = 0;
  for (iVar4 = 0; iVar4 < this_ptr->light_count; iVar4 = iVar4 + 1) {
    if (this_ptr->lights[iVar4].light_type == 0) {
      pCVar1 = core_setutil_cpp_C3DSLight_create_FUN_00586a90(this_ptr->lights + iVar4);
      g_MasterLightList[g_MasterLightCount] = pCVar1;
      core_setutil_cpp_C3DSLight_apply_FUN_00586bf0(this_ptr->lights + iVar4,pCVar1);
      g_MasterLightCount = g_MasterLightCount + 1;
      if (0x60 < g_MasterLightCount) {
        g_CurrentFilename = "..\\core\\set.cpp";
        g_CurrentLineNumber = 0x39a;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::initScene - Too many spotlights!");
      }
    }
  }
  for (iVar4 = 0; iVar4 < g_MasterLightCount; iVar4 = iVar4 + 1) {
    this_ptr_00 = g_MasterLightList[iVar4];
    core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(this_ptr_00,0);
    core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(this_ptr_00);
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
    core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(this_ptr_00,0);
  }
  this_ptr->selected_camera_index = -1;
  this_ptr->previous_best_camera_index = -1;
  g_SpotLightCount = 0;
  g_OmniLightCount = 0;
  g_CoronaGlobeCount = 0;
  g_QueuedCoronaGlobeCount = 0;
  this_ptr->previous_best_camera_timer = 0.0;
  core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_00576710(this_ptr);
  for (iVar4 = 0; iVar4 < this_ptr->camera_count; iVar4 = iVar4 + 1) {
    iVar3 = core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00576870
                      (this_ptr,&this_ptr->cameras[iVar4].position);
    this_ptr->cameras[iVar4].vdir_zone = iVar3;
  }
  core_weather_cpp_CWeather_setWeatherType_FUN_005ef8c0(g_CWeatherPtr,this_ptr->weather_type);
  return;
}
