// Name: core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
// Address: 0056ae50
// Address Range: [[0056ae50, 0056b789] [00604a35, 00604a5b] [03fc4f10, 03fc4fd0]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet *this_ptr,int index)

{
  int iVar1;
  uint *puVar2;
  CRect *pCVar3;
  CVector3f *pCVar5;
  CVector3f *pCVar4;
  int iVar6;
  int iVar5;
  CDemonSet *pCVar7;
  CRect *rect;
  int iVar8;
  int iVar7;
  CMatrix3x3f *pCVar9;
  float *pfVar10;
  CDemonSet *pCVar8;
  uint corner_index;
  SFog *pSVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  C3DSCamera *this_ptr_02;
  int *piVar15;
  byte bVar16;
  int local_184 [24];
  char local_124 [80];
  float local_d4 [10];
  CMatrix3x3f local_ac;
  CBoundingBox3D local_84;
  CVector3f CStack_6c;
  CVector3f local_60;
  CVector3f CStack_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  C3DSLight *local_24;
  int local_20;
  int *local_1c;
  CDemonSet *local_18;
  int local_14;
  CDemonActor *this_ptr_00;
  CDemonLight *this_ptr_01;
  C3DSLight **ppCVar2;
  int fVar3;
  int iVar4;
  uint *puVar1;
  
  if ((index < 0) || (this_ptr->camera_count <= index)) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 0x416;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::setCameraView - invalid index: %d",index);
  }
  iVar6 = 0;
  if (0 < g_DynamicLightCount) {
    iVar8 = 0;
    do {
      puVar1 = (uint *)((int)g_DynamicLights + iVar8);
      iVar8 = iVar8 + 4;
      iVar6 = iVar6 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80((CDemonLight *)*puVar1);
    } while (iVar6 < g_DynamicLightCount);
  }
  iVar5 = 0;
  if (0 < g_SpotLightCount) {
    iVar7 = 0;
    do {
      puVar2 = (uint *)((int)g_SpotLightList + iVar7);
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80((CDemonLight *)*puVar2);
    } while (iVar5 < g_SpotLightCount);
  }
  iVar5 = 0;
  if (0 < g_SpotLightCount) {
    iVar7 = 0;
    do {
      puVar2 = (uint *)((int)g_SpotLightList + iVar7);
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50((CDemonLight *)*puVar2);
    } while (iVar5 < g_SpotLightCount);
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
  pCVar8 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      iVar5 = iVar5 + 1;
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0056ade0(this_ptr,pCVar8->actors[0]);
      pCVar8 = (CDemonSet *)pCVar8->cameras;
    } while (iVar5 < this_ptr->actor_count);
  }
  if (this_ptr->cameras[index].is_panning == 0) {
    this_ptr_02 = this_ptr->cameras + index;
    core_setutil_cpp_C3DSCamera_apply_FUN_00585870(this_ptr_02,&g_CDemonCameraInstance);
    pCVar4 = &(this_ptr->active_fog).scroll;
    if (this_ptr->cameras[index].fog_enabled == 0) {
      pSVar11 = &this_ptr_02->fog;
      (this_ptr->active_fog).color_index.r = (pSVar11->color_index).r;
      iVar5 = (this_ptr_02->fog).color_index.g;
    }
    else {
      (this_ptr->active_fog).color_index.r = (this_ptr->scene_fog).color_index.r;
      iVar5 = (this_ptr->scene_fog).color_index.g;
      pSVar11 = &this_ptr->scene_fog;
    }
    (this_ptr->active_fog).color_index.g = iVar5;
    (this_ptr->active_fog).color_index.b = (pSVar11->color_index).b;
    if (pCVar4 != &pSVar11->scroll) {
      pCVar4->x = (pSVar11->scroll).x;
      (this_ptr->active_fog).scroll.y = (pSVar11->scroll).y;
      (this_ptr->active_fog).scroll.z = (pSVar11->scroll).z;
    }
    (this_ptr->active_fog).height_threshold = pSVar11->height_threshold;
    (this_ptr->active_fog).density_multiplier = pSVar11->density_multiplier;
    (this_ptr->active_fog).temperature = pSVar11->temperature;
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
    _sprintf(local_124,"%s.raw",this_ptr->cameras + index);
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
    iVar7 = 0;
    iVar5 = 0;
    pCVar7 = this_ptr;
    if (0 < this_ptr->light_count) {
      do {
        if ((pCVar7->lights[0].light_type == 1) && (pCVar7->lights[0].visible_flags[index] != '\0'))
        {
          iVar1 = g_OmniLightCount + 1;
          ppCVar2 = g_OmniLights + g_OmniLightCount;
          g_OmniLightCount = iVar1;
          *ppCVar2 = this_ptr->lights + iVar7;
          if (199 < iVar1) {
            g_CurrentFilename = "..\\core\\set.cpp";
            g_CurrentLineNumber = 0x4a0;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::setCameraView - Too many omni lights");
          }
        }
        iVar1 = g_SpotLightCount;
        iVar12 = iVar5;
        if ((pCVar7->lights[0].light_type == 0) &&
           (iVar12 = iVar5 + 1, pCVar7->lights[0].visible_flags[index] != '\0')) {
          g_SpotLightList[g_SpotLightCount] = g_MasterLightList[iVar5];
          pCVar3 = pCVar7->lights[0].camera_light_bounds + index;
          g_SpotLightBounds[iVar1].x_min = pCVar3->x_min;
          g_SpotLightBounds[iVar1].x_max = pCVar3->x_max;
          g_SpotLightBounds[iVar1].y_min = pCVar3->y_min;
          g_SpotLightBounds[iVar1].y_max = pCVar3->y_max;
          g_SpotLightCount = g_SpotLightCount + 1;
        }
        iVar7 = iVar7 + 1;
        pCVar7 = (CDemonSet *)&pCVar7->cameras[0xe].vdir_zone;
        iVar5 = iVar12;
      } while (iVar7 < this_ptr->light_count);
    }
    iVar5 = 0;
    core_set_cpp_CDemonSet_process_FUN_0056f940(this_ptr);
    if (0 < g_SpotLightCount) {
      rect = g_SpotLightBounds;
      iVar7 = 0;
      do {
        this_ptr_01 = *(CDemonLight **)((int)g_SpotLightList + iVar7);
        core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0(this_ptr_01);
        core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(this_ptr_01,1);
        core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_00472e40(this_ptr_01);
        core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0(this_ptr,1);
        core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_00472f30(this_ptr_01);
        core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(this_ptr_01,0);
        core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(this_ptr_01);
        if (this_ptr->cameras[index].is_panning == 0) {
          core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044de10
                    (&g_CDemonCameraInstance,this_ptr_01,rect);
        }
        iVar7 = iVar7 + 4;
        iVar5 = iVar5 + 1;
        rect = rect + 1;
      } while (iVar5 < g_SpotLightCount);
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
  local_30.x = g_CDemonCameraInstance.base.position.f.x;
  local_30.y = g_CDemonCameraInstance.base.position.f.y;
  local_30.z = g_CDemonCameraInstance.base.position.f.z;
  if (&local_48 != &local_30) {
    local_48.x = g_CDemonCameraInstance.base.position.f.x;
    local_48.y = g_CDemonCameraInstance.base.position.f.y;
    local_48.z = g_CDemonCameraInstance.base.position.f.z;
  }
  local_ac.m[0].x = g_CDemonCameraInstance.base.rotation_matrix.m[0].x;
  local_ac.m[0].y = g_CDemonCameraInstance.base.rotation_matrix.m[0].y;
  local_ac.m[0].z = g_CDemonCameraInstance.base.rotation_matrix.m[0].z;
  local_ac.m[1].x = g_CDemonCameraInstance.base.rotation_matrix.m[1].x;
  local_ac.m[1].y = g_CDemonCameraInstance.base.rotation_matrix.m[1].y;
  local_ac.m[1].z = g_CDemonCameraInstance.base.rotation_matrix.m[1].z;
  local_ac.m[2].x = g_CDemonCameraInstance.base.rotation_matrix.m[2].x;
  local_ac.m[2].y = g_CDemonCameraInstance.base.rotation_matrix.m[2].y;
  local_ac.m[2].z = g_CDemonCameraInstance.base.rotation_matrix.m[2].z;
  pCVar5 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(&local_ac,&local_60);
  if (&local_3c != pCVar5) {
    local_3c.x = pCVar5->x;
    local_3c.y = pCVar5->y;
    local_3c.z = pCVar5->z;
  }
  core_weather_cpp_CWeather_setOriginAndRotation_FUN_005ef940(g_CWeatherPtr,&local_48,&local_3c);
  iVar5 = 0;
  pCVar8 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      iVar5 = iVar5 + 1;
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0056ade0(this_ptr,pCVar8->actors[0]);
      pCVar8 = (CDemonSet *)pCVar8->cameras;
    } while (iVar5 < this_ptr->actor_count);
  }
  local_14 = 0;
  if (0 < this_ptr->actor_count) {
    local_18 = this_ptr;
    do {
      this_ptr_00 = local_18->actors[0];
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
      local_18 = (CDemonSet *)local_18->cameras;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->actor_count);
  }
  g_RenderingShadows = 1;
  return;
}
