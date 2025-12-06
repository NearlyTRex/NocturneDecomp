// Name: core_set.cpp_CDemonSet_FUN_0056c1a0
// Address: 0056c1a0
// Address Range: [[0056c1a0, 0056c983]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056c1a0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056c1a0(CDemonSet *this_ptr)

{
  uint *puVar1;
  CDemonLight *pCVar2;
  void *p1;
  CDemonActor *this_ptr_00;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_stack_00000008;
  CDemonSet *pCVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (g_CGamePtr->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  if ((in_stack_00000008 != 0) &&
     (iVar3 = core_set_cpp_CDemonSet_isCameraPanning_FUN_00571320(this_ptr), iVar3 != 0)) {
    return;
  }
  if (in_stack_00000008 == 0) {
    g_DynamicLightCount = in_stack_00000008;
    g_CoronaGlobeCount = in_stack_00000008;
    core_set_cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(this_ptr);
    core_set_cpp_CDemonSet_FUN_0056be80(this_ptr);
  }
  core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(&g_CDemonCameraInstance);
  if (this_ptr->mirror_render_flag != 0) {
    core_set_cpp_CDemonSet_setCameraView_FUN_00570c70(this_ptr);
    this_ptr->mirror_render_flag = 0;
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
  if ((g_RenderingShadows != 0) || (g_CGamePtr->shadow_flag != 0)) {
    iVar3 = 0;
    g_RenderingShadows = 0;
    core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451130(&g_CDemonCameraInstance);
    if (0 < g_ActiveLightCount) {
      iVar6 = 0;
      do {
        if ((*(CDemonLight **)((int)g_ActiveLightList + iVar6))->light_enabled_flag != 0) {
          core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
                    (&g_CDemonCameraInstance,*(CDemonLight **)((int)g_ActiveLightList + iVar6));
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar3 < g_ActiveLightCount);
    }
    lVar8 = 0;
    if (0 < g_DynamicLightCount) {
      uVar9 = 0;
      do {
        iVar6 = (int)((ulonglong)lVar8 >> 0x20);
        iVar3 = (int)uVar9;
        pCVar2 = *(CDemonLight **)((int)g_DynamicLights + iVar3);
        if ((pCVar2->light_enabled_flag != 0) && (pCVar2->antialiasing_enabled != 0)) {
          iVar4 = 0;
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
                    (&g_CDemonCameraInstance,pCVar2);
          iVar6 = (int)((ulonglong)lVar8 >> 0x20);
          iVar5 = (int)uVar9;
          iVar3 = iVar5;
          if (0 < this_ptr->mirror_glass_count) {
            do {
              core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar4,0);
              core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
                        (&g_CDemonCameraInstance,*(CDemonLight **)((int)g_DynamicLights + iVar5));
              iVar4 = iVar4 + 1;
              core_set_cpp_FUN_00570af0();
              iVar6 = (int)((ulonglong)lVar8 >> 0x20);
              iVar3 = (int)uVar9;
            } while (iVar4 < this_ptr->mirror_glass_count);
          }
        }
        uVar9 = (ulonglong)(iVar3 + 4);
        lVar8 = (ulonglong)(iVar6 + 1U) << 0x20;
      } while ((int)(iVar6 + 1U) < g_DynamicLightCount);
    }
    iVar3 = 0;
    if (0 < g_CoronaGlobeCount) {
      iVar6 = 0;
      do {
        iVar5 = 0;
        core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
                  (&g_CDemonCameraInstance,*(void **)((int)g_CoronaGlobes + iVar6),0);
        iVar4 = iVar6;
        if (0 < this_ptr->mirror_glass_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar5,0);
            core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
                      (&g_CDemonCameraInstance,*(void **)((int)g_CoronaGlobes + iVar6),1);
            iVar5 = iVar5 + 1;
            core_set_cpp_FUN_00570af0();
          } while (iVar5 < this_ptr->mirror_glass_count);
        }
        iVar6 = iVar4 + 4;
        iVar3 = iVar3 + 1;
      } while (iVar3 < g_CoronaGlobeCount);
    }
    iVar3 = 0;
    DAT_03277b80 = 0;
    if (0 < DAT_0327785c) {
      iVar6 = 0;
      do {
        p1 = *(void **)((int)&DAT_03277860 + iVar6);
        if (*(int *)((int)&DAT_032779f0 + iVar6) == 0) {
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
                    (&g_CDemonCameraInstance,p1,0);
          (&DAT_03277b84)[DAT_03277b80] = p1;
          DAT_03277b80 = DAT_03277b80 + 1;
        }
        else {
          core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
                    (this_ptr,*(int *)((int)&DAT_032779f0 + iVar6) + -1,0);
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
                    (&g_CDemonCameraInstance,p1,1);
          core_set_cpp_FUN_00570af0();
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar3 < DAT_0327785c);
    }
    DAT_0327785c = 0;
  }
  if (g_CGamePtr->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0(&g_CDemonCameraInstance);
  if (g_CGamePtr->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_set_cpp_CDemonSet_FUN_0056fbd0(this_ptr);
  core_set_cpp_CDemonSet_FUN_0056cd60(this_ptr);
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
            (&g_CDemonCameraInstance,(CVector3f *)0x0,0.0);
  iVar3 = 0;
  core_gore_cpp_CGore_FUN_004ed7b0(g_CGorePtr);
  if (0 < this_ptr->mirror_glass_count) {
    do {
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar3,0);
      core_gore_cpp_CGore_FUN_004ed7b0(g_CGorePtr);
      iVar3 = iVar3 + 1;
      core_set_cpp_FUN_00570af0();
    } while (iVar3 < this_ptr->mirror_glass_count);
  }
  if (g_CWaterPtr->wave_animation_enabled != 0) {
    core_water_cpp_CWater_render_FUN_005ea320(g_CWaterPtr,0);
  }
  core_set_cpp_CDemonSet_FUN_0056cf00(this_ptr);
  if (this_ptr->player_on_train != 0) {
    core_terrain_cpp_CTerrain_render_FUN_005e1f50(g_CTerrainPtr);
  }
  iVar3 = 0;
  core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
  if (0 < this_ptr->mirror_glass_count) {
    do {
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar3,0);
      core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
      iVar3 = iVar3 + 1;
      core_set_cpp_FUN_00570af0();
    } while (iVar3 < this_ptr->mirror_glass_count);
  }
  core_weather_cpp_CWeather_FUN_005ef190();
  iVar3 = 0;
  if (0 < g_DynamicLightCount) {
    pCVar7 = (CDemonSet *)0x0;
    do {
      pCVar2 = *(CDemonLight **)(pCVar7[0x24].lights[0x6f].field8_0x21e + 0x952);
      if (pCVar2->light_enabled_flag != 0) {
        iVar3 = 0;
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
                  (&g_CDemonCameraInstance,(CVector3f *)&stack0xffffff9c,0.0);
        iVar6 = 0;
        pCVar7 = (CDemonSet *)0x56c8a8;
        core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(pCVar2);
        if (0 < this_ptr->mirror_glass_count) {
          do {
            pCVar7 = this_ptr;
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar6,0);
            iVar3 = 0x56c8cb;
            core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(pCVar2);
            iVar6 = iVar6 + 1;
            core_set_cpp_FUN_00570af0();
          } while (iVar6 < this_ptr->mirror_glass_count);
        }
      }
      pCVar7 = (CDemonSet *)pCVar7->cameras;
      iVar3 = iVar3 + 1;
    } while (iVar3 < g_DynamicLightCount);
  }
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(&g_CDemonCameraInstance);
  core_gore_cpp_FUN_004ed830(g_CGorePtr);
  core_fire_cpp_CFireEffect_renderDecals_FUN_004c74a0(g_CFireEffectPtr,0,1);
  if (g_CWaterPtr->wave_animation_enabled == 0) {
    core_water_cpp_CWater_render_FUN_005ea320(g_CWaterPtr,0);
  }
  iVar3 = 0;
  pCVar7 = this_ptr;
  if (0 < (int)this_ptr->actor_list_ptr) {
    do {
      this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)pCVar7->actor_list_data,g_CGlassClassInfo.name_hash)
      ;
      if (this_ptr_00 != (CDemonActor *)0x0) {
        (*this_ptr_00->vtable->renderBackground)(this_ptr_00,0);
      }
      iVar3 = iVar3 + 1;
      pCVar7 = (CDemonSet *)pCVar7->cameras;
    } while (iVar3 < (int)this_ptr->actor_list_ptr);
  }
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(&g_CDemonCameraInstance,0);
  iVar3 = 0;
  if (0 < g_DynamicLightCount) {
    iVar6 = 0;
    do {
      pCVar2 = *(CDemonLight **)((int)g_DynamicLights + iVar6);
      if (pCVar2->light_enabled_flag != 0) {
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
                  (&g_CDemonCameraInstance,(CVector3f *)&stack0xffffffa8,0.0);
        iVar4 = 0;
        core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(pCVar2);
        if (0 < this_ptr->mirror_glass_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar4,0);
            core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(pCVar2);
            iVar4 = iVar4 + 1;
            core_set_cpp_FUN_00570af0();
          } while (iVar4 < this_ptr->mirror_glass_count);
        }
      }
      iVar6 = iVar6 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < g_DynamicLightCount);
  }
  if ((g_HeroActors[g_LocalHeroIndex] != (CHero *)0x0) &&
     (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0)) {
    core_inv_cpp_CInventory_renderSelectedItems_FUN_00500370
              (&g_HeroActors[g_LocalHeroIndex]->inventory);
  }
  iVar3 = 0;
  core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
  if (0 < g_ActiveLightCount) {
    iVar6 = 0;
    do {
      puVar1 = (uint *)((int)g_ActiveLightList + iVar6);
      iVar6 = iVar6 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80((CDemonLight *)*puVar1);
    } while (iVar3 < g_ActiveLightCount);
  }
  if (g_CGamePtr->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"comp: %3.2f/%3.2f actren : %3.2f\n");
  }
  if (g_CGamePtr->field59_0x1e8 != 0) {
    core_setdir_cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70(this_ptr);
  }
  iVar3 = 0;
  pCVar7 = this_ptr;
  if (0 < (int)this_ptr->actor_list_ptr) {
    do {
      iVar6 = *(int *)pCVar7->actor_list_data;
      if ((uint *)(iVar6 + 0x128) != (uint *)(iVar6 + 0x20)) {
        *(uint *)(iVar6 + 0x128) = *(uint *)(iVar6 + 0x20);
        *(uint *)(iVar6 + 300) = *(uint *)(iVar6 + 0x24);
        *(uint *)(iVar6 + 0x130) = *(uint *)(iVar6 + 0x28);
      }
      if ((uint *)(iVar6 + 0x134) != (uint *)(iVar6 + 0x30)) {
        *(uint *)(iVar6 + 0x134) = *(uint *)(iVar6 + 0x30);
        *(uint *)(iVar6 + 0x138) = *(uint *)(iVar6 + 0x34);
        *(uint *)(iVar6 + 0x13c) = *(uint *)(iVar6 + 0x38);
      }
      iVar3 = iVar3 + 1;
      pCVar7 = (CDemonSet *)pCVar7->cameras;
    } while (iVar3 < (int)this_ptr->actor_list_ptr);
  }
  return;
}
