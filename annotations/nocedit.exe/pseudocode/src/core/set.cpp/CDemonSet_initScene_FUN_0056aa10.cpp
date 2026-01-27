// Name: core_set.cpp_CDemonSet_initScene_FUN_0056aa10
// Address: 0056aa10
// Address Range: [[0056aa10, 0056ac9d]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet *this_ptr)

{
  char *text;
  CDemonLight *pCVar1;
  int iVar2;
  CDemonSet *pCVar3;
  int iVar4;
  
  iVar4 = 0;
  text = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Initializing scene");
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,text,iVar4);
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_004729c0();
  core_dfilter_cpp_CFilterCache_free_FUN_00470000(g_CFilterCachePtr);
  g_DynamicLightCount = 0;
  this_ptr->mirror_glass_count = 0;
  core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0044c0f0(&g_CDemonCameraInstance);
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00453640
            (&g_CDemonCameraInstance,(SFog *)(this_ptr->unk4 + 0xbb90));
  *(int *)(this_ptr->unk4 + 0xbbb4) = (((SFog *)(this_ptr->unk4 + 0xbb90))->color_index).r;
  *(uint *)(this_ptr->unk4 + 0xbbb8) = *(uint *)(this_ptr->unk4 + 0xbb94);
  *(uint *)(this_ptr->unk4 + 0xbbbc) = *(uint *)(this_ptr->unk4 + 0xbb98);
  if (this_ptr->unk4 + 0xbbc0 != this_ptr->unk4 + 0xbb9c) {
    *(uint *)(this_ptr->unk4 + 0xbbc0) = *(uint *)(this_ptr->unk4 + 0xbb9c);
    *(uint *)(this_ptr->unk4 + 0xbbc4) = *(uint *)(this_ptr->unk4 + 0xbba0);
    *(uint *)(this_ptr->unk4 + 0xbbc8) = *(uint *)(this_ptr->unk4 + 0xbba4);
  }
  *(uint *)(this_ptr->unk4 + 0xbbcc) = *(uint *)(this_ptr->unk4 + 0xbba8);
  *(uint *)(this_ptr->unk4 + 0xbbd0) = *(uint *)(this_ptr->unk4 + 0xbbac);
  *(uint *)(this_ptr->unk4 + 0xbbd4) = *(uint *)(this_ptr->unk4 + 0xbbb0);
  iVar4 = 0;
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
            (&g_CDemonCameraInstance,this_ptr->min_ambient_value);
  do {
    if (*(int *)((int)g_MasterLightList + iVar4) != 0) {
      g_CurrentFilename = "..\\core\\set.cpp";
      g_CurrentLineNumber = 899;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 != 0x180);
  iVar4 = 0;
  g_MasterLightCount = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->light_count) {
    do {
      if (pCVar3->lights[0].light_type == 0) {
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
      iVar4 = iVar4 + 1;
      pCVar3 = (CDemonSet *)&pCVar3->cameras[0xe].unk3;
    } while (iVar4 < this_ptr->light_count);
  }
  iVar4 = 0;
  if (0 < g_MasterLightCount) {
    iVar2 = 0;
    do {
      pCVar1 = *(CDemonLight **)((int)g_MasterLightList + iVar2);
      core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(pCVar1,0);
      core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(pCVar1);
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
      iVar2 = iVar2 + 4;
      iVar4 = iVar4 + 1;
      core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(pCVar1);
    } while (iVar4 < g_MasterLightCount);
  }
  this_ptr->selected_camera_index = -1;
  this_ptr->previous_best_camera_index = -1;
  iVar2 = 0;
  g_ActiveLightCount = 0;
  DAT_03277d80 = 0;
  g_CoronaGlobeCount = 0;
  DAT_0327785c = 0;
  this_ptr->previous_best_camera_timer = 0.0;
  core_setdir_cpp_CDemonSet_FUN_00576710(this_ptr);
  iVar4 = this_ptr->camera_count;
  pCVar3 = this_ptr;
  if (0 < iVar4) {
    do {
      iVar2 = iVar2 + 1;
      iVar4 = core_setdir_cpp_CDemonSet_FUN_00576870(this_ptr);
      pCVar3->cameras[0].unk3 = iVar4;
      pCVar3 = (CDemonSet *)&pCVar3->cameras[0].unk4;
    } while (iVar2 < this_ptr->camera_count);
  }
  core_weather_cpp_CWeather_FUN_005ef8c0(iVar4);
  return;
}
