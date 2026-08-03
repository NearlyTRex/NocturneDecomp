// Name: core_set.cpp_FUN_00509a80
// Address: 00509a80
// Address Range: [[00509a80, 0050a25d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_00509a80(CDemonSet *this_ptr,int skip_prerender)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_00509a80(CDemonSet *this_ptr,int skip_prerender)

{
  uint *puVar1;
  UOrientationVector *pUVar2;
  CDemonLight *pCVar3;
  CDemonGlobe *globe;
  CDemonActor *pCVar4;
  CDemonSet *pCVar5;
  int iVar6;
  int iVar7;
  float in_stack_ffffff9c;
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
  
  if (g_CGame_PTR_005b9354->profile_mode != 0) {
    local_40 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  if ((skip_prerender != 0) && (this_ptr->use_world_geometry_flag != 0)) {
    core_set_cpp_FUN_0050aba0();
    return;
  }
  if (skip_prerender == 0) {
    _DAT_01fba2d8 = skip_prerender;
    _DAT_01fba2ec = skip_prerender;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970(this_ptr,&g_CDemonLight_01c74640);
    core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760(this_ptr);
  }
  core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710(&g_CDemonCamera_01fb8508);
  if (this_ptr->mirror_camera_dirty != 0) {
    core_set_cpp_CDemonSet_restoreCameraView_FUN_0050e310(this_ptr);
    this_ptr->mirror_camera_dirty = 0;
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(&g_CDemonCamera_01fb8508,1);
  if ((_DAT_01ffb074 != 0) || (g_CGame_PTR_005b9354->shadow_flag != 0)) {
    iVar6 = 0;
    _DAT_01ffb074 = 0;
    core_dcamera_cpp_CDemonCamera_processCorona_FUN_00444f90(&g_CDemonCamera_01fb8508);
    if (0 < _DAT_01fb9b54) {
      iVar7 = 0;
      do {
        if ((*(CDemonLight **)(&DAT_01fb9b58 + iVar7))->light_enabled_flag != 0) {
          core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00444c90
                    (&g_CDemonCamera_01fb8508,*(CDemonLight **)(&DAT_01fb9b58 + iVar7));
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar6 < _DAT_01fb9b54);
    }
    local_20 = 0;
    if (0 < _DAT_01fba2d8) {
      local_18 = 0;
      do {
        pCVar3 = *(CDemonLight **)(local_18 + 0x1fba2dc);
        if ((pCVar3->light_enabled_flag != 0) && (pCVar3->antialiasing_enabled != 0)) {
          iVar7 = 0;
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00444920
                    (&g_CDemonCamera_01fb8508,pCVar3);
          iVar6 = local_18;
          if (0 < this_ptr->mirror_glass_actor_count) {
            do {
              core_set_cpp_FUN_0050e080(this_ptr,iVar7,0);
              core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00444920
                        (&g_CDemonCamera_01fb8508,*(CDemonLight **)(iVar6 + 0x1fba2dc));
              iVar7 = iVar7 + 1;
              core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(this_ptr);
            } while (iVar7 < this_ptr->mirror_glass_actor_count);
          }
        }
        local_18 = local_18 + 4;
        local_20 = local_20 + 1;
      } while (local_20 < _DAT_01fba2d8);
    }
    local_28 = 0;
    if (0 < _DAT_01fba2ec) {
      local_1c = 0;
      do {
        iVar7 = 0;
        core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750
                  (&g_CDemonCamera_01fb8508,*(CDemonGlobe **)(local_1c + 0x1fba2f0),0);
        iVar6 = local_1c;
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_FUN_0050e080(this_ptr,iVar7,0);
            core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750
                      (&g_CDemonCamera_01fb8508,*(CDemonGlobe **)(iVar6 + 0x1fba2f0),1);
            iVar7 = iVar7 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(this_ptr);
          } while (iVar7 < this_ptr->mirror_glass_actor_count);
        }
        local_1c = local_1c + 4;
        local_28 = local_28 + 1;
      } while (local_28 < _DAT_01fba2ec);
    }
    local_24 = 0;
    _DAT_01fba7a4 = 0;
    if (0 < _DAT_01fba480) {
      iVar6 = 0;
      do {
        globe = *(CDemonGlobe **)(iVar6 + 0x1fba484);
        if (*(int *)(iVar6 + 0x1fba614) == 0) {
          core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750
                    (&g_CDemonCamera_01fb8508,globe,0);
          *(CDemonGlobe **)(&DAT_01fba7a8 + _DAT_01fba7a4 * 4) = globe;
          _DAT_01fba7a4 = _DAT_01fba7a4 + 1;
        }
        else {
          core_set_cpp_FUN_0050e080(this_ptr,*(int *)(iVar6 + 0x1fba614) + -1,0);
          core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750
                    (&g_CDemonCamera_01fb8508,globe,1);
          core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(this_ptr);
        }
        local_24 = local_24 + 1;
        iVar6 = iVar6 + 4;
      } while (local_24 < _DAT_01fba480);
    }
    _DAT_01fba480 = 0;
  }
  if (g_CGame_PTR_005b9354->profile_mode != 0) {
    local_44 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020(&g_CDemonCamera_01fb8508);
  if (g_CGame_PTR_005b9354->profile_mode != 0) {
    local_3c = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(this_ptr,0xc);
  core_set_cpp_CDemonSet_renderOpaqueActors_FUN_0050a640(this_ptr);
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
            (&g_CDemonCamera_01fb8508,(CVector3f *)0x0,(SProjectedVertex *)0x0);
  iVar6 = 0;
  core_gore_cpp_CGore_renderParticles_FUN_004afe00(g_CGore_PTR_005b96c4);
  if (0 < this_ptr->mirror_glass_actor_count) {
    do {
      core_set_cpp_FUN_0050e080(this_ptr,iVar6,0);
      core_gore_cpp_CGore_renderParticles_FUN_004afe00(g_CGore_PTR_005b96c4);
      iVar6 = iVar6 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(this_ptr);
    } while (iVar6 < this_ptr->mirror_glass_actor_count);
  }
  if (0x02DD1210->wave_animation_enabled != 0) {
    core_water_cpp_CWater_render_FUN_00550cb0(0x02DD1210,0);
  }
  core_set_cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0(this_ptr);
  if (this_ptr->player_on_train != 0) {
    core_terrain_cpp_CTerrain_render_FUN_00549310(0x02DD10C8,0);
  }
  iVar6 = 0;
  core_fire_cpp_CFireEffect_render_FUN_0048a650(g_CFireEffect_PTR_005b80f0);
  if (0 < this_ptr->mirror_glass_actor_count) {
    do {
      core_set_cpp_FUN_0050e080(this_ptr,iVar6,0);
      core_fire_cpp_CFireEffect_render_FUN_0048a650(g_CFireEffect_PTR_005b80f0);
      iVar6 = iVar6 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(this_ptr);
    } while (iVar6 < this_ptr->mirror_glass_actor_count);
  }
  core_weather_cpp_CWeather_renderParticles_FUN_00555020(0x02DDF9F0);
  local_2c = 0;
  if (0 < _DAT_01fba2d8) {
    local_34 = 0;
    do {
      pCVar3 = *(CDemonLight **)(local_34 + 0x1fba2dc);
      if (pCVar3->light_enabled_flag != 0) {
        local_58.x = (pCVar3->base).position.x;
        local_58.y = (pCVar3->base).position.y;
        local_58.z = (pCVar3->base).position.z;
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
                  (&g_CDemonCamera_01fb8508,&local_58,(SProjectedVertex *)0x0);
        iVar6 = 0;
        core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430(pCVar3);
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_FUN_0050e080(this_ptr,iVar6,0);
            core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430(pCVar3);
            iVar6 = iVar6 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(this_ptr);
          } while (iVar6 < this_ptr->mirror_glass_actor_count);
        }
      }
      local_34 = local_34 + 4;
      local_2c = local_2c + 1;
    } while (local_2c < _DAT_01fba2d8);
  }
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20(&g_CDemonCamera_01fb8508);
  core_gore_cpp_CGore_renderDecals_FUN_004afe80(g_CGore_PTR_005b96c4,0,(int)in_stack_ffffff9c);
  core_fire_cpp_CFireEffect_renderDecals_FUN_0048a970
            (g_CFireEffect_PTR_005b80f0,0,(int)in_stack_ffffff9c);
  if (0x02DD1210->wave_animation_enabled == 0) {
    core_water_cpp_CWater_render_FUN_00550cb0(0x02DD1210,0);
  }
  iVar6 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      pCVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                         (pCVar5->actors[0],g_CGlassActorType_01c78c40.name_hash);
      if (pCVar4 != (CDemonActor *)0x0) {
        (*((pCVar4->vtable)._ub)->renderBackground)(pCVar4,0);
      }
      iVar6 = iVar6 + 1;
      pCVar5 = (CDemonSet *)pCVar5->cameras;
    } while (iVar6 < this_ptr->actor_count);
  }
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00440c50(&g_CDemonCamera_01fb8508,0);
  local_30 = 0;
  if (0 < _DAT_01fba2d8) {
    local_38 = 0;
    do {
      if (*(int *)(*(int *)(local_38 + 0x1fba2dc) + 0x1cb4) != 0) {
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
                  (&g_CDemonCamera_01fb8508,(CVector3f *)&stack0xffffff9c,(SProjectedVertex *)0x0);
        iVar6 = 0;
        core_dlight_cpp_FUN_0044f9b0();
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_FUN_0050e080(this_ptr,iVar6,0);
            core_dlight_cpp_FUN_0044f9b0();
            iVar6 = iVar6 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(this_ptr);
          } while (iVar6 < this_ptr->mirror_glass_actor_count);
        }
      }
      local_38 = local_38 + 4;
      local_30 = local_30 + 1;
    } while (local_30 < _DAT_01fba2d8);
  }
  iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  if ((iVar6 != 0) && (g_CDemonMission_PTR_005baf90->is_in_editor == 0)) {
    core_inv_cpp_CInventory_renderSelectedItems_FUN_004c2150((CInventory *)(iVar6 + 0x1f5a0));
  }
  iVar6 = 0;
  core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(&g_CDemonCamera_01fb8508,0);
  if (0 < _DAT_01fb9b54) {
    iVar7 = 0;
    do {
      puVar1 = (uint *)(&DAT_01fb9b58 + iVar7);
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970((CDemonLight *)*puVar1);
    } while (iVar6 < _DAT_01fb9b54);
  }
  if (g_CGame_PTR_005b9354->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_00558a30();
    local_14 = local_44 - local_40;
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"comp: %3.2f/%3.2f actren : %3.2f\n");
  }
  if (g_CGame_PTR_005b9354->debug_toggle_flag != 0) {
    core_setdir_cpp_FUN_005138e0();
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
      pUVar2 = &(pCVar4->previous_transform_state).orientation;
      if (pUVar2 != &pCVar4->orient) {
        (pUVar2->vec).x = (pCVar4->orient).vec.x;
        (pCVar4->previous_transform_state).orientation.vec.y = (pCVar4->orient).vec.y;
        (pCVar4->previous_transform_state).orientation.vec.z = (pCVar4->orient).vec.z;
      }
      iVar6 = iVar6 + 1;
      pCVar5 = (CDemonSet *)pCVar5->cameras;
    } while (iVar6 < this_ptr->actor_count);
  }
  return;
}
