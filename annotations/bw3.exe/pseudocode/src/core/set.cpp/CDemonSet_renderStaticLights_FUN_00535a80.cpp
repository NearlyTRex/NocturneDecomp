// Name: core_set.cpp_CDemonSet_renderStaticLights_FUN_00535a80
// Address: 00535a80
// Address Range: [[00535a80, 00535d9c]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_00535a80(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_00535a80(CDemonSet *this_ptr)

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
  
  if (*(int *)&g_CGamePtr->field_0x24 != 0) {
    if (*(int *)&g_CGamePtr->field_0x230 != 0) {
      local_38 = wincore_winrun_cpp_getTime_FUN_005806a0();
    }
    local_28 = 0;
    g_CDemonRaytraceInstance.rendering_mode = 0;
    if (0 < _DAT_0203ad1c) {
      local_30 = 0;
      do {
        pCVar1 = *(CDemonLight **)(local_30 + 0x203ad20);
        if (pCVar1->light_enabled_flag != 0) {
          fVar2 = (pCVar1->base).max_distance;
          core_dlight_cpp_CDemonLight_beginScene_FUN_0045c530(pCVar1,0);
          core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070(pCVar1);
          if (pCVar1->antialiasing_enabled != 0) {
            core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80
                      (this_ptr,(pCVar1->base).max_distance,0);
            core_set_cpp_CDemonSet_buildDisplayList_FUN_00539f30(this_ptr,1);
            core_set_cpp_CDemonSet_renderBackgroundActors_FUN_005346b0(this_ptr,0);
            local_18 = 0;
            pCVar5 = this_ptr;
            if (0 < this_ptr->sorted_render_actor_count) {
              do {
                iVar4 = 0;
                (*((pCVar5->sorted_render_actors[0]->vtable)._ub)->renderOpaque)
                          (pCVar5->sorted_render_actors[0]);
                if (0 < this_ptr->mirror_glass_actor_count) {
                  do {
                    core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(this_ptr,iVar4,0);
                    (*((pCVar5->sorted_render_actors[0]->vtable)._ub)->renderOpaque)
                              (pCVar5->sorted_render_actors[0]);
                    iVar4 = iVar4 + 1;
                    core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
                  } while (iVar4 < this_ptr->mirror_glass_actor_count);
                }
                engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
                local_18 = local_18 + 1;
                pCVar5 = (CDemonSet *)pCVar5->cameras;
              } while (local_18 < this_ptr->sorted_render_actor_count);
            }
            core_gore_cpp_CGore_renderParticles_FUN_004ce5b0(g_CGorePtr);
            core_fire_cpp_CFireEffect_render_FUN_004a1ad0(0x01C73654);
          }
          core_dlight_cpp_CDemonLight_endScene_FUN_0045c7e0(pCVar1,1);
          (pCVar1->base).max_distance = fVar2;
        }
        local_30 = local_30 + 4;
        local_28 = local_28 + 1;
      } while (local_28 < _DAT_0203ad1c);
    }
    local_24 = 0;
    if (0 < _DAT_0203a598) {
      local_2c = 0;
      do {
        pCVar1 = *(CDemonLight **)(&DAT_0203a59c + local_2c);
        if (pCVar1->light_enabled_flag != 0) {
          core_dlight_cpp_CDemonLight_beginScene_FUN_0045c530(pCVar1,1);
          core_set_cpp_CDemonSet_buildDisplayList_FUN_00539f30(this_ptr,0x22);
          iVar4 = 0;
          pCVar5 = this_ptr;
          _DAT_01549b10 = pCVar1;
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
              engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
              pCVar5 = (CDemonSet *)pCVar5->cameras;
            } while (iVar4 < this_ptr->sorted_render_actor_count);
          }
          core_gore_cpp_CGore_renderParticles_FUN_004ce5b0(g_CGorePtr);
          core_fire_cpp_CFireEffect_render_FUN_004a1ad0(0x01C73654);
          _DAT_01549b10 = (CDemonLight *)0x0;
          core_dlight_cpp_CDemonLight_endScene_FUN_0045c7e0(pCVar1,0);
        }
        local_2c = local_2c + 4;
        local_24 = local_24 + 1;
      } while (local_24 < _DAT_0203a598);
    }
    if (*(int *)&g_CGamePtr->field_0x230 != 0) {
      iVar4 = wincore_winrun_cpp_getTime_FUN_005806a0();
      engine_console_cpp_FUN_00441ff0
                (g_CConsolePtr,"@renderStaticLights : %3.2f ms\n" + 1,
                 ((double)(iVar4 - local_38) * _DAT_005d055f * _DAT_005d0567 * _DAT_005d056f) /
                 (double)g_CGamePtr->delta_time_float);
      return;
    }
  }
  return;
}
