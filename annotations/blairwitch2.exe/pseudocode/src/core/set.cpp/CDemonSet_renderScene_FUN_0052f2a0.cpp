// Name: core_set.cpp_CDemonSet_renderScene_FUN_0052f2a0
// Address: 0052f2a0
// Address Range: [[0052f2a0, 0052fac8]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderScene_FUN_0052f2a0(CDemonSet *this_ptr,int skip_prerender)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderScene_FUN_0052f2a0(CDemonSet *this_ptr,int skip_prerender)

{
  UOrientationVector *pUVar1;
  float fVar2;
  CDemonLight *pCVar3;
  CDemonGlobe *globe;
  CDemonActor *pCVar4;
  CDemonSet *pCVar5;
  int iVar6;
  uint *puVar7;
  float *pfVar8;
  int iVar9;
  byte bVar10;
  float afStackY_106c [1010];
  CVector3f *pCVar11;
  SProjectedVertex *pSVar12;
  CVector3f local_78;
  float local_6c;
  float afStack_68 [2];
  CVector3f local_60;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CDemonLight *local_20;
  CDemonLight *local_1c;
  int local_18;
  int local_14;
  
  bVar10 = 0;
  if (g_CGamePtr->profile_mode != 0) {
    local_18 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  if ((skip_prerender != 0) &&
     (iVar6 = core_set_cpp_CDemonSet_isCameraPanning_FUN_00534b80(this_ptr), iVar6 != 0)) {
    return;
  }
  if (skip_prerender == 0) {
    g_INT_01fc9608 = skip_prerender;
    g_INT_01fc961c = skip_prerender;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_00530630(this_ptr,&g_CDemonLightInstance);
    core_set_cpp_CDemonSet_renderStaticLights_FUN_0052ef80(this_ptr);
  }
  core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0043bc30(&g_CDemonCameraInstance);
  if (this_ptr->mirror_camera_dirty != 0) {
    core_set_cpp_CDemonSet_restoreCameraView_FUN_00534490(this_ptr);
    this_ptr->mirror_camera_dirty = 0;
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_0043b7f0(&g_CDemonCameraInstance,1);
  if ((g_INT_0200a3b8 != 0) || (g_CGamePtr->shadow_flag != 0)) {
    iVar6 = 0;
    g_INT_0200a3b8 = 0;
    core_dcamera_cpp_CDemonCamera_processCorona_FUN_004406d0(&g_CDemonCameraInstance);
    if (0 < g_INT_01fc8e84) {
      iVar9 = 0;
      do {
        if ((*(CDemonLight **)((int)g_CDemonLight_PTR_ARRAY_01fc8e88 + iVar9))->light_enabled_flag
            != 0) {
          core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00440370
                    (&g_CDemonCameraInstance,
                     *(CDemonLight **)((int)g_CDemonLight_PTR_ARRAY_01fc8e88 + iVar9));
        }
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar6 < g_INT_01fc8e84);
    }
    local_2c = 0;
    if (0 < g_INT_01fc9608) {
      local_24 = 0;
      do {
        pCVar3 = *(CDemonLight **)((int)g_CDemonLight_PTR_ARRAY_01fc960c + local_24);
        if ((pCVar3->light_enabled_flag != 0) && (pCVar3->antialiasing_enabled != 0)) {
          iVar9 = 0;
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00440000
                    (&g_CDemonCameraInstance,pCVar3);
          iVar6 = local_24;
          if (0 < this_ptr->mirror_glass_actor_count) {
            do {
              core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(this_ptr,iVar9,0);
              core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00440000
                        (&g_CDemonCameraInstance,
                         *(CDemonLight **)((int)g_CDemonLight_PTR_ARRAY_01fc960c + iVar6));
              iVar9 = iVar9 + 1;
              core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
            } while (iVar9 < this_ptr->mirror_glass_actor_count);
          }
        }
        local_24 = local_24 + 4;
        local_2c = local_2c + 1;
      } while (local_2c < g_INT_01fc9608);
    }
    local_3c = 0;
    if (0 < g_INT_01fc961c) {
      local_28 = 0;
      do {
        iVar9 = 0;
        core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90
                  (&g_CDemonCameraInstance,
                   *(CDemonGlobe **)((int)g_CDemonGlobe_PTR_ARRAY_01fc9620 + local_28),0);
        iVar6 = local_28;
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(this_ptr,iVar9,0);
            core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90
                      (&g_CDemonCameraInstance,
                       *(CDemonGlobe **)((int)g_CDemonGlobe_PTR_ARRAY_01fc9620 + iVar6),1);
            iVar9 = iVar9 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
          } while (iVar9 < this_ptr->mirror_glass_actor_count);
        }
        local_28 = local_28 + 4;
        local_3c = local_3c + 1;
      } while (local_3c < g_INT_01fc961c);
    }
    local_30 = 0;
    g_INT_01fc9ad4 = 0;
    if (0 < g_INT_01fc97b0) {
      iVar6 = 0;
      do {
        globe = *(CDemonGlobe **)((int)g_CDemonGlobe_PTR_ARRAY_01fc97b4 + iVar6);
        if (*(int *)((int)g_INT_ARRAY_01fc9944 + iVar6) == 0) {
          core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90
                    (&g_CDemonCameraInstance,globe,0);
          g_CDemonGlobe_PTR_ARRAY_01fc9ad8[g_INT_01fc9ad4] = globe;
          g_INT_01fc9ad4 = g_INT_01fc9ad4 + 1;
        }
        else {
          core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0
                    (this_ptr,*(int *)((int)g_INT_ARRAY_01fc9944 + iVar6) + -1,0);
          core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90
                    (&g_CDemonCameraInstance,globe,1);
          core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
        }
        local_30 = local_30 + 1;
        iVar6 = iVar6 + 4;
      } while (local_30 < g_INT_01fc97b0);
    }
    g_INT_01fc97b0 = 0;
    if (0.0 < this_ptr->directional_light_intensity) {
      core_dcamera_cpp_CDemonCamera_addDirectionalLightMap_FUN_00440500(&g_CDemonCameraInstance);
    }
  }
  if (g_CGamePtr->profile_mode != 0) {
    local_4c = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00440760(&g_CDemonCameraInstance);
  if (g_CGamePtr->profile_mode != 0) {
    local_48 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  iVar6 = 0;
  if (0 < g_INT_01fc8e84) {
    iVar9 = 0;
    do {
      puVar7 = (uint *)((int)g_CDemonLight_PTR_ARRAY_01fc8e88 + iVar9);
      iVar9 = iVar9 + 4;
      iVar6 = iVar6 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520((CDemonLight *)*puVar7);
    } while (iVar6 < g_INT_01fc8e84);
  }
  core_set_cpp_CDemonSet_buildDisplayList_FUN_005332f0(this_ptr,0xc);
  core_set_cpp_CDemonSet_renderOpaqueActors_FUN_005301d0(this_ptr);
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00442d80
            (&g_CDemonCameraInstance,(CVector3f *)0x0,(SProjectedVertex *)0x0);
  core_gore_cpp_CGore_renderParticles_FUN_004c9440(g_CGorePtr);
  iVar6 = 0;
  if (0 < this_ptr->mirror_glass_actor_count) {
    do {
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(this_ptr,iVar6,0);
      core_gore_cpp_CGore_renderParticles_FUN_004c9440(g_CGorePtr);
      iVar6 = iVar6 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
    } while (iVar6 < this_ptr->mirror_glass_actor_count);
  }
  if (g_CWaterPtr->wave_animation_enabled != 0) {
    core_water_cpp_CWater_render_FUN_005862e0(g_CWaterPtr,0);
  }
  core_set_cpp_CDemonSet_renderTransparentActors_FUN_00530410(this_ptr);
  if (this_ptr->player_on_train != 0) {
    core_terrain_cpp_CTerrain_render_FUN_0057b860(g_CTerrain_PTR_0061e450,0);
  }
  iVar6 = 0;
  core_fire_cpp_CFireEffect_render_FUN_0049c780(g_CFireEffect_PTR_00614d30);
  if (0 < this_ptr->mirror_glass_actor_count) {
    do {
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(this_ptr,iVar6,0);
      core_fire_cpp_CFireEffect_render_FUN_0049c780(g_CFireEffect_PTR_00614d30);
      iVar6 = iVar6 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
    } while (iVar6 < this_ptr->mirror_glass_actor_count);
  }
  core_weather_cpp_CWeather_renderParticles_FUN_0058ad40(g_CWeather_PTR_0061e8f4);
  local_34 = 0;
  if (0 < g_INT_01fc9608) {
    local_44 = 0;
    do {
      local_20 = *(CDemonLight **)((int)g_CDemonLight_PTR_ARRAY_01fc960c + local_44);
      if (local_20->light_enabled_flag != 0) {
        pSVar12 = (SProjectedVertex *)0x0;
        pCVar11 = &local_60;
        puVar7 = (uint *)((int)local_20 + (uint)bVar10 * -8 + 8);
        fVar2 = (local_20->base).base.position.f.x;
        *(uint *)(&stack0xffffff80 + (uint)bVar10 * -8) = *puVar7;
        *(uint *)(&stack0xffffff84 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
             puVar7[(uint)bVar10 * -2 + 1];
        local_60.x = fVar2;
        *(uint *)((int)&local_60 + (uint)bVar10 * -8 + 4) =
             *(uint *)(&stack0xffffff80 + (uint)bVar10 * -8);
        *(uint *)((int)&local_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)(&stack0xffffff84 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00442d80
                  (&g_CDemonCameraInstance,pCVar11,pSVar12);
        core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_0044b020(local_20);
        iVar6 = 0;
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(this_ptr,iVar6,0);
            core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_0044b020(local_20);
            iVar6 = iVar6 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
          } while (iVar6 < this_ptr->mirror_glass_actor_count);
        }
      }
      local_34 = local_34 + 1;
      local_44 = local_44 + 4;
    } while (local_34 < g_INT_01fc9608);
  }
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040(&g_CDemonCameraInstance);
  core_gore_cpp_CGore_renderDecals_FUN_004c94c0(g_CGorePtr,0,1);
  core_fire_cpp_CFireEffect_renderDecals_FUN_0049cb50(g_CFireEffect_PTR_00614d30,0,1);
  if (g_CWaterPtr->wave_animation_enabled == 0) {
    core_water_cpp_CWater_render_FUN_005862e0(g_CWaterPtr,0);
  }
  iVar6 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (pCVar5->actors[0],g_CGlassClassInfo.name_hash);
      if (pCVar4 != (CDemonActor *)0x0) {
        (*((pCVar4->vtable)._ub)->renderBackground)(pCVar4,0);
      }
      iVar6 = iVar6 + 1;
      pCVar5 = (CDemonSet *)pCVar5->cameras;
    } while (iVar6 < this_ptr->actor_count);
  }
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0043c200(&g_CDemonCameraInstance,0);
  local_38 = 0;
  if (0 < g_INT_01fc9608) {
    local_40 = 0;
    do {
      local_1c = *(CDemonLight **)((int)g_CDemonLight_PTR_ARRAY_01fc960c + local_40);
      if (local_1c->light_enabled_flag != 0) {
        pSVar12 = (SProjectedVertex *)0x0;
        pCVar11 = &local_78;
        pfVar8 = (float *)((int)local_1c + (uint)bVar10 * -8 + 8);
        local_6c = (local_1c->base).base.position.f.x;
        afStack_68[(uint)bVar10 * -2] = *pfVar8;
        afStack_68[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] = pfVar8[(uint)bVar10 * -2 + 1];
        local_78.x = local_6c;
        *(float *)((int)&local_78 + (uint)bVar10 * -8 + 4) = afStack_68[(uint)bVar10 * -2];
        *(float *)((int)&local_78 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             afStack_68[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00442d80
                  (&g_CDemonCameraInstance,pCVar11,pSVar12);
        core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_0044b050(local_1c);
        pCVar3 = local_1c;
        iVar6 = 0;
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(this_ptr,iVar6,0);
            core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_0044b050(pCVar3);
            iVar6 = iVar6 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
          } while (iVar6 < this_ptr->mirror_glass_actor_count);
        }
      }
      local_38 = local_38 + 1;
      local_40 = local_40 + 4;
    } while (local_38 < g_INT_01fc9608);
  }
  core_game_cpp_CGame_renderAlphaFade_FUN_004bb620(g_CGamePtr);
  if ((g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4] != (CHero *)0x0) &&
     (g_CDemonMission_PTR_00618170->is_in_editor == 0)) {
    core_inv_cpp_CInventory_renderSelectedItems_FUN_004dd670
              (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories);
  }
  core_dcamera_cpp_CDemonCamera_endScene_FUN_0043bf50(&g_CDemonCameraInstance,0);
  if (g_CGamePtr->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_0058e9e0();
    local_14 = local_4c - local_18;
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"comp: %3.2f/%3.2f actren : %3.2f\n");
  }
  if (g_CGamePtr->debug_toggle_flag != 0) {
    core_setdir_cpp_CDemonSet_renderVirtualDirectors_FUN_00539d60(this_ptr);
  }
  iVar6 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      pCVar4 = pCVar5->actors[0];
      if (&pCVar4->previous_transform_state != (CDemonActorTransformState *)&pCVar4->location) {
        (pCVar4->previous_transform_state).position.x = (pCVar4->location).position.x;
        (pCVar4->previous_transform_state).position.y = (pCVar4->location).position.y;
        (pCVar4->previous_transform_state).position.z = (pCVar4->location).position.z;
      }
      pUVar1 = &(pCVar4->previous_transform_state).orientation;
      if (pUVar1 != &pCVar4->orient) {
        (pUVar1->vec).x = (pCVar4->orient).vec.x;
        (pCVar4->previous_transform_state).orientation.vec.y = (pCVar4->orient).vec.y;
        (pCVar4->previous_transform_state).orientation.vec.z = (pCVar4->orient).vec.z;
      }
      iVar6 = iVar6 + 1;
      pCVar5 = (CDemonSet *)pCVar5->cameras;
    } while (iVar6 < this_ptr->actor_count);
  }
  if (g_INT_0200a394 != 0) {
    engine_special_cpp_clearScreen_FUN_0055b1f0();
    g_INT_0200a394 = 0;
    return;
  }
  return;
}
