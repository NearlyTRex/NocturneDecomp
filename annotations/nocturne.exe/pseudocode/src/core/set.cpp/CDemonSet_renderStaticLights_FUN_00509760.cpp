// Name: core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760
// Address: 00509760
// Address Range: [[00509760, 00509a7c]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760(CDemonSet *this_ptr)

{
  CDemonLight *pCVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CDemonSet *pCVar6;
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
        pCVar1 = *(CDemonLight **)(local_30 + 0x1fba2dc);
        if (pCVar1->light_enabled_flag != 0) {
          uVar2 = *(uint *)((pCVar1->base).camera_name + 0xc0);
          core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(pCVar1,0);
          core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0(pCVar1);
          if (pCVar1->antialiasing_enabled != 0) {
            core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80
                      (this_ptr,*(float *)((pCVar1->base).camera_name + 0xc0),0);
            core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(this_ptr,1);
            core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,0);
            local_18 = 0;
            pCVar6 = this_ptr;
            if (0 < (int)this_ptr->vdir_boxes[0xec].rotation_matrix.m[2].z) {
              do {
                iVar5 = 0;
                (**(code **)(*(int *)(pCVar6->vdir_boxes[0xec].dead + 0x14c) + 8))();
                if (0 < (int)this_ptr->renderable_actors[0x6f7]) {
                  do {
                    core_set_cpp_FUN_0050e080(this_ptr,iVar5,0);
                    (**(code **)(*(int *)(pCVar6->vdir_boxes[0xec].dead + 0x14c) + 8))();
                    iVar5 = iVar5 + 1;
                    core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190();
                  } while (iVar5 < (int)this_ptr->renderable_actors[0x6f7]);
                }
                engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
                local_18 = local_18 + 1;
                pCVar6 = (CDemonSet *)pCVar6->cameras;
              } while (local_18 < (int)this_ptr->vdir_boxes[0xec].rotation_matrix.m[2].z);
            }
            core_gore_cpp_CGore_renderParticles_FUN_004afe00((CGore *)INT_005b96c4);
            core_fire_cpp_CFireEffect_render_FUN_0048a650(0x01C08D04);
          }
          core_dlight_cpp_CDemonLight_endScene_FUN_0044e720(pCVar1,1);
          *(uint *)((pCVar1->base).camera_name + 0xc0) = uVar2;
        }
        local_30 = local_30 + 4;
        local_28 = local_28 + 1;
      } while (local_28 < _DAT_01fba2d8);
    }
    local_24 = 0;
    if (0 < _DAT_01fb9b54) {
      local_2c = 0;
      do {
        pCVar1 = *(CDemonLight **)(&DAT_01fb9b58 + local_2c);
        if (pCVar1->light_enabled_flag != 0) {
          core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(pCVar1,1);
          core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(this_ptr,0x22);
          iVar5 = 0;
          pCVar6 = this_ptr;
          _DAT_014b9920 = pCVar1;
          if (0 < (int)this_ptr->vdir_boxes[0xec].rotation_matrix.m[2].z) {
            do {
              iVar3 = pCVar6->vdir_boxes[0xec].dead;
              iVar4 = (**(code **)(*(int *)(iVar3 + 0x14c) + 8))();
              if (iVar4 == 0) {
                *(byte *)(iVar3 + 0x140) = *(byte *)(iVar3 + 0x140) & 0xfd;
              }
              else {
                *(byte *)(iVar3 + 0x140) = *(byte *)(iVar3 + 0x140) | 0x22;
              }
              iVar5 = iVar5 + 1;
              engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
              pCVar6 = (CDemonSet *)pCVar6->cameras;
            } while (iVar5 < (int)this_ptr->vdir_boxes[0xec].rotation_matrix.m[2].z);
          }
          core_gore_cpp_CGore_renderParticles_FUN_004afe00((CGore *)INT_005b96c4);
          core_fire_cpp_CFireEffect_render_FUN_0048a650(0x01C08D04);
          _DAT_014b9920 = (CDemonLight *)0x0;
          core_dlight_cpp_CDemonLight_endScene_FUN_0044e720(pCVar1,0);
        }
        local_2c = local_2c + 4;
        local_24 = local_24 + 1;
      } while (local_24 < _DAT_01fb9b54);
    }
    if (*(int *)(0x01C775EC + 0x20c) != 0) {
      iVar5 = wincore_winrun_cpp_getTime_FUN_00558a30();
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"renderStaticLights : %3.2f ms\n",
                 ((double)(iVar5 - local_38) * 0.055555555555555601 * 1.52587890625e-05 * 1000)
                 / (double)*(float *)(0x01C775EC + 0x264));
      return;
    }
  }
  return;
}
