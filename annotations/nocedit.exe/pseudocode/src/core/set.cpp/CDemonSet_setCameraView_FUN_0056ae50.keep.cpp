// Name: core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
// Address: 0056ae50
// MANUAL RECONSTRUCTION
// Address Range: [[0056ae50, 0056b789] [00604a35, 00604a5b] [03fc4f10, 03fc4fd0]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet *this_ptr,int index)

{
  int iVar1;
  CVector3f *pCVar5;
  CVector3f *pCVar4;
  int iVar6;
  int iVar5;
  int iVar7;
  uint corner_index;
  SFog *pSVar11;
  int iVar12;
  int *piVar14;
  C3DSCamera *this_ptr_02;
  int local_184 [24];
  char local_124 [80];
  CMatrix3x3f local_ac;
  CBoundingBox3D local_84;
  CVector3f CStack_6c;
  CVector3f local_60;
  CVector3f CStack_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  int local_14;
  CDemonActor *this_ptr_00;
  CDemonLight *this_ptr_01;
  C3DSLight **ppCVar2;
  int fVar3;
  
  if ((index < 0) || (this_ptr->camera_count <= index)) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 1046;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::setCameraView - invalid index: %d",index);
  }
  for (iVar6 = 0; iVar6 < g_DynamicLightCount; iVar6 = iVar6 + 1) {
    core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(g_DynamicLights[iVar6]);
  }
  for (iVar5 = 0; iVar5 < g_SpotLightCount; iVar5 = iVar5 + 1) {
    core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(g_SpotLightList[iVar5]);
  }
  for (iVar5 = 0; iVar5 < g_SpotLightCount; iVar5 = iVar5 + 1) {
    core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50(g_SpotLightList[iVar5]);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_004729c0();
  this_ptr->previous_best_camera_timer = 3.0;
  this_ptr->lighting_quality_mode = 1;
  iVar5 = 0;
  this_ptr->directional_light_ratio_enabled = 1;
  g_SpotLightCount = 0;
  this_ptr->previous_best_camera_index = this_ptr->selected_camera_index;
  g_OmniLightCount = 0;
  this_ptr->selected_camera_index = index;
  g_CoronaGlobeCount = 0;
  g_QueuedCoronaGlobeCount = 0;
  for (iVar5 = 0; iVar5 < this_ptr->actor_count; iVar5 = iVar5 + 1) {
    core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0056ade0(this_ptr,this_ptr->actors[iVar5]);
  }
  if (this_ptr->cameras[index].is_panning == 0) {
    this_ptr_02 = this_ptr->cameras + index;
    core_setutil_cpp_C3DSCamera_apply_FUN_00585870(this_ptr_02,&g_CDemonCameraInstance);
    if (this_ptr->cameras[index].fog_enabled == 0) {
      pSVar11 = &this_ptr_02->fog;
    }
    else {
      pSVar11 = &this_ptr->scene_fog;
    }
    if (&this_ptr->active_fog != pSVar11) {
      this_ptr->active_fog = *pSVar11;
    }
    core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00453640
              (&g_CDemonCameraInstance,&this_ptr->active_fog);
    g_CDemonRaytraceInstance.rendering_mode = 0;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(&g_CDemonCameraInstance);
    core_set_cpp_CDemonSet_buildDisplayList_FUN_0056fbd0(this_ptr,0x10);
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,1);
    core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450(&g_CDemonCameraInstance);
    g_InMirrorRenderPass = 1;
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0(this_ptr,1);
    g_InMirrorRenderPass = 0;
    core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360(&g_CDemonCameraInstance);
    core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0(&g_CDemonCameraInstance);
    _sprintf(local_124,"%s.raw",(this_ptr->cameras + index)->name);
    core_dcamera_cpp_CDemonCamera_loadImage_FUN_0044f3e0(&g_CDemonCameraInstance,local_124);
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0(this_ptr,1);
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(&g_CDemonCameraInstance,0);
    if (g_UseExternalRenderer != 0) {
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
      if (g_CWaterPtr->wave_animation_enabled == 0) {
        core_water_cpp_CWater_render_FUN_005ea320(g_CWaterPtr,0);
      }
      core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0(this_ptr,1);
    }
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
  }
  if (this_ptr->disable_spotlight_shadows == 0) {
    iVar5 = 0;
    for (iVar7 = 0; iVar7 < this_ptr->light_count; iVar7 = iVar7 + 1) {
      if ((this_ptr->lights[iVar7].light_type == 1) &&
          (this_ptr->lights[iVar7].visible_flags[index] != '\0')) {
        iVar1 = g_OmniLightCount + 1;
        ppCVar2 = g_OmniLights + g_OmniLightCount;
        g_OmniLightCount = iVar1;
        *ppCVar2 = this_ptr->lights + iVar7;
        if (199 < iVar1) {
          g_CurrentFilename = "..\\core\\set.cpp";
          g_CurrentLineNumber = 1184;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::setCameraView - Too many omni lights");
        }
      }
      iVar1 = g_SpotLightCount;
      iVar12 = iVar5;
      if ((this_ptr->lights[iVar7].light_type == 0) &&
         (iVar12 = iVar5 + 1, this_ptr->lights[iVar7].visible_flags[index] != '\0')) {
        g_SpotLightList[g_SpotLightCount] = g_MasterLightList[iVar5];
        g_SpotLightBounds[iVar1] = this_ptr->lights[iVar7].camera_light_bounds[index];
        g_SpotLightCount = g_SpotLightCount + 1;
      }
      iVar5 = iVar12;
    }
    core_set_cpp_CDemonSet_process_FUN_0056f940(this_ptr);
    for (iVar5 = 0; iVar5 < g_SpotLightCount; iVar5 = iVar5 + 1) {
      this_ptr_01 = g_SpotLightList[iVar5];
      core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0(this_ptr_01);
      core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(this_ptr_01,1);
      core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_00472e40(this_ptr_01);
      core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0(this_ptr,1);
      core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_00472f30(this_ptr_01);
      core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(this_ptr_01,0);
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(this_ptr_01);
      if (this_ptr->cameras[index].is_panning == 0) {
        core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044de10
                  (&g_CDemonCameraInstance,this_ptr_01,&g_SpotLightBounds[iVar5]);
      }
    }
  }
  this_ptr->lighting_quality_mode = 0;
  fVar3 = this_ptr->cameras[index].is_panning;
  if (fVar3 == 0) {
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(&g_CDemonCameraInstance);
    g_PerspectiveReciprocal = fVar3;
    if (this_ptr->has_sky != 0) {
      core_dskybox_cpp_renderSkyDome_FUN_004901f0
                (g_SkyDomeTexturePtr,this_ptr->sky_texture_name,this_ptr->sky_brightness);
    }
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0(this_ptr,1);
    core_gore_cpp_CGore_renderDecals_FUN_004ed830(g_CGorePtr,1,1);
    core_fire_cpp_CFireEffect_renderDecals_FUN_004c74a0(g_CFireEffectPtr,1,1);
    if (g_CWaterPtr->wave_animation_enabled == 0) {
      core_water_cpp_CWater_render_FUN_005ea320(g_CWaterPtr,0);
    }
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
  }
  this_ptr->directional_light_ratio_enabled = 0;
  core_set_cpp_CDemonSet_renderStaticLights_FUN_0056be80(this_ptr);
  if (this_ptr->cameras[index].fog_enabled == 0) {
    iVar5 = this_ptr->cameras[index].reverb_preset;
  }
  else {
    iVar5 = this_ptr->default_master_reverb;
  }
  core_sound_cpp_CSound_setReverbPreset_FUN_005b3cc0(g_CSoundPtr,iVar5);
  local_30 = g_CDemonCameraInstance.base.position.f;
  if (&local_48 != &local_30) {
    local_48 = g_CDemonCameraInstance.base.position.f;
  }
  local_ac = g_CDemonCameraInstance.base.rotation_matrix;
  pCVar5 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(&local_ac,&local_60);
  if (&local_3c != pCVar5) {
    local_3c = *pCVar5;
  }
  core_weather_cpp_CWeather_setOriginAndRotation_FUN_005ef940(g_CWeatherPtr,&local_48,&local_3c);
  for (iVar5 = 0; iVar5 < this_ptr->actor_count; iVar5 = iVar5 + 1) {
    core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0056ade0(this_ptr,this_ptr->actors[iVar5]);
  }
  for (local_14 = 0; local_14 < this_ptr->actor_count; local_14 = local_14 + 1) {
    this_ptr_00 = this_ptr->actors[local_14];
    if ((this_ptr_00->is_transparent != 0) || (this_ptr_00->is_renderable != 0)) {
      corner_index = 0;
      (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,&local_84);
      piVar14 = local_184;
      do {
        pCVar4 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                           (&local_84,&CStack_6c,corner_index);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(this_ptr_00,&CStack_54,pCVar4);
        corner_index = corner_index + 1;
        *piVar14 = (int)ROUND(CStack_54.x * 256.0f);
        piVar14[1] = (int)ROUND(CStack_54.y * 256.0f);
        piVar14[2] = (int)ROUND(CStack_54.z * 256.0f);
        piVar14 = piVar14 + 3;
      } while ((int)corner_index < 8);
    }
  }
  g_RenderingShadows = 1;
  return;
}
