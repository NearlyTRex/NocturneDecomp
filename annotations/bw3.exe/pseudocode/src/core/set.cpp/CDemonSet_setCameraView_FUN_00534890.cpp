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
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  byte *puVar9;
  CRect *rect;
  uint *puVar10;
  byte bVar11;
  float afStackY_10b0 [939];
  int aiStack_1f8 [24];
  char local_198 [80];
  uint local_148 [10];
  uint local_120 [10];
  uint local_f8 [6];
  uint local_e0 [6];
  uint uStack_c8;
  float afStack_c4 [5];
  float local_b0;
  float local_ac;
  uint local_a8;
  float local_a4;
  float afStack_a0 [5];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  uint uStack_74;
  float afStack_70 [4];
  float local_60;
  float local_5c;
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
  byte *local_24;
  CDemonSet *local_20;
  int local_1c;
  int local_18;
  int *piStack_14;
  
  bVar11 = 0;
  if ((index < 0) || (*(int *)this_ptr <= index)) {
    _DAT_01d71de0 = "..\\core\\set.cpp";
    _DAT_01d71de4 = 0x484;
    core_main_c_FUN_004e4330("CDemonSet::setCameraView - invalid index: %d",index);
  }
  iVar3 = 0;
  if (0 < _DAT_0203ad1c) {
    iVar5 = 0;
    do {
      puVar6 = (uint *)(iVar5 + 0x203ad20);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0045ca30((CDemonLight *)*puVar6);
    } while (iVar3 < _DAT_0203ad1c);
  }
  iVar3 = 0;
  if (0 < _DAT_0203a598) {
    iVar5 = 0;
    do {
      puVar6 = (uint *)(&DAT_0203a59c + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0045ca30((CDemonLight *)*puVar6);
    } while (iVar3 < _DAT_0203a598);
  }
  iVar3 = 0;
  if (0 < _DAT_0203a598) {
    iVar5 = 0;
    do {
      puVar6 = (uint *)(&DAT_0203a59c + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0045c500((CDemonLight *)*puVar6);
    } while (iVar3 < _DAT_0203a598);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0045c470();
  *(uint *)&this_ptr->field_0x15aec0 = 0x3f000000;
  *(uint *)&this_ptr->field_0x15ac90 = 1;
  iVar3 = 0;
  *(uint *)&this_ptr->field_0x15f6f8 = 1;
  _DAT_0203a598 = 0;
  *(uint *)&this_ptr->field_0x15aebc = *(uint *)&this_ptr->field_0x15aeb8;
  _DAT_0203b3e8 = 0;
  *(int *)&this_ptr->field_0x15aeb8 = index;
  _DAT_0203ad30 = 0;
  _DAT_0203aec4 = 0;
  pCVar4 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x14d164) {
    do {
      iVar3 = iVar3 + 1;
      core_set_cpp_FUN_00534820(this_ptr,*(CDemonActor **)&pCVar4->field_0x14d168);
      pCVar4 = (CDemonSet *)&pCVar4->field_0x4;
    } while (iVar3 < *(int *)&this_ptr->field_0x14d164);
  }
  iVar3 = index * 0x1a4;
  if (*(int *)(&this_ptr->field_0x144 + iVar3) == 0) {
    puVar9 = &this_ptr->field_0x4 + iVar3;
    core_setutil_cpp_C3DSCamera_apply_FUN_00541fb0(puVar9,&g_CDemonCameraInstance);
    puVar2 = &this_ptr->field_0x15ac70;
    if (*(int *)(&this_ptr->field_0x154 + iVar3) == 0) {
      *(uint *)&this_ptr->field_0x15ac64 = *(uint *)(puVar9 + 0x154);
      *(uint *)&this_ptr->field_0x15ac68 = *(uint *)(puVar9 + 0x158);
      *(uint *)&this_ptr->field_0x15ac6c = *(uint *)(puVar9 + 0x15c);
      if (puVar2 != puVar9 + 0x160) {
        *(uint *)puVar2 = *(uint *)(puVar9 + 0x160);
        *(uint *)&this_ptr->field_0x15ac74 = *(uint *)(puVar9 + 0x164);
        *(uint *)&this_ptr->field_0x15ac78 = *(uint *)(puVar9 + 0x168);
      }
      *(uint *)&this_ptr->field_0x15ac7c = *(uint *)(puVar9 + 0x16c);
      *(uint *)&this_ptr->field_0x15ac80 = *(uint *)(puVar9 + 0x170);
      *(uint *)&this_ptr->field_0x15ac84 = *(uint *)(puVar9 + 0x174);
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
    g_CDemonRaytraceInstance._0_4_ = 0;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_00448ff0(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00449840(&g_CDemonCameraInstance);
    core_set_cpp_FUN_00539f30(this_ptr,0x10);
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(this_ptr,9999.9,1);
    core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00451250(&g_CDemonCameraInstance);
    _DAT_0207baa4 = 1;
    core_set_cpp_FUN_005346b0(this_ptr,1);
    _DAT_0207baa4 = 0;
    core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044b070(&g_CDemonCameraInstance);
    core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_004512a0(&g_CDemonCameraInstance);
    FUN_005a28c0(local_198,"%s.raw",&this_ptr->field_0x4 + index * 0x1a4);
    core_dcamera_cpp_CDemonCamera_loadImage_FUN_0044c130(&g_CDemonCameraInstance,local_198);
    core_set_cpp_FUN_005346b0(this_ptr,1);
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00449a00(&g_CDemonCameraInstance,0);
    if (_DAT_01c6cee8 != 0) {
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(this_ptr,9999.9,0);
      if (*(int *)g_CWaterPtr == 0) {
        core_water_cpp_FUN_00577760(g_CWaterPtr,0);
      }
      core_set_cpp_FUN_005346b0(this_ptr,1);
    }
    core_dcamera_cpp_CDemonCamera_endScene_FUN_00449750(&g_CDemonCameraInstance,0);
  }
  if (*(int *)&this_ptr->field_0x15ac94 == 0) {
    iVar3 = 0;
    if (0 < *(int *)&this_ptr->field_0x19a2c) {
      local_2c = index << 4;
      local_24 = &this_ptr->field_0x19a30;
      pCVar4 = this_ptr;
      iVar5 = 0;
      do {
        if ((*(int *)&pCVar4->field_0x19a30 == 1) && ((&pCVar4->field_0x19b58)[index] != '\0')) {
          *(byte **)(&DAT_0203b3ec + _DAT_0203b3e8 * 4) = local_24 + iVar3 * 0x1898;
          _DAT_0203b3e8 = _DAT_0203b3e8 + 1;
          if (199 < _DAT_0203b3e8) {
            _DAT_01d71de0 = "..\\core\\set.cpp";
            _DAT_01d71de4 = 0x50e;
            core_main_c_FUN_004e4330("CDemonSet::setCameraView - Too many omni lights");
          }
        }
        iVar1 = _DAT_0203a598;
        iVar7 = iVar5;
        if ((*(int *)&pCVar4->field_0x19a30 == 0) &&
           (iVar7 = iVar5 + 1, (&pCVar4->field_0x19b58)[index] != '\0')) {
          *(uint *)(&DAT_0203a59c + _DAT_0203a598 * 4) =
               *(uint *)(&DAT_0203a418 + iVar5 * 4);
          puVar6 = (uint *)(&pCVar4->field_0x19c54 + local_2c);
          puVar10 = (uint *)(iVar1 * 0x10 + 0x203a720 + (uint)bVar11 * -8);
          puVar8 = puVar6 + (uint)bVar11 * -2 + 1;
          *(uint *)(iVar1 * 0x10 + 0x203a71c) = *puVar6;
          puVar6 = puVar10 + (uint)bVar11 * -2 + 1;
          *puVar10 = *puVar8;
          *puVar6 = puVar8[(uint)bVar11 * -2 + 1];
          puVar6[(uint)bVar11 * -2 + 1] = (puVar8 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
          _DAT_0203a598 = _DAT_0203a598 + 1;
        }
        iVar3 = iVar3 + 1;
        pCVar4 = (CDemonSet *)&pCVar4->field_0x1898;
        iVar5 = iVar7;
      } while (iVar3 < *(int *)&this_ptr->field_0x19a2c);
    }
    core_set_cpp_FUN_00539c50(this_ptr);
    iVar3 = 0;
    if (0 < _DAT_0203a598) {
      rect = (CRect *)0x203a71c;
      local_28 = &this_ptr->field_0x0 + index * 0x1a4;
      iVar5 = 0;
      do {
        this_ptr_00 = *(CDemonLight **)(&DAT_0203a59c + iVar5);
        core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_0045c480(this_ptr_00);
        core_dlight_cpp_CDemonLight_beginScene_FUN_0045c530(this_ptr_00,1);
        core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0045c8f0(this_ptr_00);
        core_set_cpp_FUN_005346b0(this_ptr,1);
        core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0045c9e0(this_ptr_00);
        core_dlight_cpp_CDemonLight_endScene_FUN_0045c7e0(this_ptr_00,0);
        core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0045ca30(this_ptr_00);
        if (*(int *)(local_28 + 0x144) == 0) {
          core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044aa20
                    (&g_CDemonCameraInstance,this_ptr_00,rect);
        }
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        rect = rect + 0x10;
      } while (iVar3 < _DAT_0203a598);
    }
    core_dcamera_cpp_FUN_0044af70
              (&g_CDemonCameraInstance,&this_ptr->field_0x14d154,
               *(uint *)&this_ptr->field_0x14d160);
  }
  *(uint *)&this_ptr->field_0x15ac90 = 0;
  iVar3 = *(int *)(&this_ptr->field_0x144 + index * 0x1a4);
  if (iVar3 == 0) {
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_00448ff0(&g_CDemonCameraInstance,1);
    core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00449840(&g_CDemonCameraInstance);
    _DAT_01c6e24c = iVar3;
    if (*(int *)&this_ptr->field_0x161640 != 0) {
      core_dskybox_cpp_FUN_0046f480
                (0x01C0B558,&this_ptr->field_0x161644,*(int *)&this_ptr->field_0x161664);
    }
    core_set_cpp_FUN_005346b0(this_ptr,1);
    core_gore_cpp_CGore_renderDecals_FUN_004ce630(g_CGorePtr,1,1);
    core_fire_cpp_CFireEffect_renderDecals_FUN_004a1e90(0x01C73654,1,1);
    if (*(int *)g_CWaterPtr == 0) {
      core_water_cpp_FUN_00577760(g_CWaterPtr,0);
    }
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00449a00(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_00449750(&g_CDemonCameraInstance,0);
  }
  *(uint *)&this_ptr->field_0x15f6f8 = 0;
  core_set_cpp_FUN_00535a80(this_ptr);
  if (*(int *)(&this_ptr->field_0x154 + index * 0x1a4) == 0) {
    iVar3 = *(int *)(&this_ptr->field_0x17c + index * 0x1a4);
  }
  else {
    iVar3 = *(int *)&this_ptr->field_0x15ac8c;
  }
  core_sound_cpp_CSound_setReverbPreset_FUN_00560c30(0x02CF5680,iVar3);
  afStack_a0[2] = (float)g_CDemonCameraInstance._4_4_;
  afStack_a0[(uint)bVar11 * -2 + 3] =
       *(float *)((int)&g_CDemonCameraInstance + (uint)bVar11 * -8 + 8);
  afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       *(float *)((uint)bVar11 * -8 + 0x2038f58 + (uint)bVar11 * -8);
  local_4c[2] = afStack_a0[2];
  local_4c[(uint)bVar11 * -2 + 3] = afStack_a0[(uint)bVar11 * -2 + 3];
  local_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  if (afStack_70 + 5 != local_4c + 2) {
    local_5c = local_4c[2];
    local_58 = local_4c[3];
    local_54 = local_3c;
  }
  puVar6 = (uint *)&g_CDemonCameraInstance.field_0x10;
  puVar8 = local_148;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
  }
  puVar6 = local_148;
  puVar8 = local_120;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
  }
  core_dirmat_cpp_FUN_0045b9b0(local_120);
  local_50 = local_a4;
  local_4c[(uint)bVar11 * -2] = afStack_a0[(uint)bVar11 * -2];
  local_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  if (afStack_c4 + 5 != &local_50) {
    local_b0 = local_50;
    local_ac = local_4c[0];
    local_a8 = local_4c[1];
  }
  core_weather_cpp_FUN_0057d1a0(0x02D0C1A0,afStack_70 + 5,afStack_c4 + 5);
  iVar3 = 0;
  pCVar4 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x14d164) {
    do {
      iVar3 = iVar3 + 1;
      core_set_cpp_FUN_00534820(this_ptr,*(CDemonActor **)&pCVar4->field_0x14d168);
      pCVar4 = (CDemonSet *)&pCVar4->field_0x4;
    } while (iVar3 < *(int *)&this_ptr->field_0x14d164);
  }
  local_1c = 0;
  if (0 < *(int *)&this_ptr->field_0x14d164) {
    local_20 = this_ptr;
    do {
      local_18 = *(int *)&local_20->field_0x14d168;
      if ((*(int *)(local_18 + 0xfc) != 0) || (*(int *)(local_18 + 0xf8) != 0)) {
        (**(code **)(*(int *)(local_18 + 0x154) + 0x1c))(local_18);
        iVar5 = 0;
        piStack_14 = aiStack_1f8;
        puVar6 = local_f8;
        puVar8 = local_e0;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        }
        do {
          core_box_cpp_FUN_0041d8b0(local_e0,iVar5);
          uStack_c8 = uStack_74;
          afStack_c4[(uint)bVar11 * -2] = afStack_70[(uint)bVar11 * -2];
          afStack_c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          core_actor_cpp_FUN_00408b80(local_18,&uStack_c8);
          fStack_8c = afStack_c4[2];
          afStack_a0[(uint)bVar11 * -2 + 6] = afStack_c4[(uint)bVar11 * -2 + 3];
          afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
               afStack_c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
          *piStack_14 = (int)ROUND(fStack_8c * _DAT_005e3bc0);
          piStack_14[1] = (int)ROUND(fStack_88 * _DAT_005e3bc0);
          piStack_14[2] = (int)ROUND(fStack_84 * _DAT_005e3bc0);
          iVar5 = iVar5 + 1;
          piStack_14 = piStack_14 + 3;
        } while (iVar5 < 8);
      }
      local_1c = local_1c + 1;
      local_20 = (CDemonSet *)&local_20->field_0x4;
    } while (local_1c < *(int *)&this_ptr->field_0x14d164);
  }
  afStack_70[2] = *(float *)&this_ptr->field_0x14d154 * *(float *)&this_ptr->field_0x14d160;
  _DAT_0207bad4 = 1;
  afStack_70[3] = *(float *)&this_ptr->field_0x14d158 * *(float *)&this_ptr->field_0x14d160;
  local_60 = *(float *)&this_ptr->field_0x14d15c * *(float *)&this_ptr->field_0x14d160;
  local_38 = afStack_70[2];
  local_4c[(uint)bVar11 * -2 + 6] = afStack_70[(uint)bVar11 * -2 + 3];
  local_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
       afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  if (afStack_a0 + 8 != local_4c + 5) {
    local_80 = local_38;
    fStack_7c = fStack_34;
    fStack_78 = fStack_30;
  }
  _DAT_0207baac = (int)ROUND(local_80 * _DAT_005e3bc4);
  _DAT_0207bab0 = (int)ROUND(fStack_7c * _DAT_005e3bc4);
  _DAT_0207bab4 = (int)ROUND(fStack_78 * _DAT_005e3bc4);
  return;
}
