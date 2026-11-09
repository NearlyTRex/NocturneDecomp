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
    _DAT_01d046a0 = "..\\core\\set.cpp";
    _DAT_01d046a4 = 0x477;
    core_main_c_FUN_004e4500("CDemonSet::setCameraView - invalid index: %d",index);
  }
  iVar3 = 0;
  if (0 < _DAT_01fc9608) {
    iVar5 = 0;
    do {
      puVar6 = (uint *)(iVar5 + 0x1fc960c);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_FUN_0044a520(*puVar6);
    } while (iVar3 < _DAT_01fc9608);
  }
  iVar3 = 0;
  if (0 < _DAT_01fc8e84) {
    iVar5 = 0;
    do {
      puVar6 = (uint *)(&DAT_01fc8e88 + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_FUN_0044a520(*puVar6);
    } while (iVar3 < _DAT_01fc8e84);
  }
  iVar3 = 0;
  if (0 < _DAT_01fc8e84) {
    iVar5 = 0;
    do {
      puVar6 = (uint *)(&DAT_01fc8e88 + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00449ff0((CDemonLight *)*puVar6);
    } while (iVar3 < _DAT_01fc8e84);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_00449f60();
  *(uint *)&this_ptr->field_0x15aec0 = 0x3f000000;
  *(uint *)&this_ptr->field_0x15ac90 = 1;
  iVar3 = 0;
  *(uint *)&this_ptr->field_0x15f6f4 = 1;
  _DAT_01fc8e84 = 0;
  *(uint *)&this_ptr->field_0x15aebc = *(uint *)&this_ptr->field_0x15aeb8;
  _DAT_01fc9cd4 = 0;
  *(int *)&this_ptr->field_0x15aeb8 = index;
  _DAT_01fc961c = 0;
  _DAT_01fc97b0 = 0;
  pCVar4 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x14d164) {
    do {
      iVar3 = iVar3 + 1;
      core_set_cpp_FUN_0052dd80(this_ptr,*(CDemonActor **)&pCVar4->field_0x14d168);
      pCVar4 = (CDemonSet *)&pCVar4->field_0x4;
    } while (iVar3 < *(int *)&this_ptr->field_0x14d164);
  }
  iVar3 = index * 0x1a4;
  if (*(int *)(&this_ptr->field_0x144 + iVar3) == 0) {
    puVar9 = &this_ptr->field_0x4 + iVar3;
    core_setutil_cpp_C3DSCamera_apply_FUN_0053ad20(puVar9,&g_CDemonCameraInstance);
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
    core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00442bf0
              (&g_CDemonCameraInstance,(SFog *)&this_ptr->field_0x15ac64);
    g_CDemonRaytraceInstance._0_4_ = 0;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0043b7f0(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040(&g_CDemonCameraInstance);
    core_set_cpp_FUN_005332f0(this_ptr,0x10);
    core_set_cpp_FUN_0052d0e0(this_ptr,9999.9,1);
    core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00443a50(&g_CDemonCameraInstance);
    _DAT_0200a390 = 1;
    core_set_cpp_FUN_0052dc10(this_ptr,1);
    _DAT_0200a390 = 0;
    core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0043d870(&g_CDemonCameraInstance);
    core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_00443aa0(&g_CDemonCameraInstance);
    FUN_005b7790(local_198,"%s.raw",&this_ptr->field_0x4 + index * 0x1a4);
    core_dcamera_cpp_CDemonCamera_loadImage_FUN_0043e930(&g_CDemonCameraInstance,local_198);
    core_set_cpp_FUN_0052dc10(this_ptr,1);
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0043c200(&g_CDemonCameraInstance,0);
    if (_DAT_01c37788 != 0) {
      core_set_cpp_FUN_0052d0e0(this_ptr,9999.9,0);
      if (*(int *)g_CWaterPtr == 0) {
        core_water_cpp_FUN_005862e0(g_CWaterPtr,0);
      }
      core_set_cpp_FUN_0052dc10(this_ptr,1);
    }
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0043bf50(&g_CDemonCameraInstance,0);
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
          *(byte **)(&DAT_01fc9cd8 + _DAT_01fc9cd4 * 4) = local_24 + iVar3 * 0x1898;
          _DAT_01fc9cd4 = _DAT_01fc9cd4 + 1;
          if (199 < _DAT_01fc9cd4) {
            _DAT_01d046a0 = "..\\core\\set.cpp";
            _DAT_01d046a4 = 0x501;
            core_main_c_FUN_004e4500("CDemonSet::setCameraView - Too many omni lights");
          }
        }
        iVar1 = _DAT_01fc8e84;
        iVar7 = iVar5;
        if ((*(int *)&pCVar4->field_0x19a30 == 0) &&
           (iVar7 = iVar5 + 1, (&pCVar4->field_0x19b58)[index] != '\0')) {
          *(uint *)(&DAT_01fc8e88 + _DAT_01fc8e84 * 4) =
               *(uint *)(&DAT_01fc8d04 + iVar5 * 4);
          puVar6 = (uint *)(&pCVar4->field_0x19c54 + local_2c);
          puVar10 = (uint *)(iVar1 * 0x10 + 0x1fc900c + (uint)bVar11 * -8);
          puVar8 = puVar6 + (uint)bVar11 * -2 + 1;
          *(uint *)(iVar1 * 0x10 + 0x1fc9008) = *puVar6;
          puVar6 = puVar10 + (uint)bVar11 * -2 + 1;
          *puVar10 = *puVar8;
          *puVar6 = puVar8[(uint)bVar11 * -2 + 1];
          puVar6[(uint)bVar11 * -2 + 1] = (puVar8 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
          _DAT_01fc8e84 = _DAT_01fc8e84 + 1;
        }
        iVar3 = iVar3 + 1;
        pCVar4 = (CDemonSet *)&pCVar4->field_0x1898;
        iVar5 = iVar7;
      } while (iVar3 < *(int *)&this_ptr->field_0x19a2c);
    }
    core_set_cpp_FUN_00533010(this_ptr);
    iVar3 = 0;
    if (0 < _DAT_01fc8e84) {
      rect = (CRect *)0x1fc9008;
      local_28 = &this_ptr->field_0x0 + index * 0x1a4;
      iVar5 = 0;
      do {
        this_ptr_00 = *(CDemonLight **)(&DAT_01fc8e88 + iVar5);
        core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_00449f70(this_ptr_00);
        core_dlight_cpp_CDemonLight_beginScene_FUN_0044a020(this_ptr_00,1);
        core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044a3e0(this_ptr_00);
        core_set_cpp_FUN_0052dc10(this_ptr,1);
        core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0044a4d0(this_ptr_00);
        core_dlight_cpp_CDemonLight_endScene_FUN_0044a2d0(this_ptr_00,0);
        core_dlight_cpp_FUN_0044a520(this_ptr_00);
        if (*(int *)(local_28 + 0x144) == 0) {
          core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0043d220
                    (&g_CDemonCameraInstance,this_ptr_00,rect);
        }
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        rect = rect + 0x10;
      } while (iVar3 < _DAT_01fc8e84);
    }
    core_dcamera_cpp_FUN_0043d770
              (&g_CDemonCameraInstance,&this_ptr->field_0x14d154,
               *(uint *)&this_ptr->field_0x14d160);
  }
  *(uint *)&this_ptr->field_0x15ac90 = 0;
  iVar3 = *(int *)(&this_ptr->field_0x144 + index * 0x1a4);
  if (iVar3 == 0) {
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0043b7f0(&g_CDemonCameraInstance,1);
    core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040(&g_CDemonCameraInstance);
    _DAT_01c38aec = iVar3;
    if (*(int *)&this_ptr->field_0x16163c != 0) {
      core_dskybox_cpp_FUN_0046e410
                (0x01BD3A00,&this_ptr->field_0x161640,*(int *)&this_ptr->field_0x161660);
    }
    core_set_cpp_FUN_0052dc10(this_ptr,1);
    core_gore_cpp_CGore_renderDecals_FUN_004c94c0(g_CGorePtr,1,1);
    core_fire_cpp_CFireEffect_renderDecals_FUN_0049cb50(0x01C3DEB4,1,1);
    if (*(int *)g_CWaterPtr == 0) {
      core_water_cpp_FUN_005862e0(g_CWaterPtr,0);
    }
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0043c200(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0043bf50(&g_CDemonCameraInstance,0);
  }
  *(uint *)&this_ptr->field_0x15f6f4 = 0;
  core_set_cpp_FUN_0052ef80(this_ptr);
  if (*(int *)(&this_ptr->field_0x154 + index * 0x1a4) == 0) {
    iVar3 = *(int *)(&this_ptr->field_0x17c + index * 0x1a4);
  }
  else {
    iVar3 = *(int *)&this_ptr->field_0x15ac8c;
  }
  core_sound_cpp_CSound_setReverbPreset_FUN_0055b0b0(0x0264B290,iVar3);
  local_98._0_4_ = g_CDemonCameraInstance._4_4_;
  *(uint *)((int)&local_98 + (uint)bVar11 * -8 + 4) =
       *(uint *)((int)&g_CDemonCameraInstance + (uint)bVar11 * -8 + 8);
  *(uint *)((int)&local_98 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
       *(uint *)((uint)bVar11 * -8 + 0x1fc7844 + (uint)bVar11 * -8);
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
  core_dirmat_cpp_FUN_004496e0(local_120);
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
  core_weather_cpp_CWeather_setOriginAndRotation_FUN_0058b4f0(0x02661F80,&local_5c,&local_b0);
  iVar3 = 0;
  pCVar4 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x14d164) {
    do {
      iVar3 = iVar3 + 1;
      core_set_cpp_FUN_0052dd80(this_ptr,*(CDemonActor **)&pCVar4->field_0x14d168);
      pCVar4 = (CDemonSet *)&pCVar4->field_0x4;
    } while (iVar3 < *(int *)&this_ptr->field_0x14d164);
  }
  local_1c = 0;
  if (0 < *(int *)&this_ptr->field_0x14d164) {
    local_20 = this_ptr;
    do {
      local_18 = *(int *)&local_20->field_0x14d168;
      if ((*(int *)(local_18 + 0xfc) != 0) || (*(int *)(local_18 + 0xf8) != 0)) {
        (**(code **)(*(int *)(local_18 + 0x2b0) + 0x24))(local_18);
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
          core_box_cpp_FUN_0041a600(local_e0,iVar5);
          uStack_c8 = uStack_74;
          afStack_c4[(uint)bVar11 * -2] = afStack_70[(uint)bVar11 * -2];
          afStack_c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          core_actor_cpp_FUN_00408d70(local_18,&uStack_c8);
          fStack_8c = afStack_c4[2];
          afStack_88[(uint)bVar11 * -2] = afStack_c4[(uint)bVar11 * -2 + 3];
          afStack_88[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
          *piStack_14 = (int)ROUND(fStack_8c * _DAT_005fb210);
          piStack_14[1] = (int)ROUND(afStack_88[0] * _DAT_005fb210);
          piStack_14[2] = (int)ROUND(afStack_88[1] * _DAT_005fb210);
          iVar5 = iVar5 + 1;
          piStack_14 = piStack_14 + 3;
        } while (iVar5 < 8);
      }
      local_1c = local_1c + 1;
      local_20 = (CDemonSet *)&local_20->field_0x4;
    } while (local_1c < *(int *)&this_ptr->field_0x14d164);
  }
  afStack_70[2] = *(float *)&this_ptr->field_0x14d154 * *(float *)&this_ptr->field_0x14d160;
  _DAT_0200a3b8 = 1;
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
  _DAT_0200a398 = (int)ROUND(afStack_88[2] * _DAT_005fb214);
  _DAT_0200a39c = (int)ROUND(afStack_88[3] * _DAT_005fb214);
  _DAT_0200a3a0 = (int)ROUND(fStack_78 * _DAT_005fb214);
  return;
}
