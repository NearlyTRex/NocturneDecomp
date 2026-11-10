// Name: core_set.cpp_CDemonSet_setCameraView_FUN_00534890
// Address: 00534890
// Address Range: [[00534890, 00535354]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_00534890(CDemonSet *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_00534890(CDemonSet *this_ptr,int index)

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
  C3DSCamera *pCVar12;
  CRect *rect;
  uint *puVar13;
  byte bVar14;
  float afStackY_10a8 [937];
  CBoundingBox3D *in_stack_fffffe08;
  int aiStack_1f0 [22];
  char local_198 [80];
  float local_148 [10];
  uint local_120 [12];
  uint auStack_f0 [4];
  uint local_e0 [2];
  byte auStack_d8 [24];
  uint uStack_c0;
  float afStack_bc [4];
  float local_ac;
  uint local_a8;
  float local_a4;
  float local_98;
  float fStack_84;
  float local_80 [5];
  uint uStack_6c;
  float local_68 [4];
  uint local_58;
  uint local_54;
  float local_50;
  float local_4c [4];
  uint local_3c;
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
    _DAT_01d71de0 = "..\\core\\set.cpp";
    _DAT_01d71de4 = 0x484;
    core_main_c_FUN_004e4330("CDemonSet::setCameraView - invalid index: %d",index);
  }
  iVar3 = 0;
  if (0 < _DAT_0203ad1c) {
    iVar5 = 0;
    do {
      puVar8 = (uint *)(iVar5 + 0x203ad20);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0045ca30((CDemonLight *)*puVar8);
    } while (iVar3 < _DAT_0203ad1c);
  }
  iVar3 = 0;
  if (0 < _DAT_0203a598) {
    iVar5 = 0;
    do {
      puVar8 = (uint *)(&DAT_0203a59c + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0045ca30((CDemonLight *)*puVar8);
    } while (iVar3 < _DAT_0203a598);
  }
  iVar3 = 0;
  if (0 < _DAT_0203a598) {
    iVar5 = 0;
    do {
      puVar8 = (uint *)(&DAT_0203a59c + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0045c500((CDemonLight *)*puVar8);
    } while (iVar3 < _DAT_0203a598);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0045c470();
  this_ptr->previous_best_camera_timer = 0.5;
  this_ptr->lighting_quality_mode = 1;
  iVar3 = 0;
  this_ptr->directional_light_ratio_enabled = 1;
  _DAT_0203a598 = 0;
  this_ptr->previous_best_camera_index = this_ptr->selected_camera_index;
  _DAT_0203b3e8 = 0;
  this_ptr->selected_camera_index = index;
  _DAT_0203ad30 = 0;
  _DAT_0203aec4 = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      iVar3 = iVar3 + 1;
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00534820(this_ptr,pCVar4->actors[0]);
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar3 < this_ptr->actor_count);
  }
  if (*(int *)&this_ptr->cameras[index].field_0x140 == 0) {
    pCVar12 = this_ptr->cameras + index;
    core_setutil_cpp_C3DSCamera_apply_FUN_00541fb0(pCVar12,&g_CDemonCameraInstance);
    puVar2 = &this_ptr->field_0x15ac70;
    if (*(int *)&this_ptr->cameras[index].field_0x150 == 0) {
      *(uint *)&this_ptr->field_0x15ac64 = *(uint *)&pCVar12->field_0x154;
      *(uint *)&this_ptr->field_0x15ac68 = *(uint *)&pCVar12->field_0x158;
      *(uint *)&this_ptr->field_0x15ac6c = *(uint *)&pCVar12->field_0x15c;
      if (puVar2 != &pCVar12->field_0x160) {
        *(uint *)puVar2 = *(uint *)&pCVar12->field_0x160;
        *(uint *)&this_ptr->field_0x15ac74 = *(uint *)&pCVar12->field_0x164;
        *(uint *)&this_ptr->field_0x15ac78 = *(uint *)&pCVar12->field_0x168;
      }
      *(uint *)&this_ptr->field_0x15ac7c = *(uint *)&pCVar12->field_0x16c;
      *(uint *)&this_ptr->field_0x15ac80 = *(uint *)&pCVar12->field_0x170;
      *(uint *)&this_ptr->field_0x15ac84 = *(uint *)&pCVar12->field_0x174;
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
    core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004503f0
              (&g_CDemonCameraInstance,(SFog *)&this_ptr->field_0x15ac64);
    g_CDemonRaytraceInstance.rendering_mode = 0;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_00448ff0(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00449840(&g_CDemonCameraInstance);
    core_set_cpp_CDemonSet_buildDisplayList_FUN_00539f30(this_ptr,0x10);
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(this_ptr,9999.9,1);
    core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00451250(&g_CDemonCameraInstance);
    _DAT_0207baa4 = 1;
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_005346b0(this_ptr,1);
    _DAT_0207baa4 = 0;
    core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044b070(&g_CDemonCameraInstance);
    core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_004512a0(&g_CDemonCameraInstance);
    _sprintf(local_198,"%s.raw");
    core_dcamera_cpp_CDemonCamera_loadImage_FUN_0044c130(&g_CDemonCameraInstance,local_198);
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_005346b0(this_ptr,1);
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00449a00(&g_CDemonCameraInstance,0);
    if (_DAT_01c6cee8 != 0) {
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(this_ptr,9999.9,0);
      if (g_CWaterPtr->wave_animation_enabled == 0) {
        core_water_cpp_CWater_render_FUN_00577760(g_CWaterPtr,0);
      }
      core_set_cpp_CDemonSet_renderBackgroundActors_FUN_005346b0(this_ptr,1);
    }
    core_dcamera_cpp_CDemonCamera_endScene_FUN_00449750(&g_CDemonCameraInstance,0);
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
          *(C3DSLight **)(&DAT_0203b3ec + _DAT_0203b3e8 * 4) = local_24 + iVar3;
          _DAT_0203b3e8 = _DAT_0203b3e8 + 1;
          if (199 < _DAT_0203b3e8) {
            _DAT_01d71de0 = "..\\core\\set.cpp";
            _DAT_01d71de4 = 0x50e;
            core_main_c_FUN_004e4330("CDemonSet::setCameraView - Too many omni lights");
          }
        }
        iVar1 = _DAT_0203a598;
        iVar9 = iVar5;
        if ((*(int *)pCVar4->lights == 0) &&
           (iVar9 = iVar5 + 1, (&pCVar4->lights[0].field_0x128)[index] != '\0')) {
          *(uint *)(&DAT_0203a59c + _DAT_0203a598 * 4) =
               *(uint *)(&DAT_0203a418 + iVar5 * 4);
          puVar8 = (uint *)(&pCVar4->lights[0].field_0x224 + local_2c);
          puVar13 = (uint *)(iVar1 * 0x10 + 0x203a720 + (uint)bVar14 * -8);
          puVar11 = puVar8 + (uint)bVar14 * -2 + 1;
          *(uint *)(iVar1 * 0x10 + 0x203a71c) = *puVar8;
          puVar8 = puVar13 + (uint)bVar14 * -2 + 1;
          *puVar13 = *puVar11;
          *puVar8 = puVar11[(uint)bVar14 * -2 + 1];
          puVar8[(uint)bVar14 * -2 + 1] = (puVar11 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
          _DAT_0203a598 = _DAT_0203a598 + 1;
        }
        iVar3 = iVar3 + 1;
        pCVar4 = (CDemonSet *)&pCVar4->cameras[0xe].field_0x19c;
        iVar5 = iVar9;
      } while (iVar3 < this_ptr->light_count);
    }
    core_set_cpp_CDemonSet_process_FUN_00539c50(this_ptr);
    iVar3 = 0;
    if (0 < _DAT_0203a598) {
      rect = (CRect *)0x203a71c;
      local_28 = &this_ptr->cameras[index + -1].field_0x1a0;
      iVar5 = 0;
      do {
        this_ptr_00 = *(CDemonLight **)(&DAT_0203a59c + iVar5);
        core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_0045c480(this_ptr_00);
        core_dlight_cpp_CDemonLight_beginScene_FUN_0045c530(this_ptr_00,1);
        core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0045c8f0(this_ptr_00);
        core_set_cpp_CDemonSet_renderBackgroundActors_FUN_005346b0(this_ptr,1);
        core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0045c9e0(this_ptr_00);
        core_dlight_cpp_CDemonLight_endScene_FUN_0045c7e0(this_ptr_00,0);
        core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0045ca30(this_ptr_00);
        if (*(int *)(local_28 + 0x144) == 0) {
          core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044aa20
                    (&g_CDemonCameraInstance,this_ptr_00,rect);
        }
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        rect = rect + 1;
      } while (iVar3 < _DAT_0203a598);
    }
    core_dcamera_cpp_FUN_0044af70
              (&g_CDemonCameraInstance,&this_ptr->field_0x14d154,
               *(uint *)&this_ptr->field_0x14d160);
  }
  this_ptr->lighting_quality_mode = 0;
  iVar3 = *(int *)&this_ptr->cameras[index].field_0x140;
  if (iVar3 == 0) {
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_00448ff0(&g_CDemonCameraInstance,1);
    core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00449840(&g_CDemonCameraInstance);
    _DAT_01c6e24c = iVar3;
    if (this_ptr->has_sky != 0) {
      core_dskybox_cpp_renderSkyDome_FUN_0046f480
                (0x01C0B558,this_ptr->sky_texture_name,this_ptr->sky_brightness);
    }
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_005346b0(this_ptr,1);
    core_gore_cpp_CGore_renderDecals_FUN_004ce630(g_CGorePtr,1,1);
    core_fire_cpp_CFireEffect_renderDecals_FUN_004a1e90(0x01C73654,1,1);
    if (g_CWaterPtr->wave_animation_enabled == 0) {
      core_water_cpp_CWater_render_FUN_00577760(g_CWaterPtr,0);
    }
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00449a00(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_00449750(&g_CDemonCameraInstance,0);
  }
  this_ptr->directional_light_ratio_enabled = 0;
  core_set_cpp_CDemonSet_renderStaticLights_FUN_00535a80(this_ptr);
  if (*(int *)&this_ptr->cameras[index].field_0x150 == 0) {
    iVar3 = *(int *)&this_ptr->cameras[index].field_0x178;
  }
  else {
    iVar3 = this_ptr->default_master_reverb;
  }
  core_sound_cpp_CSound_setReverbPreset_FUN_00560c30(0x02CF5680,iVar3);
  local_98 = g_CDemonCameraInstance.base.position.f.x;
  afStack_bc[(uint)bVar14 * -2 + 10] =
       *(float *)((int)&g_CDemonCameraInstance + (uint)bVar14 * -8 + 8);
  afStack_bc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xb] =
       *(float *)((uint)bVar14 * -8 + 0x2038f58 + (uint)bVar14 * -8);
  local_4c[2] = local_98;
  local_4c[(uint)bVar14 * -2 + 3] = afStack_bc[(uint)bVar14 * -2 + 10];
  local_4c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
       afStack_bc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xb];
  if (local_68 + 3 != local_4c + 2) {
    local_68[3] = local_4c[2];
    local_58 = local_4c[3];
    local_54 = local_3c;
  }
  pCVar6 = &g_CDemonCameraInstance.base.rotation_matrix;
  pfVar7 = local_148;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = pCVar6->m[0].x;
    pCVar6 = (CMatrix3x3f *)((int)pCVar6 + ((uint)bVar14 * -2 + 1) * 4);
    pfVar7 = pfVar7 + (uint)bVar14 * -2 + 1;
  }
  pfVar7 = local_148;
  pfVar10 = (float *)local_120;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar10 = *pfVar7;
    pfVar7 = pfVar7 + (uint)bVar14 * -2 + 1;
    pfVar10 = pfVar10 + (uint)bVar14 * -2 + 1;
  }
  core_dirmat_cpp_FUN_0045b9b0(local_120);
  local_50 = local_a4;
  local_4c[(uint)bVar14 * -2] = afStack_bc[(uint)bVar14 * -2 + 7];
  local_4c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
       afStack_bc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 8];
  if (afStack_bc + 3 != &local_50) {
    afStack_bc[3] = local_50;
    local_ac = local_4c[0];
    local_a8 = local_4c[1];
  }
  core_weather_cpp_FUN_0057d1a0(0x02D0C1A0,local_68 + 3,afStack_bc + 3);
  iVar3 = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      iVar3 = iVar3 + 1;
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00534820(this_ptr,pCVar4->actors[0]);
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
          core_box_cpp_FUN_0041d8b0(auStack_d8,iVar5);
          uStack_c0 = uStack_6c;
          afStack_bc[(uint)bVar14 * -2] = local_68[(uint)bVar14 * -2];
          afStack_bc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
               local_68[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
          in_stack_fffffe08 = unaff_EBP;
          core_actor_cpp_FUN_00408b80(unaff_EBP,&uStack_c0);
          fStack_84 = afStack_bc[2];
          local_80[(uint)bVar14 * -2] = afStack_bc[(uint)bVar14 * -2 + 3];
          local_80[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
               afStack_bc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
          *piVar15 = (int)ROUND(fStack_84 * _DAT_005e3bc0);
          piVar15[1] = (int)ROUND(local_80[0] * _DAT_005e3bc0);
          piVar15[2] = (int)ROUND(local_80[1] * _DAT_005e3bc0);
          piVar15 = piVar15 + 3;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
      }
      local_1c = local_1c + 1;
      local_20 = (CDemonSet *)local_20->cameras;
    } while (local_1c < this_ptr->actor_count);
  }
  local_68[0] = *(float *)&this_ptr->field_0x14d154 * *(float *)&this_ptr->field_0x14d160;
  _DAT_0207bad4 = 1;
  local_68[1] = *(float *)&this_ptr->field_0x14d158 * *(float *)&this_ptr->field_0x14d160;
  local_68[2] = *(float *)&this_ptr->field_0x14d15c * *(float *)&this_ptr->field_0x14d160;
  local_38 = local_68[0];
  local_4c[(uint)bVar14 * -2 + 6] = local_68[(uint)bVar14 * -2 + 1];
  local_4c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
       local_68[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 2];
  if (local_80 != local_4c + 5) {
    local_80[0] = local_38;
    local_80[1] = fStack_34;
    local_80[2] = fStack_30;
  }
  _DAT_0207baac = (int)ROUND(local_80[0] * _DAT_005e3bc4);
  _DAT_0207bab0 = (int)ROUND(local_80[1] * _DAT_005e3bc4);
  _DAT_0207bab4 = (int)ROUND(local_80[2] * _DAT_005e3bc4);
  return;
}
