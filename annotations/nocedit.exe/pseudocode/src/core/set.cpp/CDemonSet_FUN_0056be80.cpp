// Name: core_set.cpp_CDemonSet_FUN_0056be80
// Address: 0056be80
// Address Range: [[0056be80, 0056c19c]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056be80(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056be80(CDemonSet *this_ptr)

{
  CDemonLight *pCVar1;
  float fVar2;
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
  
  if (g_CGamePtr->shadow_flag != 0) {
    if (g_CGamePtr->profile_mode != 0) {
      local_38 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    }
    local_28 = 0;
    g_CDemonRaytraceInstance.rendering_mode = 0;
    if (0 < g_DynamicLightCount) {
      local_30 = 0;
      do {
        pCVar1 = *(CDemonLight **)((int)g_DynamicLights + local_30);
        if (pCVar1->light_enabled_flag != 0) {
          fVar2 = (pCVar1->base).max_distance;
          core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(pCVar1,0);
          core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(pCVar1);
          if (pCVar1->antialiasing_enabled != 0) {
            core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
                      (this_ptr,(pCVar1->base).max_distance,0);
            core_set_cpp_CDemonSet_FUN_0056fbd0(this_ptr);
            core_set_cpp_CDemonSet_FUN_0056aca0(this_ptr);
            local_18 = 0;
            pCVar6 = this_ptr;
            if (0 < *(int *)this_ptr->unk13) {
              do {
                iVar5 = 0;
                (**(code **)(*(int *)(*(int *)(pCVar6->unk13 + 4) + 0x154) + 8))();
                if (0 < this_ptr->mirror_glass_count) {
                  do {
                    core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar5,0);
                    (**(code **)(*(int *)(*(int *)(pCVar6->unk13 + 4) + 0x154) + 8))();
                    iVar5 = iVar5 + 1;
                    core_set_cpp_FUN_00570af0();
                  } while (iVar5 < this_ptr->mirror_glass_count);
                }
                engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
                          (g_CDemonRendererPtr2,1);
                local_18 = local_18 + 1;
                pCVar6 = (CDemonSet *)pCVar6->cameras;
              } while (local_18 < *(int *)this_ptr->unk13);
            }
            core_gore_cpp_CGore_FUN_004ed7b0(g_CGorePtr);
            core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
          }
          core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(pCVar1);
          (pCVar1->base).max_distance = fVar2;
        }
        local_30 = local_30 + 4;
        local_28 = local_28 + 1;
      } while (local_28 < g_DynamicLightCount);
    }
    local_24 = 0;
    if (0 < g_ActiveLightCount) {
      local_2c = 0;
      do {
        pCVar1 = *(CDemonLight **)((int)g_ActiveLightList + local_2c);
        if (pCVar1->light_enabled_flag != 0) {
          core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(pCVar1,1);
          core_set_cpp_CDemonSet_FUN_0056fbd0(this_ptr);
          iVar5 = 0;
          pCVar6 = this_ptr;
          g_CurrentShadowLight = pCVar1;
          if (0 < *(int *)this_ptr->unk13) {
            do {
              iVar3 = *(int *)(pCVar6->unk13 + 4);
              iVar4 = (**(code **)(*(int *)(iVar3 + 0x154) + 8))();
              if (iVar4 == 0) {
                *(byte *)(iVar3 + 0x140) = *(byte *)(iVar3 + 0x140) & 0xfd;
              }
              else {
                *(byte *)(iVar3 + 0x140) = *(byte *)(iVar3 + 0x140) | 0x22;
              }
              iVar5 = iVar5 + 1;
              engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
                        (g_CDemonRendererPtr2,1);
              pCVar6 = (CDemonSet *)pCVar6->cameras;
            } while (iVar5 < *(int *)this_ptr->unk13);
          }
          core_gore_cpp_CGore_FUN_004ed7b0(g_CGorePtr);
          core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
          g_CurrentShadowLight = (CDemonLight *)0x0;
          core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(pCVar1);
        }
        local_2c = local_2c + 4;
        local_24 = local_24 + 1;
      } while (local_24 < g_ActiveLightCount);
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
