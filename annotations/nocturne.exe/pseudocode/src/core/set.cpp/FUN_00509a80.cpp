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
  CDemonGlobe *globe;
  double dVar2;
  CDemonActor *this_ptr_00;
  CDemonSet *pCVar3;
  int iVar4;
  int iVar5;
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
  
  if (*(int *)(0x01C775EC + 0x20c) != 0) {
    local_40 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  if ((skip_prerender != 0) && (this_ptr->renderable_actors[0x75d] != (CDemonActor *)0x0)) {
    core_set_cpp_FUN_0050aba0();
    return;
  }
  if (skip_prerender == 0) {
    _DAT_01fba2d8 = skip_prerender;
    _DAT_01fba2ec = skip_prerender;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970(this_ptr,(CDemonLight *)&DAT_01c74640);
    core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760(this_ptr);
  }
  core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710((CDemonCamera *)&DAT_01fb8508);
  if (this_ptr->sorted_render_actors[0x6e1] != (CDemonActor *)0x0) {
    core_set_cpp_CDemonSet_restoreCameraView_FUN_0050e310(this_ptr);
    this_ptr->sorted_render_actors[0x6e1] = (CDemonActor *)0x0;
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290((CDemonCamera *)&DAT_01fb8508,1);
  if ((_DAT_01ffb074 != 0) || (*(int *)(0x01C775EC + 0x24) != 0)) {
    iVar4 = 0;
    _DAT_01ffb074 = 0;
    core_dcamera_cpp_CDemonCamera_processCorona_FUN_00444f90((CDemonCamera *)&DAT_01fb8508);
    if (0 < _DAT_01fb9b54) {
      iVar5 = 0;
      do {
        if ((*(CDemonLight **)(&DAT_01fb9b58 + iVar5))->light_enabled_flag != 0) {
          core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00444c90
                    ((CDemonCamera *)&DAT_01fb8508,*(CDemonLight **)(&DAT_01fb9b58 + iVar5));
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar4 < _DAT_01fb9b54);
    }
    local_20 = 0;
    if (0 < _DAT_01fba2d8) {
      local_18 = 0;
      do {
        if ((*(int *)(*(int *)(local_18 + 0x1fba2dc) + 0x1cb4) != 0) &&
           (*(int *)(*(int *)(local_18 + 0x1fba2dc) + 0x1cd0) != 0)) {
          iVar4 = 0;
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00444920(&DAT_01fb8508);
          if (0 < (int)this_ptr->renderable_actors[0x6f7]) {
            do {
              core_set_cpp_FUN_0050e080(this_ptr,iVar4,0);
              core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00444920(&DAT_01fb8508);
              iVar4 = iVar4 + 1;
              core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190();
            } while (iVar4 < (int)this_ptr->renderable_actors[0x6f7]);
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
        iVar4 = 0;
        core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750
                  ((CDemonCamera *)&DAT_01fb8508,*(CDemonGlobe **)(local_1c + 0x1fba2f0),0);
        if (0 < (int)this_ptr->renderable_actors[0x6f7]) {
          do {
            core_set_cpp_FUN_0050e080(this_ptr,iVar4,0);
            core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750
                      ((CDemonCamera *)&DAT_01fb8508,*(CDemonGlobe **)(local_1c + 0x1fba2f0),1);
            iVar4 = iVar4 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190();
          } while (iVar4 < (int)this_ptr->renderable_actors[0x6f7]);
        }
        local_1c = local_1c + 4;
        local_28 = local_28 + 1;
      } while (local_28 < _DAT_01fba2ec);
    }
    local_24 = 0;
    _DAT_01fba7a4 = 0;
    if (0 < _DAT_01fba480) {
      iVar4 = 0;
      do {
        globe = *(CDemonGlobe **)(iVar4 + 0x1fba484);
        if (*(int *)(iVar4 + 0x1fba614) == 0) {
          core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750
                    ((CDemonCamera *)&DAT_01fb8508,globe,0);
          *(CDemonGlobe **)(&DAT_01fba7a8 + _DAT_01fba7a4 * 4) = globe;
          _DAT_01fba7a4 = _DAT_01fba7a4 + 1;
        }
        else {
          core_set_cpp_FUN_0050e080(this_ptr,*(int *)(iVar4 + 0x1fba614) + -1,0);
          core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750
                    ((CDemonCamera *)&DAT_01fb8508,globe,1);
          core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190();
        }
        local_24 = local_24 + 1;
        iVar4 = iVar4 + 4;
      } while (local_24 < _DAT_01fba480);
    }
    _DAT_01fba480 = 0;
  }
  if (*(int *)(0x01C775EC + 0x20c) != 0) {
    local_44 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020((CDemonCamera *)&DAT_01fb8508);
  if (*(int *)(0x01C775EC + 0x20c) != 0) {
    local_3c = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(this_ptr,0xc);
  core_set_cpp_CDemonSet_renderOpaqueActors_FUN_0050a640(this_ptr);
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670();
  iVar4 = 0;
  core_gore_cpp_CGore_renderParticles_FUN_004afe00((CGore *)INT_005b96c4);
  if (0 < (int)this_ptr->renderable_actors[0x6f7]) {
    do {
      core_set_cpp_FUN_0050e080(this_ptr,iVar4,0);
      core_gore_cpp_CGore_renderParticles_FUN_004afe00((CGore *)INT_005b96c4);
      iVar4 = iVar4 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190();
    } while (iVar4 < (int)this_ptr->renderable_actors[0x6f7]);
  }
  if (0x02DD1210->wave_animation_enabled != 0) {
    core_water_cpp_CWater_render_FUN_00550cb0(0x02DD1210,0);
  }
  core_set_cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0(this_ptr);
  if (this_ptr->renderable_actors[0x6f4] != (CDemonActor *)0x0) {
    core_terrain_cpp_CTerrain_render_FUN_00549310(0x02DD10C8,0);
  }
  iVar4 = 0;
  core_fire_cpp_CFireEffect_render_FUN_0048a650(0x01C08D04);
  if (0 < (int)this_ptr->renderable_actors[0x6f7]) {
    do {
      core_set_cpp_FUN_0050e080(this_ptr,iVar4,0);
      core_fire_cpp_CFireEffect_render_FUN_0048a650(0x01C08D04);
      iVar4 = iVar4 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190();
    } while (iVar4 < (int)this_ptr->renderable_actors[0x6f7]);
  }
  core_weather_cpp_CWeather_renderParticles_FUN_00555020(0x02DDF9F0);
  local_2c = 0;
  if (0 < _DAT_01fba2d8) {
    local_34 = 0;
    do {
      if (*(int *)(*(int *)(local_34 + 0x1fba2dc) + 0x1cb4) != 0) {
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670();
        iVar4 = 0;
        core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430();
        if (0 < (int)this_ptr->renderable_actors[0x6f7]) {
          do {
            core_set_cpp_FUN_0050e080(this_ptr,iVar4,0);
            core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430();
            iVar4 = iVar4 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190();
          } while (iVar4 < (int)this_ptr->renderable_actors[0x6f7]);
        }
      }
      local_34 = local_34 + 4;
      local_2c = local_2c + 1;
    } while (local_2c < _DAT_01fba2d8);
  }
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20((CDemonCamera *)&DAT_01fb8508);
  core_gore_cpp_CGore_renderDecals_FUN_004afe80(INT_005b96c4);
  core_fire_cpp_CFireEffect_renderDecals_FUN_0048a970(0x01C08D04);
  if (0x02DD1210->wave_animation_enabled == 0) {
    core_water_cpp_CWater_render_FUN_00550cb0(0x02DD1210,0);
  }
  iVar4 = 0;
  pCVar3 = this_ptr;
  if (0 < *(int *)this_ptr->lights[199].filter_names[0x14]) {
    do {
      this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040d890
                              (*(CDemonActor **)(pCVar3->lights[199].filter_names[0x14] + 4),
                               g_CGlassActorType_01c78c40.name_hash);
      if (this_ptr_00 != (CDemonActor *)0x0) {
        (*((this_ptr_00->vtable)._ub)->renderBackground)(this_ptr_00,0);
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
    } while (iVar4 < *(int *)this_ptr->lights[199].filter_names[0x14]);
  }
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00440c50((CDemonCamera *)&DAT_01fb8508,0);
  local_30 = 0;
  if (0 < _DAT_01fba2d8) {
    local_38 = 0;
    do {
      if (*(int *)(*(int *)(local_38 + 0x1fba2dc) + 0x1cb4) != 0) {
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670();
        iVar4 = 0;
        core_dlight_cpp_FUN_0044f9b0();
        if (0 < (int)this_ptr->renderable_actors[0x6f7]) {
          do {
            core_set_cpp_FUN_0050e080(this_ptr,iVar4,0);
            core_dlight_cpp_FUN_0044f9b0();
            iVar4 = iVar4 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190();
          } while (iVar4 < (int)this_ptr->renderable_actors[0x6f7]);
        }
      }
      local_38 = local_38 + 4;
      local_30 = local_30 + 1;
    } while (local_30 < _DAT_01fba2d8);
  }
  iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  if ((iVar4 != 0) && (*(int *)(0x01CC9450 + 4) == 0)) {
    core_inv_cpp_CInventory_renderSelectedItems_FUN_004c2150((CInventory *)(iVar4 + 0x1f5a0));
  }
  iVar4 = 0;
  core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(&DAT_01fb8508);
  if (0 < _DAT_01fb9b54) {
    iVar5 = 0;
    do {
      puVar1 = (uint *)(&DAT_01fb9b58 + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970((CDemonLight *)*puVar1);
    } while (iVar4 < _DAT_01fb9b54);
  }
  if (*(int *)(0x01C775EC + 0x20c) != 0) {
    iVar4 = wincore_winrun_cpp_getTime_FUN_00558a30();
    dVar2 = 1.0 / (double)*(float *)(0x01C775EC + 0x264);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"comp: %3.2f/%3.2f actren : %3.2f\n",
               (double)(local_44 - local_40) * 0.055555555555555601 * 1.52587890625e-05 * 1000 *
               dVar2,(double)(local_3c - local_40) * 0.055555555555555601 * 1.52587890625e-05 *
                     1000 * dVar2,
               (double)(iVar4 - local_3c) * 0.055555555555555601 * 1.52587890625e-05 * 1000 *
               dVar2);
  }
  if (*(int *)(0x01C775EC + 0x1e8) != 0) {
    core_setdir_cpp_FUN_005138e0();
  }
  iVar4 = 0;
  pCVar3 = this_ptr;
  if (0 < *(int *)this_ptr->lights[199].filter_names[0x14]) {
    do {
      iVar5 = *(int *)(pCVar3->lights[199].filter_names[0x14] + 4);
      if ((uint *)(iVar5 + 0x128) != (uint *)(iVar5 + 0x20)) {
        *(uint *)(iVar5 + 0x128) = *(uint *)(iVar5 + 0x20);
        *(uint *)(iVar5 + 300) = *(uint *)(iVar5 + 0x24);
        *(uint *)(iVar5 + 0x130) = *(uint *)(iVar5 + 0x28);
      }
      if ((uint *)(iVar5 + 0x134) != (uint *)(iVar5 + 0x30)) {
        *(uint *)(iVar5 + 0x134) = *(uint *)(iVar5 + 0x30);
        *(uint *)(iVar5 + 0x138) = *(uint *)(iVar5 + 0x34);
        *(uint *)(iVar5 + 0x13c) = *(uint *)(iVar5 + 0x38);
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
    } while (iVar4 < *(int *)this_ptr->lights[199].filter_names[0x14]);
  }
  return;
}
