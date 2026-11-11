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
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  int iVar5;
  CDemonSet *pCVar6;
  uint uVar7;
  
  uVar7 = 0;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Initializing scene");
  core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar1,uVar7);
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0045c470();
  core_dfilter_cpp_CFilterCache_free_FUN_004596c0(g_CFilterCachePtr);
  _DAT_0203ad1c = 0;
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
  iVar5 = 0;
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
            (&g_CDemonCameraInstance,this_ptr->min_ambient_value);
  do {
    if (*(int *)(&DAT_0203a418 + iVar5) != 0) {
      _DAT_01d71de0 = "..\\core\\set.cpp";
      _DAT_01d71de4 = 0x3f1;
      core_main_c_FUN_004e4330("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 != 0x180);
  iVar5 = 0;
  _DAT_0203a414 = 0;
  pCVar6 = this_ptr;
  if (0 < this_ptr->light_count) {
    do {
      if (pCVar6->lights[0].light_type == 0) {
        uVar7 = core_setutil_cpp_C3DSLight_create_FUN_00542940(this_ptr->lights + iVar5);
        *(uint *)(&DAT_0203a418 + _DAT_0203a414 * 4) = uVar7;
        core_setutil_cpp_C3DSLight_apply_FUN_00542aa0(this_ptr->lights + iVar5,uVar7);
        _DAT_0203a414 = _DAT_0203a414 + 1;
        if (0x60 < _DAT_0203a414) {
          _DAT_01d71de0 = "..\\core\\set.cpp";
          _DAT_01d71de4 = 0x408;
          core_main_c_FUN_004e4330("CDemonSet::initScene - Too many spotlights!");
        }
      }
      iVar5 = iVar5 + 1;
      pCVar6 = (CDemonSet *)&pCVar6->cameras[0xe].vdir_zone;
    } while (iVar5 < this_ptr->light_count);
  }
  iVar5 = 0;
  if (0 < _DAT_0203a414) {
    iVar2 = 0;
    do {
      this_ptr_00 = *(CDemonLight **)(&DAT_0203a418 + iVar2);
      core_dlight_cpp_CDemonLight_beginScene_FUN_0045c530(this_ptr_00,0);
      core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070(this_ptr_00);
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(this_ptr,9999.9,0);
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_endScene_FUN_0045c7e0(this_ptr_00,0);
    } while (iVar5 < _DAT_0203a414);
  }
  this_ptr->selected_camera_index = -1;
  this_ptr->previous_best_camera_index = -1;
  iVar5 = 0;
  _DAT_0203a598 = 0;
  _DAT_0203b3e8 = 0;
  _DAT_0203ad30 = 0;
  _DAT_0203aec4 = 0;
  this_ptr->previous_best_camera_timer = 0.0;
  core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_005418d0(this_ptr);
  if (0 < this_ptr->camera_count) {
    pCVar3 = &this_ptr->cameras[0].position;
    pCVar6 = this_ptr;
    do {
      iVar5 = iVar5 + 1;
      iVar2 = core_setdir_cpp_FUN_00541a20(this_ptr,pCVar3);
      pCVar6->cameras[0].vdir_zone = iVar2;
      pCVar3 = pCVar3 + 0x23;
      pCVar6 = (CDemonSet *)&pCVar6->cameras[0].enabled;
    } while (iVar5 < this_ptr->camera_count);
  }
  core_weather_cpp_FUN_0057d050(0x02D0C1A0,this_ptr->weather_type);
  return;
}
