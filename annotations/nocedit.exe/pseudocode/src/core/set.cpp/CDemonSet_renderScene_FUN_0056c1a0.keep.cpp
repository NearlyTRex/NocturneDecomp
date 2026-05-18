// Name: core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0
// Address: 0056c1a0
// MANUAL RECONSTRUCTION
// Address Range: [[0056c1a0, 0056c983]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(CDemonSet *this_ptr,int skip_prerender)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(CDemonSet *this_ptr,int skip_prerender)

{
  CDemonLight *pCVar1;
  CDemonActor *pCVar2;
  CGlass *pCVar5;
  int iVar7;
  int iVar3;
  CVector3f local_64;
  CVector3f local_58;
  int local_44;
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CDemonLight *pCVar3;
  UOrientationVector *pUVar2;
  double dVar4;
  CDemonGlobe *p1;
  
  if (g_CGamePtr->profile_mode != 0) {
    local_40 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  if ((skip_prerender != 0) &&
     (iVar3 = core_set_cpp_CDemonSet_isCameraPanning_FUN_00571320(this_ptr), iVar3 != 0)) {
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
    core_set_cpp_CDemonSet_restoreCameraView_FUN_00570c70(this_ptr);
    this_ptr->mirror_camera_dirty = 0;
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
  if ((g_RenderingShadows != 0) || (g_CGamePtr->shadow_flag != 0)) {
    iVar7 = 0;
    g_RenderingShadows = 0;
    core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451130(&g_CDemonCameraInstance);
    for (iVar7 = 0; iVar7 < g_SpotLightCount; iVar7 = iVar7 + 1) {
      if (g_SpotLightList[iVar7]->light_enabled_flag != 0) {
        core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
                  (&g_CDemonCameraInstance,g_SpotLightList[iVar7]);
      }
    }
    for (local_28 = 0; local_28 < g_DynamicLightCount; local_28 = local_28 + 1) {
      pCVar3 = g_DynamicLights[local_28];
      if ((pCVar3->light_enabled_flag != 0) && (pCVar3->antialiasing_enabled != 0)) {
        core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
                  (&g_CDemonCameraInstance,pCVar3);
        for (iVar3 = 0; iVar3 < this_ptr->mirror_glass_actor_count; iVar3 = iVar3 + 1) {
          core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar3,0);
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
                    (&g_CDemonCameraInstance,g_DynamicLights[local_28]);
          core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
        }
      }
    }
    for (local_20 = 0; local_20 < g_CoronaGlobeCount; local_20 = local_20 + 1) {
      core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_004518f0
                (&g_CDemonCameraInstance,g_CoronaGlobes[local_20],0);
      for (iVar3 = 0; iVar3 < this_ptr->mirror_glass_actor_count; iVar3 = iVar3 + 1) {
        core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar3,0);
        core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_004518f0
                  (&g_CDemonCameraInstance,g_CoronaGlobes[local_20],1);
        core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
      }
    }
    g_VisibleCoronaGlobeCount = 0;
    for (local_24 = 0; local_24 < g_QueuedCoronaGlobeCount; local_24 = local_24 + 1) {
      p1 = g_QueuedCoronaGlobes[local_24];
      if (g_QueuedCoronaGlobeAlphaMasks[local_24] == 0) {
        core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_004518f0
                  (&g_CDemonCameraInstance,p1,0);
        g_VisibleCoronaGlobes[g_VisibleCoronaGlobeCount] = p1;
        g_VisibleCoronaGlobeCount = g_VisibleCoronaGlobeCount + 1;
      }
      else {
        core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
                  (this_ptr,g_QueuedCoronaGlobeAlphaMasks[local_24] + -1,0);
        core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_004518f0
                  (&g_CDemonCameraInstance,p1,1);
        core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
      }
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
            (&g_CDemonCameraInstance,(CVector3f *)0x0,(SProjectedVertex *)0x0);
  iVar3 = 0;
  core_gore_cpp_CGore_renderParticles_FUN_004ed7b0(g_CGorePtr);
  if (0 < this_ptr->mirror_glass_actor_count) {
    do {
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar3,0);
      core_gore_cpp_CGore_renderParticles_FUN_004ed7b0(g_CGorePtr);
      iVar3 = iVar3 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
    } while (iVar3 < this_ptr->mirror_glass_actor_count);
  }
  if (g_CWaterPtr->wave_animation_enabled != 0) {
    core_water_cpp_CWater_render_FUN_005ea320(g_CWaterPtr,0);
  }
  core_set_cpp_CDemonSet_renderTransparentActors_FUN_0056cf00(this_ptr);
  if (this_ptr->player_on_train != 0) {
    core_terrain_cpp_CTerrain_render_FUN_005e1f50(g_CTerrainPtr,0);
  }
  iVar3 = 0;
  core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
  if (0 < this_ptr->mirror_glass_actor_count) {
    do {
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar3,0);
      core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
      iVar3 = iVar3 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
    } while (iVar3 < this_ptr->mirror_glass_actor_count);
  }
  core_weather_cpp_CWeather_renderParticles_FUN_005ef190(g_CWeatherPtr);
  for (local_2c = 0; local_2c < g_DynamicLightCount; local_2c = local_2c + 1) {
    pCVar1 = g_DynamicLights[local_2c];
    if (pCVar1->light_enabled_flag != 0) {
      local_64 = (pCVar1->base).base.position.f;
      core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
                (&g_CDemonCameraInstance,&local_64,(SProjectedVertex *)0x0);
      core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(pCVar1);
      for (iVar3 = 0; iVar3 < this_ptr->mirror_glass_actor_count; iVar3 = iVar3 + 1) {
        core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar3,0);
        core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(pCVar1);
        core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
      }
    }
  }
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(&g_CDemonCameraInstance);
  core_gore_cpp_CGore_renderDecals_FUN_004ed830(g_CGorePtr,0,1);
  core_fire_cpp_CFireEffect_renderDecals_FUN_004c74a0(g_CFireEffectPtr,0,1);
  if (g_CWaterPtr->wave_animation_enabled == 0) {
    core_water_cpp_CWater_render_FUN_005ea320(g_CWaterPtr,0);
  }
  for (iVar3 = 0; iVar3 < this_ptr->actor_count; iVar3 = iVar3 + 1) {
    pCVar5 = (CGlass *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (this_ptr->actors[iVar3],g_CGlassClassInfo.name_hash);
    if (pCVar5 != (CGlass *)0x0) {
      (*((pCVar5->base).vtable._ub)->renderBackground)((CDemonActor *)pCVar5,0);
    }
  }
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(&g_CDemonCameraInstance,0);
  for (local_30 = 0; local_30 < g_DynamicLightCount; local_30 = local_30 + 1) {
    pCVar1 = g_DynamicLights[local_30];
    if (pCVar1->light_enabled_flag != 0) {
      local_58 = (pCVar1->base).base.position.f;
      core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
                (&g_CDemonCameraInstance,&local_58,(SProjectedVertex *)0x0);
      core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(pCVar1);
      for (iVar3 = 0; iVar3 < this_ptr->mirror_glass_actor_count; iVar3 = iVar3 + 1) {
        core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar3,0);
        core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(pCVar1);
        core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
      }
    }
  }
  if ((g_HeroActors[g_LocalHeroIndex] != (CHero *)0x0) && (g_CDemonMissionPtr->is_in_editor == 0)) {
    core_inv_cpp_CInventory_renderSelectedItems_FUN_00500370
              (&g_HeroActors[g_LocalHeroIndex]->inventory);
  }
  core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
  for (iVar3 = 0; iVar3 < g_SpotLightCount; iVar3 = iVar3 + 1) {
    core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(g_SpotLightList[iVar3]);
  }
  if (g_CGamePtr->profile_mode != 0) {
    iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    dVar4 = 1.0 / (double)g_CGamePtr->delta_time_float;
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"comp: %3.2f/%3.2f actren : %3.2f\n",
               (double)(local_44 - local_40) * 0.055555555555555601 * 1.52587890625e-05 * 1000 *
               dVar4,(double)(local_3c - local_40) * 0.055555555555555601 * 1.52587890625e-05 *
                     1000 * dVar4,
               (double)(iVar3 - local_3c) * 0.055555555555555601 * 1.52587890625e-05 * 1000 *
               dVar4);
  }
  if (g_CGamePtr->debug_toggle_flag != 0) {
    core_setdir_cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70(this_ptr);
  }
  for (iVar3 = 0; iVar3 < this_ptr->actor_count; iVar3 = iVar3 + 1) {
    pCVar2 = this_ptr->actors[iVar3];
    if (&pCVar2->previous_transform_state != (CDemonActorTransformState *)&pCVar2->location) {
      (pCVar2->previous_transform_state).position = (pCVar2->location).position;
    }
    pUVar2 = &(pCVar2->previous_transform_state).orientation;
    if (pUVar2 != &pCVar2->orient) {
      pUVar2->vec = (pCVar2->orient).vec;
    }
  }
  return;
}
