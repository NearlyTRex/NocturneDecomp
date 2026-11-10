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
  byte *puVar2;
  int iVar3;
  CDemonSet *pCVar4;
  CBoundingBox3D *unaff_EBP;
  int iVar5;
  CMatrix3x3f *pCVar6;
  float *pfVar7;
  uint *puVar8;
  int iVar9;
  float *pfVar10;
  uint *puVar11;
  byte *puVar12;
  CRect *rect;
  uint *puVar13;
  byte bVar14;
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
  byte *local_28;
  C3DSLight *local_24;
  CDemonSet *local_20;
  int local_1c;
  CDemonActor *local_18;
  int *piVar15;
  
  bVar14 = 0;
  if ((index < 0) || (this_ptr->camera_count <= index)) {
    _DAT_01d046a0 = "..\\core\\set.cpp";
    _DAT_01d046a4 = 0x477;
    core_main_c_FUN_004e4500("CDemonSet::setCameraView - invalid index: %d",index);
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
  if (*(int *)&this_ptr->cameras[index].field_0x140 == 0) {
    puVar12 = &this_ptr->cameras[index].field_0x0;
    core_setutil_cpp_C3DSCamera_apply_FUN_0053ad20(puVar12,&g_CDemonCameraInstance);
    puVar2 = &this_ptr->field_0x15ac70;
    if (*(int *)&this_ptr->cameras[index].field_0x150 == 0) {
      *(uint *)&this_ptr->field_0x15ac64 = *(uint *)(puVar12 + 0x154);
      *(uint *)&this_ptr->field_0x15ac68 = *(uint *)(puVar12 + 0x158);
      *(uint *)&this_ptr->field_0x15ac6c = *(uint *)(puVar12 + 0x15c);
      if (puVar2 != puVar12 + 0x160) {
        *(uint *)puVar2 = *(uint *)(puVar12 + 0x160);
        *(uint *)&this_ptr->field_0x15ac74 = *(uint *)(puVar12 + 0x164);
        *(uint *)&this_ptr->field_0x15ac78 = *(uint *)(puVar12 + 0x168);
      }
      *(uint *)&this_ptr->field_0x15ac7c = *(uint *)(puVar12 + 0x16c);
      *(uint *)&this_ptr->field_0x15ac80 = *(uint *)(puVar12 + 0x170);
      *(uint *)&this_ptr->field_0x15ac84 = *(uint *)(puVar12 + 0x174);
    }
    else {
      *(uint *)&this_ptr->field_0x15ac64 = *(uint *)&this_ptr->field_0x15ac40;
      *(uint *)&this_ptr->field_0x15ac68 = *(uint *)&this_ptr->field_0x15ac44;
      *(uint *)&this_ptr->field_0x15ac6c = *(uint *)&this_ptr->field_0x15ac48;
      if (puVar2 != &this_ptr->field_0x15ac4c) {
        *(uint *)puVar2 = *(uint *)&this_ptr->field_0x15ac4c;
        *(uint *)&this_ptr->field_0x15ac74 = *(uint *)&this_ptr->field_0x15ac50;
        *(uint *)&this_ptr->field_0x15ac78 = *(uint *)&this_ptr->field_0x15ac54;
      }
      *(uint *)&this_ptr->field_0x15ac7c = *(uint *)&this_ptr->field_0x15ac58;
      *(uint *)&this_ptr->field_0x15ac80 = *(uint *)&this_ptr->field_0x15ac5c;
      *(uint *)&this_ptr->field_0x15ac84 = *(uint *)&this_ptr->field_0x15ac60;
    }
    core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00442bf0
              (&g_CDemonCameraInstance,(SFog *)&this_ptr->field_0x15ac64);
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
        if ((*(int *)pCVar4->lights == 1) && ((&pCVar4->lights[0].field_0x128)[index] != '\0')) {
          *(C3DSLight **)(&DAT_01fc9cd8 + _DAT_01fc9cd4 * 4) = local_24 + iVar3;
          _DAT_01fc9cd4 = _DAT_01fc9cd4 + 1;
          if (199 < _DAT_01fc9cd4) {
            _DAT_01d046a0 = "..\\core\\set.cpp";
            _DAT_01d046a4 = 0x501;
            core_main_c_FUN_004e4500("CDemonSet::setCameraView - Too many omni lights");
          }
        }
        iVar1 = _DAT_01fc8e84;
        iVar9 = iVar5;
        if ((*(int *)pCVar4->lights == 0) &&
           (iVar9 = iVar5 + 1, (&pCVar4->lights[0].field_0x128)[index] != '\0')) {
          *(uint *)(&DAT_01fc8e88 + _DAT_01fc8e84 * 4) =
               *(uint *)(&DAT_01fc8d04 + iVar5 * 4);
          puVar8 = (uint *)(&pCVar4->lights[0].field_0x224 + local_2c);
          puVar13 = (uint *)(iVar1 * 0x10 + 0x1fc900c + (uint)bVar14 * -8);
          puVar11 = puVar8 + (uint)bVar14 * -2 + 1;
          *(uint *)(iVar1 * 0x10 + 0x1fc9008) = *puVar8;
          puVar8 = puVar13 + (uint)bVar14 * -2 + 1;
          *puVar13 = *puVar11;
          *puVar8 = puVar11[(uint)bVar14 * -2 + 1];
          puVar8[(uint)bVar14 * -2 + 1] = (puVar11 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
          _DAT_01fc8e84 = _DAT_01fc8e84 + 1;
        }
        iVar3 = iVar3 + 1;
        pCVar4 = (CDemonSet *)&pCVar4->cameras[0xe].field_0x19c;
        iVar5 = iVar9;
      } while (iVar3 < this_ptr->light_count);
    }
    core_set_cpp_CDemonSet_process_FUN_00533010(this_ptr);
    iVar3 = 0;
    if (0 < _DAT_01fc8e84) {
      rect = (CRect *)0x1fc9008;
      local_28 = &this_ptr->cameras[index + -1].field_0x1a0;
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
        if (*(int *)(local_28 + 0x144) == 0) {
          core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0043d220
                    (&g_CDemonCameraInstance,this_ptr_00,rect);
        }
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        rect = rect + 1;
      } while (iVar3 < _DAT_01fc8e84);
    }
    core_dcamera_cpp_FUN_0043d770
              (&g_CDemonCameraInstance,&this_ptr->field_0x14d154,
               *(uint *)&this_ptr->field_0x14d160);
  }
  this_ptr->lighting_quality_mode = 0;
  iVar3 = *(int *)&this_ptr->cameras[index].field_0x140;
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
  if (*(int *)&this_ptr->cameras[index].field_0x150 == 0) {
    iVar3 = *(int *)&this_ptr->cameras[index].field_0x178;
  }
  else {
    iVar3 = this_ptr->default_master_reverb;
  }
  core_sound_cpp_CSound_setReverbPreset_FUN_0055b0b0(0x0264B290,iVar3);
  afStack_a0[2] = g_CDemonCameraInstance.base.position.f.x;
  afStack_a0[(uint)bVar14 * -2 + 3] =
       *(float *)((int)&g_CDemonCameraInstance + (uint)bVar14 * -8 + 8);
  afStack_a0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
       *(float *)((uint)bVar14 * -8 + 0x1fc7844 + (uint)bVar14 * -8);
  local_44.x = afStack_a0[2];
  *(float *)((int)&local_50 + ((uint)bVar14 * -2 + 3) * 4 + 4) = afStack_a0[(uint)bVar14 * -2 + 3];
  *(float *)((int)&local_50 + ((uint)bVar14 * -2 + (uint)bVar14 * -2 + 4) * 4 + 4) =
       afStack_a0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
  if (&local_5c != &local_44) {
    local_5c.x = local_44.x;
    local_5c.y = local_44.y;
    local_5c.z = local_44.z;
  }
  pCVar6 = &g_CDemonCameraInstance.base.rotation_matrix;
  pfVar7 = local_148;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = pCVar6->m[0].x;
    pCVar6 = (CMatrix3x3f *)((int)pCVar6 + ((uint)bVar14 * -2 + 1) * 4);
    pfVar7 = pfVar7 + (uint)bVar14 * -2 + 1;
  }
  pfVar7 = local_148;
  pfVar10 = local_120;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar10 = *pfVar7;
    pfVar7 = pfVar7 + (uint)bVar14 * -2 + 1;
    pfVar10 = pfVar10 + (uint)bVar14 * -2 + 1;
  }
  core_dirmat_cpp_FUN_004496e0(local_120);
  local_50.x = local_a4;
  *(float *)((int)&local_50 + (uint)bVar14 * -8 + 4) = afStack_a0[(uint)bVar14 * -2];
  *(float *)((int)&local_50 + ((uint)bVar14 * -2 + (uint)bVar14 * -2 + 1) * 4 + 4) =
       afStack_a0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
  if (&local_b0 != &local_50) {
    local_b0.x = local_50.x;
    local_b0.y = local_50.y;
    local_b0.z = local_50.z;
  }
  core_weather_cpp_CWeather_setOriginAndRotation_FUN_0058b4f0(0x02661F80,&local_5c,&local_b0);
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
      if ((*(int *)&local_18->field_0xfc != 0) || (*(int *)&local_18->field_0xf8 != 0)) {
        (*((local_18->vtable)._ub)->getBoundingBox)(local_18,in_stack_fffffe08);
        piVar15 = aiStack_1f0;
        iVar5 = 0;
        puVar8 = auStack_f0;
        puVar11 = local_e0;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar11 = *puVar8;
          puVar8 = puVar8 + (uint)bVar14 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
        }
        do {
          core_box_cpp_FUN_0041a600(auStack_d8,iVar5);
          uStack_c0 = uStack_6c;
          afStack_bc[(uint)bVar14 * -2] = local_68[(uint)bVar14 * -2];
          afStack_bc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
               local_68[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
          in_stack_fffffe08 = unaff_EBP;
          core_actor_cpp_FUN_00408d70(unaff_EBP,&uStack_c0);
          fStack_84 = afStack_bc[2];
          local_80[(uint)bVar14 * -2] = *(float *)((int)&local_b0 + (uint)bVar14 * -8);
          local_80[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
               *(float *)((int)&local_b0 + ((uint)bVar14 * -2 + (uint)bVar14 * -2) * 4 + 4);
          *piVar15 = (int)ROUND(fStack_84 * _DAT_005fb210);
          piVar15[1] = (int)ROUND(local_80[0] * _DAT_005fb210);
          piVar15[2] = (int)ROUND(local_80[1] * _DAT_005fb210);
          piVar15 = piVar15 + 3;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
      }
      local_1c = local_1c + 1;
      local_20 = (CDemonSet *)local_20->cameras;
    } while (local_1c < this_ptr->actor_count);
  }
  local_68[0] = *(float *)&this_ptr->field_0x14d154 * *(float *)&this_ptr->field_0x14d160;
  _DAT_0200a3b8 = 1;
  local_68[1] = *(float *)&this_ptr->field_0x14d158 * *(float *)&this_ptr->field_0x14d160;
  local_68[2] = *(float *)&this_ptr->field_0x14d15c * *(float *)&this_ptr->field_0x14d160;
  local_38 = local_68[0];
  *(float *)((int)&local_50 + ((uint)bVar14 * -2 + 6) * 4 + 4) = local_68[(uint)bVar14 * -2 + 1];
  *(float *)((int)&local_50 + ((uint)bVar14 * -2 + (uint)bVar14 * -2 + 7) * 4 + 4) =
       local_68[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 2];
  if (local_80 != &local_38) {
    local_80[0] = local_38;
    local_80[1] = fStack_34;
    local_80[2] = fStack_30;
  }
  _DAT_0200a398 = (int)ROUND(local_80[0] * _DAT_005fb214);
  _DAT_0200a39c = (int)ROUND(local_80[1] * _DAT_005fb214);
  _DAT_0200a3a0 = (int)ROUND(local_80[2] * _DAT_005fb214);
  return;
}
