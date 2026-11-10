// Name: core_set.cpp_FUN_0052f2a0
// Address: 0052f2a0
// Address Range: [[0052f2a0, 0052fac8]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_0052f2a0(CDemonSet *this_ptr,int skip_prerender)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_0052f2a0(CDemonSet *this_ptr,int skip_prerender)

{
  CDemonLight *light_source;
  CDemonGlobe *globe;
  CDemonActor *pCVar1;
  double dVar2;
  CDemonSet *pCVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  int iVar7;
  byte bVar8;
  float afStackY_106c [1010];
  CDemonCamera *pCVar9;
  CVector3f *pCVar10;
  SProjectedVertex *pSVar11;
  float local_84;
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
  int local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  if (g_CGamePtr->profile_mode != 0) {
    local_18 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  if ((skip_prerender != 0) &&
     (iVar4 = core_set_cpp_CDemonSet_isCameraPanning_FUN_00534b80(this_ptr), iVar4 != 0)) {
    return;
  }
  if (skip_prerender == 0) {
    _DAT_01fc9608 = skip_prerender;
    _DAT_01fc961c = skip_prerender;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_00530630(this_ptr,&g_CDemonLightInstance);
    core_set_cpp_CDemonSet_renderStaticLights_FUN_0052ef80(this_ptr);
  }
  core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0043bc30(&g_CDemonCameraInstance);
  if (this_ptr->mirror_camera_dirty != 0) {
    core_set_cpp_CDemonSet_restoreCameraView_FUN_00534490(this_ptr);
    this_ptr->mirror_camera_dirty = 0;
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_0043b7f0(&g_CDemonCameraInstance,1);
  if ((_DAT_0200a3b8 != 0) || (g_CGamePtr->quimby_flag != 0)) {
    iVar4 = 0;
    _DAT_0200a3b8 = 0;
    core_dcamera_cpp_CDemonCamera_processCorona_FUN_004406d0(&g_CDemonCameraInstance);
    if (0 < _DAT_01fc8e84) {
      iVar7 = 0;
      do {
        if ((*(CDemonLight **)(&DAT_01fc8e88 + iVar7))->light_enabled_flag != 0) {
          core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00440370
                    (&g_CDemonCameraInstance,*(CDemonLight **)(&DAT_01fc8e88 + iVar7));
        }
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar4 < _DAT_01fc8e84);
    }
    local_2c = 0;
    if (0 < _DAT_01fc9608) {
      local_24 = 0;
      do {
        light_source = *(CDemonLight **)(local_24 + 0x1fc960c);
        if ((light_source->light_enabled_flag != 0) && (light_source->antialiasing_enabled != 0)) {
          iVar7 = 0;
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00440000
                    (&g_CDemonCameraInstance,light_source);
          iVar4 = local_24;
          if (0 < this_ptr->mirror_glass_actor_count) {
            do {
              core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(this_ptr,iVar7,0);
              core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00440000
                        (&g_CDemonCameraInstance,*(CDemonLight **)(iVar4 + 0x1fc960c));
              iVar7 = iVar7 + 1;
              core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
            } while (iVar7 < this_ptr->mirror_glass_actor_count);
          }
        }
        local_24 = local_24 + 4;
        local_2c = local_2c + 1;
      } while (local_2c < _DAT_01fc9608);
    }
    local_3c = 0;
    if (0 < _DAT_01fc961c) {
      local_28 = 0;
      do {
        iVar7 = 0;
        core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90
                  (&g_CDemonCameraInstance,*(CDemonGlobe **)(local_28 + 0x1fc9620),0);
        iVar4 = local_28;
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(this_ptr,iVar7,0);
            core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90
                      (&g_CDemonCameraInstance,*(CDemonGlobe **)(iVar4 + 0x1fc9620),1);
            iVar7 = iVar7 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
          } while (iVar7 < this_ptr->mirror_glass_actor_count);
        }
        local_28 = local_28 + 4;
        local_3c = local_3c + 1;
      } while (local_3c < _DAT_01fc961c);
    }
    local_30 = 0;
    _DAT_01fc9ad4 = 0;
    if (0 < _DAT_01fc97b0) {
      iVar4 = 0;
      do {
        globe = *(CDemonGlobe **)(iVar4 + 0x1fc97b4);
        if (*(int *)(iVar4 + 0x1fc9944) == 0) {
          core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90
                    (&g_CDemonCameraInstance,globe,0);
          *(CDemonGlobe **)(&DAT_01fc9ad8 + _DAT_01fc9ad4 * 4) = globe;
          _DAT_01fc9ad4 = _DAT_01fc9ad4 + 1;
        }
        else {
          core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0
                    (this_ptr,*(int *)(iVar4 + 0x1fc9944) + -1,0);
          core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90
                    (&g_CDemonCameraInstance,globe,1);
          core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
        }
        local_30 = local_30 + 1;
        iVar4 = iVar4 + 4;
      } while (local_30 < _DAT_01fc97b0);
    }
    _DAT_01fc97b0 = 0;
    if (0.0 < *(float *)&this_ptr->field_0x14d160) {
      core_dcamera_cpp_FUN_00440500();
    }
  }
  if (g_CGamePtr->profile_mode != 0) {
    local_4c = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00440760(&g_CDemonCameraInstance);
  if (g_CGamePtr->profile_mode != 0) {
    local_48 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  }
  iVar4 = 0;
  if (0 < _DAT_01fc8e84) {
    iVar7 = 0;
    do {
      puVar5 = (uint *)(&DAT_01fc8e88 + iVar7);
      iVar7 = iVar7 + 4;
      iVar4 = iVar4 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520((CDemonLight *)*puVar5);
    } while (iVar4 < _DAT_01fc8e84);
  }
  core_set_cpp_CDemonSet_buildDisplayList_FUN_005332f0(this_ptr,0xc);
  core_set_cpp_FUN_005301d0();
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00442d80
            (&g_CDemonCameraInstance,(CVector3f *)0x0,(SProjectedVertex *)0x0);
  core_gore_cpp_CGore_renderParticles_FUN_004c9440(g_CGorePtr);
  iVar4 = 0;
  if (0 < this_ptr->mirror_glass_actor_count) {
    do {
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(this_ptr,iVar4,0);
      core_gore_cpp_CGore_renderParticles_FUN_004c9440(g_CGorePtr);
      iVar4 = iVar4 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
    } while (iVar4 < this_ptr->mirror_glass_actor_count);
  }
  if (g_CWaterPtr->wave_animation_enabled != 0) {
    core_water_cpp_CWater_render_FUN_005862e0(g_CWaterPtr,0);
  }
  core_set_cpp_FUN_00530410();
  if (this_ptr->player_on_train != 0) {
    core_terrain_cpp_CTerrain_render_FUN_0057b860(0x0265364C,0);
  }
  iVar4 = 0;
  core_fire_cpp_CFireEffect_render_FUN_0049c780(0x01C3DEB4);
  if (0 < this_ptr->mirror_glass_actor_count) {
    do {
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(this_ptr,iVar4,0);
      core_fire_cpp_CFireEffect_render_FUN_0049c780(0x01C3DEB4);
      iVar4 = iVar4 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
    } while (iVar4 < this_ptr->mirror_glass_actor_count);
  }
  core_weather_cpp_CWeather_renderParticles_FUN_0058ad40(0x02661F80);
  local_34 = 0;
  if (0 < _DAT_01fc9608) {
    local_44 = 0;
    do {
      local_20 = *(CDemonLight **)(local_44 + 0x1fc960c);
      if (local_20->light_enabled_flag != 0) {
        pSVar11 = (SProjectedVertex *)0x0;
        pCVar10 = &local_60;
        puVar5 = (uint *)((int)local_20 + (uint)bVar8 * -8 + 8);
        local_84 = (local_20->base).base.position.f.x;
        *(uint *)(&stack0xffffff80 + (uint)bVar8 * -8) = *puVar5;
        *(uint *)(&stack0xffffff84 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             puVar5[(uint)bVar8 * -2 + 1];
        pCVar9 = &g_CDemonCameraInstance;
        local_60.x = local_84;
        *(uint *)((int)&local_60 + (uint)bVar8 * -8 + 4) =
             *(uint *)(&stack0xffffff80 + (uint)bVar8 * -8);
        *(uint *)((int)&local_60 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)(&stack0xffffff84 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00442d80(pCVar9,pCVar10,pSVar11);
        core_dlight_cpp_FUN_0044b020(local_20);
        iVar4 = 0;
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(this_ptr,iVar4,0);
            core_dlight_cpp_FUN_0044b020(local_20);
            iVar4 = iVar4 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
          } while (iVar4 < this_ptr->mirror_glass_actor_count);
        }
      }
      local_34 = local_34 + 1;
      local_44 = local_44 + 4;
    } while (local_34 < _DAT_01fc9608);
  }
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040(&g_CDemonCameraInstance);
  core_gore_cpp_CGore_renderDecals_FUN_004c94c0(g_CGorePtr,0,1);
  core_fire_cpp_CFireEffect_renderDecals_FUN_0049cb50(0x01C3DEB4,0,1);
  if (g_CWaterPtr->wave_animation_enabled == 0) {
    core_water_cpp_CWater_render_FUN_005862e0(g_CWaterPtr,0);
  }
  iVar4 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar3->actors[0]);
      if (iVar7 != 0) {
        (**(code **)(*(int *)(iVar7 + 0x2b0) + 0x20))(iVar7);
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
    } while (iVar4 < this_ptr->actor_count);
  }
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0043c200(&g_CDemonCameraInstance,0);
  local_38 = 0;
  if (0 < _DAT_01fc9608) {
    local_40 = 0;
    do {
      local_1c = *(int *)(local_40 + 0x1fc960c);
      if (*(int *)(local_1c + 0x1cb4) != 0) {
        pSVar11 = (SProjectedVertex *)0x0;
        pCVar10 = &local_78;
        pfVar6 = (float *)(local_1c + 8 + (uint)bVar8 * -8);
        local_6c = *(float *)(local_1c + 4);
        afStack_68[(uint)bVar8 * -2] = *pfVar6;
        afStack_68[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] = pfVar6[(uint)bVar8 * -2 + 1];
        pCVar9 = &g_CDemonCameraInstance;
        local_78.x = local_6c;
        *(float *)((int)&local_78 + (uint)bVar8 * -8 + 4) = afStack_68[(uint)bVar8 * -2];
        *(float *)((int)&local_78 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_68[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00442d80(pCVar9,pCVar10,pSVar11);
        core_dlight_cpp_FUN_0044b050();
        iVar4 = 0;
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(this_ptr,iVar4,0);
            core_dlight_cpp_FUN_0044b050();
            iVar4 = iVar4 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
          } while (iVar4 < this_ptr->mirror_glass_actor_count);
        }
      }
      local_38 = local_38 + 1;
      local_40 = local_40 + 4;
    } while (local_38 < _DAT_01fc9608);
  }
  core_game_cpp_FUN_004bb620();
  iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  if ((iVar4 != 0) && (*(int *)(0x01D182F0 + 0x1008) == 0)) {
    core_inv_cpp_CInventory_renderSelectedItems_FUN_004dd670((CInventory *)(iVar4 + 0x2437c));
  }
  core_dcamera_cpp_CDemonCamera_endScene_FUN_0043bf50(&g_CDemonCameraInstance,0);
  iVar4 = local_48;
  if (g_CGamePtr->profile_mode != 0) {
    iVar7 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
    local_14 = local_4c - local_18;
    dVar2 = 1.0 / (double)g_CGamePtr->delta_time_float;
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"@comp: %3.2f/%3.2f actren : %3.2f\n" + 1,
               (double)local_14 * _DAT_005e58e2 * _DAT_005e58ea * _DAT_005e58f2 * dVar2,
               (double)(iVar4 - local_18) * _DAT_005e58e2 * _DAT_005e58ea * _DAT_005e58f2 * dVar2,
               (double)(iVar7 - iVar4) * _DAT_005e58e2 * _DAT_005e58ea * _DAT_005e58f2 * dVar2);
  }
  if (*(int *)&g_CGamePtr->field_0x204 != 0) {
    core_setdir_cpp_CDemonSet_renderVirtualDirectors_FUN_00539d60(this_ptr);
  }
  iVar4 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      pCVar1 = pCVar3->actors[0];
      if (&pCVar1->field_0x12c != &pCVar1->field_0x20) {
        *(uint *)&pCVar1->field_0x12c = *(uint *)&pCVar1->field_0x20;
        *(uint *)&pCVar1->field_0x130 = *(uint *)&pCVar1->field_0x24;
        *(uint *)&pCVar1->field_0x134 = *(uint *)&pCVar1->field_0x28;
      }
      if ((UOrientationVector *)&pCVar1->field_0x138 != &pCVar1->orient) {
        *(float *)&pCVar1->field_0x138 = (pCVar1->orient).vec.x;
        *(float *)&pCVar1->field_0x13c = (pCVar1->orient).vec.y;
        *(float *)&pCVar1->field_0x140 = (pCVar1->orient).vec.z;
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
    } while (iVar4 < this_ptr->actor_count);
  }
  if (_DAT_0200a394 != 0) {
    engine_special_cpp_clearScreen_FUN_0055b1f0();
    _DAT_0200a394 = 0;
    return;
  }
  return;
}
