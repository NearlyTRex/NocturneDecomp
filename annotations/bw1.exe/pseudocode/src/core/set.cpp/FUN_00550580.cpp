// Name: core_set.cpp_FUN_00550580
// Address: 00550580
// Address Range: [[00550580, 00550d97]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_00550580(CDemonSet *this_ptr,int skip_prerender)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_00550580(CDemonSet *this_ptr,int skip_prerender)

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
  if (*(int *)&g_CGamePtr->field_0x228 != 0) {
    local_18 = wincore_winrun_cpp_getTime_FUN_005b2420();
  }
  if ((skip_prerender != 0) &&
     (iVar4 = core_set_cpp_CDemonSet_isCameraPanning_FUN_00555fe0(this_ptr), iVar4 != 0)) {
    return;
  }
  if (skip_prerender == 0) {
    _DAT_01fe55bc = skip_prerender;
    _DAT_01fe55d0 = skip_prerender;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_005518e0(this_ptr,&g_CDemonLightInstance);
    core_set_cpp_CDemonSet_renderStaticLights_FUN_00550260(this_ptr);
  }
  core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044d2f0(&g_CDemonCameraInstance);
  if (this_ptr->mirror_camera_dirty != 0) {
    core_set_cpp_CDemonSet_restoreCameraView_FUN_00555740(this_ptr);
    this_ptr->mirror_camera_dirty = 0;
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044ceb0(&g_CDemonCameraInstance,1);
  if ((_DAT_0202636c != 0) || (g_CGamePtr->quimby_flag != 0)) {
    iVar4 = 0;
    _DAT_0202636c = 0;
    core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451d90(&g_CDemonCameraInstance);
    if (0 < _DAT_01fe4e38) {
      iVar7 = 0;
      do {
        if ((*(CDemonLight **)(&DAT_01fe4e3c + iVar7))->light_enabled_flag != 0) {
          core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00451a30
                    (&g_CDemonCameraInstance,*(CDemonLight **)(&DAT_01fe4e3c + iVar7));
        }
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar4 < _DAT_01fe4e38);
    }
    local_2c = 0;
    if (0 < _DAT_01fe55bc) {
      local_24 = 0;
      do {
        light_source = *(CDemonLight **)(local_24 + 0x1fe55c0);
        if ((light_source->light_enabled_flag != 0) && (light_source->antialiasing_enabled != 0)) {
          iVar7 = 0;
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004516c0
                    (&g_CDemonCameraInstance,light_source);
          iVar4 = local_24;
          if (0 < this_ptr->mirror_glass_actor_count) {
            do {
              core_set_cpp_CDemonSet_setupMirrorRendering_FUN_00555460(this_ptr,iVar7,0);
              core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004516c0
                        (&g_CDemonCameraInstance,*(CDemonLight **)(iVar4 + 0x1fe55c0));
              iVar7 = iVar7 + 1;
              core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(this_ptr);
            } while (iVar7 < this_ptr->mirror_glass_actor_count);
          }
        }
        local_24 = local_24 + 4;
        local_2c = local_2c + 1;
      } while (local_2c < _DAT_01fe55bc);
    }
    local_3c = 0;
    if (0 < _DAT_01fe55d0) {
      local_28 = 0;
      do {
        iVar7 = 0;
        core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550
                  (&g_CDemonCameraInstance,*(CDemonGlobe **)(local_28 + 0x1fe55d4),0);
        iVar4 = local_28;
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_00555460(this_ptr,iVar7,0);
            core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550
                      (&g_CDemonCameraInstance,*(CDemonGlobe **)(iVar4 + 0x1fe55d4),1);
            iVar7 = iVar7 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(this_ptr);
          } while (iVar7 < this_ptr->mirror_glass_actor_count);
        }
        local_28 = local_28 + 4;
        local_3c = local_3c + 1;
      } while (local_3c < _DAT_01fe55d0);
    }
    local_30 = 0;
    _DAT_01fe5a88 = 0;
    if (0 < _DAT_01fe5764) {
      iVar4 = 0;
      do {
        globe = *(CDemonGlobe **)(iVar4 + 0x1fe5768);
        if (*(int *)(iVar4 + 0x1fe58f8) == 0) {
          core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550
                    (&g_CDemonCameraInstance,globe,0);
          *(CDemonGlobe **)(&DAT_01fe5a8c + _DAT_01fe5a88 * 4) = globe;
          _DAT_01fe5a88 = _DAT_01fe5a88 + 1;
        }
        else {
          core_set_cpp_CDemonSet_setupMirrorRendering_FUN_00555460
                    (this_ptr,*(int *)(iVar4 + 0x1fe58f8) + -1,0);
          core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550
                    (&g_CDemonCameraInstance,globe,1);
          core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(this_ptr);
        }
        local_30 = local_30 + 1;
        iVar4 = iVar4 + 4;
      } while (local_30 < _DAT_01fe5764);
    }
    _DAT_01fe5764 = 0;
    if (0.0 < *(float *)&this_ptr->field_0x14d160) {
      core_dcamera_cpp_FUN_00451bc0();
    }
  }
  if (*(int *)&g_CGamePtr->field_0x228 != 0) {
    local_4c = wincore_winrun_cpp_getTime_FUN_005b2420();
  }
  core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00451e20(&g_CDemonCameraInstance);
  if (*(int *)&g_CGamePtr->field_0x228 != 0) {
    local_48 = wincore_winrun_cpp_getTime_FUN_005b2420();
  }
  iVar4 = 0;
  if (0 < _DAT_01fe4e38) {
    iVar7 = 0;
    do {
      puVar5 = (uint *)(&DAT_01fe4e3c + iVar7);
      iVar7 = iVar7 + 4;
      iVar4 = iVar4 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20((CDemonLight *)*puVar5);
    } while (iVar4 < _DAT_01fe4e38);
  }
  core_set_cpp_CDemonSet_buildDisplayList_FUN_005545a0(this_ptr,0xc);
  core_set_cpp_FUN_00551480();
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430
            (&g_CDemonCameraInstance,(CVector3f *)0x0,(SProjectedVertex *)0x0);
  core_gore_cpp_CGore_renderParticles_FUN_004e5c50(g_CGorePtr);
  iVar4 = 0;
  if (0 < this_ptr->mirror_glass_actor_count) {
    do {
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_00555460(this_ptr,iVar4,0);
      core_gore_cpp_CGore_renderParticles_FUN_004e5c50(g_CGorePtr);
      iVar4 = iVar4 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(this_ptr);
    } while (iVar4 < this_ptr->mirror_glass_actor_count);
  }
  if (g_CWaterPtr->wave_animation_enabled != 0) {
    core_water_cpp_CWater_render_FUN_005a9f10(g_CWaterPtr,0);
  }
  core_set_cpp_FUN_005516c0();
  if (this_ptr->player_on_train != 0) {
    core_terrain_cpp_CTerrain_render_FUN_0059f3e0(0x02C8AE68,0);
  }
  iVar4 = 0;
  core_fire_cpp_CFireEffect_render_FUN_004b5100(0x01C57074);
  if (0 < this_ptr->mirror_glass_actor_count) {
    do {
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_00555460(this_ptr,iVar4,0);
      core_fire_cpp_CFireEffect_render_FUN_004b5100(0x01C57074);
      iVar4 = iVar4 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(this_ptr);
    } while (iVar4 < this_ptr->mirror_glass_actor_count);
  }
  core_weather_cpp_CWeather_renderParticles_FUN_005ae890(0x02C997C0);
  local_34 = 0;
  if (0 < _DAT_01fe55bc) {
    local_44 = 0;
    do {
      local_20 = *(CDemonLight **)(local_44 + 0x1fe55c0);
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
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430(pCVar9,pCVar10,pSVar11);
        core_dlight_cpp_FUN_00463820(local_20);
        iVar4 = 0;
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_00555460(this_ptr,iVar4,0);
            core_dlight_cpp_FUN_00463820(local_20);
            iVar4 = iVar4 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(this_ptr);
          } while (iVar4 < this_ptr->mirror_glass_actor_count);
        }
      }
      local_34 = local_34 + 1;
      local_44 = local_44 + 4;
    } while (local_34 < _DAT_01fe55bc);
  }
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700(&g_CDemonCameraInstance);
  core_gore_cpp_CGore_renderDecals_FUN_004e5cd0(g_CGorePtr,0,1);
  core_fire_cpp_CFireEffect_renderDecals_FUN_004b54a0(0x01C57074,0,1);
  if (g_CWaterPtr->wave_animation_enabled == 0) {
    core_water_cpp_CWater_render_FUN_005a9f10(g_CWaterPtr,0);
  }
  iVar4 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar3->actors[0]);
      if (iVar7 != 0) {
        (**(code **)(*(int *)(iVar7 + 0x154) + 0x18))(iVar7);
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
    } while (iVar4 < this_ptr->actor_count);
  }
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0(&g_CDemonCameraInstance,0);
  local_38 = 0;
  if (0 < _DAT_01fe55bc) {
    local_40 = 0;
    do {
      local_1c = *(int *)(local_40 + 0x1fe55c0);
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
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430(pCVar9,pCVar10,pSVar11);
        iVar4 = 0;
        core_dlight_cpp_FUN_00463850();
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_00555460(this_ptr,iVar4,0);
            core_dlight_cpp_FUN_00463850();
            iVar4 = iVar4 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(this_ptr);
          } while (iVar4 < this_ptr->mirror_glass_actor_count);
        }
      }
      local_38 = local_38 + 1;
      local_40 = local_40 + 4;
    } while (local_38 < _DAT_01fe55bc);
  }
  iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  if ((iVar4 != 0) && (*(int *)(0x01D2C900 + 0x1008) == 0)) {
    core_inv_cpp_CInventory_renderSelectedItems_FUN_004faaf0((CInventory *)(iVar4 + 0x1fae8));
  }
  core_dcamera_cpp_CDemonCamera_endScene_FUN_0044d610(&g_CDemonCameraInstance,0);
  if (*(int *)&g_CGamePtr->field_0x228 != 0) {
    iVar4 = wincore_winrun_cpp_getTime_FUN_005b2420();
    local_14 = local_4c - local_18;
    dVar2 = 1.0 / (double)g_CGamePtr->delta_time_float;
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"@comp: %3.2f/%3.2f actren : %3.2f\n" + 1,
               (double)local_14 * _DAT_005f0906 * _DAT_005f090e * _DAT_005f0916 * dVar2,
               (double)(local_48 - local_18) * _DAT_005f0906 * _DAT_005f090e * _DAT_005f0916 * dVar2
               ,(double)(iVar4 - local_48) * _DAT_005f0906 * _DAT_005f090e * _DAT_005f0916 * dVar2);
  }
  if (*(int *)&g_CGamePtr->field_0x204 != 0) {
    core_setdir_cpp_FUN_0055b4f0();
  }
  iVar4 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      pCVar1 = pCVar3->actors[0];
      pfVar6 = &(pCVar1->previous_transform_state).position.y;
      if ((CLocation *)pfVar6 != &pCVar1->location) {
        *pfVar6 = (pCVar1->location).position.x;
        (pCVar1->previous_transform_state).position.z = (pCVar1->location).position.y;
        (pCVar1->previous_transform_state).orientation.vec.x = (pCVar1->location).position.z;
      }
      pfVar6 = &(pCVar1->previous_transform_state).orientation.vec.y;
      if ((UOrientationVector *)pfVar6 != &pCVar1->orient) {
        *pfVar6 = (pCVar1->orient).vec.x;
        (pCVar1->previous_transform_state).orientation.vec.z = (pCVar1->orient).vec.y;
        (pCVar1->previous_transform_state).dirty_flags = (int)(pCVar1->orient).vec.z;
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
    } while (iVar4 < this_ptr->actor_count);
  }
  if (_DAT_02026348 != 0) {
    engine_special_cpp_clearScreen_FUN_0057dc40();
    _DAT_02026348 = 0;
    return;
  }
  return;
}
