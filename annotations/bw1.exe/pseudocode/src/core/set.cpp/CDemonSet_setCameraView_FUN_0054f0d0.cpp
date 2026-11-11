// Name: core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0
// Address: 0054f0d0
// Address Range: [[0054f0d0, 0054fb94]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(CDemonSet *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(CDemonSet *this_ptr,int index)

{
  CDemonLight *this_ptr_00;
  int iVar1;
  CVector3f *pCVar2;
  int iVar3;
  CDemonSet *pCVar4;
  CBoundingBox3D *unaff_EBP;
  int iVar5;
  CMatrix3x3f *pCVar6;
  float *pfVar7;
  uint *puVar8;
  CVector3f *pCVar9;
  int iVar10;
  float *pfVar11;
  uint *puVar12;
  char *pcVar13;
  CRect *rect;
  uint *puVar14;
  byte bVar15;
  float afStackY_10a8 [937];
  CBoundingBox3D *in_stack_fffffe08;
  int aiStack_1f0 [22];
  char local_198 [80];
  float local_148 [10];
  float local_120 [12];
  uint auStack_f0 [4];
  uint local_e0 [2];
  byte auStack_d8 [24];
  uint uStack_c0;
  float afStack_bc [3];
  CVector3f local_b0;
  float local_a4;
  float afStack_a0 [7];
  float fStack_84;
  float local_80 [5];
  uint uStack_6c;
  float local_68 [3];
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float fStack_34;
  float fStack_30;
  int local_2c;
  int *local_28;
  C3DSLight *local_24;
  CDemonSet *local_20;
  int local_1c;
  CDemonActor *local_18;
  int *piVar16;
  
  bVar15 = 0;
  if ((index < 0) || (this_ptr->camera_count <= index)) {
    _DAT_01d1d400 = "..\\core\\set.cpp";
    _DAT_01d1d404 = 0x476;
    core_main_c_FUN_005030e0("CDemonSet::setCameraView - invalid index: %d",index);
  }
  iVar3 = 0;
  if (0 < _DAT_01fe55bc) {
    iVar5 = 0;
    do {
      puVar8 = (uint *)(iVar5 + 0x1fe55c0);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20((CDemonLight *)*puVar8);
    } while (iVar3 < _DAT_01fe55bc);
  }
  iVar3 = 0;
  if (0 < _DAT_01fe4e38) {
    iVar5 = 0;
    do {
      puVar8 = (uint *)(&DAT_01fe4e3c + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20((CDemonLight *)*puVar8);
    } while (iVar3 < _DAT_01fe4e38);
  }
  iVar3 = 0;
  if (0 < _DAT_01fe4e38) {
    iVar5 = 0;
    do {
      puVar8 = (uint *)(&DAT_01fe4e3c + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_004627f0((CDemonLight *)*puVar8);
    } while (iVar3 < _DAT_01fe4e38);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_00462760();
  this_ptr->previous_best_camera_timer = 0.5;
  this_ptr->lighting_quality_mode = 1;
  iVar3 = 0;
  this_ptr->directional_light_ratio_enabled = 1;
  _DAT_01fe4e38 = 0;
  this_ptr->previous_best_camera_index = this_ptr->selected_camera_index;
  _DAT_01fe5c88 = 0;
  this_ptr->selected_camera_index = index;
  _DAT_01fe55d0 = 0;
  _DAT_01fe5764 = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      iVar3 = iVar3 + 1;
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060(this_ptr,pCVar4->actors[0]);
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar3 < this_ptr->actor_count);
  }
  if (this_ptr->cameras[index].is_panning == 0) {
    pcVar13 = this_ptr->cameras[index].name;
    core_setutil_cpp_C3DSCamera_apply_FUN_0055c5f0(pcVar13,&g_CDemonCameraInstance);
    pCVar2 = &(this_ptr->active_fog).scroll;
    if (this_ptr->cameras[index].use_global_fog == 0) {
      (this_ptr->active_fog).color_index.r = (((SFog *)(pcVar13 + 0x154))->color_index).r;
      (this_ptr->active_fog).color_index.g = *(int *)(pcVar13 + 0x158);
      (this_ptr->active_fog).color_index.b = *(int *)(pcVar13 + 0x15c);
      if (pCVar2 != (CVector3f *)(pcVar13 + 0x160)) {
        pCVar2->x = ((CVector3f *)(pcVar13 + 0x160))->x;
        (this_ptr->active_fog).scroll.y = *(float *)(pcVar13 + 0x164);
        (this_ptr->active_fog).scroll.z = *(float *)(pcVar13 + 0x168);
      }
      (this_ptr->active_fog).height_threshold = *(float *)(pcVar13 + 0x16c);
      (this_ptr->active_fog).density_multiplier = *(float *)(pcVar13 + 0x170);
      (this_ptr->active_fog).temperature = *(float *)(pcVar13 + 0x174);
    }
    else {
      (this_ptr->active_fog).color_index.r = (this_ptr->scene_fog).color_index.r;
      (this_ptr->active_fog).color_index.g = (this_ptr->scene_fog).color_index.g;
      pCVar9 = &(this_ptr->scene_fog).scroll;
      (this_ptr->active_fog).color_index.b = (this_ptr->scene_fog).color_index.b;
      if (pCVar2 != pCVar9) {
        pCVar2->x = pCVar9->x;
        (this_ptr->active_fog).scroll.y = (this_ptr->scene_fog).scroll.y;
        (this_ptr->active_fog).scroll.z = (this_ptr->scene_fog).scroll.z;
      }
      (this_ptr->active_fog).height_threshold = (this_ptr->scene_fog).height_threshold;
      (this_ptr->active_fog).density_multiplier = (this_ptr->scene_fog).density_multiplier;
      (this_ptr->active_fog).temperature = (this_ptr->scene_fog).temperature;
    }
    core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004542a0
              (&g_CDemonCameraInstance,&this_ptr->active_fog);
    g_CDemonRaytraceInstance.rendering_mode = 0;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044ceb0(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700(&g_CDemonCameraInstance);
    core_set_cpp_CDemonSet_buildDisplayList_FUN_005545a0(this_ptr,0x10);
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(this_ptr,9999.9,1);
    core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00455100(&g_CDemonCameraInstance);
    _DAT_02026344 = 1;
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0054eef0(this_ptr,1);
    _DAT_02026344 = 0;
    core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044ef30(&g_CDemonCameraInstance);
    core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_00455150(&g_CDemonCameraInstance);
    _sprintf(local_198,"%s.raw");
    core_dcamera_cpp_CDemonCamera_loadImage_FUN_0044fff0(&g_CDemonCameraInstance,local_198);
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0054eef0(this_ptr,1);
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0(&g_CDemonCameraInstance,0);
    if (_DAT_01c50948 != 0) {
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(this_ptr,9999.9,0);
      if (g_CWaterPtr->wave_animation_enabled == 0) {
        core_water_cpp_CWater_render_FUN_005a9f10(g_CWaterPtr,0);
      }
      core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0054eef0(this_ptr,1);
    }
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044d610(&g_CDemonCameraInstance,0);
  }
  if (this_ptr->disable_spotlight_shadows == 0) {
    iVar3 = 0;
    if (0 < this_ptr->light_count) {
      local_2c = index << 4;
      local_24 = this_ptr->lights;
      pCVar4 = this_ptr;
      iVar5 = 0;
      do {
        if ((pCVar4->lights[0].light_type == 1) && (pCVar4->lights[0].visible_flags[index] != '\0'))
        {
          *(C3DSLight **)(&DAT_01fe5c8c + _DAT_01fe5c88 * 4) = local_24 + iVar3;
          _DAT_01fe5c88 = _DAT_01fe5c88 + 1;
          if (199 < _DAT_01fe5c88) {
            _DAT_01d1d400 = "..\\core\\set.cpp";
            _DAT_01d1d404 = 0x500;
            core_main_c_FUN_005030e0("CDemonSet::setCameraView - Too many omni lights");
          }
        }
        iVar1 = _DAT_01fe4e38;
        iVar10 = iVar5;
        if ((pCVar4->lights[0].light_type == 0) &&
           (iVar10 = iVar5 + 1, pCVar4->lights[0].visible_flags[index] != '\0')) {
          *(uint *)(&DAT_01fe4e3c + _DAT_01fe4e38 * 4) =
               *(uint *)(&DAT_01fe4cb8 + iVar5 * 4);
          puVar8 = (uint *)((int)&pCVar4->lights[0].camera_light_bounds[0].x_min + local_2c);
          puVar14 = (uint *)(iVar1 * 0x10 + 0x1fe4fc0 + (uint)bVar15 * -8);
          puVar12 = puVar8 + (uint)bVar15 * -2 + 1;
          *(uint *)(iVar1 * 0x10 + 0x1fe4fbc) = *puVar8;
          puVar8 = puVar14 + (uint)bVar15 * -2 + 1;
          *puVar14 = *puVar12;
          *puVar8 = puVar12[(uint)bVar15 * -2 + 1];
          puVar8[(uint)bVar15 * -2 + 1] = (puVar12 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
          _DAT_01fe4e38 = _DAT_01fe4e38 + 1;
        }
        iVar3 = iVar3 + 1;
        pCVar4 = (CDemonSet *)&pCVar4->cameras[0xe].vdir_zone;
        iVar5 = iVar10;
      } while (iVar3 < this_ptr->light_count);
    }
    core_set_cpp_CDemonSet_process_FUN_005542c0(this_ptr);
    iVar3 = 0;
    if (0 < _DAT_01fe4e38) {
      rect = (CRect *)0x1fe4fbc;
      local_28 = &this_ptr->cameras[index + -1].enabled;
      iVar5 = 0;
      do {
        this_ptr_00 = *(CDemonLight **)(&DAT_01fe4e3c + iVar5);
        core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_00462770(this_ptr_00);
        core_dlight_cpp_CDemonLight_beginScene_FUN_00462820(this_ptr_00,1);
        core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_00462be0(this_ptr_00);
        core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0054eef0(this_ptr,1);
        core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_00462cd0(this_ptr_00);
        core_dlight_cpp_CDemonLight_endScene_FUN_00462ad0(this_ptr_00,0);
        core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20(this_ptr_00);
        if (local_28[0x51] == 0) {
          core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044e8e0
                    (&g_CDemonCameraInstance,this_ptr_00,rect);
        }
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        rect = rect + 1;
      } while (iVar3 < _DAT_01fe4e38);
    }
    core_dcamera_cpp_FUN_0044ee30
              (&g_CDemonCameraInstance,&this_ptr->directional_light_dir,
               this_ptr->directional_light_intensity);
  }
  this_ptr->lighting_quality_mode = 0;
  iVar3 = this_ptr->cameras[index].is_panning;
  if (iVar3 == 0) {
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044ceb0(&g_CDemonCameraInstance,1);
    core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700(&g_CDemonCameraInstance);
    _DAT_01c51cac = iVar3;
    if (this_ptr->has_sky != 0) {
      core_dskybox_cpp_renderSkyDome_FUN_00486900
                (0x01BEEFBC,this_ptr->sky_texture_name,this_ptr->sky_brightness);
    }
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0054eef0(this_ptr,1);
    core_gore_cpp_CGore_renderDecals_FUN_004e5cd0(g_CGorePtr,1,1);
    core_fire_cpp_CFireEffect_renderDecals_FUN_004b54a0(0x01C57074,1,1);
    if (g_CWaterPtr->wave_animation_enabled == 0) {
      core_water_cpp_CWater_render_FUN_005a9f10(g_CWaterPtr,0);
    }
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044d610(&g_CDemonCameraInstance,0);
  }
  this_ptr->directional_light_ratio_enabled = 0;
  core_set_cpp_CDemonSet_renderStaticLights_FUN_00550260(this_ptr);
  if (this_ptr->cameras[index].use_global_fog == 0) {
    iVar3 = this_ptr->cameras[index].reverb_preset;
  }
  else {
    iVar3 = this_ptr->default_master_reverb;
  }
  core_sound_cpp_CSound_setReverbPreset_FUN_0057db00(0x02C82A60,iVar3);
  afStack_a0[2] = g_CDemonCameraInstance.base.position.f.x;
  afStack_a0[(uint)bVar15 * -2 + 3] =
       *(float *)((int)&g_CDemonCameraInstance + (uint)bVar15 * -8 + 8);
  afStack_a0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
       *(float *)((uint)bVar15 * -8 + 0x1fe37f8 + (uint)bVar15 * -8);
  local_44.x = afStack_a0[2];
  *(float *)((int)&local_50 + ((uint)bVar15 * -2 + 3) * 4 + 4) = afStack_a0[(uint)bVar15 * -2 + 3];
  *(float *)((int)&local_50 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 4) * 4 + 4) =
       afStack_a0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
  if (&local_5c != &local_44) {
    local_5c.x = local_44.x;
    local_5c.y = local_44.y;
    local_5c.z = local_44.z;
  }
  pCVar6 = &g_CDemonCameraInstance.base.rotation_matrix;
  pfVar7 = local_148;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = pCVar6->m[0].x;
    pCVar6 = (CMatrix3x3f *)((int)pCVar6 + ((uint)bVar15 * -2 + 1) * 4);
    pfVar7 = pfVar7 + (uint)bVar15 * -2 + 1;
  }
  pfVar7 = local_148;
  pfVar11 = local_120;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar11 = *pfVar7;
    pfVar7 = pfVar7 + (uint)bVar15 * -2 + 1;
    pfVar11 = pfVar11 + (uint)bVar15 * -2 + 1;
  }
  core_dirmat_cpp_FUN_0045f840(local_120);
  local_50.x = local_a4;
  *(float *)((int)&local_50 + (uint)bVar15 * -8 + 4) = afStack_a0[(uint)bVar15 * -2];
  *(float *)((int)&local_50 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 1) * 4 + 4) =
       afStack_a0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
  if (&local_b0 != &local_50) {
    local_b0.x = local_50.x;
    local_b0.y = local_50.y;
    local_b0.z = local_50.z;
  }
  core_weather_cpp_CWeather_setOriginAndRotation_FUN_005af040(0x02C997C0,&local_5c,&local_b0);
  iVar3 = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      iVar3 = iVar3 + 1;
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060(this_ptr,pCVar4->actors[0]);
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar3 < this_ptr->actor_count);
  }
  local_1c = 0;
  if (0 < this_ptr->actor_count) {
    local_20 = this_ptr;
    do {
      local_18 = local_20->actors[0];
      if ((local_18->is_transparent != 0) || (local_18->is_renderable != 0)) {
        (*((local_18->vtable)._ub)->getBoundingBox)(local_18,in_stack_fffffe08);
        piVar16 = aiStack_1f0;
        iVar5 = 0;
        puVar8 = auStack_f0;
        puVar12 = local_e0;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + (uint)bVar15 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
        }
        do {
          core_box_cpp_FUN_00420570(auStack_d8,iVar5);
          uStack_c0 = uStack_6c;
          afStack_bc[(uint)bVar15 * -2] = local_68[(uint)bVar15 * -2];
          afStack_bc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               local_68[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          in_stack_fffffe08 = unaff_EBP;
          core_actor_cpp_FUN_00408b40(unaff_EBP,&uStack_c0);
          fStack_84 = afStack_bc[2];
          local_80[(uint)bVar15 * -2] = *(float *)((int)&local_b0 + (uint)bVar15 * -8);
          local_80[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               *(float *)((int)&local_b0 + ((uint)bVar15 * -2 + (uint)bVar15 * -2) * 4 + 4);
          *piVar16 = (int)ROUND(fStack_84 * _DAT_00605000);
          piVar16[1] = (int)ROUND(local_80[0] * _DAT_00605000);
          piVar16[2] = (int)ROUND(local_80[1] * _DAT_00605000);
          piVar16 = piVar16 + 3;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
      }
      local_1c = local_1c + 1;
      local_20 = (CDemonSet *)local_20->cameras;
    } while (local_1c < this_ptr->actor_count);
  }
  local_68[0] = (this_ptr->directional_light_dir).x * this_ptr->directional_light_intensity;
  _DAT_0202636c = 1;
  local_68[1] = (this_ptr->directional_light_dir).y * this_ptr->directional_light_intensity;
  local_68[2] = (this_ptr->directional_light_dir).z * this_ptr->directional_light_intensity;
  local_38 = local_68[0];
  *(float *)((int)&local_50 + ((uint)bVar15 * -2 + 6) * 4 + 4) = local_68[(uint)bVar15 * -2 + 1];
  *(float *)((int)&local_50 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 7) * 4 + 4) =
       local_68[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 2];
  if (local_80 != &local_38) {
    local_80[0] = local_38;
    local_80[1] = fStack_34;
    local_80[2] = fStack_30;
  }
  _DAT_0202634c = (int)ROUND(local_80[0] * _DAT_00605004);
  _DAT_02026350 = (int)ROUND(local_80[1] * _DAT_00605004);
  _DAT_02026354 = (int)ROUND(local_80[2] * _DAT_00605004);
  return;
}
