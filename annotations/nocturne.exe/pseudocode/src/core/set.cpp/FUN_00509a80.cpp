// Name: core_set.cpp_FUN_00509a80
// Address: 00509a80
// Address Range: [[00509a80, 0050a25d]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00509a80(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_00509a80(int param_1,int param_2)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  
  if (*(int *)(0x01C775EC + 0x20c) != 0) {
    local_40 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  if ((param_2 != 0) && (*(int *)(param_1 + 0x15aa64) != 0)) {
    core_set_cpp_FUN_0050aba0();
    return;
  }
  if (param_2 == 0) {
    _DAT_01fba2d8 = param_2;
    _DAT_01fba2ec = param_2;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970(param_1,&DAT_01c74640);
    core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760();
  }
  core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710();
  if (*(int *)(param_1 + 0x16126c) != 0) {
    core_set_cpp_CDemonSet_restoreCameraView_FUN_0050e310();
    *(uint *)(param_1 + 0x16126c) = 0;
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(0x1fb8508,1);
  if ((_DAT_01ffb074 != 0) || (*(int *)(0x01C775EC + 0x24) != 0)) {
    iVar4 = 0;
    _DAT_01ffb074 = 0;
    core_dcamera_cpp_CDemonCamera_processCorona_FUN_00444f90();
    if (0 < _DAT_01fb9b54) {
      iVar5 = 0;
      do {
        if (*(int *)(*(int *)(&DAT_01fb9b58 + iVar5) + 0x1cb4) != 0) {
          core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00444c90
                    (0x1fb8508,*(int *)(&DAT_01fb9b58 + iVar5));
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar4 < _DAT_01fb9b54);
    }
    local_20 = 0;
    if (0 < _DAT_01fba2d8) {
      local_18 = 0;
      do {
        iVar4 = *(int *)(local_18 + 0x1fba2dc);
        if ((*(int *)(iVar4 + 0x1cb4) != 0) && (*(int *)(iVar4 + 0x1cd0) != 0)) {
          iVar5 = 0;
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00444920(0x1fb8508,iVar4);
          if (0 < *(int *)(param_1 + 0x15a8cc)) {
            do {
              core_set_cpp_FUN_0050e080();
              core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00444920
                        (0x1fb8508,*(uint *)(local_18 + 0x1fba2dc));
              iVar5 = iVar5 + 1;
              core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190();
            } while (iVar5 < *(int *)(param_1 + 0x15a8cc));
          }
        }
        local_18 = local_18 + 4;
        local_20 = local_20 + 1;
      } while (local_20 < _DAT_01fba2d8);
    }
    local_28 = 0;
    if (0 < _DAT_01fba2ec) {
      do {
        iVar4 = 0;
        core_dcamera_cpp_FUN_00445750();
        if (0 < *(int *)(param_1 + 0x15a8cc)) {
          do {
            core_set_cpp_FUN_0050e080();
            core_dcamera_cpp_FUN_00445750();
            iVar4 = iVar4 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190();
          } while (iVar4 < *(int *)(param_1 + 0x15a8cc));
        }
        local_28 = local_28 + 1;
      } while (local_28 < _DAT_01fba2ec);
    }
    local_24 = 0;
    _DAT_01fba7a4 = 0;
    if (0 < _DAT_01fba480) {
      iVar4 = 0;
      do {
        uVar1 = *(uint *)(iVar4 + 0x1fba484);
        if (*(int *)(iVar4 + 0x1fba614) == 0) {
          core_dcamera_cpp_FUN_00445750();
          *(uint *)(&DAT_01fba7a8 + _DAT_01fba7a4 * 4) = uVar1;
          _DAT_01fba7a4 = _DAT_01fba7a4 + 1;
        }
        else {
          core_set_cpp_FUN_0050e080();
          core_dcamera_cpp_FUN_00445750();
          core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190();
        }
        local_24 = local_24 + 1;
        iVar4 = iVar4 + 4;
      } while (local_24 < _DAT_01fba480);
    }
    _DAT_01fba480 = 0;
  }
  if (*(int *)(0x01C775EC + 0x20c) != 0) {
    local_44 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020();
  if (*(int *)(0x01C775EC + 0x20c) != 0) {
    local_3c = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(param_1,0xc);
  core_set_cpp_CDemonSet_renderOpaqueActors_FUN_0050a640();
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670();
  iVar4 = 0;
  core_gore_cpp_CGore_renderParticles_FUN_004afe00();
  if (0 < *(int *)(param_1 + 0x15a8cc)) {
    do {
      core_set_cpp_FUN_0050e080();
      core_gore_cpp_CGore_renderParticles_FUN_004afe00();
      iVar4 = iVar4 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190();
    } while (iVar4 < *(int *)(param_1 + 0x15a8cc));
  }
  if (*0x02DD1210 != 0) {
    core_water_cpp_CWater_render_FUN_00550cb0(0x02DD1210,0);
  }
  core_set_cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0();
  if (*(int *)(param_1 + 0x15a8c0) != 0) {
    core_terrain_cpp_CTerrain_render_FUN_00549310(0x02DD10C8,0);
  }
  iVar4 = 0;
  core_fire_cpp_CFireEffect_render_FUN_0048a650();
  if (0 < *(int *)(param_1 + 0x15a8cc)) {
    do {
      core_set_cpp_FUN_0050e080();
      core_fire_cpp_CFireEffect_render_FUN_0048a650();
      iVar4 = iVar4 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190();
    } while (iVar4 < *(int *)(param_1 + 0x15a8cc));
  }
  core_weather_cpp_CWeather_renderParticles_FUN_00555020();
  local_2c = 0;
  if (0 < _DAT_01fba2d8) {
    local_34 = 0;
    do {
      if (*(int *)(*(int *)(local_34 + 0x1fba2dc) + 0x1cb4) != 0) {
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670();
        iVar4 = 0;
        core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430();
        if (0 < *(int *)(param_1 + 0x15a8cc)) {
          do {
            core_set_cpp_FUN_0050e080();
            core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430();
            iVar4 = iVar4 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190();
          } while (iVar4 < *(int *)(param_1 + 0x15a8cc));
        }
      }
      local_34 = local_34 + 4;
      local_2c = local_2c + 1;
    } while (local_2c < _DAT_01fba2d8);
  }
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20();
  core_gore_cpp_FUN_004afe80(INT_005b96c4,0);
  core_fire_cpp_FUN_0048a970(0x01C08D04,0);
  if (*0x02DD1210 == 0) {
    core_water_cpp_CWater_render_FUN_00550cb0(0x02DD1210,0);
  }
  iVar5 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x14cd6c)) {
    do {
      iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (*(uint *)(iVar4 + 0x14cd70),g_CGlassActorType_01c78c40.name_hash);
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x14c) + 0x10))();
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x14cd6c));
  }
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00440c50(0x1fb8508,0);
  local_30 = 0;
  if (0 < _DAT_01fba2d8) {
    local_38 = 0;
    do {
      if (*(int *)(*(int *)(local_38 + 0x1fba2dc) + 0x1cb4) != 0) {
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670();
        iVar4 = 0;
        core_dlight_cpp_FUN_0044f9b0();
        if (0 < *(int *)(param_1 + 0x15a8cc)) {
          do {
            core_set_cpp_FUN_0050e080();
            core_dlight_cpp_FUN_0044f9b0();
            iVar4 = iVar4 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190();
          } while (iVar4 < *(int *)(param_1 + 0x15a8cc));
        }
      }
      local_38 = local_38 + 4;
      local_30 = local_30 + 1;
    } while (local_30 < _DAT_01fba2d8);
  }
  if ((*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) != 0) && (*(int *)(0x01CC9450 + 4) == 0)) {
    core_inv_cpp_CInventory_renderSelectedItems_FUN_004c2150();
  }
  iVar4 = 0;
  core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(0x1fb8508,0);
  if (0 < _DAT_01fb9b54) {
    do {
      iVar4 = iVar4 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970();
    } while (iVar4 < _DAT_01fb9b54);
  }
  if (*(int *)(0x01C775EC + 0x20c) != 0) {
    iVar4 = wincore_winrun_cpp_getTime_FUN_00558a30();
    dVar2 = 1.0 / (double)*(float *)(0x01C775EC + 0x264);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"comp: %3.2f/%3.2f actren : %3.2f\n",
               (double)(local_44 - local_40) * 0.055555555555555601 * 1.52587890625e-05 * 1000 *
               dVar2,(double)(local_3c - local_40) * 0.055555555555555601 * 1.52587890625e-05 *
                     1000 * dVar2,
               (double)(iVar4 - local_3c) * 0.055555555555555601 * 1.52587890625e-05 * 1000 *
               dVar2);
  }
  if (*(int *)(0x01C775EC + 0x1e8) != 0) {
    core_setdir_cpp_FUN_005138e0();
  }
  iVar5 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x14cd6c)) {
    do {
      iVar3 = *(int *)(iVar4 + 0x14cd70);
      if ((uint *)(iVar3 + 0x128) != (uint *)(iVar3 + 0x20)) {
        *(uint *)(iVar3 + 0x128) = *(uint *)(iVar3 + 0x20);
        *(uint *)(iVar3 + 300) = *(uint *)(iVar3 + 0x24);
        *(uint *)(iVar3 + 0x130) = *(uint *)(iVar3 + 0x28);
      }
      if ((uint *)(iVar3 + 0x134) != (uint *)(iVar3 + 0x30)) {
        *(uint *)(iVar3 + 0x134) = *(uint *)(iVar3 + 0x30);
        *(uint *)(iVar3 + 0x138) = *(uint *)(iVar3 + 0x34);
        *(uint *)(iVar3 + 0x13c) = *(uint *)(iVar3 + 0x38);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x14cd6c));
  }
  return;
}
