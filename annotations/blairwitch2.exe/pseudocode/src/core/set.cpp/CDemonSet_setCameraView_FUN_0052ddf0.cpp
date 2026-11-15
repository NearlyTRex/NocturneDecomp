// Name: core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0
// Address: 0052ddf0
// Address Range: [[0052ddf0, 0052e8b4]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0(CDemonSet *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0(CDemonSet *this_ptr,int index)

{
  CDemonLight *this_ptr_00;
  int iVar1;
  CVector3f *pCVar2;
  int iVar3;
  CDemonSet *pCVar4;
  CDemonActor *unaff_EBP;
  uint corner_index;
  int iVar5;
  CMatrix3x3f *pCVar6;
  float *pfVar7;
  uint *puVar8;
  CVector3f *pCVar9;
  int iVar10;
  uint *puVar11;
  char *this_ptr_01;
  CRect *rect;
  uint *puVar12;
  byte bVar13;
  float afStackY_10a8 [937];
  CDemonActor *in_stack_fffffe08;
  int aiStack_1f0 [22];
  char local_198 [80];
  float local_148 [10];
  CMatrix3x3f local_120;
  uint auStack_f0 [4];
  uint local_e0 [2];
  CBoundingBox3D CStack_d8;
  CVector3f CStack_c0;
  byte auStack_b4 [8];
  float local_ac [2];
  CVector3f local_a4;
  float local_98;
  float afStack_94 [4];
  float fStack_84;
  float local_80 [5];
  CVector3f CStack_6c;
  float local_60;
  CVector3f local_5c;
  float local_50;
  float local_4c [2];
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
  int *piVar14;
  
  bVar13 = 0;
  if ((index < 0) || (this_ptr->camera_count <= index)) {
    _DAT_01d046a0 = "..\\core\\set.cpp";
    _DAT_01d046a4 = 0x477;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonSet::setCameraView - invalid index: %d");
  }
  iVar3 = 0;
  if (0 < _DAT_01fc9608) {
    iVar5 = 0;
    do {
      puVar8 = (uint *)(iVar5 + 0x1fc960c);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520((CDemonLight *)*puVar8);
    } while (iVar3 < _DAT_01fc9608);
  }
  iVar3 = 0;
  if (0 < _DAT_01fc8e84) {
    iVar5 = 0;
    do {
      puVar8 = (uint *)(&DAT_01fc8e88 + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520((CDemonLight *)*puVar8);
    } while (iVar3 < _DAT_01fc8e84);
  }
  iVar3 = 0;
  if (0 < _DAT_01fc8e84) {
    iVar5 = 0;
    do {
      puVar8 = (uint *)(&DAT_01fc8e88 + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00449ff0((CDemonLight *)*puVar8);
    } while (iVar3 < _DAT_01fc8e84);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_00449f60();
  this_ptr->previous_best_camera_timer = 0.5;
  this_ptr->lighting_quality_mode = 1;
  iVar3 = 0;
  this_ptr->directional_light_ratio_enabled = 1;
  _DAT_01fc8e84 = 0;
  this_ptr->previous_best_camera_index = this_ptr->selected_camera_index;
  _DAT_01fc9cd4 = 0;
  this_ptr->selected_camera_index = index;
  _DAT_01fc961c = 0;
  _DAT_01fc97b0 = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      iVar3 = iVar3 + 1;
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80(this_ptr,pCVar4->actors[0]);
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar3 < this_ptr->actor_count);
  }
  if (this_ptr->cameras[index].is_panning == 0) {
    this_ptr_01 = this_ptr->cameras[index].name;
    core_setutil_cpp_C3DSCamera_apply_FUN_0053ad20
              ((C3DSCamera *)this_ptr_01,&g_CDemonCameraInstance);
    pCVar2 = &(this_ptr->active_fog).scroll;
    if (this_ptr->cameras[index].use_global_fog == 0) {
      (this_ptr->active_fog).color_index.r = (((SFog *)(this_ptr_01 + 0x154))->color_index).r;
      (this_ptr->active_fog).color_index.g = *(int *)(this_ptr_01 + 0x158);
      (this_ptr->active_fog).color_index.b = *(int *)(this_ptr_01 + 0x15c);
      if (pCVar2 != (CVector3f *)(this_ptr_01 + 0x160)) {
        pCVar2->x = ((CVector3f *)(this_ptr_01 + 0x160))->x;
        (this_ptr->active_fog).scroll.y = *(float *)(this_ptr_01 + 0x164);
        (this_ptr->active_fog).scroll.z = *(float *)(this_ptr_01 + 0x168);
      }
      (this_ptr->active_fog).height_threshold = *(float *)(this_ptr_01 + 0x16c);
      (this_ptr->active_fog).density_multiplier = *(float *)(this_ptr_01 + 0x170);
      (this_ptr->active_fog).temperature = *(float *)(this_ptr_01 + 0x174);
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
    core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00442bf0
              (&g_CDemonCameraInstance,&this_ptr->active_fog);
    g_CDemonRaytraceInstance.rendering_mode = 0;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0043b7f0(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040(&g_CDemonCameraInstance);
    core_set_cpp_CDemonSet_buildDisplayList_FUN_005332f0(this_ptr,0x10);
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0(this_ptr,9999.9,1);
    core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00443a50(&g_CDemonCameraInstance);
    _DAT_0200a390 = 1;
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(this_ptr,1);
    _DAT_0200a390 = 0;
    core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0043d870(&g_CDemonCameraInstance);
    core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_00443aa0(&g_CDemonCameraInstance);
    _sprintf(local_198,"%s.raw");
    core_dcamera_cpp_CDemonCamera_loadImage_FUN_0043e930(&g_CDemonCameraInstance,local_198);
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(this_ptr,1);
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0043c200(&g_CDemonCameraInstance,0);
    if (_DAT_01c37788 != 0) {
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0(this_ptr,9999.9,0);
      if (g_CWaterPtr->wave_animation_enabled == 0) {
        core_water_cpp_CWater_render_FUN_005862e0(g_CWaterPtr,0);
      }
      core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(this_ptr,1);
    }
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0043bf50(&g_CDemonCameraInstance,0);
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
          *(C3DSLight **)(&DAT_01fc9cd8 + _DAT_01fc9cd4 * 4) = local_24 + iVar3;
          _DAT_01fc9cd4 = _DAT_01fc9cd4 + 1;
          if (199 < _DAT_01fc9cd4) {
            _DAT_01d046a0 = "..\\core\\set.cpp";
            _DAT_01d046a4 = 0x501;
            core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonSet::setCameraView - Too many omni lights");
          }
        }
        iVar1 = _DAT_01fc8e84;
        iVar10 = iVar5;
        if ((pCVar4->lights[0].light_type == 0) &&
           (iVar10 = iVar5 + 1, pCVar4->lights[0].visible_flags[index] != '\0')) {
          *(uint *)(&DAT_01fc8e88 + _DAT_01fc8e84 * 4) =
               *(uint *)(&DAT_01fc8d04 + iVar5 * 4);
          puVar8 = (uint *)((int)&pCVar4->lights[0].camera_light_bounds[0].x_min + local_2c);
          puVar12 = (uint *)(iVar1 * 0x10 + 0x1fc900c + (uint)bVar13 * -8);
          puVar11 = puVar8 + (uint)bVar13 * -2 + 1;
          *(uint *)(iVar1 * 0x10 + 0x1fc9008) = *puVar8;
          puVar8 = puVar12 + (uint)bVar13 * -2 + 1;
          *puVar12 = *puVar11;
          *puVar8 = puVar11[(uint)bVar13 * -2 + 1];
          puVar8[(uint)bVar13 * -2 + 1] = (puVar11 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
          _DAT_01fc8e84 = _DAT_01fc8e84 + 1;
        }
        iVar3 = iVar3 + 1;
        pCVar4 = (CDemonSet *)&pCVar4->cameras[0xe].vdir_zone;
        iVar5 = iVar10;
      } while (iVar3 < this_ptr->light_count);
    }
    core_set_cpp_CDemonSet_process_FUN_00533010(this_ptr);
    iVar3 = 0;
    if (0 < _DAT_01fc8e84) {
      rect = (CRect *)0x1fc9008;
      local_28 = &this_ptr->cameras[index + -1].enabled;
      iVar5 = 0;
      do {
        this_ptr_00 = *(CDemonLight **)(&DAT_01fc8e88 + iVar5);
        core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_00449f70(this_ptr_00);
        core_dlight_cpp_CDemonLight_beginScene_FUN_0044a020(this_ptr_00,1);
        core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044a3e0(this_ptr_00);
        core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(this_ptr,1);
        core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0044a4d0(this_ptr_00);
        core_dlight_cpp_CDemonLight_endScene_FUN_0044a2d0(this_ptr_00,0);
        core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520(this_ptr_00);
        if (local_28[0x51] == 0) {
          core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0043d220
                    (&g_CDemonCameraInstance,this_ptr_00,rect);
        }
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        rect = rect + 1;
      } while (iVar3 < _DAT_01fc8e84);
    }
    core_dcamera_cpp_FUN_0043d770
              (&g_CDemonCameraInstance,&this_ptr->directional_light_dir,
               this_ptr->directional_light_intensity);
  }
  this_ptr->lighting_quality_mode = 0;
  iVar3 = this_ptr->cameras[index].is_panning;
  if (iVar3 == 0) {
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0043b7f0(&g_CDemonCameraInstance,1);
    core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040(&g_CDemonCameraInstance);
    _DAT_01c38aec = iVar3;
    if (this_ptr->has_sky != 0) {
      core_dskybox_cpp_renderSkyDome_FUN_0046e410
                (0x01BD3A00,this_ptr->sky_texture_name,this_ptr->sky_brightness);
    }
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(this_ptr,1);
    core_gore_cpp_CGore_renderDecals_FUN_004c94c0(g_CGorePtr,1,1);
    core_fire_cpp_CFireEffect_renderDecals_FUN_0049cb50(0x01C3DEB4,1,1);
    if (g_CWaterPtr->wave_animation_enabled == 0) {
      core_water_cpp_CWater_render_FUN_005862e0(g_CWaterPtr,0);
    }
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0043c200(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0043bf50(&g_CDemonCameraInstance,0);
  }
  this_ptr->directional_light_ratio_enabled = 0;
  core_set_cpp_CDemonSet_renderStaticLights_FUN_0052ef80(this_ptr);
  if (this_ptr->cameras[index].use_global_fog == 0) {
    iVar3 = this_ptr->cameras[index].reverb_preset;
  }
  else {
    iVar3 = this_ptr->default_master_reverb;
  }
  core_sound_cpp_CSound_setReverbPreset_FUN_0055b0b0(0x0264B290,iVar3);
  local_98 = g_CDemonCameraInstance.base.position.f.x;
  afStack_94[(uint)bVar13 * -2] = *(float *)((int)&g_CDemonCameraInstance + (uint)bVar13 * -8 + 8);
  afStack_94[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
       *(float *)((uint)bVar13 * -8 + 0x1fc7844 + (uint)bVar13 * -8);
  local_44.x = local_98;
  local_4c[(uint)bVar13 * -2 + 3] = afStack_94[(uint)bVar13 * -2];
  local_4c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
       afStack_94[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
  if (&local_5c != (CVector3f *)(local_4c + 2)) {
    local_5c.x = local_44.x;
    local_5c.y = local_44.y;
    local_5c.z = local_44.z;
  }
  pCVar6 = &g_CDemonCameraInstance.base.rotation_matrix;
  pfVar7 = local_148;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = pCVar6->m[0].x;
    pCVar6 = (CMatrix3x3f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
    pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
  }
  pfVar7 = local_148;
  pCVar6 = &local_120;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar6->m[0].x = *pfVar7;
    pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
    pCVar6 = (CMatrix3x3f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
  }
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_004496e0(&local_120,&local_a4);
  local_50 = local_a4.x;
  local_4c[(uint)bVar13 * -2] = *(float *)((int)&local_a4 + (uint)bVar13 * -8 + 4);
  local_4c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
       *(float *)((int)&local_a4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
  if ((float *)(auStack_b4 + 4) != &local_50) {
    auStack_b4._4_4_ = local_50;
    local_ac[0] = local_4c[0];
    local_ac[1] = local_4c[1];
  }
  core_weather_cpp_CWeather_setOriginAndRotation_FUN_0058b4f0
            (0x02661F80,&local_5c,(CVector3f *)(auStack_b4 + 4));
  iVar3 = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      iVar3 = iVar3 + 1;
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80(this_ptr,pCVar4->actors[0]);
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar3 < this_ptr->actor_count);
  }
  local_1c = 0;
  if (0 < this_ptr->actor_count) {
    local_20 = this_ptr;
    do {
      local_18 = local_20->actors[0];
      if ((local_18->is_transparent != 0) || (local_18->is_renderable != 0)) {
        (*((local_18->vtable)._ub)->getBoundingBox)(local_18,(CBoundingBox3D *)in_stack_fffffe08);
        piVar14 = aiStack_1f0;
        corner_index = 0;
        puVar8 = auStack_f0;
        puVar11 = local_e0;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar11 = *puVar8;
          puVar8 = puVar8 + (uint)bVar13 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
        }
        do {
          core_box_cpp_CBoundingBox3D_getCorner_FUN_0041a600(&CStack_d8,corner_index,&CStack_6c);
          CStack_c0.x = CStack_6c.x;
          *(uint *)(auStack_b4 + (uint)bVar13 * -8 + -8) =
               *(uint *)((int)&CStack_6c + (uint)bVar13 * -8 + 4);
          *(uint *)(auStack_b4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + -4) =
               *(uint *)((int)&CStack_6c + ((uint)bVar13 * -2 + (uint)bVar13 * -2) * 4 + 8);
          in_stack_fffffe08 = unaff_EBP;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    (unaff_EBP,&CStack_c0,(CVector3f *)auStack_b4);
          fStack_84 = (float)auStack_b4._0_4_;
          local_80[(uint)bVar13 * -2] = *(float *)(auStack_b4 + (uint)bVar13 * -8 + 4);
          local_80[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
               local_ac[(uint)bVar13 * -2 + (uint)bVar13 * -2];
          *piVar14 = (int)ROUND(fStack_84 * _DAT_005fb210);
          piVar14[1] = (int)ROUND(local_80[0] * _DAT_005fb210);
          piVar14[2] = (int)ROUND(local_80[1] * _DAT_005fb210);
          piVar14 = piVar14 + 3;
          corner_index = corner_index + 1;
        } while ((int)corner_index < 8);
      }
      local_1c = local_1c + 1;
      local_20 = (CDemonSet *)local_20->cameras;
    } while (local_1c < this_ptr->actor_count);
  }
  CStack_6c.y = (this_ptr->directional_light_dir).x * this_ptr->directional_light_intensity;
  _DAT_0200a3b8 = 1;
  CStack_6c.z = (this_ptr->directional_light_dir).y * this_ptr->directional_light_intensity;
  local_60 = (this_ptr->directional_light_dir).z * this_ptr->directional_light_intensity;
  local_38 = CStack_6c.y;
  local_4c[(uint)bVar13 * -2 + 6] = *(float *)((int)&CStack_6c + (uint)bVar13 * -8 + 8);
  local_4c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
       (&local_60)[(uint)bVar13 * -2 + (uint)bVar13 * -2];
  if (local_80 != local_4c + 5) {
    local_80[0] = local_38;
    local_80[1] = fStack_34;
    local_80[2] = fStack_30;
  }
  _DAT_0200a398 = (int)ROUND(local_80[0] * _DAT_005fb214);
  _DAT_0200a39c = (int)ROUND(local_80[1] * _DAT_005fb214);
  _DAT_0200a3a0 = (int)ROUND(local_80[2] * _DAT_005fb214);
  return;
}
