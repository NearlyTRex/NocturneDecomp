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
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  float fStack_8c;
  float afStack_88 [4];
  float fStack_78;
  uint uStack_74;
  float afStack_70 [4];
  float local_60;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float afStack_34 [2];
  int local_2c;
  byte *local_28;
  byte *local_24;
  CDemonSet *local_20;
  int local_1c;
  int local_18;
  int *piStack_14;
  
  bVar11 = 0;
  if ((index < 0) || (*(int *)this_ptr <= index)) {
    _DAT_01d1d400 = "..\\core\\set.cpp";
    _DAT_01d1d404 = 0x476;
    core_main_c_FUN_005030e0("CDemonSet::setCameraView - invalid index: %d",index);
  }
  iVar3 = 0;
  if (0 < _DAT_01fe55bc) {
    iVar5 = 0;
    do {
      puVar6 = (uint *)(iVar5 + 0x1fe55c0);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20((CDemonLight *)*puVar6);
    } while (iVar3 < _DAT_01fe55bc);
  }
  iVar3 = 0;
  if (0 < _DAT_01fe4e38) {
    iVar5 = 0;
    do {
      puVar6 = (uint *)(&DAT_01fe4e3c + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20((CDemonLight *)*puVar6);
    } while (iVar3 < _DAT_01fe4e38);
  }
  iVar3 = 0;
  if (0 < _DAT_01fe4e38) {
    iVar5 = 0;
    do {
      puVar6 = (uint *)(&DAT_01fe4e3c + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_004627f0((CDemonLight *)*puVar6);
    } while (iVar3 < _DAT_01fe4e38);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_00462760();
  *(uint *)&this_ptr->field_0x15aec0 = 0x3f000000;
  *(uint *)&this_ptr->field_0x15ac90 = 1;
  iVar3 = 0;
  *(uint *)&this_ptr->field_0x15f6f8 = 1;
  _DAT_01fe4e38 = 0;
  *(uint *)&this_ptr->field_0x15aebc = *(uint *)&this_ptr->field_0x15aeb8;
  _DAT_01fe5c88 = 0;
  *(int *)&this_ptr->field_0x15aeb8 = index;
  _DAT_01fe55d0 = 0;
  _DAT_01fe5764 = 0;
  pCVar4 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x14d164) {
    do {
      iVar3 = iVar3 + 1;
      core_set_cpp_FUN_0054f060(this_ptr,*(CDemonActor **)&pCVar4->field_0x14d168);
      pCVar4 = (CDemonSet *)&pCVar4->field_0x4;
    } while (iVar3 < *(int *)&this_ptr->field_0x14d164);
  }
  iVar3 = index * 0x1a4;
  if (*(int *)(&this_ptr->field_0x144 + iVar3) == 0) {
    puVar9 = &this_ptr->field_0x4 + iVar3;
    core_setutil_cpp_C3DSCamera_apply_FUN_0055c5f0(puVar9,&g_CDemonCameraInstance);
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
    core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004542a0
              (&g_CDemonCameraInstance,(SFog *)&this_ptr->field_0x15ac64);
    g_CDemonRaytraceInstance._0_4_ = 0;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044ceb0(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700(&g_CDemonCameraInstance);
    core_set_cpp_FUN_005545a0(this_ptr,0x10);
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(this_ptr,9999.9,1);
    core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00455100(&g_CDemonCameraInstance);
    _DAT_02026344 = 1;
    core_set_cpp_FUN_0054eef0(this_ptr,1);
    _DAT_02026344 = 0;
    core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044ef30(&g_CDemonCameraInstance);
    core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_00455150(&g_CDemonCameraInstance);
    FUN_005bfb40(local_198,"%s.raw",&this_ptr->field_0x4 + index * 0x1a4);
    core_dcamera_cpp_CDemonCamera_loadImage_FUN_0044fff0(&g_CDemonCameraInstance,local_198);
    core_set_cpp_FUN_0054eef0(this_ptr,1);
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0(&g_CDemonCameraInstance,0);
    if (_DAT_01c50948 != 0) {
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(this_ptr,9999.9,0);
      if (*(int *)g_CWaterPtr == 0) {
        core_water_cpp_FUN_005a9f10(g_CWaterPtr,0);
      }
      core_set_cpp_FUN_0054eef0(this_ptr,1);
    }
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044d610(&g_CDemonCameraInstance,0);
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
          *(byte **)(&DAT_01fe5c8c + _DAT_01fe5c88 * 4) = local_24 + iVar3 * 0x1898;
          _DAT_01fe5c88 = _DAT_01fe5c88 + 1;
          if (199 < _DAT_01fe5c88) {
            _DAT_01d1d400 = "..\\core\\set.cpp";
            _DAT_01d1d404 = 0x500;
            core_main_c_FUN_005030e0("CDemonSet::setCameraView - Too many omni lights");
          }
        }
        iVar1 = _DAT_01fe4e38;
        iVar7 = iVar5;
        if ((*(int *)&pCVar4->field_0x19a30 == 0) &&
           (iVar7 = iVar5 + 1, (&pCVar4->field_0x19b58)[index] != '\0')) {
          *(uint *)(&DAT_01fe4e3c + _DAT_01fe4e38 * 4) =
               *(uint *)(&DAT_01fe4cb8 + iVar5 * 4);
          puVar6 = (uint *)(&pCVar4->field_0x19c54 + local_2c);
          puVar10 = (uint *)(iVar1 * 0x10 + 0x1fe4fc0 + (uint)bVar11 * -8);
          puVar8 = puVar6 + (uint)bVar11 * -2 + 1;
          *(uint *)(iVar1 * 0x10 + 0x1fe4fbc) = *puVar6;
          puVar6 = puVar10 + (uint)bVar11 * -2 + 1;
          *puVar10 = *puVar8;
          *puVar6 = puVar8[(uint)bVar11 * -2 + 1];
          puVar6[(uint)bVar11 * -2 + 1] = (puVar8 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
          _DAT_01fe4e38 = _DAT_01fe4e38 + 1;
        }
        iVar3 = iVar3 + 1;
        pCVar4 = (CDemonSet *)&pCVar4->field_0x1898;
        iVar5 = iVar7;
      } while (iVar3 < *(int *)&this_ptr->field_0x19a2c);
    }
    core_set_cpp_FUN_005542c0(this_ptr);
    iVar3 = 0;
    if (0 < _DAT_01fe4e38) {
      rect = (CRect *)0x1fe4fbc;
      local_28 = &this_ptr->field_0x0 + index * 0x1a4;
      iVar5 = 0;
      do {
        this_ptr_00 = *(CDemonLight **)(&DAT_01fe4e3c + iVar5);
        core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_00462770(this_ptr_00);
        core_dlight_cpp_CDemonLight_beginScene_FUN_00462820(this_ptr_00,1);
        core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_00462be0(this_ptr_00);
        core_set_cpp_FUN_0054eef0(this_ptr,1);
        core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_00462cd0(this_ptr_00);
        core_dlight_cpp_CDemonLight_endScene_FUN_00462ad0(this_ptr_00,0);
        core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20(this_ptr_00);
        if (*(int *)(local_28 + 0x144) == 0) {
          core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044e8e0
                    (&g_CDemonCameraInstance,this_ptr_00,rect);
        }
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        rect = rect + 0x10;
      } while (iVar3 < _DAT_01fe4e38);
    }
    core_dcamera_cpp_FUN_0044ee30
              (&g_CDemonCameraInstance,&this_ptr->field_0x14d154,
               *(uint *)&this_ptr->field_0x14d160);
  }
  *(uint *)&this_ptr->field_0x15ac90 = 0;
  iVar3 = *(int *)(&this_ptr->field_0x144 + index * 0x1a4);
  if (iVar3 == 0) {
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044ceb0(&g_CDemonCameraInstance,1);
    core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700(&g_CDemonCameraInstance);
    _DAT_01c51cac = iVar3;
    if (*(int *)&this_ptr->field_0x161640 != 0) {
      core_dskybox_cpp_FUN_00486900
                (0x01BEEFBC,&this_ptr->field_0x161644,*(int *)&this_ptr->field_0x161664);
    }
    core_set_cpp_FUN_0054eef0(this_ptr,1);
    core_gore_cpp_CGore_renderDecals_FUN_004e5cd0(g_CGorePtr,1,1);
    core_fire_cpp_CFireEffect_renderDecals_FUN_004b54a0(0x01C57074,1,1);
    if (*(int *)g_CWaterPtr == 0) {
      core_water_cpp_FUN_005a9f10(g_CWaterPtr,0);
    }
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044d610(&g_CDemonCameraInstance,0);
  }
  *(uint *)&this_ptr->field_0x15f6f8 = 0;
  core_set_cpp_FUN_00550260(this_ptr);
  if (*(int *)(&this_ptr->field_0x154 + index * 0x1a4) == 0) {
    iVar3 = *(int *)(&this_ptr->field_0x17c + index * 0x1a4);
  }
  else {
    iVar3 = *(int *)&this_ptr->field_0x15ac8c;
  }
  core_sound_cpp_CSound_setReverbPreset_FUN_0057db00(0x02C82A60,iVar3);
  local_98._0_4_ = g_CDemonCameraInstance._4_4_;
  *(uint *)((int)&local_98 + (uint)bVar11 * -8 + 4) =
       *(uint *)((int)&g_CDemonCameraInstance + (uint)bVar11 * -8 + 8);
  *(uint *)((int)&local_98 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
       *(uint *)((uint)bVar11 * -8 + 0x1fe37f8 + (uint)bVar11 * -8);
  local_44._0_4_ = local_98._0_4_;
  *(uint *)((int)&local_44 + (uint)bVar11 * -8 + 4) =
       *(uint *)((int)&local_98 + (uint)bVar11 * -8 + 4);
  *(uint *)((int)&local_44 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
       *(uint *)((int)&local_98 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
  if (&local_5c != &local_44) {
    local_5c._0_4_ = local_44._0_4_;
    local_5c._4_4_ = local_44._4_4_;
    local_5c._8_4_ = local_44._8_4_;
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
  core_dirmat_cpp_FUN_0045f840(local_120);
  local_50._0_4_ = local_a4._0_4_;
  *(uint *)((int)&local_50 + (uint)bVar11 * -8 + 4) =
       *(uint *)((int)&local_a4 + (uint)bVar11 * -8 + 4);
  *(uint *)((int)&local_50 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
       *(uint *)((int)&local_a4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
  if (&local_b0 != &local_50) {
    local_b0._0_4_ = local_50._0_4_;
    local_b0._4_4_ = local_50._4_4_;
    local_b0._8_4_ = local_50._8_4_;
  }
  core_weather_cpp_CWeather_setOriginAndRotation_FUN_005af040(0x02C997C0,&local_5c,&local_b0);
  iVar3 = 0;
  pCVar4 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x14d164) {
    do {
      iVar3 = iVar3 + 1;
      core_set_cpp_FUN_0054f060(this_ptr,*(CDemonActor **)&pCVar4->field_0x14d168);
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
          core_box_cpp_FUN_00420570(local_e0,iVar5);
          uStack_c8 = uStack_74;
          afStack_c4[(uint)bVar11 * -2] = afStack_70[(uint)bVar11 * -2];
          afStack_c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          core_actor_cpp_FUN_00408b40(local_18,&uStack_c8);
          fStack_8c = afStack_c4[2];
          afStack_88[(uint)bVar11 * -2] = afStack_c4[(uint)bVar11 * -2 + 3];
          afStack_88[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
          *piStack_14 = (int)ROUND(fStack_8c * _DAT_00605000);
          piStack_14[1] = (int)ROUND(afStack_88[0] * _DAT_00605000);
          piStack_14[2] = (int)ROUND(afStack_88[1] * _DAT_00605000);
          iVar5 = iVar5 + 1;
          piStack_14 = piStack_14 + 3;
        } while (iVar5 < 8);
      }
      local_1c = local_1c + 1;
      local_20 = (CDemonSet *)&local_20->field_0x4;
    } while (local_1c < *(int *)&this_ptr->field_0x14d164);
  }
  afStack_70[2] = *(float *)&this_ptr->field_0x14d154 * *(float *)&this_ptr->field_0x14d160;
  _DAT_0202636c = 1;
  afStack_70[3] = *(float *)&this_ptr->field_0x14d158 * *(float *)&this_ptr->field_0x14d160;
  local_60 = *(float *)&this_ptr->field_0x14d15c * *(float *)&this_ptr->field_0x14d160;
  local_38 = afStack_70[2];
  afStack_34[(uint)bVar11 * -2] = afStack_70[(uint)bVar11 * -2 + 3];
  afStack_34[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  if (afStack_88 + 2 != &local_38) {
    afStack_88[2] = local_38;
    afStack_88[3] = afStack_34[0];
    fStack_78 = afStack_34[1];
  }
  _DAT_0202634c = (int)ROUND(afStack_88[2] * _DAT_00605004);
  _DAT_02026350 = (int)ROUND(afStack_88[3] * _DAT_00605004);
  _DAT_02026354 = (int)ROUND(fStack_78 * _DAT_00605004);
  return;
}
