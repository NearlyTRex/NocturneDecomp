// Name: core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760
// Address: 00509760
// Address Range: [[00509760, 00509a7c]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_18;
  
  if (*(int *)(0x01C775EC + 0x24) != 0) {
    if (*(int *)(0x01C775EC + 0x20c) != 0) {
      local_38 = wincore_winrun_cpp_getTime_FUN_00558a30();
    }
    local_28 = 0;
    _DAT_01fba938 = 0;
    if (0 < _DAT_01fba2d8) {
      local_30 = 0;
      do {
        iVar3 = *(int *)(local_30 + 0x1fba2dc);
        if (*(int *)(iVar3 + 0x1cb4) != 0) {
          uVar1 = *(uint *)(iVar3 + 0x100);
          core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(iVar3,0);
          core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0();
          if (*(int *)(iVar3 + 0x1cd0) != 0) {
            core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80
                      (param_1,*(uint *)(iVar3 + 0x100));
            core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(param_1);
            core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(param_1);
            local_18 = 0;
            iVar4 = param_1;
            if (0 < *(int *)(param_1 + 0x15f2fc)) {
              do {
                iVar5 = 0;
                (**(code **)(*(int *)(*(int *)(iVar4 + 0x15f300) + 0x14c) + 8))();
                if (0 < *(int *)(param_1 + 0x15a8cc)) {
                  do {
                    FUN_0050e080(param_1,iVar5);
                    (**(code **)(*(int *)(*(int *)(iVar4 + 0x15f300) + 0x14c) + 8))();
                    iVar5 = iVar5 + 1;
                    core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190();
                  } while (iVar5 < *(int *)(param_1 + 0x15a8cc));
                }
                engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704);
                local_18 = local_18 + 1;
                iVar4 = iVar4 + 4;
              } while (local_18 < *(int *)(param_1 + 0x15f2fc));
            }
            core_gore_cpp_CGore_renderParticles_FUN_004afe00();
            core_fire_cpp_CFireEffect_render_FUN_0048a650();
          }
          core_dlight_cpp_CDemonLight_endScene_FUN_0044e720();
          *(uint *)(iVar3 + 0x100) = uVar1;
        }
        local_30 = local_30 + 4;
        local_28 = local_28 + 1;
      } while (local_28 < _DAT_01fba2d8);
    }
    local_24 = 0;
    if (0 < _DAT_01fb9b54) {
      local_2c = 0;
      do {
        iVar3 = *(int *)(&DAT_01fb9b58 + local_2c);
        if (*(int *)(iVar3 + 0x1cb4) != 0) {
          core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(iVar3,1);
          core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(param_1);
          iVar5 = 0;
          iVar4 = param_1;
          _DAT_014b9920 = iVar3;
          if (0 < *(int *)(param_1 + 0x15f2fc)) {
            do {
              iVar3 = *(int *)(iVar4 + 0x15f300);
              iVar2 = (**(code **)(*(int *)(iVar3 + 0x14c) + 8))();
              if (iVar2 == 0) {
                *(byte *)(iVar3 + 0x140) = *(byte *)(iVar3 + 0x140) & 0xfd;
              }
              else {
                *(byte *)(iVar3 + 0x140) = *(byte *)(iVar3 + 0x140) | 0x22;
              }
              iVar5 = iVar5 + 1;
              engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704);
              iVar4 = iVar4 + 4;
            } while (iVar5 < *(int *)(param_1 + 0x15f2fc));
          }
          core_gore_cpp_CGore_renderParticles_FUN_004afe00();
          core_fire_cpp_CFireEffect_render_FUN_0048a650();
          _DAT_014b9920 = 0;
          core_dlight_cpp_CDemonLight_endScene_FUN_0044e720();
        }
        local_2c = local_2c + 4;
        local_24 = local_24 + 1;
      } while (local_24 < _DAT_01fb9b54);
    }
    if (*(int *)(0x01C775EC + 0x20c) != 0) {
      iVar3 = wincore_winrun_cpp_getTime_FUN_00558a30();
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"@renderStaticLights : %3.2f ms\n" + 1,
                 ((double)(iVar3 - local_38) * _DAT_0059051a * _DAT_00590522 * _DAT_0059052a) /
                 (double)*(float *)(0x01C775EC + 0x264));
      return;
    }
  }
  return;
}
