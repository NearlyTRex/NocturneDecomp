// Name: core_set.cpp_CDemonSet_renderStaticLights_FUN_00550260
// Address: 00550260
// Address Range: [[00550260, 0055057c]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_00550260(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_00550260(CDemonSet *this_ptr)

{
  CDemonLight *pCVar1;
  float fVar2;
  CDemonActor *this_ptr_00;
  int iVar3;
  int iVar4;
  CDemonSet *pCVar5;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_18;
  
  if (g_CGamePtr->quimby_flag != 0) {
    if (*(int *)&g_CGamePtr->field_0x228 != 0) {
      local_38 = wincore_winrun_cpp_getTime_FUN_005b2420();
    }
    local_28 = 0;
    g_CDemonRaytraceInstance.rendering_mode = 0;
    if (0 < _DAT_01fe55bc) {
      local_30 = 0;
      do {
        pCVar1 = *(CDemonLight **)(local_30 + 0x1fe55c0);
        if (pCVar1->light_enabled_flag != 0) {
          fVar2 = (pCVar1->base).max_distance;
          core_dlight_cpp_CDemonLight_beginScene_FUN_00462820(pCVar1,0);
          core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_00463360(pCVar1);
          if (pCVar1->antialiasing_enabled != 0) {
            core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0
                      (this_ptr,(pCVar1->base).max_distance,0);
            core_set_cpp_CDemonSet_buildDisplayList_FUN_005545a0(this_ptr,1);
            core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0054eef0(this_ptr,0);
            local_18 = 0;
            pCVar5 = this_ptr;
            if (0 < this_ptr->sorted_render_actor_count) {
              do {
                iVar4 = 0;
                (*((pCVar5->sorted_render_actors[0]->vtable)._ub)->renderOpaque)
                          (pCVar5->sorted_render_actors[0]);
                if (0 < this_ptr->mirror_glass_actor_count) {
                  do {
                    core_set_cpp_CDemonSet_setupMirrorRendering_FUN_00555460(this_ptr,iVar4,0);
                    (*((pCVar5->sorted_render_actors[0]->vtable)._ub)->renderOpaque)
                              (pCVar5->sorted_render_actors[0]);
                    iVar4 = iVar4 + 1;
                    core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(this_ptr);
                  } while (iVar4 < this_ptr->mirror_glass_actor_count);
                }
                engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
                local_18 = local_18 + 1;
                pCVar5 = (CDemonSet *)pCVar5->cameras;
              } while (local_18 < this_ptr->sorted_render_actor_count);
            }
            core_gore_cpp_CGore_renderParticles_FUN_004e5c50(g_CGorePtr);
            core_fire_cpp_CFireEffect_render_FUN_004b5100(0x01C57074);
          }
          core_dlight_cpp_CDemonLight_endScene_FUN_00462ad0(pCVar1,1);
          (pCVar1->base).max_distance = fVar2;
        }
        local_30 = local_30 + 4;
        local_28 = local_28 + 1;
      } while (local_28 < _DAT_01fe55bc);
    }
    local_24 = 0;
    if (0 < _DAT_01fe4e38) {
      local_2c = 0;
      do {
        pCVar1 = *(CDemonLight **)(&DAT_01fe4e3c + local_2c);
        if (pCVar1->light_enabled_flag != 0) {
          core_dlight_cpp_CDemonLight_beginScene_FUN_00462820(pCVar1,1);
          core_set_cpp_CDemonSet_buildDisplayList_FUN_005545a0(this_ptr,0x22);
          iVar4 = 0;
          pCVar5 = this_ptr;
          _DAT_0152d2a4 = pCVar1;
          if (0 < this_ptr->sorted_render_actor_count) {
            do {
              this_ptr_00 = pCVar5->sorted_render_actors[0];
              iVar3 = (*((this_ptr_00->vtable)._ub)->renderOpaque)(this_ptr_00);
              if (iVar3 == 0) {
                *(byte *)&this_ptr_00->render_needs_update =
                     (byte)this_ptr_00->render_needs_update & 0xfd;
              }
              else {
                *(byte *)&this_ptr_00->render_needs_update =
                     (byte)this_ptr_00->render_needs_update | 0x22;
              }
              iVar4 = iVar4 + 1;
              engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
              pCVar5 = (CDemonSet *)pCVar5->cameras;
            } while (iVar4 < this_ptr->sorted_render_actor_count);
          }
          core_gore_cpp_CGore_renderParticles_FUN_004e5c50(g_CGorePtr);
          core_fire_cpp_CFireEffect_render_FUN_004b5100(0x01C57074);
          _DAT_0152d2a4 = (CDemonLight *)0x0;
          core_dlight_cpp_CDemonLight_endScene_FUN_00462ad0(pCVar1,0);
        }
        local_2c = local_2c + 4;
        local_24 = local_24 + 1;
      } while (local_24 < _DAT_01fe4e38);
    }
    if (*(int *)&g_CGamePtr->field_0x228 != 0) {
      iVar4 = wincore_winrun_cpp_getTime_FUN_005b2420();
      engine_console_cpp_FUN_00445430
                (g_CConsolePtr,"@renderStaticLights : %3.2f ms\n" + 1,
                 ((double)(iVar4 - local_38) * _DAT_005f08c6 * _DAT_005f08ce * _DAT_005f08d6) /
                 (double)g_CGamePtr->delta_time_float);
      return;
    }
  }
  return;
}
