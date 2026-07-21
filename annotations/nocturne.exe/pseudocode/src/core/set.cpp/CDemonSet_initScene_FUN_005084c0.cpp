// Name: core_set.cpp_CDemonSet_initScene_FUN_005084c0
// Address: 005084c0
// Address Range: [[005084c0, 0050874d]]
// Convention: unknown
// Signature: void core_set_cpp_CDemonSet_initScene_FUN_005084c0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_CDemonSet_initScene_FUN_005084c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  uVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Initializing scene",0);
  core_level_cpp_CLevelLoader_update_FUN_004c59e0(0x01CC3160,uVar1);
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_0044e3b0();
  core_dfilter_cpp_CFilterCache_free_FUN_0044bcd0(0x014B8DE8);
  _DAT_01fba2d8 = 0;
  param_1[0x56a33] = 0;
  core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0043ff50(0x1fb8508);
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004474e0(0x1fb8508,param_1 + 0x56a12);
  param_1[0x56a1b] = param_1[0x56a12];
  param_1[0x56a1c] = param_1[0x56a13];
  param_1[0x56a1d] = param_1[0x56a14];
  if (param_1 + 0x56a1e != param_1 + 0x56a15) {
    param_1[0x56a1e] = param_1[0x56a15];
    param_1[0x56a1f] = param_1[0x56a16];
    param_1[0x56a20] = param_1[0x56a17];
  }
  param_1[0x56a21] = param_1[0x56a18];
  param_1[0x56a22] = param_1[0x56a19];
  param_1[0x56a23] = param_1[0x56a1a];
  iVar4 = 0;
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740(0x1fb8508,param_1[0x5335a]);
  do {
    if (*(int *)(&DAT_01fb99d4 + iVar4) != 0) {
      _DAT_01cc4800 = "..\\core\\set.cpp";
      _DAT_01cc4804 = 0x35b;
      FUN_004c8440("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 != 0x180);
  iVar4 = 0;
  _DAT_01fb99d0 = 0;
  piVar3 = param_1;
  if (0 < param_1[0x6591]) {
    do {
      if (piVar3[0x6592] == 0) {
        uVar1 = core_setutil_cpp_C3DSLight_create_FUN_005151f0(param_1 + iVar4 * 0x626 + 0x6592);
        *(uint *)(&DAT_01fb99d4 + _DAT_01fb99d0 * 4) = uVar1;
        core_setutil_cpp_C3DSLight_apply_FUN_00515350(param_1 + iVar4 * 0x626 + 0x6592,uVar1);
        _DAT_01fb99d0 = _DAT_01fb99d0 + 1;
        if (0x60 < _DAT_01fb99d0) {
          _DAT_01cc4800 = "..\\core\\set.cpp";
          _DAT_01cc4804 = 0x372;
          FUN_004c8440("CDemonSet::initScene - Too many spotlights!");
        }
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x626;
    } while (iVar4 < param_1[0x6591]);
  }
  iVar4 = 0;
  if (0 < _DAT_01fb99d0) {
    iVar2 = 0;
    do {
      uVar1 = *(uint *)(&DAT_01fb99d4 + iVar2);
      core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(uVar1,0);
      core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0(uVar1);
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(param_1,0x461c3f9a,0);
      iVar2 = iVar2 + 4;
      iVar4 = iVar4 + 1;
      core_dlight_cpp_CDemonLight_endScene_FUN_0044e720(uVar1,0);
    } while (iVar4 < _DAT_01fb99d0);
  }
  param_1[0x56aaf] = -1;
  param_1[0x56ab0] = -1;
  iVar4 = 0;
  _DAT_01fb9b54 = 0;
  _DAT_01fba9a4 = 0;
  _DAT_01fba2ec = 0;
  _DAT_01fba480 = 0;
  param_1[0x56ab1] = 0;
  core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0(param_1);
  if (0 < *param_1) {
    piVar3 = param_1 + 0x41;
    piVar5 = param_1;
    do {
      iVar4 = iVar4 + 1;
      iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340(param_1,piVar3);
      piVar5[0x67] = iVar2;
      piVar3 = piVar3 + 0x68;
      piVar5 = piVar5 + 0x68;
    } while (iVar4 < *param_1);
  }
  core_weather_cpp_CWeather_setWeatherType_FUN_00555750(0x02DDF9F0,param_1[0x584a0]);
  return;
}
