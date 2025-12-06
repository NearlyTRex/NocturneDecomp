// Name: core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
// Address: 0056ae50
// Address Range: [[0056ae50, 0056b789]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)

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
  uint *puVar15;
  uint *puVar16;
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
  byte auStack_6c [28];
  CVector3f CStack_50;
  CVector3f local_40;
  int local_34;
  int local_30;
  byte local_28 [8];
  float local_20;
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
      puVar15 = (uint *)((int)g_DynamicLights + iVar7);
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80((CDemonLight *)*puVar15);
    } while (iVar5 < g_DynamicLightCount);
  }
  iVar5 = 0;
  if (0 < g_ActiveLightCount) {
    iVar7 = 0;
    do {
      puVar15 = (uint *)((int)g_ActiveLightList + iVar7);
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80((CDemonLight *)*puVar15);
    } while (iVar5 < g_ActiveLightCount);
  }
  iVar5 = 0;
  if (0 < g_ActiveLightCount) {
    iVar7 = 0;
    do {
      puVar15 = (uint *)((int)g_ActiveLightList + iVar7);
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50((CDemonLight *)*puVar15);
    } while (iVar5 < g_ActiveLightCount);
  }
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_004729c0();
  in_stack_0000000c->previous_best_camera_timer = 3.0;
  in_stack_0000000c->lighting_quality_mode = 1;
  iVar5 = 0;
  in_stack_0000000c->rendering_flags_ptr = (int *)&DAT_00000001;
  g_ActiveLightCount = 0;
  in_stack_0000000c->previous_best_camera_index = in_stack_0000000c->selected_camera_index;
  DAT_03277d80 = 0;
  in_stack_0000000c->selected_camera_index = in_stack_00000010;
  g_CoronaGlobeCount = 0;
  DAT_0327785c = 0;
  if (0 < (int)in_stack_0000000c->actor_list_ptr) {
    do {
      iVar5 = iVar5 + 1;
      core_set_cpp_CDemonSet_FUN_0056ade0(in_stack_0000000c);
    } while (iVar5 < (int)in_stack_0000000c->actor_list_ptr);
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
    g_InMirrorRenderPass = 1;
    core_set_cpp_CDemonSet_FUN_0056aca0(in_stack_00000028);
    g_InMirrorRenderPass = 0;
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
  if (in_stack_0000000c->unk_lighting_param1 == 0) {
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
          puVar15 = (uint *)(iVar3 * 0x10 + 0x32770b8 + (uint)bVar17 * -8);
          pcVar12 = pcVar1 + ((uint)bVar17 * -2 + 1) * 4;
          (&DAT_032770b4)[iVar3].left = *(int *)pcVar1;
          puVar16 = puVar15 + (uint)bVar17 * -2 + 1;
          *puVar15 = *(uint *)pcVar12;
          *puVar16 = *(uint *)(pcVar12 + ((uint)bVar17 * -2 + 1) * 4);
          puVar16[(uint)bVar17 * -2 + 1] =
               *(uint *)(pcVar12 + ((uint)bVar17 * -2 + 1) * 4 + ((uint)bVar17 * -2 + 1) * 4);
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
  in_stack_0000000c->lighting_quality_mode = 0;
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
    core_fire_cpp_CFireEffect_renderDecals_FUN_004c74a0(g_CFireEffectPtr,1,1);
    if (g_CWaterPtr->wave_animation_enabled == 0) {
      core_water_cpp_CWater_render_FUN_005ea320(g_CWaterPtr,0);
    }
    core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(&g_CDemonCameraInstance,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
  }
  in_stack_0000000c->rendering_flags_ptr = (int *)0x0;
  core_set_cpp_CDemonSet_FUN_0056be80(in_stack_0000000c);
  iVar5 = in_stack_00000014 * 0x1a4 + in_stack_00000010;
  if (*(int *)(iVar5 + 0x154) == 0) {
    iVar5 = *(int *)(iVar5 + 0x17c);
  }
  else {
    iVar5 = *(int *)(in_stack_00000010 + 0x15ac7c);
  }
  core_sound_cpp_CSound_setReverbPreset_FUN_005b3cc0(g_CSoundPtr,iVar5);
  local_20 = (float)g_CDemonCameraInstance.base.position.x;
  local_1c = (C3DSLight *)g_CDemonCameraInstance.base.position.y;
  local_18 = (float)g_CDemonCameraInstance.base.position.z;
  if (&local_40.z != &local_20) {
    local_40.z = (float)g_CDemonCameraInstance.base.position.x;
    local_34 = g_CDemonCameraInstance.base.position.y;
    local_30 = g_CDemonCameraInstance.base.position.z;
  }
  pCVar8 = &g_CDemonCameraInstance.base.rotation_matrix;
  pfVar9 = afStack_c4;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar9 = (float)pCVar8->m[0].x;
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
  if ((CVector3f *)local_28 != pCVar4) {
    local_28._0_4_ = pCVar4->x;
    local_28._4_4_ = pCVar4->y;
    local_20 = pCVar4->z;
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
        (*this_ptr_00->vtable->getBoundingBox)(this_ptr_00,(CBoundingBox3D *)auStack_6c);
        piVar14 = (int *)&stack0xfffffe94;
        do {
          pCVar4 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                             ((CBoundingBox3D *)(auStack_6c + 0x14),&local_40,corner_index);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (this_ptr_00,(CVector3f *)(local_28 + 4),pCVar4);
          corner_index = corner_index + 1;
          *piVar14 = (int)ROUND(local_20 * 256f);
          piVar14[1] = (int)ROUND((float)local_1c * 256f);
          piVar14[2] = (int)ROUND(local_18 * 256f);
          piVar14 = piVar14 + 3;
        } while ((int)corner_index < 8);
      }
      this_ptr = (CDemonSet *)((int)&this_ptr->camera_count + 1);
      pCVar6 = (CDemonSet *)pCVar6->cameras;
    } while ((int)this_ptr < (int)in_stack_0000001c->actor_list_ptr);
  }
  g_RenderingShadows = 1;
  return;
}
