// Name: core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760
// Address: 00509760
// Address Range: [[00509760, 00509a7c]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760(CDemonSet *this_ptr)

{
  int *piVar1;
  CDemonLight *pCVar2;
  float fVar3;
  CDemonActor *this_ptr_00;
  int iVar4;
  CDemonSet *pCVar5;
  int iVar6;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_18;
  
  if (g_CGame_PTR_005b9354->shadow_flag != 0) {
    if (g_CGame_PTR_005b9354->profile_mode != 0) {
      wincore_winrun_cpp_getTime_FUN_00558a30();
    }
    local_28 = 0;
    g_CDemonRaytrace_01fba938.rendering_mode = 0;
    if (0 < _DAT_01fba2d8) {
      local_30 = 0;
      do {
        pCVar2 = *(CDemonLight **)(local_30 + 0x1fba2dc);
        if (pCVar2->light_enabled_flag != 0) {
          fVar3 = (pCVar2->base).fixed_point_scale;
          core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(pCVar2,0);
          core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0(pCVar2);
          if (pCVar2->antialiasing_enabled != 0) {
            core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80
                      (this_ptr,(pCVar2->base).fixed_point_scale,0);
            core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(this_ptr,1);
            core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(this_ptr,0);
            local_18 = 0;
            pCVar5 = this_ptr;
            if (0 < this_ptr->sorted_render_actor_count) {
              do {
                iVar6 = 0;
                (*((pCVar5->sorted_render_actors[0]->vtable)._ub)->renderOpaque)
                          (pCVar5->sorted_render_actors[0]);
                if (0 < this_ptr->mirror_glass_actor_count) {
                  do {
                    core_set_cpp_FUN_0050e080(this_ptr,iVar6,0);
                    (*((pCVar5->sorted_render_actors[0]->vtable)._ub)->renderOpaque)
                              (pCVar5->sorted_render_actors[0]);
                    iVar6 = iVar6 + 1;
                    core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(this_ptr);
                  } while (iVar6 < this_ptr->mirror_glass_actor_count);
                }
                engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
                local_18 = local_18 + 1;
                pCVar5 = (CDemonSet *)pCVar5->cameras;
              } while (local_18 < this_ptr->sorted_render_actor_count);
            }
            core_gore_cpp_CGore_renderParticles_FUN_004afe00(g_CGore_PTR_005b96c4);
            core_fire_cpp_CFireEffect_render_FUN_0048a650(g_CFireEffect_PTR_005b80f0);
          }
          core_dlight_cpp_CDemonLight_endScene_FUN_0044e720(pCVar2,1);
          (pCVar2->base).fixed_point_scale = fVar3;
        }
        local_30 = local_30 + 4;
        local_28 = local_28 + 1;
      } while (local_28 < _DAT_01fba2d8);
    }
    local_24 = 0;
    if (0 < _DAT_01fb9b54) {
      local_2c = 0;
      do {
        pCVar2 = *(CDemonLight **)(&DAT_01fb9b58 + local_2c);
        if (pCVar2->light_enabled_flag != 0) {
          core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(pCVar2,1);
          core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(this_ptr,0x22);
          iVar6 = 0;
          pCVar5 = this_ptr;
          _DAT_014b9920 = pCVar2;
          if (0 < this_ptr->sorted_render_actor_count) {
            do {
              this_ptr_00 = pCVar5->sorted_render_actors[0];
              iVar4 = (*((this_ptr_00->vtable)._ub)->renderOpaque)(this_ptr_00);
              if (iVar4 == 0) {
                piVar1 = &(this_ptr_00->previous_transform_state).dirty_flags;
                *(byte *)piVar1 = (byte)*piVar1 & 0xfd;
              }
              else {
                piVar1 = &(this_ptr_00->previous_transform_state).dirty_flags;
                *(byte *)piVar1 = (byte)*piVar1 | 0x22;
              }
              iVar6 = iVar6 + 1;
              engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
              pCVar5 = (CDemonSet *)pCVar5->cameras;
            } while (iVar6 < this_ptr->sorted_render_actor_count);
          }
          core_gore_cpp_CGore_renderParticles_FUN_004afe00(g_CGore_PTR_005b96c4);
          core_fire_cpp_CFireEffect_render_FUN_0048a650(g_CFireEffect_PTR_005b80f0);
          _DAT_014b9920 = (CDemonLight *)0x0;
          core_dlight_cpp_CDemonLight_endScene_FUN_0044e720(pCVar2,0);
        }
        local_2c = local_2c + 4;
        local_24 = local_24 + 1;
      } while (local_24 < _DAT_01fb9b54);
    }
    if (g_CGame_PTR_005b9354->profile_mode != 0) {
      wincore_winrun_cpp_getTime_FUN_00558a30();
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"renderStaticLights : %3.2f ms\n");
      return;
    }
  }
  return;
}
