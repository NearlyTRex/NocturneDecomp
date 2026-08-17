// Name: core_set.cpp_CDemonSet_setCameraView_FUN_005088f0
// Address: 005088f0
// Address Range: [[005088f0, 0050909a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(CDemonSet *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(CDemonSet *this_ptr,int index)

{
  CDemonLight *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  CDemonSet *pCVar4;
  int iVar5;
  C3DSCamera *this_ptr_01;
  CMatrix3x3f *pCVar6;
  float *pfVar7;
  uint *puVar8;
  CRect *rect;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  int in_stack_ffffff10;
  float local_a0 [10];
  CMatrix3x3f local_78;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  int local_20;
  C3DSLight *local_1c;
  int local_18;
  int local_14;
  
  bVar11 = 0;
  if ((index < 0) || (this_ptr->camera_count <= index)) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 1005;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonSet::setCameraView - invalid index: %d",index);
  }
  iVar5 = 0;
  if (0 < _DAT_01fba2d8) {
    iVar2 = 0;
    do {
      puVar10 = (uint *)(iVar2 + 0x1fba2dc);
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970((CDemonLight *)*puVar10);
    } while (iVar5 < _DAT_01fba2d8);
  }
  iVar5 = 0;
  if (0 < _DAT_01fb9b54) {
    iVar2 = 0;
    do {
      puVar10 = (uint *)(&DAT_01fb9b58 + iVar2);
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970((CDemonLight *)*puVar10);
    } while (iVar5 < _DAT_01fb9b54);
  }
  iVar5 = 0;
  if (0 < _DAT_01fb9b54) {
    iVar2 = 0;
    do {
      puVar10 = (uint *)(&DAT_01fb9b58 + iVar2);
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440((CDemonLight *)*puVar10);
    } while (iVar5 < _DAT_01fb9b54);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0044e3b0();
  this_ptr->previous_best_camera_timer = 3.0;
  this_ptr->lighting_quality_mode = 1;
  this_ptr->directional_light_ratio_enabled = 1;
  this_ptr->previous_best_camera_index = this_ptr->selected_camera_index;
  this_ptr->selected_camera_index = index;
  _DAT_01fb9b54 = 0;
  this_ptr_01 = this_ptr->cameras + index;
  _DAT_01fba9a4 = 0;
  _DAT_01fba2ec = 0;
  _DAT_01fba480 = 0;
  core_setutil_cpp_C3DSCamera_FUN_005148b0(this_ptr_01,&g_CDemonCamera_01fb8508);
  pCVar1 = &(this_ptr->active_fog).scroll;
  if (this_ptr->cameras[index].fog_enabled == 0) {
    (this_ptr->active_fog).color_index.r = (this_ptr_01->fog).color_index.r;
    (this_ptr->active_fog).color_index.g = (this_ptr_01->fog).color_index.g;
    pCVar3 = &(this_ptr_01->fog).scroll;
    (this_ptr->active_fog).color_index.b = (this_ptr_01->fog).color_index.b;
    if (pCVar1 != pCVar3) {
      pCVar1->x = pCVar3->x;
      (this_ptr->active_fog).scroll.y = (this_ptr_01->fog).scroll.y;
      (this_ptr->active_fog).scroll.z = (this_ptr_01->fog).scroll.z;
    }
    (this_ptr->active_fog).height_threshold = (this_ptr_01->fog).height_threshold;
    (this_ptr->active_fog).density_multiplier = (this_ptr_01->fog).density_multiplier;
    (this_ptr->active_fog).temperature = (this_ptr_01->fog).temperature;
  }
  else {
    (this_ptr->active_fog).color_index.r = (this_ptr->scene_fog).color_index.r;
    (this_ptr->active_fog).color_index.g = (this_ptr->scene_fog).color_index.g;
    pCVar3 = &(this_ptr->scene_fog).scroll;
    (this_ptr->active_fog).color_index.b = (this_ptr->scene_fog).color_index.b;
    if (pCVar1 != pCVar3) {
      pCVar1->x = pCVar3->x;
      (this_ptr->active_fog).scroll.y = (this_ptr->scene_fog).scroll.y;
      (this_ptr->active_fog).scroll.z = (this_ptr->scene_fog).scroll.z;
    }
    (this_ptr->active_fog).height_threshold = (this_ptr->scene_fog).height_threshold;
    (this_ptr->active_fog).density_multiplier = (this_ptr->scene_fog).density_multiplier;
    (this_ptr->active_fog).temperature = (this_ptr->scene_fog).temperature;
  }
  iVar5 = 0;
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004474e0
            (&g_CDemonCamera_01fb8508,&this_ptr->active_fog);
  g_CDemonRaytrace_01fba938.rendering_mode = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      iVar5 = iVar5 + 1;
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(this_ptr,pCVar4->actors[0]);
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar5 < this_ptr->actor_count);
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(&g_CDemonCamera_01fb8508,0);
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20(&g_CDemonCamera_01fb8508);
  core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(this_ptr,0x10);
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(this_ptr,9999.9,1);
  core_dcamera_cpp_CDemonCamera_FUN_00448310(&g_CDemonCamera_01fb8508);
  _DAT_01ffb060 = 1;
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,1);
  _DAT_01ffb060 = 0;
  core_dcamera_cpp_CDemonCamera_FUN_004421b0(&g_CDemonCamera_01fb8508);
  core_dcamera_cpp_CDemonCamera_FUN_00448380(&g_CDemonCamera_01fb8508);
  _sprintf(&stack0xffffff10,"%s.raw",this_ptr->cameras + index);
  core_dcamera_cpp_CDemonCamera_loadImage_FUN_00443250(&g_CDemonCamera_01fb8508,&stack0xffffff10);
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,1);
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00440c50(&g_CDemonCamera_01fb8508,0);
  if (g_UseExternalRenderer != 0) {
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(this_ptr,9999.9,0);
    if (0x02DD1210->wave_animation_enabled == 0) {
      core_water_cpp_CWater_render_FUN_00550cb0(0x02DD1210,0);
    }
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,1);
  }
  core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(&g_CDemonCamera_01fb8508,0);
  if (this_ptr->disable_spotlight_shadows == 0) {
    local_14 = 0;
    if (0 < this_ptr->light_count) {
      local_20 = index << 4;
      local_1c = this_ptr->lights;
      local_14 = 0;
      pCVar4 = this_ptr;
      iVar5 = 0;
      do {
        if ((pCVar4->lights[0].light_type == 1) && (pCVar4->lights[0].visible_flags[index] != '\0'))
        {
          *(C3DSLight **)(&DAT_01fba9a8 + _DAT_01fba9a4 * 4) = local_1c + local_14;
          _DAT_01fba9a4 = _DAT_01fba9a4 + 1;
          if (199 < _DAT_01fba9a4) {
            g_CurrentFilename = "..\\core\\set.cpp";
            g_CurrentLineNumber = 1120;
            core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonSet::setCameraView - Too many omni lights");
          }
        }
        iVar2 = iVar5;
        if ((pCVar4->lights[0].light_type == 0) &&
           (iVar2 = iVar5 + 1, pCVar4->lights[0].visible_flags[index] != '\0')) {
          *(uint *)(&DAT_01fb9b58 + _DAT_01fb9b54 * 4) =
               *(uint *)(&DAT_01fb99d4 + iVar5 * 4);
          puVar10 = (uint *)((int)&pCVar4->lights[0].camera_light_bounds[0].x_min + local_20);
          puVar9 = (uint *)(_DAT_01fb9b54 * 0x10 + 0x1fb9cdc + (uint)bVar11 * -8);
          puVar8 = puVar10 + (uint)bVar11 * -2 + 1;
          *(uint *)(_DAT_01fb9b54 * 0x10 + 0x1fb9cd8) = *puVar10;
          puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
          *puVar9 = *puVar8;
          *puVar10 = puVar8[(uint)bVar11 * -2 + 1];
          puVar10[(uint)bVar11 * -2 + 1] = (puVar8 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
          _DAT_01fb9b54 = _DAT_01fb9b54 + 1;
        }
        pCVar4 = (CDemonSet *)(pCVar4->cameras[0xf].name + 0x34);
        local_14 = local_14 + 1;
        iVar5 = iVar2;
      } while (local_14 < this_ptr->light_count);
    }
    core_set_cpp_CDemonSet_process_FUN_0050d040(this_ptr);
    iVar5 = 0;
    if (0 < _DAT_01fb9b54) {
      rect = (CRect *)0x1fb9cd8;
      local_18 = 0;
      do {
        this_ptr_00 = *(CDemonLight **)(&DAT_01fb9b58 + local_18);
        core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0(this_ptr_00);
        core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(this_ptr_00,1);
        core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044e830(this_ptr_00);
        core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,1);
        core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0044e920(this_ptr_00);
        core_dlight_cpp_CDemonLight_endScene_FUN_0044e720(this_ptr_00,0);
        core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970(this_ptr_00);
        core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_00441c50
                  (&g_CDemonCamera_01fb8508,this_ptr_00,rect);
        iVar5 = iVar5 + 1;
        rect = rect + 1;
        local_18 = local_18 + 4;
      } while (iVar5 < _DAT_01fb9b54);
    }
  }
  this_ptr->lighting_quality_mode = 0;
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(&g_CDemonCamera_01fb8508,1);
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20(&g_CDemonCamera_01fb8508);
  _DAT_01c038f4 = 0;
  if (this_ptr->has_sky != 0) {
    core_dskybox_cpp_renderSkyDome_FUN_00463580
              (0x01B7B4E8,this_ptr->sky_texture_name,this_ptr->sky_brightness);
  }
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,1);
  core_gore_cpp_CGore_renderDecals_FUN_004afe80(g_CGore_PTR_005b96c4,1,in_stack_ffffff10);
  core_fire_cpp_CFireEffect_renderDecals_FUN_0048a970
            (g_CFireEffect_PTR_005b80f0,1,in_stack_ffffff10);
  if (0x02DD1210->wave_animation_enabled == 0) {
    core_water_cpp_CWater_render_FUN_00550cb0(0x02DD1210,0);
  }
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00440c50(&g_CDemonCamera_01fb8508,0);
  core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(&g_CDemonCamera_01fb8508,0);
  this_ptr->directional_light_ratio_enabled = 0;
  core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760(this_ptr);
  if (this_ptr->cameras[index].fog_enabled == 0) {
    iVar5 = this_ptr->cameras[index].reverb_preset;
  }
  else {
    iVar5 = this_ptr->default_master_reverb;
  }
  core_sound_cpp_CSound_setReverbPreset_FUN_0052ece0(g_CSound_PTR_005bed68,iVar5);
  local_2c.x = g_CDemonCamera_01fb8508.position.x;
  local_2c.y = g_CDemonCamera_01fb8508.position.y;
  local_2c.z = g_CDemonCamera_01fb8508.position.z;
  if (&local_44 != &local_2c) {
    local_44.x = g_CDemonCamera_01fb8508.position.x;
    local_44.y = g_CDemonCamera_01fb8508.position.y;
    local_44.z = g_CDemonCamera_01fb8508.position.z;
  }
  pCVar6 = &g_CDemonCamera_01fb8508.rotation_matrix;
  pfVar7 = local_a0;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar7 = pCVar6->m[0].x;
    pCVar6 = (CMatrix3x3f *)((int)pCVar6 + ((uint)bVar11 * -2 + 1) * 4);
    pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
  }
  pfVar7 = local_a0;
  pCVar6 = &local_78;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    pCVar6->m[0].x = *pfVar7;
    pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
    pCVar6 = (CMatrix3x3f *)((int)pCVar6 + ((uint)bVar11 * -2 + 1) * 4);
  }
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(&local_78,&local_50);
  if (&local_38 != pCVar1) {
    local_38.x = pCVar1->x;
    local_38.y = pCVar1->y;
    local_38.z = pCVar1->z;
  }
  iVar5 = 0;
  core_weather_cpp_CWeather_setOriginAndRotation_FUN_005557d0(0x02DDF9F0,&local_44,&local_38);
  pCVar4 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      iVar5 = iVar5 + 1;
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(this_ptr,pCVar4->actors[0]);
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar5 < this_ptr->actor_count);
  }
  _DAT_01ffb074 = 1;
  return;
}
