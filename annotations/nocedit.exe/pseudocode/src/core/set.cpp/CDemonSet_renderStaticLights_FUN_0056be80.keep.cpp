// Name: core_set.cpp_CDemonSet_renderStaticLights_FUN_0056be80
// Address: 0056be80
// MANUAL RECONSTRUCTION
// Address Range: [[0056be80, 0056c19c]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_0056be80(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_0056be80(CDemonSet *this_ptr)

{
  int *piVar2;
  CDemonLight *this_ptr_01;
  int iVar4;
  int iVar5;
  int iVar3;
  int local_38;
  int local_28;
  int local_24;
  int local_18;
  float fVar3;
  CDemonLight *pCVar2;
  CDemonActor *this_ptr_00;
  int *piVar1;
  
  if (g_CGamePtr->shadow_flag != 0) {
    if (g_CGamePtr->profile_mode != 0) {
      local_38 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    }
    g_CDemonRaytraceInstance.rendering_mode = 0;
    for (local_28 = 0; local_28 < g_DynamicLightCount; local_28 = local_28 + 1) {
      pCVar2 = g_DynamicLights[local_28];
      if (pCVar2->light_enabled_flag != 0) {
        fVar3 = (pCVar2->base).max_distance;
        core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(pCVar2,0);
        core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(pCVar2);
        if (pCVar2->antialiasing_enabled != 0) {
          core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
                    (this_ptr,(pCVar2->base).max_distance,0);
          core_set_cpp_CDemonSet_buildDisplayList_FUN_0056fbd0(this_ptr,1);
          core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0(this_ptr,0);
          for (local_18 = 0; local_18 < this_ptr->sorted_render_actor_count; local_18 = local_18 + 1) {
            (*((this_ptr->sorted_render_actors[local_18]->vtable)._ub)->renderOpaque)
                      (this_ptr->sorted_render_actors[local_18]);
            for (iVar3 = 0; iVar3 < this_ptr->mirror_glass_actor_count; iVar3 = iVar3 + 1) {
              core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar3,0);
              (*((this_ptr->sorted_render_actors[local_18]->vtable)._ub)->renderOpaque)
                        (this_ptr->sorted_render_actors[local_18]);
              core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
                      (g_CDemonRendererPtr2,1);
          }
          core_gore_cpp_CGore_renderParticles_FUN_004ed7b0(g_CGorePtr);
          core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
        }
        core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(pCVar2,1);
        (pCVar2->base).max_distance = fVar3;
      }
    }
    for (local_24 = 0; local_24 < g_SpotLightCount; local_24 = local_24 + 1) {
      this_ptr_01 = g_SpotLightList[local_24];
      if (this_ptr_01->light_enabled_flag != 0) {
        core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(this_ptr_01,1);
        core_set_cpp_CDemonSet_buildDisplayList_FUN_0056fbd0(this_ptr,0x22);
        g_CurrentShadowLight = this_ptr_01;
        for (iVar3 = 0; iVar3 < this_ptr->sorted_render_actor_count; iVar3 = iVar3 + 1) {
          this_ptr_00 = this_ptr->sorted_render_actors[iVar3];
          iVar4 = (*((this_ptr_00->vtable)._ub)->renderOpaque)(this_ptr_00);
          if (iVar4 == 0) {
            piVar2 = &(this_ptr_00->previous_transform_state).dirty_flags;
            *(byte *)piVar2 = (byte)*piVar2 & 0xfd;
          }
          else {
            piVar1 = &(this_ptr_00->previous_transform_state).dirty_flags;
            *(byte *)piVar1 = (byte)*piVar1 | 0x22;
          }
          engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
                    (g_CDemonRendererPtr2,1);
        }
        core_gore_cpp_CGore_renderParticles_FUN_004ed7b0(g_CGorePtr);
        core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
        g_CurrentShadowLight = (CDemonLight *)0x0;
        core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(this_ptr_01,0);
      }
    }
    if (g_CGamePtr->profile_mode != 0) {
      iVar5 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"renderStaticLights : %3.2f ms\n",
                 ((double)(iVar5 - local_38) * 0.055555555555555601 * 1.52587890625e-05 * 1000)
                 / (double)g_CGamePtr->delta_time_float);
      return;
    }
  }
  return;
}
