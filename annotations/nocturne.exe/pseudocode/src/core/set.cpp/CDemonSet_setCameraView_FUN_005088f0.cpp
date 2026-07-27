// Name: core_set.cpp_CDemonSet_setCameraView_FUN_005088f0
// Address: 005088f0
// Address Range: [[005088f0, 0050909a]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(int *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  byte local_f0 [80];
  uint local_a0 [10];
  uint local_78 [10];
  byte local_50 [12];
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  
  bVar9 = 0;
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    PTR_01cc4800 = "..\\core\\set.cpp";
    INT_01cc4804 = 0x3ed;
    core_main_c_FUN_004c8440("CDemonSet::setCameraView - invalid index: %d",param_2);
  }
  iVar5 = 0;
  if (0 < _DAT_01fba2d8) {
    iVar3 = 0;
    do {
      puVar2 = (uint *)(iVar3 + 0x1fba2dc);
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970(*puVar2);
    } while (iVar5 < _DAT_01fba2d8);
  }
  iVar5 = 0;
  if (0 < _DAT_01fb9b54) {
    iVar3 = 0;
    do {
      puVar2 = (uint *)(&DAT_01fb9b58 + iVar3);
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970(*puVar2);
    } while (iVar5 < _DAT_01fb9b54);
  }
  iVar5 = 0;
  if (0 < _DAT_01fb9b54) {
    iVar3 = 0;
    do {
      puVar2 = (uint *)(&DAT_01fb9b58 + iVar3);
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440(*puVar2);
    } while (iVar5 < _DAT_01fb9b54);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0044e3b0();
  param_1[0x56ab1] = 0x40400000;
  param_1[0x56a26] = 1;
  param_1[0x57cbe] = 1;
  param_1[0x56ab0] = param_1[0x56aaf];
  param_1[0x56aaf] = param_2;
  _DAT_01fb9b54 = 0;
  piVar6 = param_1 + param_2 * 0x68 + 1;
  _DAT_01fba9a4 = 0;
  _DAT_01fba2ec = 0;
  _DAT_01fba480 = 0;
  core_setutil_cpp_FUN_005148b0(piVar6,0x1fb8508);
  piVar4 = param_1 + 0x56a1e;
  if (param_1[param_2 * 0x68 + 0x54] == 0) {
    param_1[0x56a1b] = piVar6[0x54];
    param_1[0x56a1c] = piVar6[0x55];
    param_1[0x56a1d] = piVar6[0x56];
    if (piVar4 != piVar6 + 0x57) {
      *piVar4 = piVar6[0x57];
      param_1[0x56a1f] = piVar6[0x58];
      param_1[0x56a20] = piVar6[0x59];
    }
    param_1[0x56a21] = piVar6[0x5a];
    param_1[0x56a22] = piVar6[0x5b];
    param_1[0x56a23] = piVar6[0x5c];
  }
  else {
    param_1[0x56a1b] = param_1[0x56a12];
    param_1[0x56a1c] = param_1[0x56a13];
    param_1[0x56a1d] = param_1[0x56a14];
    if (piVar4 != param_1 + 0x56a15) {
      *piVar4 = param_1[0x56a15];
      param_1[0x56a1f] = param_1[0x56a16];
      param_1[0x56a20] = param_1[0x56a17];
    }
    param_1[0x56a21] = param_1[0x56a18];
    param_1[0x56a22] = param_1[0x56a19];
    param_1[0x56a23] = param_1[0x56a1a];
  }
  iVar5 = 0;
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004474e0(0x1fb8508,param_1 + 0x56a1b);
  _DAT_01fba938 = 0;
  piVar4 = param_1;
  if (0 < param_1[0x5335b]) {
    do {
      iVar5 = iVar5 + 1;
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(param_1,piVar4[0x5335c]);
      piVar4 = piVar4 + 1;
    } while (iVar5 < param_1[0x5335b]);
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(0x1fb8508,0);
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20(0x1fb8508);
  core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(param_1,0x10);
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(param_1,0x461c3f9a,1);
  core_dcamera_cpp_FUN_00448310(0x1fb8508);
  _DAT_01ffb060 = 1;
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(param_1,1);
  _DAT_01ffb060 = 0;
  core_dcamera_cpp_FUN_004421b0(0x1fb8508);
  core_dcamera_cpp_FUN_00448380(0x1fb8508);
  _sprintf(local_f0,"%s.raw",param_1 + param_2 * 0x68 + 1);
  core_dcamera_cpp_CDemonCamera_loadImage_FUN_00443250(0x1fb8508,local_f0);
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(param_1,1);
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00440c50(0x1fb8508,0);
  if (_DAT_01c02594 != 0) {
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(param_1,0x461c3f9a,0);
    if (*0x02DD1210 == 0) {
      core_water_cpp_CWater_render_FUN_00550cb0(0x02DD1210,0);
    }
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(param_1,1);
  }
  core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(0x1fb8508,0);
  if (param_1[0x56a27] == 0) {
    local_14 = 0;
    if (0 < param_1[0x6591]) {
      local_20 = param_2 << 4;
      local_1c = param_1 + 0x6592;
      local_14 = 0;
      piVar4 = param_1;
      iVar5 = 0;
      do {
        if ((piVar4[0x6592] == 1) && (*(char *)((int)piVar4 + param_2 + 0x19770) != '\0')) {
          *(int **)(&DAT_01fba9a8 + _DAT_01fba9a4 * 4) = local_1c + local_14 * 0x626;
          _DAT_01fba9a4 = _DAT_01fba9a4 + 1;
          if (199 < _DAT_01fba9a4) {
            PTR_01cc4800 = "..\\core\\set.cpp";
            INT_01cc4804 = 0x460;
            core_main_c_FUN_004c8440("CDemonSet::setCameraView - Too many omni lights");
          }
        }
        iVar3 = iVar5;
        if ((piVar4[0x6592] == 0) &&
           (iVar3 = iVar5 + 1, *(char *)(param_2 + 0x19770 + (int)piVar4) != '\0')) {
          *(uint *)(&DAT_01fb9b58 + _DAT_01fb9b54 * 4) =
               *(uint *)(&DAT_01fb99d4 + iVar5 * 4);
          puVar2 = (uint *)(local_20 + 0x1986c + (int)piVar4);
          puVar8 = (uint *)(_DAT_01fb9b54 * 0x10 + 0x1fb9cdc + (uint)bVar9 * -8);
          puVar7 = puVar2 + (uint)bVar9 * -2 + 1;
          *(uint *)(_DAT_01fb9b54 * 0x10 + 0x1fb9cd8) = *puVar2;
          puVar2 = puVar8 + (uint)bVar9 * -2 + 1;
          *puVar8 = *puVar7;
          *puVar2 = puVar7[(uint)bVar9 * -2 + 1];
          puVar2[(uint)bVar9 * -2 + 1] = (puVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
          _DAT_01fb9b54 = _DAT_01fb9b54 + 1;
        }
        piVar4 = piVar4 + 0x626;
        local_14 = local_14 + 1;
        iVar5 = iVar3;
      } while (local_14 < param_1[0x6591]);
    }
    core_set_cpp_CDemonSet_process_FUN_0050d040(param_1);
    iVar5 = 0;
    if (0 < _DAT_01fb9b54) {
      iVar3 = 0x1fb9cd8;
      local_18 = 0;
      do {
        uVar1 = *(uint *)(&DAT_01fb9b58 + local_18);
        core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0(uVar1);
        core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(uVar1,1);
        core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044e830(uVar1);
        core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(param_1,1);
        core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0044e920(uVar1);
        core_dlight_cpp_CDemonLight_endScene_FUN_0044e720(uVar1,0);
        core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970(uVar1);
        core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_00441c50(0x1fb8508,uVar1,iVar3);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 0x10;
        local_18 = local_18 + 4;
      } while (iVar5 < _DAT_01fb9b54);
    }
  }
  param_1[0x56a26] = 0;
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(0x1fb8508,1);
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20(0x1fb8508);
  _DAT_01c038f4 = 0;
  if (param_1[0x58490] != 0) {
    core_dskybox_cpp_renderSkyDome_FUN_00463580(0x01B7B4E8,param_1 + 0x58491,param_1[0x58499]);
  }
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(param_1,1);
  core_gore_cpp_FUN_004afe80(INT_005b96c4,1);
  core_fire_cpp_FUN_0048a970(0x01C08D04,1);
  if (*0x02DD1210 == 0) {
    core_water_cpp_CWater_render_FUN_00550cb0(0x02DD1210,0);
  }
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00440c50(0x1fb8508,0);
  core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(0x1fb8508,0);
  param_1[0x57cbe] = 0;
  core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760(param_1);
  if (param_1[param_2 * 0x68 + 0x54] == 0) {
    iVar5 = param_1[param_2 * 0x68 + 0x5e];
  }
  else {
    iVar5 = param_1[0x56a25];
  }
  core_sound_cpp_CSound_setReverbPreset_FUN_0052ece0(0x02DC9450,iVar5);
  local_2c = _DAT_01fb860c;
  local_28 = _DAT_01fb8610;
  local_24 = _DAT_01fb8614;
  if (&local_44 != &local_2c) {
    local_44 = _DAT_01fb860c;
    local_40 = _DAT_01fb8610;
    local_3c = _DAT_01fb8614;
  }
  puVar2 = (uint *)&DAT_01fb8618;
  puVar7 = local_a0;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + (uint)bVar9 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
  }
  puVar2 = local_a0;
  puVar7 = local_78;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + (uint)bVar9 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
  }
  puVar2 = (uint *)core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(local_78,local_50);
  if (&local_38 != puVar2) {
    local_38 = *puVar2;
    local_34 = puVar2[1];
    local_30 = puVar2[2];
  }
  iVar3 = 0;
  core_weather_cpp_CWeather_setOriginAndRotation_FUN_005557d0(0x02DDF9F0,&local_44,&local_38);
  iVar5 = param_1[0x5335b];
  piVar4 = param_1;
  if (0 < iVar5) {
    do {
      iVar3 = iVar3 + 1;
      iVar5 = core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890
                        (param_1,piVar4[0x5335c]);
      piVar4 = piVar4 + 1;
    } while (iVar3 < param_1[0x5335b]);
  }
  _DAT_01ffb074 = 1;
  return iVar5;
}
