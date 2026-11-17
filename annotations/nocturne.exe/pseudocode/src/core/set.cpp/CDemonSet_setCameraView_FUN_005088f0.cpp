// Name: core_set.cpp_CDemonSet_setCameraView_FUN_005088f0
// Address: 005088f0
// Address Range: [[005088f0, 0050909a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(CDemonSet *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(CDemonSet *this_ptr,int index)

{
  uint *puVar1;
  CDemonLight *this_ptr_00;
  CVector3f *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  CDemonSet *pCVar5;
  int iVar6;
  C3DSCamera *this_ptr_01;
  CMatrix3x3f *pCVar7;
  float *pfVar8;
  int *piVar9;
  CRect *rect;
  int *piVar10;
  int *piVar11;
  byte bVar12;
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
  
  bVar12 = 0;
  if ((index < 0) || (this_ptr->camera_count <= index)) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 1005;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonSet::setCameraView - invalid index: %d",index);
  }
  iVar6 = 0;
  if (0 < g_INT_01fba2d8) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)((int)g_CDemonLight_PTR_ARRAY_01fba2dc + iVar3);
      iVar3 = iVar3 + 4;
      iVar6 = iVar6 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970((CDemonLight *)*puVar1);
    } while (iVar6 < g_INT_01fba2d8);
  }
  iVar6 = 0;
  if (0 < g_INT_01fb9b54) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)((int)g_CDemonLight_PTR_ARRAY_01fb9b58 + iVar3);
      iVar3 = iVar3 + 4;
      iVar6 = iVar6 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970((CDemonLight *)*puVar1);
    } while (iVar6 < g_INT_01fb9b54);
  }
  iVar6 = 0;
  if (0 < g_INT_01fb9b54) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)((int)g_CDemonLight_PTR_ARRAY_01fb9b58 + iVar3);
      iVar3 = iVar3 + 4;
      iVar6 = iVar6 + 1;
      core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440((CDemonLight *)*puVar1);
    } while (iVar6 < g_INT_01fb9b54);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0044e3b0();
  this_ptr->previous_best_camera_timer = 3.0;
  this_ptr->lighting_quality_mode = 1;
  this_ptr->directional_light_ratio_enabled = 1;
  this_ptr->previous_best_camera_index = this_ptr->selected_camera_index;
  this_ptr->selected_camera_index = index;
  g_INT_01fb9b54 = 0;
  this_ptr_01 = this_ptr->cameras + index;
  g_INT_01fba9a4 = 0;
  g_INT_01fba2ec = 0;
  g_INT_01fba480 = 0;
  core_setutil_cpp_C3DSCamera_apply_FUN_005148b0(this_ptr_01,&g_CDemonCameraInstance);
  pCVar2 = &(this_ptr->active_fog).scroll;
  if (this_ptr->cameras[index].use_global_fog == 0) {
    (this_ptr->active_fog).color_index.r = (this_ptr_01->fog).color_index.r;
    (this_ptr->active_fog).color_index.g = (this_ptr_01->fog).color_index.g;
    pCVar4 = &(this_ptr_01->fog).scroll;
    (this_ptr->active_fog).color_index.b = (this_ptr_01->fog).color_index.b;
    if (pCVar2 != pCVar4) {
      pCVar2->x = pCVar4->x;
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
    pCVar4 = &(this_ptr->scene_fog).scroll;
    (this_ptr->active_fog).color_index.b = (this_ptr->scene_fog).color_index.b;
    if (pCVar2 != pCVar4) {
      pCVar2->x = pCVar4->x;
      (this_ptr->active_fog).scroll.y = (this_ptr->scene_fog).scroll.y;
      (this_ptr->active_fog).scroll.z = (this_ptr->scene_fog).scroll.z;
    }
    (this_ptr->active_fog).height_threshold = (this_ptr->scene_fog).height_threshold;
    (this_ptr->active_fog).density_multiplier = (this_ptr->scene_fog).density_multiplier;
    (this_ptr->active_fog).temperature = (this_ptr->scene_fog).temperature;
  }
  iVar6 = 0;
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004474e0
            (&g_CDemonCameraInstance,&this_ptr->active_fog);
  g_CDemonRaytraceInstance.rendering_mode = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      iVar6 = iVar6 + 1;
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(this_ptr,pCVar5->actors[0]);
      pCVar5 = (CDemonSet *)pCVar5->cameras;
    } while (iVar6 < this_ptr->actor_count);
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(&g_CDemonCameraInstance,0);
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20(&g_CDemonCameraInstance);
  core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(this_ptr,0x10);
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(this_ptr,9999.9,1);
  core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00448310(&g_CDemonCameraInstance);
  g_INT_01ffb060 = 1;
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,1);
  g_INT_01ffb060 = 0;
  core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_004421b0(&g_CDemonCameraInstance);
  core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_00448380(&g_CDemonCameraInstance);
  _sprintf(&stack0xffffff10,"%s.raw",this_ptr->cameras + index);
  core_dcamera_cpp_CDemonCamera_loadImage_FUN_00443250(&g_CDemonCameraInstance,&stack0xffffff10);
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,1);
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00440c50(&g_CDemonCameraInstance,0);
  if (g_UseExternalRenderer != 0) {
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(this_ptr,9999.9,0);
    if (g_CWaterPtr->wave_animation_enabled == 0) {
      core_water_cpp_CWater_render_FUN_00550cb0(g_CWaterPtr,0);
    }
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,1);
  }
  core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(&g_CDemonCameraInstance,0);
  if (this_ptr->disable_spotlight_shadows == 0) {
    local_14 = 0;
    if (0 < this_ptr->light_count) {
      local_20 = index << 4;
      local_1c = this_ptr->lights;
      local_14 = 0;
      pCVar5 = this_ptr;
      iVar6 = 0;
      do {
        if ((pCVar5->lights[0].light_type == 1) && (pCVar5->lights[0].visible_flags[index] != '\0'))
        {
          g_C3DSLight_PTR_ARRAY_01fba9a8[g_INT_01fba9a4] = local_1c + local_14;
          g_INT_01fba9a4 = g_INT_01fba9a4 + 1;
          if (199 < g_INT_01fba9a4) {
            g_CurrentFilename = "..\\core\\set.cpp";
            g_CurrentLineNumber = 1120;
            core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonSet::setCameraView - Too many omni lights");
          }
        }
        iVar3 = iVar6;
        if ((pCVar5->lights[0].light_type == 0) &&
           (iVar3 = iVar6 + 1, pCVar5->lights[0].visible_flags[index] != '\0')) {
          g_CDemonLight_PTR_ARRAY_01fb9b58[g_INT_01fb9b54] = g_CDemonLight_PTR_ARRAY_01fb99d4[iVar6]
          ;
          piVar11 = (int *)((int)&pCVar5->lights[0].camera_light_bounds[0].x_min + local_20);
          piVar10 = (int *)(g_INT_01fb9b54 * 0x10 + 0x1fb9cdc + (uint)bVar12 * -8);
          piVar9 = piVar11 + (uint)bVar12 * -2 + 1;
          g_CRect_ARRAY_01fb9cd8[g_INT_01fb9b54].x_min = *piVar11;
          piVar11 = piVar10 + (uint)bVar12 * -2 + 1;
          *piVar10 = *piVar9;
          *piVar11 = piVar9[(uint)bVar12 * -2 + 1];
          piVar11[(uint)bVar12 * -2 + 1] = (piVar9 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
          g_INT_01fb9b54 = g_INT_01fb9b54 + 1;
        }
        pCVar5 = (CDemonSet *)(pCVar5->cameras[0xf].name + 0x34);
        local_14 = local_14 + 1;
        iVar6 = iVar3;
      } while (local_14 < this_ptr->light_count);
    }
    core_set_cpp_CDemonSet_process_FUN_0050d040(this_ptr);
    iVar6 = 0;
    if (0 < g_INT_01fb9b54) {
      rect = g_CRect_ARRAY_01fb9cd8;
      local_18 = 0;
      do {
        this_ptr_00 = *(CDemonLight **)((int)g_CDemonLight_PTR_ARRAY_01fb9b58 + local_18);
        core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0(this_ptr_00);
        core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(this_ptr_00,1);
        core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044e830(this_ptr_00);
        core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,1);
        core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0044e920(this_ptr_00);
        core_dlight_cpp_CDemonLight_endScene_FUN_0044e720(this_ptr_00,0);
        core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970(this_ptr_00);
        core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_00441c50
                  (&g_CDemonCameraInstance,this_ptr_00,rect);
        iVar6 = iVar6 + 1;
        rect = rect + 1;
        local_18 = local_18 + 4;
      } while (iVar6 < g_INT_01fb9b54);
    }
  }
  this_ptr->lighting_quality_mode = 0;
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(&g_CDemonCameraInstance,1);
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20(&g_CDemonCameraInstance);
  g_INT_01c038f4 = 0;
  if (this_ptr->has_sky != 0) {
    core_dskybox_cpp_renderSkyDome_FUN_00463580
              (PTR_g_SMRGLSkyTexture_ARRAY_01b7b4e8_005b0674,this_ptr->sky_texture_name,
               this_ptr->sky_brightness);
  }
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,1);
  core_gore_cpp_CGore_renderDecals_FUN_004afe80(g_CGorePtr,1,in_stack_ffffff10);
  core_fire_cpp_CFireEffect_renderDecals_FUN_0048a970
            (g_CFireEffect_PTR_005b80f0,1,in_stack_ffffff10);
  if (g_CWaterPtr->wave_animation_enabled == 0) {
    core_water_cpp_CWater_render_FUN_00550cb0(g_CWaterPtr,0);
  }
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00440c50(&g_CDemonCameraInstance,0);
  core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(&g_CDemonCameraInstance,0);
  this_ptr->directional_light_ratio_enabled = 0;
  core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760(this_ptr);
  if (this_ptr->cameras[index].use_global_fog == 0) {
    iVar6 = this_ptr->cameras[index].reverb_preset;
  }
  else {
    iVar6 = this_ptr->default_master_reverb;
  }
  core_sound_cpp_CSound_setReverbPreset_FUN_0052ece0(g_CSound_PTR_005bed68,iVar6);
  local_2c.x = g_CDemonCameraInstance.position.x;
  local_2c.y = g_CDemonCameraInstance.position.y;
  local_2c.z = g_CDemonCameraInstance.position.z;
  if (&local_44 != &local_2c) {
    local_44.x = g_CDemonCameraInstance.position.x;
    local_44.y = g_CDemonCameraInstance.position.y;
    local_44.z = g_CDemonCameraInstance.position.z;
  }
  pCVar7 = &g_CDemonCameraInstance.rotation_matrix;
  pfVar8 = local_a0;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar8 = pCVar7->m[0].x;
    pCVar7 = (CMatrix3x3f *)((int)pCVar7 + ((uint)bVar12 * -2 + 1) * 4);
    pfVar8 = pfVar8 + (uint)bVar12 * -2 + 1;
  }
  pfVar8 = local_a0;
  pCVar7 = &local_78;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    pCVar7->m[0].x = *pfVar8;
    pfVar8 = pfVar8 + (uint)bVar12 * -2 + 1;
    pCVar7 = (CMatrix3x3f *)((int)pCVar7 + ((uint)bVar12 * -2 + 1) * 4);
  }
  pCVar2 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(&local_78,&local_50);
  if (&local_38 != pCVar2) {
    local_38.x = pCVar2->x;
    local_38.y = pCVar2->y;
    local_38.z = pCVar2->z;
  }
  iVar6 = 0;
  core_weather_cpp_CWeather_setOriginAndRotation_FUN_005557d0
            (g_CWeather_PTR_005c15b8,&local_44,&local_38);
  pCVar5 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      iVar6 = iVar6 + 1;
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(this_ptr,pCVar5->actors[0]);
      pCVar5 = (CDemonSet *)pCVar5->cameras;
    } while (iVar6 < this_ptr->actor_count);
  }
  g_INT_01ffb074 = 1;
  return;
}
