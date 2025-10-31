// Name: core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
// Address: 0056ae50
// Address Range: [[0056ae50, 0056b789]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db5e4 [UNCONDITIONAL_CALL]
//   core_game.cpp_KeypressesAndCGame_FUN_004dc3e0 (004dc3e0) at 004dcca5 [UNCONDITIONAL_CALL]
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd416 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e304 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a9a9 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055da68 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0 (0056b7e0) at 0056b7fe [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_00570c70 (00570c70) at 00570c84 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 (005751d0) at 00575209 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_BackdropMaybe_FUN_005805a0 (005805a0) at 00580675 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057aeb7 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f52e [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581320 (00581320) at 005813ad [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_set_cpp_00645c3b
//   TerminatedCString s_CDemonSet_setCameraView__00645c4b
//   TerminatedCString s_s_raw_00645c78
//   TerminatedCString s_core_set_cpp_00645c7f
//   TerminatedCString s_CDemonSet_setCameraView__00645c8f
//   float FLOAT_00662850 = 256
//   SMRGLTextureBasic* g_SkyDomeTexturePtr = 02ca0148
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGore* g_CGorePtr = 02d83364
//   CSound* g_CSoundPtr = 03f6af64
//   CWater* g_CWaterPtr = 03f875e0
//   CWeather* g_CWeatherPtr = 03f95dc0
//   SMRGLTextureBasic g_SkyDomeTextureData
//   int g_UseExternalRenderer
//   float g_PerspectiveReciprocal
//   CFireEffect g_CFireEffectInstance
//   CGore g_CGoreInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonCamera g_CDemonCameraInstance
//   undefined4 DAT_032758e8
//   undefined4 g_CDemonCameraInstance.base.position.y
//   undefined4 g_CDemonCameraInstance.base.position.z
//   undefined4 g_CDemonCameraInstance.base.rotation_matrix.m[0][0]
//   undefined4 DAT_032758f8
//   CDemonLight*[96] g_MasterLightList
//   int g_ActiveLightCount
//   CDemonLight*[96] g_ActiveLightList
//   undefined4 DAT_03276f38
//   CRect DAT_032770b4
//   undefined4 DAT_032770bc
//   undefined4 DAT_032770c0
//   int g_DynamicLightCount
//   CDemonLight*[4] g_DynamicLights
//   undefined4 DAT_032776bc
//   int g_CoronaGlobeCount
//   undefined4 DAT_0327785c
//   CDemonRaytrace g_CDemonRaytraceInstance
//   undefined4 DAT_03277d80
//   undefined4 DAT_03277d84
//   undefined4 DAT_03277d88
//   undefined4 DAT_032bd77c
//   undefined4 DAT_032bd790
//   CSound g_CSoundInstance
//   CWater g_CWaterInstance
//   CWeather g_CWeatherInstance
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640
//   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0
//   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10
//   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360
//   core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0
//   core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450
//   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0
//   core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00472e40
//   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80
//   core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00472f30
//   core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
//   core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50
//   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
//   core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0
//   core_dskybox.cpp_renderSkyDome_FUN_004901f0
//   core_fire.cpp_CFireEffect_FUN_004c74a0
//   core_gore.cpp_FUN_004ed830
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_FUN_0056aca0
//   core_set.cpp_CDemonSet_FUN_0056ade0
//   core_set.cpp_CDemonSet_FUN_0056be80
//   core_set.cpp_CDemonSet_FUN_0056fbd0
//   core_set.cpp_CDemonSet_process_FUN_0056f940
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   core_setutil.cpp_C3DSCamera_apply_FUN_00585870
//   core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0
//   core_water.cpp_CWater_render_FUN_005ea320
//   core_weather.cpp_CWeather_FUN_005ef940
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet *this_ptr,int index)

{
  char *pcVar1;
  float fVar2;
  CDemonActor *this_ptr_00;
  CDemonLight *this_ptr_01;
  int iVar3;
  CVector3f *pCVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  CDemonSet *pCVar6;
  CRect *rect;
  int iVar7;
  CMatrix3x3i *pCVar8;
  float *pfVar9;
  uint corner_index;
  SFog *pSVar10;
  int iVar11;
  char *pcVar12;
  CMatrix3x3f *pCVar13;
  int *piVar14;
  C3DSCamera *this_ptr_02;
  undefined4 *puVar15;
  undefined4 *puVar16;
  byte bVar17;
  CDemonSet *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  CDemonSet *in_stack_00000018;
  CDemonSet *in_stack_0000001c;
  CDemonSet *in_stack_00000020;
  CDemonSet *in_stack_00000028;
  CDemonSet *in_stack_0000004c;
  char acStack_f4 [4];
  char acStack_f0 [44];
  float afStack_c4 [10];
  CMatrix3x3f CStack_9c;
  undefined1 auStack_6c [28];
  CVector3f CStack_50;
  CVector3f local_40;
  int local_34;
  int local_30;
  CVector3f local_28;
  C3DSLight *local_1c;
  float local_18;
  
  bVar17 = 0;
  if ((index < 0) || (this_ptr->camera_count <= index)) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 0x416;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::setCameraView - invalid index: %d",index);
  }
  iVar5 = 0;
  if (0 < g_DynamicLightCount) {
    iVar7 = 0;
    do {
      puVar15 = (undefined4 *)((int)g_DynamicLights + iVar7);
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80((CDemonLight *)*puVar15);
    } while (iVar5 < g_DynamicLightCount);
  }
  iVar5 = 0;
  if (0 < g_ActiveLightCount) {
    iVar7 = 0;
    do {
      puVar15 = (undefined4 *)((int)g_ActiveLightList + iVar7);
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80((CDemonLight *)*puVar15);
    } while (iVar5 < g_ActiveLightCount);
  }
  iVar5 = 0;
  if (0 < g_ActiveLightCount) {
    iVar7 = 0;
    do {
      puVar15 = (undefined4 *)((int)g_ActiveLightList + iVar7);
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50((CDemonLight *)*puVar15);
    } while (iVar5 < g_ActiveLightCount);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_004729c0();
  iVar5 = in_stack_0000000c->selected_camera_index;
  in_stack_0000000c->previous_best_camera_timer = 3.0;
  in_stack_0000000c->field22_0x15ac80[0] = '\x01';
  in_stack_0000000c->field22_0x15ac80[1] = '\0';
  in_stack_0000000c->field22_0x15ac80[2] = '\0';
  in_stack_0000000c->field22_0x15ac80[3] = '\0';
  iVar7 = 0;
  in_stack_0000000c->field64_0x15f6e0[0] = '\x01';
  in_stack_0000000c->field64_0x15f6e0[1] = '\0';
  in_stack_0000000c->field64_0x15f6e0[2] = '\0';
  in_stack_0000000c->field64_0x15f6e0[3] = '\0';
  g_ActiveLightCount = 0;
  in_stack_0000000c->previous_best_camera_index = iVar5;
  DAT_03277d80 = 0;
  in_stack_0000000c->selected_camera_index = in_stack_00000010;
  g_CoronaGlobeCount = 0;
  DAT_0327785c = 0;
  if (0 < (int)in_stack_0000000c->actor_list_ptr) {
    do {
      iVar7 = iVar7 + 1;
      core_set_cpp_CDemonSet_FUN_0056ade0(in_stack_0000000c);
    } while (iVar7 < (int)in_stack_0000000c->actor_list_ptr);
  }
  if (in_stack_0000000c->cameras[in_stack_00000010].is_panning == 0) {
    this_ptr_02 = in_stack_0000000c->cameras + in_stack_00000010;
    core_setutil_cpp_C3DSCamera_apply_FUN_00585870(this_ptr_02,&g_CDemonCameraInstance);
    if (in_stack_0000000c->cameras[in_stack_00000010].fog_enabled == 0) {
      pSVar10 = &this_ptr_02->fog;
      *(int *)(in_stack_00000010 + 0x15ac54) = (pSVar10->color_index).r;
      iVar5 = (this_ptr_02->fog).color_index.g;
    }
    else {
      *(int *)(in_stack_00000010 + 0x15ac54) = *(int *)(in_stack_00000010 + 0x15ac30);
      iVar5 = *(int *)(in_stack_00000010 + 0x15ac34);
      pSVar10 = (SFog *)(in_stack_00000010 + 0x15ac30);
    }
    *(int *)(in_stack_00000010 + 0x15ac58) = iVar5;
    *(int *)(in_stack_00000010 + 0x15ac5c) = (pSVar10->color_index).b;
    if ((CVector3f *)(in_stack_00000010 + 0x15ac60) != &pSVar10->scroll) {
      *(float *)(in_stack_00000010 + 0x15ac60) = (pSVar10->scroll).x;
      *(float *)(in_stack_00000010 + 0x15ac64) = (pSVar10->scroll).y;
      *(float *)(in_stack_00000010 + 0x15ac68) = (pSVar10->scroll).z;
    }
    *(float *)(in_stack_00000010 + 0x15ac6c) = pSVar10->height_threshold;
    *(float *)(in_stack_00000010 + 0x15ac70) = pSVar10->density_multiplier;
    *(float *)(in_stack_00000010 + 0x15ac74) = pSVar10->reserved;
    core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00453640
              (&g_CDemonCameraInstance,(SFog *)(in_stack_00000010 + 0x15ac54));
    g_CDemonRaytraceInstance.rendering_mode = 0;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(&g_CDemonCameraInstance);
    core_set_cpp_CDemonSet_FUN_0056fbd0(in_stack_0000001c);
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(in_stack_00000020,9999.9,1);
    core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450(&g_CDemonCameraInstance);
    DAT_032bd77c = 1;
    core_set_cpp_CDemonSet_FUN_0056aca0(in_stack_00000028);
    DAT_032bd77c = 0;
    core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360(&g_CDemonCameraInstance);
    core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0(&g_CDemonCameraInstance);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_f4,"%s.raw");
    core_dcamera_cpp_CDemonCamera_loadImage_FUN_0044f3e0(&g_CDemonCameraInstance,acStack_f0);
    core_set_cpp_CDemonSet_FUN_0056aca0(in_stack_00000028);
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(&g_CDemonCameraInstance,0);
    if (g_UseExternalRenderer != 0) {
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(in_stack_00000028,9999.9,0);
      if (g_CWaterPtr->wave_animation_enabled == 0) {
        core_water_cpp_CWater_render_FUN_005ea320(g_CWaterPtr,0);
      }
      core_set_cpp_CDemonSet_FUN_0056aca0(in_stack_0000004c);
    }
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
  }
  if (*(int *)(in_stack_0000000c->field22_0x15ac80 + 4) == 0) {
    iVar5 = 0;
    if (0 < in_stack_0000000c->light_count) {
      local_18 = (float)(in_stack_00000010 << 4);
      local_1c = in_stack_0000000c->lights;
      pCVar6 = in_stack_0000000c;
      iVar7 = 0;
      do {
        if ((pCVar6->lights[0].light_type == 1) &&
           (pCVar6->lights[0].visible_flags[in_stack_00000010] != '\0')) {
          iVar11 = DAT_03277d80 + 1;
          piVar14 = &DAT_03277d84 + DAT_03277d80;
          DAT_03277d80 = iVar11;
          *piVar14 = (int)(local_1c + iVar5);
          if (199 < iVar11) {
            g_CurrentFilename = "..\\core\\set.cpp";
            g_CurrentLineNumber = 0x4a0;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::setCameraView - Too many omni lights");
          }
        }
        iVar3 = g_ActiveLightCount;
        iVar11 = iVar7;
        if ((pCVar6->lights[0].light_type == 0) &&
           (iVar11 = iVar7 + 1, pCVar6->lights[0].visible_flags[in_stack_00000010] != '\0')) {
          g_ActiveLightList[g_ActiveLightCount] = g_MasterLightList[iVar7];
          pcVar1 = pCVar6->lights[0].field8_0x21e + (int)local_18 + 6;
          puVar15 = (undefined4 *)(iVar3 * 0x10 + 0x32770b8 + (uint)bVar17 * -8);
          pcVar12 = pcVar1 + ((uint)bVar17 * -2 + 1) * 4;
          (&DAT_032770b4)[iVar3].left = *(int *)pcVar1;
          puVar16 = puVar15 + (uint)bVar17 * -2 + 1;
          *puVar15 = *(undefined4 *)pcVar12;
          *puVar16 = *(undefined4 *)(pcVar12 + ((uint)bVar17 * -2 + 1) * 4);
          puVar16[(uint)bVar17 * -2 + 1] =
               *(undefined4 *)(pcVar12 + ((uint)bVar17 * -2 + 1) * 4 + ((uint)bVar17 * -2 + 1) * 4);
          g_ActiveLightCount = g_ActiveLightCount + 1;
        }
        iVar5 = iVar5 + 1;
        pCVar6 = (CDemonSet *)&pCVar6->cameras[0xe].field16_0x19c;
        iVar7 = iVar11;
      } while (iVar5 < in_stack_0000000c->light_count);
    }
    iVar5 = 0;
    core_set_cpp_CDemonSet_process_FUN_0056f940(in_stack_0000000c);
    if (0 < g_ActiveLightCount) {
      rect = &DAT_032770b4;
      iVar7 = 0;
      do {
        this_ptr_01 = *(CDemonLight **)((int)g_ActiveLightList + iVar7);
        core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0(this_ptr_01);
        core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(this_ptr_01,1);
        core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_00472e40(this_ptr_01);
        core_set_cpp_CDemonSet_FUN_0056aca0(in_stack_0000001c);
        core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_00472f30(this_ptr_01);
        core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(this_ptr_01);
        core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(this_ptr_01);
        if (in_stack_0000000c->cameras[0].is_panning == 0) {
          core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044de10
                    (&g_CDemonCameraInstance,this_ptr_01,rect);
        }
        iVar7 = iVar7 + 4;
        iVar5 = iVar5 + 1;
        rect = rect + 1;
      } while (iVar5 < g_ActiveLightCount);
    }
  }
  in_stack_0000000c->field22_0x15ac80[0] = '\0';
  in_stack_0000000c->field22_0x15ac80[1] = '\0';
  in_stack_0000000c->field22_0x15ac80[2] = '\0';
  in_stack_0000000c->field22_0x15ac80[3] = '\0';
  fVar2 = (float)in_stack_0000000c->cameras[in_stack_00000010].is_panning;
  if (fVar2 == 0.0) {
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(&g_CDemonCameraInstance);
    g_PerspectiveReciprocal = fVar2;
    if (in_stack_0000000c->has_sky != 0) {
      core_dskybox_cpp_renderSkyDome_FUN_004901f0
                (g_SkyDomeTexturePtr,in_stack_0000000c->sky_texture_name,
                 (float)in_stack_0000000c->sky_type);
    }
    core_set_cpp_CDemonSet_FUN_0056aca0(in_stack_00000018);
    core_gore_cpp_FUN_004ed830(g_CGorePtr);
    core_fire_cpp_CFireEffect_FUN_004c74a0(g_CFireEffectPtr);
    if (g_CWaterPtr->wave_animation_enabled == 0) {
      core_water_cpp_CWater_render_FUN_005ea320(g_CWaterPtr,0);
    }
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
  }
  in_stack_0000000c->field64_0x15f6e0[0] = '\0';
  in_stack_0000000c->field64_0x15f6e0[1] = '\0';
  in_stack_0000000c->field64_0x15f6e0[2] = '\0';
  in_stack_0000000c->field64_0x15f6e0[3] = '\0';
  core_set_cpp_CDemonSet_FUN_0056be80(in_stack_0000000c);
  iVar5 = in_stack_00000014 * 0x1a4 + in_stack_00000010;
  if (*(int *)(iVar5 + 0x154) == 0) {
    iVar5 = *(int *)(iVar5 + 0x17c);
  }
  else {
    iVar5 = *(int *)(in_stack_00000010 + 0x15ac7c);
  }
  core_sound_cpp_CSound_setReverbPreset_FUN_005b3cc0(g_CSoundPtr,iVar5);
  local_28.z = (float)g_CDemonCameraInstance.base.position.x;
  local_1c = (C3DSLight *)g_CDemonCameraInstance.base.position.y;
  local_18 = (float)g_CDemonCameraInstance.base.position.z;
  if (&local_40.z != &local_28.z) {
    local_40.z = (float)g_CDemonCameraInstance.base.position.x;
    local_34 = g_CDemonCameraInstance.base.position.y;
    local_30 = g_CDemonCameraInstance.base.position.z;
  }
  pCVar8 = &g_CDemonCameraInstance.base.rotation_matrix;
  pfVar9 = afStack_c4;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar9 = (float)pCVar8->m[0][0];
    pCVar8 = (CMatrix3x3i *)((int)pCVar8 + ((uint)bVar17 * -2 + 1) * 4);
    pfVar9 = pfVar9 + (uint)bVar17 * -2 + 1;
  }
  pfVar9 = afStack_c4;
  pCVar13 = &CStack_9c;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    pCVar13->m[0].x = *pfVar9;
    pfVar9 = pfVar9 + (uint)bVar17 * -2 + 1;
    pCVar13 = (CMatrix3x3f *)((int)pCVar13 + ((uint)bVar17 * -2 + 1) * 4);
  }
  pCVar4 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(&CStack_9c,&CStack_50);
  if (&local_28 != pCVar4) {
    local_28.x = pCVar4->x;
    local_28.y = pCVar4->y;
    local_28.z = pCVar4->z;
  }
  core_weather_cpp_CWeather_FUN_005ef940();
  iVar5 = 0;
  if (0 < (int)in_stack_0000001c->actor_list_ptr) {
    do {
      iVar5 = iVar5 + 1;
      core_set_cpp_CDemonSet_FUN_0056ade0(in_stack_0000001c);
    } while (iVar5 < (int)in_stack_0000001c->actor_list_ptr);
  }
  this_ptr = (CDemonSet *)0x0;
  pCVar6 = in_stack_0000001c;
  if (0 < (int)in_stack_0000001c->actor_list_ptr) {
    do {
      this_ptr_00 = *(CDemonActor **)pCVar6->actor_list_data;
      if ((this_ptr_00->is_transparent != 0) || (this_ptr_00->field14_0xf8 != 0)) {
        corner_index = 0;
        (*((this_ptr_00->metadata).vtable)->getBoundingBox)
                  (this_ptr_00,(CBoundingBox3D *)auStack_6c);
        piVar14 = (int *)&stack0xfffffe94;
        do {
          core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                    ((CBoundingBox3D *)(auStack_6c + 0x14),&local_40,corner_index);
          core_actor_cpp_CDemonActor_FUN_00408ec0(this_ptr_00);
          corner_index = corner_index + 1;
          *piVar14 = (int)ROUND(local_28.z * FLOAT_00662850);
          piVar14[1] = (int)ROUND((float)local_1c * FLOAT_00662850);
          piVar14[2] = (int)ROUND(local_18 * FLOAT_00662850);
          piVar14 = piVar14 + 3;
        } while ((int)corner_index < 8);
      }
      this_ptr = (CDemonSet *)((int)&this_ptr->camera_count + 1);
      pCVar6 = (CDemonSet *)pCVar6->cameras;
    } while ((int)this_ptr < (int)in_stack_0000001c->actor_list_ptr);
  }
  DAT_032bd790 = 1;
  return;
}


// Assembly code:
// 0056ae50: PUSH EBX
//   Label: core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
// 0056ae51: PUSH ESI
// 0056ae52: PUSH EDI
// 0056ae53: PUSH EBP
// 0056ae54: SUB ESP,0x174
// 0056ae5a: MOV EDX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[0x8] (READ)
// 0056ae61: TEST EDX,EDX
// 0056ae63: JL 0x0056ae72
//   XREF to: 0056ae72 (CONDITIONAL_JUMP)
// 0056ae65: MOV EAX,EDX
// 0056ae67: MOV EDX,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056ae6e: CMP EAX,dword ptr [EDX]
// 0056ae70: JL 0x0056ae9d
//   XREF to: 0056ae9d (CONDITIONAL_JUMP)
// 0056ae72: MOV EDI,dword ptr [ESP + 0x18c]
//   Label: LAB_0056ae72
//   XREF to: Stack[0x8] (READ)
// 0056ae79: PUSH EDI
// 0056ae7a: MOV EBX,0x645c3b
//   XREF to: 00645c3b (PARAM)
// 0056ae7f: MOV ESI,0x416
// 0056ae84: PUSH 0x645c4b
//   XREF to: 00645c4b (DATA)
// 0056ae89: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0056ae8f: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0056ae95: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0056ae9a: ADD ESP,0x8
// 0056ae9d: MOV EBP,dword ptr [0x032776b4]
//   Label: LAB_0056ae9d
//   XREF to: 032776b4 (READ)
// 0056aea3: XOR EBX,EBX
// 0056aea5: TEST EBP,EBP
// 0056aea7: JLE 0x0056aed0
//   XREF to: 0056aed0 (CONDITIONAL_JUMP)
// 0056aea9: XOR ESI,ESI
// 0056aeab: MOV EAX,dword ptr [ESI + 0x32776b8]
//   Label: LAB_0056aeab
//   XREF to: 032776b8 (READ)
//   XREF to: 032776bc (READ)
// 0056aeb1: PUSH EAX
// 0056aeb2: ADD ESI,0x4
// 0056aeb5: INC EBX
// 0056aeb6: CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
//   XREF to: 00472f80 (UNCONDITIONAL_CALL)
// 0056aebb: MOV EDX,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056aec1: ADD ESP,0x4
// 0056aec4: CMP EBX,EDX
// 0056aec6: JL 0x0056aeab
//   XREF to: 0056aeab (CONDITIONAL_JUMP)
// 0056aec8: LEA EAX,[EAX]
// 0056aece: MOV EDX,EDX
// 0056aed0: MOV ECX,dword ptr [0x03276f30]
//   Label: LAB_0056aed0
//   XREF to: 03276f30 (READ)
// 0056aed6: XOR EBX,EBX
// 0056aed8: TEST ECX,ECX
// 0056aeda: JLE 0x0056af00
//   XREF to: 0056af00 (CONDITIONAL_JUMP)
// 0056aedc: XOR ESI,ESI
// 0056aede: MOV EDI,dword ptr [ESI + 0x3276f34]
//   Label: LAB_0056aede
//   XREF to: 03276f34 (READ)
//   XREF to: 03276f38 (READ)
// 0056aee4: PUSH EDI
// 0056aee5: ADD ESI,0x4
// 0056aee8: INC EBX
// 0056aee9: CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
//   XREF to: 00472f80 (UNCONDITIONAL_CALL)
// 0056aeee: MOV EBP,dword ptr [0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056aef4: ADD ESP,0x4
// 0056aef7: CMP EBX,EBP
// 0056aef9: JL 0x0056aede
//   XREF to: 0056aede (CONDITIONAL_JUMP)
// 0056aefb: LEA EAX,[EAX]
// 0056aefe: MOV ECX,ECX
// 0056af00: MOV EAX,[0x03276f30]
//   Label: LAB_0056af00
//   XREF to: 03276f30 (READ)
// 0056af05: XOR EBX,EBX
// 0056af07: TEST EAX,EAX
// 0056af09: JLE 0x0056af30
//   XREF to: 0056af30 (CONDITIONAL_JUMP)
// 0056af0b: XOR ESI,ESI
// 0056af0d: MOV EDX,dword ptr [ESI + 0x3276f34]
//   Label: LAB_0056af0d
//   XREF to: 03276f34 (READ)
//   XREF to: 03276f38 (READ)
// 0056af13: PUSH EDX
// 0056af14: ADD ESI,0x4
// 0056af17: INC EBX
// 0056af18: CALL core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50
//   XREF to: 00472a50 (UNCONDITIONAL_CALL)
// 0056af1d: MOV ECX,dword ptr [0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056af23: ADD ESP,0x4
// 0056af26: CMP EBX,ECX
// 0056af28: JL 0x0056af0d
//   XREF to: 0056af0d (CONDITIONAL_JUMP)
// 0056af2a: LEA EAX,[EAX]
// 0056af30: CALL core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0
//   Label: LAB_0056af30
//   XREF to: 004729c0 (UNCONDITIONAL_CALL)
// 0056af35: MOV EAX,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056af3c: MOV EDX,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056af43: MOV EAX,dword ptr [EAX + 0x15aea4]
// 0056af49: MOV dword ptr [EDX + 0x15aeac],0x40400000
// 0056af53: MOV dword ptr [EDX + 0x15ac80],0x1
// 0056af5d: XOR EBX,EBX
// 0056af5f: MOV dword ptr [EDX + 0x15f6e0],0x1
// 0056af69: MOV dword ptr [0x03276f30],EBX
//   XREF to: 03276f30 (WRITE)
// 0056af6f: MOV dword ptr [EDX + 0x15aea8],EAX
// 0056af75: MOV EAX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[0x8] (READ)
// 0056af7c: MOV dword ptr [0x03277d80],EBX
//   XREF to: 03277d80 (WRITE)
// 0056af82: MOV dword ptr [EDX + 0x15aea4],EAX
// 0056af88: MOV dword ptr [0x032776c8],EBX
//   XREF to: 032776c8 (WRITE)
// 0056af8e: MOV EDX,dword ptr [EDX + 0x14d154]
// 0056af94: MOV dword ptr [0x0327785c],EBX
//   XREF to: 0327785c (WRITE)
// 0056af9a: TEST EDX,EDX
// 0056af9c: JLE 0x0056afd0
//   XREF to: 0056afd0 (CONDITIONAL_JUMP)
// 0056af9e: MOV ESI,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056afa5: MOV EDI,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056afac: MOV ECX,dword ptr [ESI + 0x14d158]
//   Label: LAB_0056afac
// 0056afb2: PUSH ECX
// 0056afb3: PUSH EDI
// 0056afb4: ADD ESI,0x4
// 0056afb7: INC EBX
// 0056afb8: CALL core_set.cpp_CDemonSet_FUN_0056ade0
//   XREF to: 0056ade0 (UNCONDITIONAL_CALL)
// 0056afbd: MOV EBP,dword ptr [EDI + 0x14d154]
// 0056afc3: ADD ESP,0x8
// 0056afc6: CMP EBX,EBP
// 0056afc8: JL 0x0056afac
//   XREF to: 0056afac (CONDITIONAL_JUMP)
// 0056afca: LEA EAX,[EAX]
// 0056afd0: IMUL EAX,dword ptr [ESP + 0x18c],0x1a4
//   Label: LAB_0056afd0
//   XREF to: Stack[0x8] (READ)
// 0056afdb: MOV ESI,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056afe2: ADD ESI,EAX
// 0056afe4: CMP dword ptr [ESI + 0x144],0x0
// 0056afeb: JZ 0x0056b2cc
//   XREF to: 0056b2cc (CONDITIONAL_JUMP)
// 0056aff1: MOV EAX,dword ptr [ESP + 0x188]
//   Label: LAB_0056aff1
//   XREF to: Stack[0x4] (READ)
// 0056aff8: CMP dword ptr [EAX + 0x15ac84],0x0
// 0056afff: JZ 0x0056b4c3
//   XREF to: 0056b4c3 (CONDITIONAL_JUMP)
// 0056b005: MOV EAX,dword ptr [ESP + 0x188]
//   Label: LAB_0056b005
//   XREF to: Stack[0x4] (READ)
// 0056b00c: MOV ECX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[0x8] (READ)
// 0056b013: MOV dword ptr [EAX + 0x15ac80],0x0
// 0056b01d: IMUL EAX,ECX,0x1a4
// 0056b023: MOV EBX,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056b02a: ADD EAX,EBX
// 0056b02c: MOV ESI,dword ptr [EAX + 0x144]
// 0056b032: TEST ESI,ESI
// 0056b034: JZ 0x0056b6be
//   XREF to: 0056b6be (CONDITIONAL_JUMP)
// 0056b03a: MOV EAX,dword ptr [ESP + 0x188]
//   Label: LAB_0056b03a
//   XREF to: Stack[0x4] (READ)
// 0056b041: PUSH EAX
// 0056b042: MOV dword ptr [EAX + 0x15f6e0],0x0
// 0056b04c: CALL core_set.cpp_CDemonSet_FUN_0056be80
//   XREF to: 0056be80 (UNCONDITIONAL_CALL)
// 0056b051: ADD ESP,0x4
// 0056b054: IMUL EAX,dword ptr [ESP + 0x18c],0x1a4
//   XREF to: Stack[0x8] (READ)
// 0056b05f: MOV ECX,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056b066: ADD EAX,ECX
// 0056b068: CMP dword ptr [EAX + 0x154],0x0
// 0056b06f: JZ 0x0056b777
//   XREF to: 0056b777 (CONDITIONAL_JUMP)
// 0056b075: MOV EBP,dword ptr [ECX + 0x15ac7c]
// 0056b07b: PUSH EBP
// 0056b07c: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 0056b081: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 0056b082: CALL core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0
//   Label: LAB_0056b082
//   XREF to: 005b3cc0 (UNCONDITIONAL_CALL)
// 0056b087: ADD ESP,0x8
// 0056b08a: MOV EAX,[0x032758e8]
//   XREF to: 032758e8 (READ)
// 0056b08f: MOV dword ptr [ESP + 0x154],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0056b096: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 0056b09b: MOV EAX,dword ptr [EAX + 0x4]
//   XREF to: 032758ec (READ)
// 0056b09e: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0056b0a5: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 0056b0aa: MOV EAX,dword ptr [EAX + 0x8]
//   XREF to: 032758f0 (READ)
// 0056b0ad: LEA EDX,[ESP + 0x13c]
//   XREF to: Stack[-0x48] (DATA)
// 0056b0b4: MOV dword ptr [ESP + 0x15c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0056b0bb: LEA EAX,[ESP + 0x154]
//   XREF to: Stack[-0x30] (DATA)
// 0056b0c2: CMP EDX,EAX
// 0056b0c4: JZ 0x0056b0f0
//   XREF to: 0056b0f0 (CONDITIONAL_JUMP)
// 0056b0c6: MOV EAX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x30] (DATA)
// 0056b0cd: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0056b0d4: MOV EAX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x2c] (READ)
// 0056b0db: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0056b0e2: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x28] (READ)
// 0056b0e9: MOV dword ptr [ESP + 0x144],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0056b0f0: MOV ECX,0xa
//   Label: LAB_0056b0f0
// 0056b0f5: LEA EDI,[ESP + 0xb0]
//   XREF to: Stack[-0xd4] (DATA)
// 0056b0fc: MOV ESI,0x32758f4
//   XREF to: 032758f4 (DATA)
// 0056b101: LEA EAX,[ESP + 0x124]
//   XREF to: Stack[-0x60] (DATA)
// 0056b108: MOVSD.REP ES:EDI,ESI
//   XREF to: 032758f4 (READ)
//   XREF to: 032758f8 (READ)
// 0056b10a: PUSH EAX
// 0056b10b: MOV ECX,0xa
// 0056b110: LEA EDI,[ESP + 0xdc]
//   XREF to: Stack[-0xac] (DATA)
// 0056b117: LEA EAX,[ESP + 0xdc]
//   XREF to: Stack[-0xac] (DATA)
// 0056b11e: LEA ESI,[ESP + 0xb4]
//   XREF to: Stack[-0xd4] (DATA)
// 0056b125: PUSH EAX
// 0056b126: MOVSD.REP ES:EDI,ESI
// 0056b128: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 0056b12d: MOV EBX,EAX
// 0056b12f: LEA EAX,[ESP + 0x150]
//   XREF to: Stack[-0x3c] (DATA)
// 0056b136: ADD ESP,0x8
// 0056b139: CMP EAX,EBX
// 0056b13b: JZ 0x0056b15a
//   XREF to: 0056b15a (CONDITIONAL_JUMP)
// 0056b13d: MOV EAX,dword ptr [EBX]
// 0056b13f: MOV dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0056b146: MOV EAX,dword ptr [EBX + 0x4]
// 0056b149: MOV dword ptr [ESP + 0x14c],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0056b150: MOV EAX,dword ptr [EBX + 0x8]
// 0056b153: MOV dword ptr [ESP + 0x150],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0056b15a: LEA EAX,[ESP + 0x148]
//   Label: LAB_0056b15a
//   XREF to: Stack[-0x3c] (DATA)
// 0056b161: PUSH EAX
// 0056b162: LEA EAX,[ESP + 0x140]
//   XREF to: Stack[-0x48] (DATA)
// 0056b169: PUSH EAX
// 0056b16a: MOV EDX,dword ptr [0x006848fc]
//   XREF to: 03f95dc0 (PARAM)
//   XREF to: 006848fc (READ)
// 0056b170: PUSH EDX
//   XREF to: 03f95dc0 (DATA)
// 0056b171: CALL core_weather.cpp_CWeather_FUN_005ef940
//   XREF to: 005ef940 (UNCONDITIONAL_CALL)
// 0056b176: ADD ESP,0xc
// 0056b179: MOV EAX,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056b180: MOV ECX,dword ptr [EAX + 0x14d154]
// 0056b186: XOR EBX,EBX
// 0056b188: TEST ECX,ECX
// 0056b18a: JLE 0x0056b1c0
//   XREF to: 0056b1c0 (CONDITIONAL_JUMP)
// 0056b18c: MOV EBP,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056b193: MOV ESI,EAX
// 0056b195: MOV EDI,dword ptr [ESI + 0x14d158]
//   Label: LAB_0056b195
// 0056b19b: PUSH EDI
// 0056b19c: PUSH EBP
// 0056b19d: ADD ESI,0x4
// 0056b1a0: INC EBX
// 0056b1a1: CALL core_set.cpp_CDemonSet_FUN_0056ade0
//   XREF to: 0056ade0 (UNCONDITIONAL_CALL)
// 0056b1a6: MOV EDX,dword ptr [EBP + 0x14d154]
// 0056b1ac: ADD ESP,0x8
// 0056b1af: CMP EBX,EDX
// 0056b1b1: JL 0x0056b195
//   XREF to: 0056b195 (CONDITIONAL_JUMP)
// 0056b1b3: LEA EAX,[EAX]
// 0056b1b9: LEA EDX,[EDX]
// 0056b1bf: NOP
// 0056b1c0: MOV EAX,dword ptr [ESP + 0x188]
//   Label: LAB_0056b1c0
//   XREF to: Stack[0x4] (READ)
// 0056b1c7: XOR ECX,ECX
// 0056b1c9: MOV EBX,dword ptr [EAX + 0x14d154]
// 0056b1cf: MOV dword ptr [ESP + 0x170],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0056b1d6: TEST EBX,EBX
// 0056b1d8: JLE 0x0056b2b7
//   XREF to: 0056b2b7 (CONDITIONAL_JUMP)
// 0056b1de: MOV dword ptr [ESP + 0x16c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0056b1e5: MOV EBP,dword ptr [ESP + 0x16c]
//   Label: LAB_0056b1e5
//   XREF to: Stack[-0x18] (READ)
// 0056b1ec: MOV EBP,dword ptr [EBP + 0x14d158]
// 0056b1f2: CMP dword ptr [EBP + 0xfc],0x0
// 0056b1f9: JNZ 0x0056b208
//   XREF to: 0056b208 (CONDITIONAL_JUMP)
// 0056b1fb: CMP dword ptr [EBP + 0xf8],0x0
// 0056b202: JZ 0x0056b282
//   XREF to: 0056b282 (CONDITIONAL_JUMP)
// 0056b208: LEA EBX,[ESP + 0x100]
//   Label: LAB_0056b208
//   XREF to: Stack[-0x84] (DATA)
// 0056b20f: PUSH EBX
// 0056b210: MOV EAX,dword ptr [EBP + 0x154]
// 0056b216: PUSH EBP
// 0056b217: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x184] (DATA)
// 0056b21b: XOR ESI,ESI
// 0056b21d: CALL dword ptr [EAX + 0x14]
// 0056b220: ADD ESP,0x8
// 0056b223: PUSH ESI
//   Label: LAB_0056b223
// 0056b224: LEA EAX,[ESP + 0x11c]
// 0056b22b: PUSH EAX
// 0056b22c: LEA EAX,[ESP + 0x108]
// 0056b233: PUSH EAX
// 0056b234: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 0056b239: ADD ESP,0xc
// 0056b23c: PUSH EAX
// 0056b23d: LEA EAX,[ESP + 0x134]
// 0056b244: PUSH EAX
// 0056b245: PUSH EBP
// 0056b246: MOV EBX,EDI
// 0056b248: ADD EDI,0xc
// 0056b24b: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0056b250: ADD ESP,0xc
// 0056b253: LEA EAX,[ESP + 0x130]
// 0056b25a: INC ESI
// 0056b25b: FLD float ptr [EAX]
// 0056b25d: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 0056b263: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x184] (DATA)
// 0056b265: FLD float ptr [EAX + 0x4]
// 0056b268: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 0056b26e: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x180] (WRITE)
// 0056b271: FLD float ptr [EAX + 0x8]
// 0056b274: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 0056b27a: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x17c] (WRITE)
// 0056b27d: CMP ESI,0x8
// 0056b280: JL 0x0056b223
//   XREF to: 0056b223 (CONDITIONAL_JUMP)
// 0056b282: MOV ESI,dword ptr [ESP + 0x16c]
//   Label: LAB_0056b282
//   XREF to: Stack[-0x18] (READ)
// 0056b289: MOV EDI,dword ptr [ESP + 0x170]
//   XREF to: Stack[-0x14] (READ)
// 0056b290: MOV EDX,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056b297: ADD ESI,0x4
// 0056b29a: INC EDI
// 0056b29b: MOV EBP,dword ptr [EDX + 0x14d154]
// 0056b2a1: MOV dword ptr [ESP + 0x16c],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0056b2a8: MOV dword ptr [ESP + 0x170],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0056b2af: CMP EDI,EBP
// 0056b2b1: JL 0x0056b1e5
//   XREF to: 0056b1e5 (CONDITIONAL_JUMP)
// 0056b2b7: MOV dword ptr [0x032bd790],0x1
//   Label: LAB_0056b2b7
//   XREF to: 032bd790 (WRITE)
// 0056b2c1: ADD ESP,0x174
// 0056b2c7: POP EBP
// 0056b2c8: POP EDI
// 0056b2c9: POP ESI
// 0056b2ca: POP EBX
// 0056b2cb: RET
// 0056b2cc: MOV EDI,dword ptr [ESP + 0x188]
//   Label: LAB_0056b2cc
//   XREF to: Stack[0x4] (READ)
// 0056b2d3: ADD EDI,0x4
// 0056b2d6: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056b2db: ADD EDI,EAX
// 0056b2dd: PUSH EDI
// 0056b2de: CALL core_setutil.cpp_C3DSCamera_apply_FUN_00585870
//   XREF to: 00585870 (UNCONDITIONAL_CALL)
// 0056b2e3: ADD ESP,0x8
// 0056b2e6: MOV EBP,dword ptr [ESI + 0x154]
// 0056b2ec: MOV EBX,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056b2f3: MOV EAX,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056b2fa: ADD EBX,0x15ac54
// 0056b300: ADD EAX,0x15ac60
// 0056b305: TEST EBP,EBP
// 0056b307: JZ 0x0056b4af
//   XREF to: 0056b4af (CONDITIONAL_JUMP)
// 0056b30d: MOV ESI,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056b314: MOV EDX,dword ptr [ESI + 0x15ac30]
// 0056b31a: MOV dword ptr [EBX],EDX
// 0056b31c: MOV EDI,EBX
// 0056b31e: MOV EDX,dword ptr [ESI + 0x15ac34]
// 0056b324: ADD ESI,0x15ac30
// 0056b32a: MOV dword ptr [EBX + 0x4],EDX
//   Label: LAB_0056b32a
// 0056b32d: MOV EBP,ESI
// 0056b32f: MOV EDX,dword ptr [ESI + 0x8]
// 0056b332: ADD ESI,0xc
// 0056b335: MOV dword ptr [EBX + 0x8],EDX
// 0056b338: CMP EAX,ESI
// 0056b33a: JZ 0x0056b34c
//   XREF to: 0056b34c (CONDITIONAL_JUMP)
// 0056b33c: MOV EDX,dword ptr [ESI]
// 0056b33e: MOV dword ptr [EAX],EDX
// 0056b340: MOV EDX,dword ptr [ESI + 0x4]
// 0056b343: MOV dword ptr [EAX + 0x4],EDX
// 0056b346: MOV EDX,dword ptr [ESI + 0x8]
// 0056b349: MOV dword ptr [EAX + 0x8],EDX
// 0056b34c: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0056b34c
// 0056b34f: MOV dword ptr [EDI + 0x18],EAX
// 0056b352: MOV EAX,dword ptr [EBP + 0x1c]
// 0056b355: MOV dword ptr [EDI + 0x1c],EAX
// 0056b358: MOV EAX,dword ptr [EBP + 0x20]
// 0056b35b: MOV dword ptr [EDI + 0x20],EAX
// 0056b35e: MOV EAX,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056b365: ADD EAX,0x15ac54
// 0056b36a: PUSH EAX
// 0056b36b: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056b370: CALL core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640
//   XREF to: 00453640 (UNCONDITIONAL_CALL)
// 0056b375: ADD ESP,0x8
// 0056b378: XOR EAX,EAX
// 0056b37a: PUSH EAX
// 0056b37b: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056b380: MOV [0x03277d14],EAX
//   XREF to: 03277d14 (WRITE)
// 0056b385: CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   XREF to: 0044c430 (UNCONDITIONAL_CALL)
// 0056b38a: ADD ESP,0x8
// 0056b38d: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056b392: CALL core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70
//   XREF to: 0044cc70 (UNCONDITIONAL_CALL)
// 0056b397: ADD ESP,0x4
// 0056b39a: PUSH 0x10
// 0056b39c: MOV EDX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[0x4] (READ)
// 0056b3a3: PUSH EDX
// 0056b3a4: CALL core_set.cpp_CDemonSet_FUN_0056fbd0
//   XREF to: 0056fbd0 (UNCONDITIONAL_CALL)
// 0056b3a9: ADD ESP,0x8
// 0056b3ac: PUSH 0x1
// 0056b3ae: MOV ECX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[0x4] (READ)
// 0056b3b5: PUSH 0x461c3f9a
// 0056b3ba: PUSH ECX
// 0056b3bb: CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   XREF to: 0056a190 (UNCONDITIONAL_CALL)
// 0056b3c0: ADD ESP,0xc
// 0056b3c3: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056b3c8: CALL core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450
//   XREF to: 00454450 (UNCONDITIONAL_CALL)
// 0056b3cd: ADD ESP,0x4
// 0056b3d0: MOV EBX,0x1
// 0056b3d5: PUSH EBX
// 0056b3d6: MOV ESI,dword ptr [ESP + 0x18c]
//   XREF to: Stack[0x4] (READ)
// 0056b3dd: PUSH ESI
// 0056b3de: MOV dword ptr [0x032bd77c],EBX
//   XREF to: 032bd77c (WRITE)
// 0056b3e4: CALL core_set.cpp_CDemonSet_FUN_0056aca0
//   XREF to: 0056aca0 (UNCONDITIONAL_CALL)
// 0056b3e9: ADD ESP,0x8
// 0056b3ec: XOR EDI,EDI
// 0056b3ee: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056b3f3: MOV dword ptr [0x032bd77c],EDI
//   XREF to: 032bd77c (WRITE)
// 0056b3f9: CALL core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360
//   XREF to: 0044e360 (UNCONDITIONAL_CALL)
// 0056b3fe: ADD ESP,0x4
// 0056b401: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056b406: CALL core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0
//   XREF to: 004544a0 (UNCONDITIONAL_CALL)
// 0056b40b: ADD ESP,0x4
// 0056b40e: IMUL EAX,dword ptr [ESP + 0x18c],0x1a4
//   XREF to: Stack[0x8] (READ)
// 0056b419: LEA EDX,[ESI + 0x4]
// 0056b41c: ADD EAX,EDX
// 0056b41e: PUSH EAX
// 0056b41f: PUSH 0x645c78
//   XREF to: 00645c78 (DATA)
// 0056b424: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x124] (DATA)
// 0056b428: PUSH EAX
// 0056b429: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0056b42e: ADD ESP,0xc
// 0056b431: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x124] (DATA)
// 0056b435: PUSH EAX
// 0056b436: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056b43b: CALL core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0
//   XREF to: 0044f3e0 (UNCONDITIONAL_CALL)
// 0056b440: ADD ESP,0x8
// 0056b443: PUSH EBX
// 0056b444: PUSH ESI
// 0056b445: CALL core_set.cpp_CDemonSet_FUN_0056aca0
//   XREF to: 0056aca0 (UNCONDITIONAL_CALL)
// 0056b44a: ADD ESP,0x8
// 0056b44d: PUSH EDI
// 0056b44e: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056b453: CALL core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
//   XREF to: 0044cdf0 (UNCONDITIONAL_CALL)
// 0056b458: MOV EDX,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 0056b45e: ADD ESP,0x8
// 0056b461: TEST EDX,EDX
// 0056b463: JZ 0x0056b49b
//   XREF to: 0056b49b (CONDITIONAL_JUMP)
// 0056b465: PUSH EDI
// 0056b466: PUSH 0x461c3f9a
// 0056b46b: PUSH ESI
// 0056b46c: CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   XREF to: 0056a190 (UNCONDITIONAL_CALL)
// 0056b471: MOV EAX,[0x006844f0]
//   XREF to: 03f875e0 (PARAM)
//   XREF to: 006844f0 (READ)
// 0056b476: MOV EBX,dword ptr [EAX]
//   XREF to: 03f875e0 (READ)
// 0056b478: ADD ESP,0xc
// 0056b47b: TEST EBX,EBX
// 0056b47d: JNZ 0x0056b489
//   XREF to: 0056b489 (CONDITIONAL_JUMP)
// 0056b47f: PUSH EDI
// 0056b480: PUSH EAX
//   XREF to: 03f875e0 (DATA)
// 0056b481: CALL core_water.cpp_CWater_render_FUN_005ea320
//   XREF to: 005ea320 (UNCONDITIONAL_CALL)
// 0056b486: ADD ESP,0x8
// 0056b489: PUSH 0x1
//   Label: LAB_0056b489
// 0056b48b: MOV ESI,dword ptr [ESP + 0x18c]
//   XREF to: Stack[0x4] (READ)
// 0056b492: PUSH ESI
// 0056b493: CALL core_set.cpp_CDemonSet_FUN_0056aca0
//   XREF to: 0056aca0 (UNCONDITIONAL_CALL)
// 0056b498: ADD ESP,0x8
// 0056b49b: PUSH 0x0
//   Label: LAB_0056b49b
// 0056b49d: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056b4a2: CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
// 0056b4a7: ADD ESP,0x8
// 0056b4aa: JMP 0x0056aff1
//   XREF to: 0056aff1 (UNCONDITIONAL_JUMP)
// 0056b4af: LEA ESI,[EDI + 0x154]
//   Label: LAB_0056b4af
// 0056b4b5: MOV EDX,dword ptr [ESI]
// 0056b4b7: MOV dword ptr [EBX],EDX
// 0056b4b9: MOV EDX,dword ptr [ESI + 0x4]
// 0056b4bc: MOV EDI,EBX
// 0056b4be: JMP 0x0056b32a
//   XREF to: 0056b32a (UNCONDITIONAL_JUMP)
// 0056b4c3: MOV EBP,dword ptr [EAX + 0x19a2c]
//   Label: LAB_0056b4c3
// 0056b4c9: XOR EBX,EBX
// 0056b4cb: XOR ESI,ESI
// 0056b4cd: TEST EBP,EBP
// 0056b4cf: JLE 0x0056b591
//   XREF to: 0056b591 (CONDITIONAL_JUMP)
// 0056b4d5: MOV EAX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[0x8] (READ)
// 0056b4dc: SHL EAX,0x4
// 0056b4df: MOV dword ptr [ESP + 0x164],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0056b4e6: MOV EAX,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056b4ed: ADD EAX,0x19a30
// 0056b4f2: MOV EBP,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056b4f9: MOV dword ptr [ESP + 0x160],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0056b500: IMUL EDI,EBX,0x1898
//   Label: LAB_0056b500
// 0056b506: CMP dword ptr [EBP + 0x19a30],0x1
// 0056b50d: JNZ 0x0056b568
//   XREF to: 0056b568 (CONDITIONAL_JUMP)
// 0056b50f: MOV EAX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[0x8] (READ)
// 0056b516: CMP byte ptr [EAX + EBP*0x1 + 0x19b58],0x0
// 0056b51e: JZ 0x0056b568
//   XREF to: 0056b568 (CONDITIONAL_JUMP)
// 0056b520: MOV EAX,[0x03277d80]
//   XREF to: 03277d80 (READ)
// 0056b525: MOV EDX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x24] (READ)
// 0056b52c: LEA ECX,[EAX + 0x1]
// 0056b52f: ADD EDI,EDX
// 0056b531: MOV dword ptr [0x03277d80],ECX
//   XREF to: 03277d80 (WRITE)
// 0056b537: MOV dword ptr [EAX*0x4 + 0x3277d84],EDI
//   XREF to: 03277d84 (WRITE)
//   XREF to: 03277d88 (WRITE)
// 0056b53e: CMP ECX,0xc8
// 0056b544: JL 0x0056b568
//   XREF to: 0056b568 (CONDITIONAL_JUMP)
// 0056b546: MOV EAX,0x645c7f
//   XREF to: 00645c7f (PARAM)
// 0056b54b: MOV EDX,0x4a0
// 0056b550: PUSH 0x645c8f
//   XREF to: 00645c8f (DATA)
// 0056b555: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0056b55a: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0056b560: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0056b565: ADD ESP,0x4
// 0056b568: CMP dword ptr [EBP + 0x19a30],0x0
//   Label: LAB_0056b568
// 0056b56f: JZ 0x0056b64b
//   XREF to: 0056b64b (CONDITIONAL_JUMP)
// 0056b575: MOV EAX,dword ptr [ESP + 0x188]
//   Label: LAB_0056b575
//   XREF to: Stack[0x4] (READ)
// 0056b57c: INC EBX
// 0056b57d: MOV EDX,dword ptr [EAX + 0x19a2c]
// 0056b583: ADD EBP,0x1898
// 0056b589: CMP EBX,EDX
// 0056b58b: JL 0x0056b500
//   XREF to: 0056b500 (CONDITIONAL_JUMP)
// 0056b591: MOV ECX,dword ptr [ESP + 0x188]
//   Label: LAB_0056b591
//   XREF to: Stack[0x4] (READ)
// 0056b598: PUSH ECX
// 0056b599: XOR EDI,EDI
// 0056b59b: CALL core_set.cpp_CDemonSet_process_FUN_0056f940
//   XREF to: 0056f940 (UNCONDITIONAL_CALL)
// 0056b5a0: MOV EBX,dword ptr [0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056b5a6: ADD ESP,0x4
// 0056b5a9: TEST EBX,EBX
// 0056b5ab: JLE 0x0056b005
//   XREF to: 0056b005 (CONDITIONAL_JUMP)
// 0056b5b1: IMUL EAX,dword ptr [ESP + 0x18c],0x1a4
//   XREF to: Stack[0x8] (READ)
// 0056b5bc: MOV EDX,dword ptr [ESP + 0x188]
//   XREF to: Stack[0x4] (READ)
// 0056b5c3: MOV EBP,0x32770b4
//   XREF to: 032770b4 (DATA)
// 0056b5c8: ADD EDX,EAX
// 0056b5ca: XOR EBX,EBX
// 0056b5cc: MOV dword ptr [ESP + 0x168],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056b5d3: MOV ESI,dword ptr [EBX + 0x3276f34]
//   Label: LAB_0056b5d3
//   XREF to: 03276f34 (READ)
//   XREF to: 03276f38 (READ)
// 0056b5d9: PUSH ESI
// 0056b5da: CALL core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0
//   XREF to: 004729d0 (UNCONDITIONAL_CALL)
// 0056b5df: ADD ESP,0x4
// 0056b5e2: PUSH 0x1
// 0056b5e4: PUSH ESI
// 0056b5e5: CALL core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80
//   XREF to: 00472a80 (UNCONDITIONAL_CALL)
// 0056b5ea: ADD ESP,0x8
// 0056b5ed: PUSH ESI
// 0056b5ee: CALL core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00472e40
//   XREF to: 00472e40 (UNCONDITIONAL_CALL)
// 0056b5f3: ADD ESP,0x4
// 0056b5f6: PUSH 0x1
// 0056b5f8: MOV ECX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[0x4] (READ)
// 0056b5ff: PUSH ECX
// 0056b600: CALL core_set.cpp_CDemonSet_FUN_0056aca0
//   XREF to: 0056aca0 (UNCONDITIONAL_CALL)
// 0056b605: ADD ESP,0x8
// 0056b608: PUSH ESI
// 0056b609: CALL core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00472f30
//   XREF to: 00472f30 (UNCONDITIONAL_CALL)
// 0056b60e: ADD ESP,0x4
// 0056b611: PUSH 0x0
// 0056b613: PUSH ESI
// 0056b614: CALL core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
//   XREF to: 00472d30 (UNCONDITIONAL_CALL)
// 0056b619: ADD ESP,0x8
// 0056b61c: PUSH ESI
// 0056b61d: CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
//   XREF to: 00472f80 (UNCONDITIONAL_CALL)
// 0056b622: ADD ESP,0x4
// 0056b625: MOV EAX,dword ptr [ESP + 0x168]
//   XREF to: Stack[-0x1c] (READ)
// 0056b62c: CMP dword ptr [EAX + 0x144],0x0
// 0056b633: JZ 0x0056b6aa
//   XREF to: 0056b6aa (CONDITIONAL_JUMP)
// 0056b635: MOV EAX,[0x03276f30]
//   Label: LAB_0056b635
//   XREF to: 03276f30 (READ)
// 0056b63a: ADD EBX,0x4
// 0056b63d: INC EDI
// 0056b63e: ADD EBP,0x10
// 0056b641: CMP EDI,EAX
// 0056b643: JGE 0x0056b005
//   XREF to: 0056b005 (CONDITIONAL_JUMP)
// 0056b649: JMP 0x0056b5d3
//   XREF to: 0056b5d3 (UNCONDITIONAL_JUMP)
// 0056b64b: MOV EDI,dword ptr [ESP + 0x18c]
//   Label: LAB_0056b64b
//   XREF to: Stack[0x8] (READ)
// 0056b652: MOV DH,byte ptr [EDI + EBP*0x1 + 0x19b58]
// 0056b659: LEA EAX,[ESI + 0x1]
// 0056b65c: TEST DH,DH
// 0056b65e: JNZ 0x0056b667
//   XREF to: 0056b667 (CONDITIONAL_JUMP)
// 0056b660: MOV ESI,EAX
// 0056b662: JMP 0x0056b575
//   XREF to: 0056b575 (UNCONDITIONAL_JUMP)
// 0056b667: MOV EDI,dword ptr [0x03276f30]
//   Label: LAB_0056b667
//   XREF to: 03276f30 (READ)
// 0056b66d: MOV ESI,dword ptr [ESI*0x4 + 0x3276db0]
//   XREF to: 03276db0 (READ)
// 0056b674: MOV dword ptr [EDI*0x4 + 0x3276f34],ESI
//   XREF to: 03276f34 (WRITE)
// 0056b67b: SHL EDI,0x4
// 0056b67e: MOV ESI,dword ptr [ESP + 0x164]
//   XREF to: Stack[-0x20] (READ)
// 0056b685: LEA EDI,[EDI + 0x32770b4]
//   XREF to: 032770b4 (DATA)
// 0056b68b: LEA ESI,[ESI + EBP*0x1 + 0x19c54]
// 0056b692: MOVSD ES:EDI,ESI
//   XREF to: 032770b4 (WRITE)
// 0056b693: MOVSD ES:EDI,ESI
//   XREF to: 032770b8 (WRITE)
// 0056b694: MOVSD ES:EDI,ESI
//   XREF to: 032770bc (WRITE)
// 0056b695: MOVSD ES:EDI,ESI
//   XREF to: 032770c0 (WRITE)
// 0056b696: MOV EDI,dword ptr [0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056b69c: INC EDI
// 0056b69d: MOV ESI,EAX
// 0056b69f: MOV dword ptr [0x03276f30],EDI
//   XREF to: 03276f30 (WRITE)
// 0056b6a5: JMP 0x0056b575
//   XREF to: 0056b575 (UNCONDITIONAL_JUMP)
// 0056b6aa: PUSH EBP
//   Label: LAB_0056b6aa
//   XREF to: 032770b4 (DATA)
// 0056b6ab: PUSH ESI
// 0056b6ac: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056b6b1: CALL core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10
//   XREF to: 0044de10 (UNCONDITIONAL_CALL)
// 0056b6b6: ADD ESP,0xc
// 0056b6b9: JMP 0x0056b635
//   XREF to: 0056b635 (UNCONDITIONAL_JUMP)
// 0056b6be: PUSH 0x1
//   Label: LAB_0056b6be
// 0056b6c0: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056b6c5: CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   XREF to: 0044c430 (UNCONDITIONAL_CALL)
// 0056b6ca: ADD ESP,0x8
// 0056b6cd: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056b6d2: CALL core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70
//   XREF to: 0044cc70 (UNCONDITIONAL_CALL)
// 0056b6d7: ADD ESP,0x4
// 0056b6da: MOV EBP,dword ptr [EBX + 0x161628]
// 0056b6e0: MOV dword ptr [0x02d051f4],ESI
//   XREF to: 02d051f4 (WRITE)
// 0056b6e6: TEST EBP,EBP
// 0056b6e8: JZ 0x0056b707
//   XREF to: 0056b707 (CONDITIONAL_JUMP)
// 0056b6ea: MOV EDX,dword ptr [EBX + 0x16164c]
// 0056b6f0: PUSH EDX
// 0056b6f1: LEA EAX,[EBX + 0x16162c]
// 0056b6f7: PUSH EAX
// 0056b6f8: MOV ECX,dword ptr [0x0067235c]
//   XREF to: 02ca0148 (PARAM)
//   XREF to: 0067235c (READ)
// 0056b6fe: PUSH ECX
//   XREF to: 02ca0148 (DATA)
// 0056b6ff: CALL core_dskybox.cpp_renderSkyDome_FUN_004901f0
//   XREF to: 004901f0 (UNCONDITIONAL_CALL)
// 0056b704: ADD ESP,0xc
// 0056b707: PUSH 0x1
//   Label: LAB_0056b707
// 0056b709: MOV EBX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[0x4] (READ)
// 0056b710: PUSH EBX
// 0056b711: CALL core_set.cpp_CDemonSet_FUN_0056aca0
//   XREF to: 0056aca0 (UNCONDITIONAL_CALL)
// 0056b716: ADD ESP,0x8
// 0056b719: PUSH 0x1
// 0056b71b: PUSH 0x1
// 0056b71d: MOV ESI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 0056b723: PUSH ESI
//   XREF to: 02d83364 (DATA)
// 0056b724: CALL core_gore.cpp_FUN_004ed830
//   XREF to: 004ed830 (UNCONDITIONAL_CALL)
// 0056b729: ADD ESP,0xc
// 0056b72c: PUSH 0x1
// 0056b72e: PUSH 0x1
// 0056b730: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 0056b736: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 0056b737: CALL core_fire.cpp_CFireEffect_FUN_004c74a0
//   XREF to: 004c74a0 (UNCONDITIONAL_CALL)
// 0056b73c: MOV EAX,[0x006844f0]
//   XREF to: 03f875e0 (PARAM)
//   XREF to: 006844f0 (READ)
// 0056b741: MOV EBP,dword ptr [EAX]
//   XREF to: 03f875e0 (READ)
// 0056b743: ADD ESP,0xc
// 0056b746: TEST EBP,EBP
// 0056b748: JNZ 0x0056b754
//   XREF to: 0056b754 (CONDITIONAL_JUMP)
// 0056b74a: PUSH EBP
// 0056b74b: PUSH EAX
//   XREF to: 03f875e0 (DATA)
// 0056b74c: CALL core_water.cpp_CWater_render_FUN_005ea320
//   XREF to: 005ea320 (UNCONDITIONAL_CALL)
// 0056b751: ADD ESP,0x8
// 0056b754: PUSH 0x0
//   Label: LAB_0056b754
// 0056b756: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056b75b: CALL core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
//   XREF to: 0044cdf0 (UNCONDITIONAL_CALL)
// 0056b760: ADD ESP,0x8
// 0056b763: PUSH 0x0
// 0056b765: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056b76a: CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
// 0056b76f: ADD ESP,0x8
// 0056b772: JMP 0x0056b03a
//   XREF to: 0056b03a (UNCONDITIONAL_JUMP)
// 0056b777: MOV ESI,dword ptr [EAX + 0x17c]
//   Label: LAB_0056b777
// 0056b77d: PUSH ESI
// 0056b77e: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 0056b784: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 0056b785: JMP 0x0056b082
//   XREF to: 0056b082 (UNCONDITIONAL_JUMP)
