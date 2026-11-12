// Name: core_set.cpp_FUN_00535da0
// Address: 00535da0
// Address Range: [[00535da0, 005365b7]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_00535da0(CDemonSet *this_ptr,int skip_prerender)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_00535da0(CDemonSet *this_ptr,int skip_prerender)

{
  UOrientationVector *pUVar1;
  float fVar2;
  CDemonLight *light_source;
  CDemonGlobe *globe;
  CDemonActor *pCVar3;
  CDemonSet *pCVar4;
  int iVar5;
  uint *puVar6;
  float *pfVar7;
  int iVar8;
  byte bVar9;
  float afStackY_106c [1010];
  CVector3f *pCVar10;
  SProjectedVertex *pSVar11;
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
  
  bVar9 = 0;
  if (g_CGamePtr->profile_mode != 0) {
    local_18 = wincore_winrun_cpp_getTime_FUN_005806a0();
  }
  if ((skip_prerender != 0) &&
     (iVar5 = core_set_cpp_CDemonSet_isCameraPanning_FUN_0053b9a0(this_ptr), iVar5 != 0)) {
    return;
  }
  if (skip_prerender == 0) {
    _DAT_0203ad1c = skip_prerender;
    _DAT_0203ad30 = skip_prerender;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_00537270(this_ptr,&g_CDemonLightInstance);
    core_set_cpp_CDemonSet_renderStaticLights_FUN_00535a80(this_ptr);
  }
  core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_00449430(&g_CDemonCameraInstance);
  if (this_ptr->mirror_camera_dirty != 0) {
    core_set_cpp_CDemonSet_restoreCameraView_FUN_0053b0d0(this_ptr);
    this_ptr->mirror_camera_dirty = 0;
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00448ff0(&g_CDemonCameraInstance,1);
  if ((_DAT_0207bad4 != 0) || (g_CGamePtr->shadow_flag != 0)) {
    iVar5 = 0;
    _DAT_0207bad4 = 0;
    core_dcamera_cpp_CDemonCamera_processCorona_FUN_0044ded0(&g_CDemonCameraInstance);
    if (0 < _DAT_0203a598) {
      iVar8 = 0;
      do {
        if ((*(CDemonLight **)(&DAT_0203a59c + iVar8))->light_enabled_flag != 0) {
          core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_0044db70
                    (&g_CDemonCameraInstance,*(CDemonLight **)(&DAT_0203a59c + iVar8));
        }
        iVar5 = iVar5 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar5 < _DAT_0203a598);
    }
    local_2c = 0;
    if (0 < _DAT_0203ad1c) {
      local_24 = 0;
      do {
        light_source = *(CDemonLight **)(local_24 + 0x203ad20);
        if ((light_source->light_enabled_flag != 0) && (light_source->antialiasing_enabled != 0)) {
          iVar8 = 0;
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_0044d800
                    (&g_CDemonCameraInstance,light_source);
          iVar5 = local_24;
          if (0 < this_ptr->mirror_glass_actor_count) {
            do {
              core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(this_ptr,iVar8,0);
              core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_0044d800
                        (&g_CDemonCameraInstance,*(CDemonLight **)(iVar5 + 0x203ad20));
              iVar8 = iVar8 + 1;
              core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
            } while (iVar8 < this_ptr->mirror_glass_actor_count);
          }
        }
        local_24 = local_24 + 4;
        local_2c = local_2c + 1;
      } while (local_2c < _DAT_0203ad1c);
    }
    local_3c = 0;
    if (0 < _DAT_0203ad30) {
      local_28 = 0;
      do {
        iVar8 = 0;
        core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690
                  (&g_CDemonCameraInstance,*(CDemonGlobe **)(local_28 + 0x203ad34),0);
        iVar5 = local_28;
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(this_ptr,iVar8,0);
            core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690
                      (&g_CDemonCameraInstance,*(CDemonGlobe **)(iVar5 + 0x203ad34),1);
            iVar8 = iVar8 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
          } while (iVar8 < this_ptr->mirror_glass_actor_count);
        }
        local_28 = local_28 + 4;
        local_3c = local_3c + 1;
      } while (local_3c < _DAT_0203ad30);
    }
    local_30 = 0;
    _DAT_0203b1e8 = 0;
    if (0 < _DAT_0203aec4) {
      iVar5 = 0;
      do {
        globe = *(CDemonGlobe **)(iVar5 + 0x203aec8);
        if (*(int *)(iVar5 + 0x203b058) == 0) {
          core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690
                    (&g_CDemonCameraInstance,globe,0);
          *(CDemonGlobe **)(&DAT_0203b1ec + _DAT_0203b1e8 * 4) = globe;
          _DAT_0203b1e8 = _DAT_0203b1e8 + 1;
        }
        else {
          core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0
                    (this_ptr,*(int *)(iVar5 + 0x203b058) + -1,0);
          core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690
                    (&g_CDemonCameraInstance,globe,1);
          core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
        }
        local_30 = local_30 + 1;
        iVar5 = iVar5 + 4;
      } while (local_30 < _DAT_0203aec4);
    }
    _DAT_0203aec4 = 0;
    if (0.0 < this_ptr->directional_light_intensity) {
      core_dcamera_cpp_FUN_0044dd00();
    }
  }
  if (g_CGamePtr->profile_mode != 0) {
    local_4c = wincore_winrun_cpp_getTime_FUN_005806a0();
  }
  core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_0044df60(&g_CDemonCameraInstance);
  if (g_CGamePtr->profile_mode != 0) {
    local_48 = wincore_winrun_cpp_getTime_FUN_005806a0();
  }
  iVar5 = 0;
  if (0 < _DAT_0203a598) {
    iVar8 = 0;
    do {
      puVar6 = (uint *)(&DAT_0203a59c + iVar8);
      iVar8 = iVar8 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0045ca30((CDemonLight *)*puVar6);
    } while (iVar5 < _DAT_0203a598);
  }
  core_set_cpp_CDemonSet_buildDisplayList_FUN_00539f30(this_ptr,0xc);
  core_set_cpp_FUN_00536c90();
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00450580
            (&g_CDemonCameraInstance,(CVector3f *)0x0,(SProjectedVertex *)0x0);
  core_gore_cpp_CGore_renderParticles_FUN_004ce5b0(g_CGorePtr);
  iVar5 = 0;
  if (0 < this_ptr->mirror_glass_actor_count) {
    do {
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(this_ptr,iVar5,0);
      core_gore_cpp_CGore_renderParticles_FUN_004ce5b0(g_CGorePtr);
      iVar5 = iVar5 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
    } while (iVar5 < this_ptr->mirror_glass_actor_count);
  }
  if (g_CWaterPtr->wave_animation_enabled != 0) {
    core_water_cpp_CWater_render_FUN_00577760(g_CWaterPtr,0);
  }
  core_set_cpp_FUN_00536f90();
  if (this_ptr->player_on_train != 0) {
    core_terrain_cpp_CTerrain_render_FUN_005723d0(0x02CFD8B8,0);
  }
  iVar5 = 0;
  core_fire_cpp_CFireEffect_render_FUN_004a1ad0(0x01C73654);
  if (0 < this_ptr->mirror_glass_actor_count) {
    do {
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(this_ptr,iVar5,0);
      core_fire_cpp_CFireEffect_render_FUN_004a1ad0(0x01C73654);
      iVar5 = iVar5 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
    } while (iVar5 < this_ptr->mirror_glass_actor_count);
  }
  core_weather_cpp_FUN_0057c890(0x02D0C1A0);
  local_34 = 0;
  if (0 < _DAT_0203ad1c) {
    local_44 = 0;
    do {
      local_20 = *(CDemonLight **)(local_44 + 0x203ad20);
      if (local_20->light_enabled_flag != 0) {
        pSVar11 = (SProjectedVertex *)0x0;
        pCVar10 = &local_60;
        puVar6 = (uint *)((int)local_20 + (uint)bVar9 * -8 + 8);
        fVar2 = (local_20->base).base.position.f.x;
        *(uint *)(&stack0xffffff80 + (uint)bVar9 * -8) = *puVar6;
        *(uint *)(&stack0xffffff84 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             puVar6[(uint)bVar9 * -2 + 1];
        local_60.x = fVar2;
        *(uint *)((int)&local_60 + (uint)bVar9 * -8 + 4) =
             *(uint *)(&stack0xffffff80 + (uint)bVar9 * -8);
        *(uint *)((int)&local_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)(&stack0xffffff84 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00450580
                  (&g_CDemonCameraInstance,pCVar10,pSVar11);
        core_dlight_cpp_FUN_0045d530(local_20);
        iVar5 = 0;
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(this_ptr,iVar5,0);
            core_dlight_cpp_FUN_0045d530(local_20);
            iVar5 = iVar5 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
          } while (iVar5 < this_ptr->mirror_glass_actor_count);
        }
      }
      local_34 = local_34 + 1;
      local_44 = local_44 + 4;
    } while (local_34 < _DAT_0203ad1c);
  }
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00449840(&g_CDemonCameraInstance);
  core_gore_cpp_CGore_renderDecals_FUN_004ce630(g_CGorePtr,0,1);
  core_fire_cpp_CFireEffect_renderDecals_FUN_004a1e90(0x01C73654,0,1);
  if (g_CWaterPtr->wave_animation_enabled == 0) {
    core_water_cpp_CWater_render_FUN_00577760(g_CWaterPtr,0);
  }
  iVar5 = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (pCVar4->actors[0],g_CGlassClassInfo.name_hash);
      if (pCVar3 != (CDemonActor *)0x0) {
        (*((pCVar3->vtable)._ub)->renderBackground)(pCVar3,0);
      }
      iVar5 = iVar5 + 1;
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar5 < this_ptr->actor_count);
  }
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00449a00(&g_CDemonCameraInstance,0);
  local_38 = 0;
  if (0 < _DAT_0203ad1c) {
    local_40 = 0;
    do {
      local_1c = *(int *)(local_40 + 0x203ad20);
      if (*(int *)(local_1c + 0x1cb4) != 0) {
        pSVar11 = (SProjectedVertex *)0x0;
        pCVar10 = &local_78;
        pfVar7 = (float *)(local_1c + 8 + (uint)bVar9 * -8);
        local_6c = *(float *)(local_1c + 4);
        afStack_68[(uint)bVar9 * -2] = *pfVar7;
        afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] = pfVar7[(uint)bVar9 * -2 + 1];
        local_78.x = local_6c;
        *(float *)((int)&local_78 + (uint)bVar9 * -8 + 4) = afStack_68[(uint)bVar9 * -2];
        *(float *)((int)&local_78 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00450580
                  (&g_CDemonCameraInstance,pCVar10,pSVar11);
        iVar5 = 0;
        core_dlight_cpp_FUN_0045d560();
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(this_ptr,iVar5,0);
            core_dlight_cpp_FUN_0045d560();
            iVar5 = iVar5 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
          } while (iVar5 < this_ptr->mirror_glass_actor_count);
        }
      }
      local_38 = local_38 + 1;
      local_40 = local_40 + 4;
    } while (local_38 < _DAT_0203ad1c);
  }
  iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  if ((iVar5 != 0) && (*(int *)(0x01D81080 + 0x1008) == 0)) {
    core_inv_cpp_CInventory_renderSelectedItems_FUN_004dd770((CInventory *)(iVar5 + 0x206e8));
  }
  core_dcamera_cpp_CDemonCamera_endScene_FUN_00449750(&g_CDemonCameraInstance,0);
  if (g_CGamePtr->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_005806a0();
    local_14 = local_4c - local_18;
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"@comp: %3.2f/%3.2f actren : %3.2f\n" + 1);
  }
  if (g_CGamePtr->debug_toggle_flag != 0) {
    core_setdir_cpp_FUN_00540eb0();
  }
  iVar5 = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      pCVar3 = pCVar4->actors[0];
      if (&pCVar3->previous_transform_state != (CDemonActorTransformState *)&pCVar3->location) {
        (pCVar3->previous_transform_state).position.x = (pCVar3->location).position.x;
        (pCVar3->previous_transform_state).position.y = (pCVar3->location).position.y;
        (pCVar3->previous_transform_state).position.z = (pCVar3->location).position.z;
      }
      pUVar1 = &(pCVar3->previous_transform_state).orientation;
      if (pUVar1 != &pCVar3->orient) {
        (pUVar1->vec).x = (pCVar3->orient).vec.x;
        (pCVar3->previous_transform_state).orientation.vec.y = (pCVar3->orient).vec.y;
        (pCVar3->previous_transform_state).orientation.vec.z = (pCVar3->orient).vec.z;
      }
      iVar5 = iVar5 + 1;
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar5 < this_ptr->actor_count);
  }
  if (_DAT_0207baa8 != 0) {
    engine_special_cpp_clearScreen_FUN_00560d70();
    _DAT_0207baa8 = 0;
    return;
  }
  return;
}
