// Name: core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0
// Address: 0056c1a0
// Address Range: [[0056c1a0, 0056c983]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(CDemonSet *this_ptr,int skip_prerender)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(CDemonSet *this_ptr,int skip_prerender)

{
  uint *puVar1;
  UOrientationVector *pUVar2;
  CDemonLight *pCVar3;
  CDemonGlobe *p1;
  double dVar4;
  CDemonActor *pCVar5;
  CDemonSet *pCVar6;
  int iVar7;
  int iVar8;
  CVector3f local_64;
  CVector3f local_58;
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
  int local_1c;
  int local_18;
  int local_14;
  
  if (g_CGamePtr->profile_mode != 0) {
    local_40 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  if ((skip_prerender != 0) &&
     (iVar7 = core_set_cpp_CDemonSet_isCameraPanning_FUN_00571320(this_ptr), iVar7 != 0)) {
    return;
  }
  if (skip_prerender == 0) {
    g_DynamicLightCount = skip_prerender;
    g_CoronaGlobeCount = skip_prerender;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0056d090(this_ptr,&g_CDemonLightInstance);
    core_set_cpp_CDemonSet_renderStaticLights_FUN_0056be80(this_ptr);
  }
  core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(&g_CDemonCameraInstance);
  if (this_ptr->mirror_camera_dirty != 0) {
    core_set_cpp_CDemonSet_setCameraView_FUN_00570c70(this_ptr);
    this_ptr->mirror_camera_dirty = 0;
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
  if ((g_RenderingShadows != 0) || (g_CGamePtr->shadow_flag != 0)) {
    iVar7 = 0;
    g_RenderingShadows = 0;
    core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451130(&g_CDemonCameraInstance);
    if (0 < g_SpotLightCount) {
      iVar8 = 0;
      do {
        if ((*(CDemonLight **)((int)g_SpotLightList + iVar8))->light_enabled_flag != 0) {
          core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
                    (&g_CDemonCameraInstance,*(CDemonLight **)((int)g_SpotLightList + iVar8));
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar7 < g_SpotLightCount);
    }
    local_28 = 0;
    if (0 < g_DynamicLightCount) {
      local_1c = 0;
      do {
        pCVar3 = *(CDemonLight **)((int)g_DynamicLights + local_1c);
        if ((pCVar3->light_enabled_flag != 0) && (pCVar3->antialiasing_enabled != 0)) {
          iVar8 = 0;
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
                    (&g_CDemonCameraInstance,pCVar3);
          iVar7 = local_1c;
          if (0 < this_ptr->mirror_glass_actor_count) {
            do {
              core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar8,0);
              core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
                        (&g_CDemonCameraInstance,*(CDemonLight **)((int)g_DynamicLights + iVar7));
              iVar8 = iVar8 + 1;
              core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
            } while (iVar8 < this_ptr->mirror_glass_actor_count);
          }
        }
        local_1c = local_1c + 4;
        local_28 = local_28 + 1;
      } while (local_28 < g_DynamicLightCount);
    }
    local_20 = 0;
    if (0 < g_CoronaGlobeCount) {
      local_18 = 0;
      do {
        iVar8 = 0;
        core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
                  (&g_CDemonCameraInstance,*(void **)((int)g_CoronaGlobes + local_18),0);
        iVar7 = local_18;
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar8,0);
            core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
                      (&g_CDemonCameraInstance,*(void **)((int)g_CoronaGlobes + iVar7),1);
            iVar8 = iVar8 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
          } while (iVar8 < this_ptr->mirror_glass_actor_count);
        }
        local_18 = local_18 + 4;
        local_20 = local_20 + 1;
      } while (local_20 < g_CoronaGlobeCount);
    }
    local_24 = 0;
    g_VisibleCoronaGlobeCount = 0;
    if (0 < g_QueuedCoronaGlobeCount) {
      iVar7 = 0;
      do {
        p1 = *(CDemonGlobe **)((int)g_QueuedCoronaGlobes + iVar7);
        if (*(int *)((int)g_QueuedCoronaGlobeAlphaMasks + iVar7) == 0) {
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
                    (&g_CDemonCameraInstance,p1,0);
          g_VisibleCoronaGlobes[g_VisibleCoronaGlobeCount] = p1;
          g_VisibleCoronaGlobeCount = g_VisibleCoronaGlobeCount + 1;
        }
        else {
          core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
                    (this_ptr,*(int *)((int)g_QueuedCoronaGlobeAlphaMasks + iVar7) + -1,0);
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
                    (&g_CDemonCameraInstance,p1,1);
          core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
        }
        local_24 = local_24 + 1;
        iVar7 = iVar7 + 4;
      } while (local_24 < g_QueuedCoronaGlobeCount);
    }
    g_QueuedCoronaGlobeCount = 0;
  }
  if (g_CGamePtr->profile_mode != 0) {
    local_44 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0(&g_CDemonCameraInstance);
  if (g_CGamePtr->profile_mode != 0) {
    local_3c = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_set_cpp_CDemonSet_buildDisplayList_FUN_0056fbd0(this_ptr,0xc);
  core_set_cpp_CDemonSet_renderOpaqueActors_FUN_0056cd60(this_ptr);
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
            (&g_CDemonCameraInstance,(CVector3f *)0x0,0.0);
  iVar7 = 0;
  core_gore_cpp_CGore_renderParticles_FUN_004ed7b0(g_CGorePtr);
  if (0 < this_ptr->mirror_glass_actor_count) {
    do {
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar7,0);
      core_gore_cpp_CGore_renderParticles_FUN_004ed7b0(g_CGorePtr);
      iVar7 = iVar7 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
    } while (iVar7 < this_ptr->mirror_glass_actor_count);
  }
  if (g_CWaterPtr->wave_animation_enabled != 0) {
    core_water_cpp_CWater_render_FUN_005ea320(g_CWaterPtr,0);
  }
  core_set_cpp_CDemonSet_renderTransparentActors_FUN_0056cf00(this_ptr);
  if (this_ptr->player_on_train != 0) {
    core_terrain_cpp_CTerrain_render_FUN_005e1f50(g_CTerrainPtr);
  }
  iVar7 = 0;
  core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
  if (0 < this_ptr->mirror_glass_actor_count) {
    do {
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar7,0);
      core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
      iVar7 = iVar7 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
    } while (iVar7 < this_ptr->mirror_glass_actor_count);
  }
  core_weather_cpp_CWeather_renderParticles_FUN_005ef190(g_CWeatherPtr);
  local_2c = 0;
  if (0 < g_DynamicLightCount) {
    local_34 = 0;
    do {
      pCVar3 = *(CDemonLight **)((int)g_DynamicLights + local_34);
      if (pCVar3->light_enabled_flag != 0) {
        local_64.x = (float)(pCVar3->base).base.position.x;
        local_64.y = (float)(pCVar3->base).base.position.y;
        local_64.z = (float)(pCVar3->base).base.position.z;
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
                  (&g_CDemonCameraInstance,&local_64,0.0);
        iVar7 = 0;
        core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(pCVar3);
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar7,0);
            core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(pCVar3);
            iVar7 = iVar7 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
          } while (iVar7 < this_ptr->mirror_glass_actor_count);
        }
      }
      local_34 = local_34 + 4;
      local_2c = local_2c + 1;
    } while (local_2c < g_DynamicLightCount);
  }
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(&g_CDemonCameraInstance);
  core_gore_cpp_CGore_renderDecals_FUN_004ed830(g_CGorePtr,0,1);
  core_fire_cpp_CFireEffect_renderDecals_FUN_004c74a0(g_CFireEffectPtr,0,1);
  if (g_CWaterPtr->wave_animation_enabled == 0) {
    core_water_cpp_CWater_render_FUN_005ea320(g_CWaterPtr,0);
  }
  iVar7 = 0;
  pCVar6 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (pCVar6->actors[0],g_CGlassClassInfo.name_hash);
      if (pCVar5 != (CDemonActor *)0x0) {
        (*((pCVar5->vtable)._ub)->renderBackground)(pCVar5,0);
      }
      iVar7 = iVar7 + 1;
      pCVar6 = (CDemonSet *)pCVar6->cameras;
    } while (iVar7 < this_ptr->actor_count);
  }
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(&g_CDemonCameraInstance,0);
  local_30 = 0;
  if (0 < g_DynamicLightCount) {
    local_38 = 0;
    do {
      pCVar3 = *(CDemonLight **)((int)g_DynamicLights + local_38);
      if (pCVar3->light_enabled_flag != 0) {
        local_58.x = (float)(pCVar3->base).base.position.x;
        local_58.y = (float)(pCVar3->base).base.position.y;
        local_58.z = (float)(pCVar3->base).base.position.z;
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
                  (&g_CDemonCameraInstance,&local_58,0.0);
        iVar7 = 0;
        core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(pCVar3);
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar7,0);
            core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(pCVar3);
            iVar7 = iVar7 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
          } while (iVar7 < this_ptr->mirror_glass_actor_count);
        }
      }
      local_38 = local_38 + 4;
      local_30 = local_30 + 1;
    } while (local_30 < g_DynamicLightCount);
  }
  if ((g_HeroActors[g_LocalHeroIndex] != (CHero *)0x0) && (g_CDemonMissionPtr->is_in_editor == 0)) {
    core_inv_cpp_CInventory_renderSelectedItems_FUN_00500370
              (&g_HeroActors[g_LocalHeroIndex]->inventory);
  }
  iVar7 = 0;
  core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
  if (0 < g_SpotLightCount) {
    iVar8 = 0;
    do {
      puVar1 = (uint *)((int)g_SpotLightList + iVar8);
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80((CDemonLight *)*puVar1);
    } while (iVar7 < g_SpotLightCount);
  }
  iVar7 = local_3c;
  if (g_CGamePtr->profile_mode != 0) {
    iVar8 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    local_14 = local_44 - local_40;
    dVar4 = 1.0 / (double)g_CGamePtr->delta_time_float;
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"comp: %3.2f/%3.2f actren : %3.2f\n",
               (double)local_14 * 0.055555555555555601 * 1.52587890625e-05 * 1000 * dVar4,
               (double)(iVar7 - local_40) * 0.055555555555555601 * 1.52587890625e-05 * 1000 *
               dVar4,(double)(iVar8 - iVar7) * 0.055555555555555601 * 1.52587890625e-05 * 1000 *
                     dVar4);
  }
  if (g_CGamePtr->debug_toggle_flag != 0) {
    core_setdir_cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70(this_ptr);
  }
  iVar7 = 0;
  pCVar6 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      pCVar5 = pCVar6->actors[0];
      if (&pCVar5->previous_transform_state != (CDemonActorTransformState *)&pCVar5->location) {
        (pCVar5->previous_transform_state).position.x = (pCVar5->location).position.x;
        (pCVar5->previous_transform_state).position.y = (pCVar5->location).position.y;
        (pCVar5->previous_transform_state).position.z = (pCVar5->location).position.z;
      }
      pUVar2 = &(pCVar5->previous_transform_state).orientation;
      if (pUVar2 != &pCVar5->orient) {
        (pUVar2->vec).x = (pCVar5->orient).vec.x;
        (pCVar5->previous_transform_state).orientation.vec.y = (pCVar5->orient).vec.y;
        (pCVar5->previous_transform_state).orientation.vec.z = (pCVar5->orient).vec.z;
      }
      iVar7 = iVar7 + 1;
      pCVar6 = (CDemonSet *)pCVar6->cameras;
    } while (iVar7 < this_ptr->actor_count);
  }
  return;
}
