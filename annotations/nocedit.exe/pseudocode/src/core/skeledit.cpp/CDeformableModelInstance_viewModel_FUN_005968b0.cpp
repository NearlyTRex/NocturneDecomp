// Name: core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0
// Address: 005968b0
// Address Range: [[005968b0, 0059754b] [0059754f, 0059796e] [00597977, 00598ed7] [006107b1, 006107ce] [03fc4de5, 03fc4eb0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModelInstance_viewModel_FUN_005968b0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_skeledit_cpp_CDeformableModelInstance_viewModel_FUN_005968b0(CDeformableModelInstance *this_ptr)

{
  int *piVar1;
  char cVar2;
  SRenderVertex *pSVar3;
  int iVar4;
  float fVar5;
  bool bVar6;
  CDemonRenderer *this_ptr_00;
  uint uVar7;
  CDeformableModel *this_ptr_01;
  CSkeleton *this_ptr_02;
  int iVar8;
  CDeformableModel *pCVar9;
  float fVar10;
  CSlew *pCVar11;
  SMotion *pSVar12;
  CMotionList *pCVar13;
  CVector3f *pCVar14;
  CVector3f *pCVar15;
  CDeformableModelInstance *pCVar16;
  int iVar17;
  SBone *string_data;
  char *pcVar18;
  char *pcVar19;
  ushort uVar20;
  ushort uVar21;
  CPickList local_1900;
  CPickList local_1558;
  CPickList local_11b0;
  CPickList local_e08;
  char local_a60 [256];
  char local_960 [256];
  char local_860 [256];
  char local_760 [256];
  char local_660 [200];
  char local_598 [100];
  char local_534 [100];
  char local_4d0 [100];
  char local_46c [100];
  char local_408 [100];
  SMRGLHeaderPrimitive local_3a4;
  CSpotView local_35c;
  CMatrix3x4f local_320;
  CMatrix3x4f local_2f0;
  CMatrix3x4f local_2c0;
  CMatrix3x4f local_290;
  CMatrix3x4f local_260;
  CMatrix3x4f local_230;
  CSlew local_200;
  CBoundingBox3D local_1e4;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  CVector3f local_19c;
  CVector3f local_190;
  CVector3f local_184;
  float local_178;
  float local_174;
  float local_170;
  CVector3f local_16c;
  float local_160;
  float local_15c;
  float local_158;
  CVector3i local_154;
  CVector3f local_148;
  CVector3f local_13c;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  CVector3f local_118;
  CVector3f local_10c;
  CVector3f local_100;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  CVector3i local_dc;
  CVector3i local_d0;
  float *local_c4;
  CDeformableModel *local_c0;
  CSkeleton *local_bc;
  uint local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  float local_90;
  float local_8c;
  int local_88;
  uint local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  CVector3f *local_6c;
  int local_68;
  int local_64;
  CBoundingBox3D *local_60;
  CVector3f *local_5c;
  CVector3f *local_58;
  CMatrix3x4f *local_54;
  float local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_40;
  float local_3c;
  float local_38;
  SPart *local_34;
  SBone *local_30;
  int local_2c;
  SBone *local_28;
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  char local_14 [4];
  
  core_skeleton_cpp_freeAllSkeletons_FUN_005a1ea0();
  core_skeleton_cpp_freeAllModels_FUN_005a1dc0();
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  this_ptr_02 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr_01);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0(&local_35c);
  local_35c.default_distance = 15.0;
  local_35c.default_yaw = 3.1415927;
  local_35c.default_pan_x =
       ((this_ptr->bounding_box).min.x + (this_ptr->bounding_box).max.x) * 0.5f;
  local_35c.default_pan_y =
       ((this_ptr->bounding_box).min.y + (this_ptr->bounding_box).max.y) * 0.5f;
  local_88 = -1;
  shape_spotview_cpp_CSpotView_reset_FUN_005b9620(&local_35c,0x1f);
  local_b0 = -1;
  bVar6 = false;
  local_48 = 0;
  local_44 = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_40 = 0;
  local_94 = 0;
  local_84 = 0;
  local_4c = 1;
  if ((g_SkeleditViewModelInitFlag & 1) == 0) {
    g_SkeleditViewModelInitFlag = g_SkeleditViewModelInitFlag | 1;
  }
  local_64 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                       (this_ptr_02,"bip01 r hand",0);
  if (local_64 < 0) {
    local_64 = 0;
  }
  core_slew_cpp_CSlew_init_FUN_005a2060(&local_200);
  if ((g_SkeleditViewModelInitFlag & 2) == 0) {
    g_SkeleditViewModelInitFlag = g_SkeleditViewModelInitFlag | 2;
    core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(&g_SkeleditViewModel);
    _atexit(&g_SkeleditViewModelDestructorNode);
  }
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&g_SkeleditViewModel);
  local_184.x = g_ZeroVector.f.x;
  local_184.y = g_ZeroVector.f.y;
  local_184.z = g_ZeroVector.f.z;
  local_19c.x = g_ZeroVector.f.x;
  local_19c.y = g_ZeroVector.f.y;
  local_19c.z = g_ZeroVector.f.z;
  core_motion_cpp_CMotionController_reset_FUN_0052dad0(&this_ptr->motion_controller);
  local_100.x = 0.0;
  local_100.y = 0.0;
  local_100.z = 0.0;
  g_CDemonSetPtr->lighting_quality_mode = 1;
  local_30 = this_ptr_02->bone_list;
  local_34 = this_ptr_01->parts;
  local_5c = this_ptr_01->vertex_pool;
  local_58 = this_ptr->transformed_vertices;
  local_54 = (this_ptr->bone_transform).bone_world_matrices;
  local_60 = &this_ptr->bounding_box;
  local_6c = &this_ptr->accumulated_root_motion;
  local_28 = local_30;
  do {
    local_90 = g_CGamePtr->delta_time_float;
    g_RenderedTriangleCount = 0;
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth,g_WindowHeight,0xf8);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(&local_35c);
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if (iVar8 == 0) {
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar8 == 0) {
        iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD7);
        if (iVar8 != 0) {
          (this_ptr->motion_controller).current_frame_number = 0.0;
        }
        iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD1);
        if (iVar8 != 0) {
          pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                              (&this_ptr->motion_controller);
          local_18 = (float)(pSVar12->frame_count + -1);
          (this_ptr->motion_controller).current_frame_number = (float)(int)local_18;
        }
      }
      else {
        iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_PERIOD);
        if (iVar8 != 0) {
          piVar1 = &(this_ptr->motion_controller).current_motion_index;
          *piVar1 = *piVar1 + 1;
        }
        iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_COMMA);
        if (iVar8 != 0) {
          piVar1 = &(this_ptr->motion_controller).current_motion_index;
          *piVar1 = *piVar1 + -1;
        }
        if ((this_ptr->motion_controller).current_motion_index < 0) {
          pCVar13 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&this_ptr->motion_controller);
          (this_ptr->motion_controller).current_motion_index = pCVar13->motion_count + -1;
        }
        pCVar13 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&this_ptr->motion_controller);
        if (pCVar13->motion_count <= (this_ptr->motion_controller).current_motion_index) {
          (this_ptr->motion_controller).current_motion_index = 0;
        }
      }
    }
    local_6c->z = 0.0;
    local_6c->y = local_6c->z;
    local_6c->x = local_6c->y;
    local_8c = 1.0;
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
    if (iVar8 != 0) {
      local_8c = 0.33333334;
    }
    if (local_a8 == 0) {
      pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&this_ptr->motion_controller);
      fVar10 = (float)pSVar12->frame_start;
      local_80 = (this_ptr->motion_controller).current_frame_number;
      pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&this_ptr->motion_controller);
      local_7c = (float)pSVar12->frame_count;
      if (local_a0 == 0) {
        pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&this_ptr->motion_controller);
        fVar5 = local_90 * pSVar12->fps * local_8c +
                (this_ptr->motion_controller).current_frame_number;
        (this_ptr->motion_controller).current_frame_number = fVar5;
        if (local_7c < fVar5) {
          do {
            local_18 = fVar10;
            (*((this_ptr->motion_controller).vtable)->accumulateScaledRootMotion)
                      (&this_ptr->motion_controller,(float)(int)fVar10 + local_80,
                       (float)(int)fVar10 + local_7c,1.0);
            if (bVar6) {
              pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                  (&this_ptr->motion_controller);
              (this_ptr->motion_controller).current_frame_number = pSVar12->exit_forward_to_frame;
            }
            else {
              (this_ptr->motion_controller).current_frame_number =
                   (this_ptr->motion_controller).current_frame_number - local_7c;
            }
            local_80 = 0.0;
          } while (local_7c < (this_ptr->motion_controller).current_frame_number);
        }
        local_18 = fVar10;
        (*((this_ptr->motion_controller).vtable)->accumulateScaledRootMotion)
                  (&this_ptr->motion_controller,(float)(int)fVar10 + local_80,
                   (float)(int)fVar10 + (this_ptr->motion_controller).current_frame_number,1.0);
      }
      else {
        iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_PERIOD);
        if (iVar8 != 0) {
          (this_ptr->motion_controller).current_frame_number =
               (this_ptr->motion_controller).current_frame_number + local_8c;
          local_78 = local_7c;
          if ((this_ptr->motion_controller).current_frame_number < local_7c) {
            local_78 = (this_ptr->motion_controller).current_frame_number;
          }
          local_18 = fVar10;
          (*((this_ptr->motion_controller).vtable)->accumulateScaledRootMotion)
                    (&this_ptr->motion_controller,(float)(int)fVar10 + local_80,
                     (float)(int)fVar10 + local_78,1.0);
        }
        iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_COMMA);
        if (iVar8 != 0) {
          (this_ptr->motion_controller).current_frame_number =
               (this_ptr->motion_controller).current_frame_number - local_8c;
          local_74 = 0.0;
          if (0.0 < (this_ptr->motion_controller).current_frame_number) {
            local_74 = (this_ptr->motion_controller).current_frame_number;
          }
          local_70 = (float)(int)fVar10;
          local_18 = fVar10;
          (*((this_ptr->motion_controller).vtable)->accumulateScaledRootMotion)
                    (&this_ptr->motion_controller,local_70 + local_74,local_70 + local_80,1.0);
          if ((this_ptr->motion_controller).current_frame_number < 0.0) {
            local_18 = local_70 + local_7c;
            (*((this_ptr->motion_controller).vtable)->accumulateScaledRootMotion)
                      (&this_ptr->motion_controller,
                       local_18 + (this_ptr->motion_controller).current_frame_number,local_18,1.0);
          }
          local_178 = -local_6c->x;
          local_174 = -local_6c->y;
          local_170 = -local_6c->z;
          if ((CVector3f *)&local_178 != local_6c) {
            local_6c->x = local_178;
            local_6c->y = local_174;
            local_6c->z = local_170;
          }
        }
      }
      while ((this_ptr->motion_controller).current_frame_number < 0.0) {
        pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&this_ptr->motion_controller);
        (this_ptr->motion_controller).current_frame_number =
             (float)pSVar12->frame_count + (this_ptr->motion_controller).current_frame_number;
      }
      pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&this_ptr->motion_controller);
      if ((float)pSVar12->frame_count <= (this_ptr->motion_controller).current_frame_number) {
        if (bVar6) {
          pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                              (&this_ptr->motion_controller);
          (this_ptr->motion_controller).current_frame_number = pSVar12->exit_forward_to_frame;
        }
        else {
          (this_ptr->motion_controller).current_frame_number = 0.0;
        }
      }
      if (local_48 != 0) {
        local_100.x = local_100.x + local_6c->x;
        local_100.y = local_100.y + local_6c->y;
        local_100.z = local_100.z + local_6c->z;
      }
    }
    iVar8 = local_44;
    pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
    if (iVar8 < pCVar9->num_parts) {
      if (iVar8 < 0) {
        pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
        local_44 = pCVar9->num_parts + -1;
      }
    }
    else {
      local_44 = 0;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&local_100);
    local_d0.x = 0;
    local_d0.y = 0;
    local_d0.z = 0;
    if (local_a8 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr)
      ;
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr);
      core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr);
    }
    if (local_b4 == 1) {
      pCVar16 = this_ptr;
      for (iVar8 = 0;
          pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr),
          iVar8 < pCVar9->num_parts; iVar8 = iVar8 + 1) {
        (pCVar16->part_data).visibility_flags[0] = 0;
        pCVar16 = (CDeformableModelInstance *)&(pCVar16->motion_controller).current_motion_index;
      }
      (this_ptr->part_data).visibility_flags[local_44] = 3;
    }
    else if (local_b4 == 2) {
      pCVar16 = this_ptr;
      for (iVar8 = 0;
          pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr),
          iVar8 < pCVar9->num_parts; iVar8 = iVar8 + 1) {
        (pCVar16->part_data).visibility_flags[0] = 3;
        pCVar16 = (CDeformableModelInstance *)&(pCVar16->motion_controller).current_motion_index;
      }
      (this_ptr->part_data).visibility_flags[local_44] = 0;
    }
    core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430(this_ptr);
    iVar8 = local_a4;
    this_ptr_00 = g_CDemonRendererPtr2;
    (this_ptr->part_data).texture_set_indices[local_44] = local_ac;
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(this_ptr_00,0);
    if (iVar8 < 2) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (this_ptr,local_b0,0xffffffff,1,0);
    }
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr2);
    uVar7 = local_84;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(this_ptr);
    if (uVar7 != 0) {
      iVar17 = 0;
      iVar8 = 0;
      while (iVar8 < this_ptr_01->vertex_count[this_ptr->cached_skinned_lod_index]) {
        pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        if ((*(byte *)((int)&(pSVar3->projected_vertex).screen_x + iVar17 + 3) & 0x80) == 0) {
          iVar4 = *(int *)((int)&(pSVar3->projected_vertex).screen_x + iVar17);
          local_68 = *(int *)((int)&(pSVar3->projected_vertex).screen_y + iVar17) >> 0x10;
          if (iVar4 >> 0x10 < 0) goto LAB_0059722b;
          _sprintf(local_598);
          engine_2d_c_drawText_FUN_00401fd0(local_598,(int)(short)((uint)iVar4 >> 0x10),local_68);
          iVar8 = iVar8 + 1;
          iVar17 = iVar17 + 0x30;
        }
        else {
LAB_0059722b:
          iVar8 = iVar8 + 1;
          iVar17 = iVar17 + 0x30;
        }
      }
    }
    iVar8 = local_64;
    if (0 < g_SkeleditViewModel.poly_count) {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_2c0,&local_184,&local_19c);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_2c0,local_54 + iVar8,&local_320);
      pCVar11 = (CSlew *)core_xform_cpp_getTranslation_FUN_005f6110(&local_2f0,&local_16c);
      if (&local_200 != pCVar11) {
        local_200.position.x = (pCVar11->position).x;
        local_200.position.y = (pCVar11->position).y;
        local_200.position.z = (pCVar11->position).z;
      }
      pCVar14 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                          ((CMatrix3x3f *)&local_2f0,&local_148);
      if ((CVector3f *)&local_200.pitch != pCVar14) {
        local_200.pitch = pCVar14->x;
        local_200.yaw = pCVar14->y;
        local_200.roll = pCVar14->z;
      }
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,(CVector3i *)&local_200.pitch,(CVector3i *)&local_200);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                (&g_SkeleditViewModel,0,(CKeyFramedModelInstance *)0x0,-1);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    if (0 < local_88) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
                (this_ptr,(SPose *)&stack0xffffcc64);
      core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
                (this_ptr,&SPose_036644d8);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr2,1);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0x8000);
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (this_ptr,-1,0x2e7,1,0);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr2);
      core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
                (this_ptr,(SPose *)&stack0xffffcc64);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F4);
    if (iVar8 != 0) {
      g_SkeletonViewModelScreenshotCounter = g_SkeletonViewModelScreenshotCounter + 1;
      _sprintf(g_SkeletonViewModelScreenshotFilename,"noc%d.pcx");
      engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(g_SkeletonViewModelScreenshotFilename);
    }
    if (local_4c != 0) {
      local_dc.x = (int)-local_100.x;
      local_dc.y = (int)-local_100.y;
      local_dc.z = (int)-local_100.z;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,&local_d0,&local_dc);
      local_154.x = (int)CVector3f_006819fc.x;
      local_154.y = (int)CVector3f_006819fc.y;
      local_154.z = (int)CVector3f_006819fc.z;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_154);
      local_154.x = 0xf00;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_154);
      local_154.z = 0xf00;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_154);
      local_154.x = -0xf00;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_154);
      local_3a4.base.count = 4;
      local_3a4.surface_normal.D = 0;
      local_3a4.surface_normal.C = 0;
      local_3a4.surface_normal.B = 0;
      local_3a4.surface_normal.A = 0;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,&SMRGLTextureBasic_006819e4);
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr2,0xff,0,0xff);
      engine_drender_cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40
                (g_CDemonRendererPtr2,&local_3a4);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    iVar8 = local_a4;
    if (0 < local_a4) {
      iVar17 = 1;
      if (2 < local_a4) {
        iVar17 = 3;
      }
      core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_005a17b0
                (this_ptr,(uint)g_ColorCubeLookup[0x7c00],iVar17);
      if (iVar8 == 4) {
        core_skeleton_cpp_CDeformableModelInstance_renderBones_FUN_005a17e0(this_ptr);
      }
    }
    if (local_98 == 0) {
      if (local_9c != 0) {
        fVar10 = 3.57331e-43;
        uVar20 = SUB42(g_CEditorToolsPtr,0);
        uVar21 = (ushort)((uint)g_CEditorToolsPtr >> 0x10);
        goto LAB_005975b4;
      }
    }
    else {
      fVar10 = (float)shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                                (g_CEditorToolsPtr);
      uVar20 = SUB42(g_CEditorToolsPtr,0);
      uVar21 = (ushort)((uint)g_CEditorToolsPtr >> 0x10);
LAB_005975b4:
      shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
                ((CEditorTools *)CONCAT22(uVar21,uVar20),2.0,(int)fVar10);
    }
    _sprintf(local_46c);
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,g_WindowHeight + -0xb);
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(&this_ptr->motion_controller);
    _sprintf(local_46c);
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0xb);
    local_18 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                         (&this_ptr->motion_controller);
    _sprintf(local_46c," Zone: %5.2f ");
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x16);
    _sprintf(local_46c," [L] Loop mode: %s ");
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x21);
    _sprintf(local_46c," [C] Use canceled: %s ");
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x2c);
    iVar8 = local_44;
    core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220(this_ptr_01,local_44);
    core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220(this_ptr_01,iVar8);
    _sprintf(local_46c);
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x37);
    _sprintf(local_46c," F1 for key list ");
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x42);
    fVar10 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(local_60);
    local_18 = (float)(int)ROUND(ROUND(fVar10));
    _sprintf(local_46c);
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x4d);
    _sprintf(local_46c," Current texture set: %d");
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x58);
    if (0 < g_SkeleditViewModel.poly_count) {
      _sprintf(local_46c," Item pos: X: %5.3f Y: %5.3f Z: %5.3f");
      engine_2d_c_drawText_FUN_00401fd0(local_46c,0,99);
      _sprintf(local_46c," Item orient: P: %5.3f B: %5.3f H: %5.3f");
      engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x6e);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar8 != 0) break;
    iVar8 = 0;
    pCVar14 = local_5c;
    pCVar15 = local_58;
    if (0 < this_ptr_02->bone_count) {
      do {
        if (pCVar15 != pCVar14) {
          pCVar15->x = pCVar14->x;
          pCVar15->y = pCVar14->y;
          pCVar15->z = pCVar14->z;
        }
        iVar8 = iVar8 + 1;
        pCVar14 = pCVar14 + 1;
        pCVar15 = pCVar15 + 1;
      } while (iVar8 < this_ptr_02->bone_count);
    }
    if (((g_SkeleditViewModel.poly_count < 1) ||
        (iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar8 == 0)) ||
       (local_a0 == 0)) {
      if (local_98 == 0) {
        shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(&local_35c,0x1f);
      }
      else {
        shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(&local_35c,0x17);
        local_50 = g_CGamePtr->delta_time_float * (float)2;
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar8 != 0) {
          local_50 = local_50 * 3.0f;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
        if (iVar8 != 0) {
          local_50 = local_50 * 0.05f;
        }
        local_118.x = 0.0;
        local_118.y = 0.0;
        local_118.z = 0.0;
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
        if (iVar8 != 0) {
          local_118.y = local_118.y - local_50;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
        if (iVar8 != 0) {
          local_118.y = local_118.y + local_50;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
        if (iVar8 != 0) {
          local_118.x = local_118.x - local_50;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
        if (iVar8 != 0) {
          local_118.x = local_118.x + local_50;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
        if (iVar8 != 0) {
          local_118.z = local_118.z - local_50;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
        if (iVar8 != 0) {
          local_118.z = local_118.z + local_50;
        }
        if (0.0 < SQRT(local_118.z * local_118.z +
                       local_118.x * local_118.x + local_118.y * local_118.y)) {
          local_40 = 1;
          core_skeledit_cpp_CDeformableModel_offsetRootVertices_FUN_0058e600(this_ptr_01,&local_118)
          ;
        }
      }
    }
    else {
      core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_200);
      core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                (&local_230,&local_200.position,(CVector3f *)&local_200.pitch);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(local_54 + local_64,&local_230,&local_290);
      pCVar14 = core_xform_cpp_invertAndGetTranslation_FUN_005f6140(&local_260,&local_10c);
      if (&local_184 != pCVar14) {
        local_184.x = pCVar14->x;
        local_184.y = pCVar14->y;
        local_184.z = pCVar14->z;
      }
      pCVar14 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
                          ((CMatrix3x3f *)&local_260,&local_190);
      if (&local_19c != pCVar14) {
        local_19c.x = pCVar14->x;
        local_19c.y = pCVar14->y;
        local_19c.z = pCVar14->z;
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_B);
    if (iVar8 != 0) {
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar8 == 0) {
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
        if (iVar8 == 0) {
          local_a4 = local_a4 + 1;
          if (4 < local_a4) {
            local_a4 = 0;
          }
        }
        else {
          local_98 = (uint)(local_98 == 0);
        }
      }
      else {
        iVar8 = shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                          (g_CEditorToolsPtr,"Bias model x,y,z",&local_13c,0);
        if ((iVar8 != 0) &&
           (0.0 < SQRT(local_13c.z * local_13c.z +
                       local_13c.x * local_13c.x + local_13c.y * local_13c.y))) {
          local_40 = 1;
          core_skeledit_cpp_CDeformableModel_offsetRootVertices_FUN_0058e600(this_ptr_01,&local_13c)
          ;
        }
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_O);
    if (iVar8 != 0) {
      local_100.y = 0.0;
      local_100.x = 0.0;
      local_100.z = 0.0;
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_P);
    if (iVar8 != 0) {
      local_a0 = (uint)(local_a0 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_L);
    if (iVar8 != 0) {
      bVar6 = !bVar6;
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_G);
    if (iVar8 != 0) {
      local_4c = (uint)(local_4c == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_C);
    if (iVar8 != 0) {
      local_48 = (uint)(local_48 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_1);
    if (iVar8 != 0) {
      local_9c = (uint)(local_9c == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_V);
    if (iVar8 != 0) {
      local_84 = (uint)(local_84 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_S);
    if (iVar8 != 0) {
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
      if (iVar8 == 0) {
        local_b4 = (local_b4 + 1) % 3;
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr,0);
        core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
                  (&local_1e4,this_ptr_01->vertex_count[this_ptr->cached_skinned_lod_index],
                   this_ptr->skinned_vertices_buffer);
        _sprintf(local_660,"Current dimensions:\nX: %7.3f .. %7.3f : %7.3f\nY: %7.3f .. %7.3f : %7.3f\nZ: %7.3f .. %7.3f : %7.3f\n\nEnter scale factor");
        iVar8 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                          (g_CEditorToolsPtr,local_660,&local_3c,1,0.0001,999999.9,0);
        if ((iVar8 != 0) && (local_3c != 1.0)) {
          core_skeledit_cpp_CDeformableModel_scaleAllVertices_FUN_0058e3e0(this_ptr_01,local_3c);
          local_94 = 1;
        }
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F);
    if (iVar8 != 0) {
      fVar10 = 0.0;
      pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&this_ptr->motion_controller);
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,"Enter frame number",
                 &(this_ptr->motion_controller).current_frame_number,1,0.0,
                 (float)pSVar12->frame_count,(int)fVar10);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_M);
    if (iVar8 != 0) {
      iVar8 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1900);
      for (iVar17 = 0;
          pCVar13 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&this_ptr->motion_controller), iVar17 < pCVar13->motion_count;
          iVar17 = iVar17 + 1) {
        pCVar13 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&this_ptr->motion_controller);
        pcVar19 = pCVar13->motions[0].motion_name + iVar8;
        iVar8 = iVar8 + 0x54c;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1900.base,pcVar19);
      }
      iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_1900,"Select motion",
                         (this_ptr->motion_controller).current_motion_index,0);
      if (-1 < iVar8) {
        (this_ptr->motion_controller).current_motion_index = iVar8;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1900,0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_T);
    if (iVar8 != 0) {
      pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&this_ptr->motion_controller);
      local_38 = (float)(int)ROUND(ROUND(pSVar12->exit_forward_to_frame));
      iVar8 = pSVar12->exit_forward_to_motion;
      pCVar13 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                          (&this_ptr->motion_controller);
      iVar8 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                        (g_CEditorToolsPtr,"Enter exit forward to frame number",(int *)&local_38,1,0,
                         pCVar13->motions[iVar8].frame_count + -1,1);
      if (iVar8 != 0) {
        local_18 = local_38;
        pSVar12->exit_forward_to_frame = (float)(int)local_38;
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_X);
    if (iVar8 != 0) {
      shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                (g_CEditorToolsPtr,"Select texture set",&local_ac,1,0,4,1);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_D);
    if (iVar8 != 0) {
      pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
      iVar8 = pCVar9->num_lods;
      _sprintf(local_534,"Select LOD (0..%d), or -1 for auto-LOD");
      shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                (g_CEditorToolsPtr,local_534,&local_b0,1,-1,iVar8 + -1,1);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_H);
    if (iVar8 != 0) {
      local_a8 = (uint)(local_a8 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_Z);
    if (iVar8 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1558);
      iVar8 = 0;
      if (0 < this_ptr_02->bone_count) {
        do {
          core_skeleton_cpp_CDeformableModel_getBonePart_FUN_0059c2d0(this_ptr_01,iVar8);
          _sprintf(local_46c,"%s\t%s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1558.base,local_46c);
          iVar8 = iVar8 + 1;
        } while (iVar8 < this_ptr_02->bone_count);
      }
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_1558,"Part for bone info",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1558,0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB);
    if (iVar8 != 0) {
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar8 == 0) {
        local_44 = local_44 + 1;
      }
      else {
        local_44 = local_44 + -1;
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_I);
    if (iVar8 != 0) {
      while( true ) {
        local_2c = 0;
        if (0 < g_SkeleditViewModel.poly_count) {
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_e08);
          _sprintf(local_46c,"Model:\t%s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_e08.base,local_46c);
          _sprintf(local_46c,"Bone:\t%s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_e08.base,local_46c);
          _sprintf(local_46c,"Pos: %5.3f %5.3f %5.3f");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_e08.base,local_46c);
          _sprintf(local_46c,"Orient: %5.3f %5.3f %5.3f");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_e08.base,local_46c);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&local_e08.base,"Paste position/orientation from clipboard");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&local_e08.base,"Copy position/orientation to clipboard");
          local_2c = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (&local_e08,"Item tester",-1,0);
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_e08,0);
        }
        if (local_2c < 0) break;
        if (local_2c == 0) {
          iVar8 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                            (g_CEditorToolsPtr,"Select model to position","models"
                             ,"*.kfm",local_408,0);
          if (iVar8 == 0) {
            if (g_SkeleditViewModel.poly_count < 1) break;
          }
          else {
            core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(&g_SkeleditViewModel,local_408);
          }
        }
        if (local_2c == 1) {
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_11b0);
          iVar8 = 0;
          string_data = local_28;
          if (0 < this_ptr_02->bone_count) {
            do {
              shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_11b0.base,string_data->bone_name);
              iVar8 = iVar8 + 1;
              string_data = string_data + 1;
            } while (iVar8 < this_ptr_02->bone_count);
          }
          iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&local_11b0,"Select bone",-1,0);
          if (-1 < iVar8) {
            local_64 = iVar8;
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_11b0,0);
        }
        if (local_2c == 2) {
          shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                    (g_CEditorToolsPtr,"Edit item pos",&local_184,1);
        }
        fVar10 = local_19c.z;
        if (local_2c == 3) {
          local_24 = local_19c.z;
          local_19c.z = local_19c.y;
          local_19c.y = fVar10;
          shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                    (g_CEditorToolsPtr,"Edit item orient (P,B,H)",&local_19c,1);
          fVar10 = local_19c.z;
          local_20 = local_19c.z;
          local_19c.z = local_19c.y;
          local_19c.y = fVar10;
        }
        if (local_2c == 4) {
          iVar8 = 0;
          pcVar19 = shape_edittool_cpp_CEditorTools_getClipboardText_FUN_004a1b30(g_CEditorToolsPtr)
          ;
          cVar2 = *pcVar19;
          while (cVar2 != '\0') {
            local_1c = 0;
            sscanf(pcVar19,"%f%n");
            if (local_1c < 1) {
              pcVar19 = pcVar19 + 1;
            }
            else {
              iVar8 = iVar8 + 1;
              pcVar19 = pcVar19 + local_1c;
            }
            if (5 < iVar8) break;
            cVar2 = *pcVar19;
          }
          if (iVar8 == 6) {
            iVar8 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                              (g_CEditorToolsPtr,"Import these values:\nX: %g\nY: %g\nZ: %g\nP: %g\nB: %g\nH: %g\n");
            if (iVar8 != 0) {
              local_184.x = local_1cc;
              local_184.y = local_1c8;
              local_184.z = local_1c4;
              local_19c.x = local_1c0;
              local_19c.z = local_1bc;
              local_19c.y = local_1b8;
            }
          }
          else {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Couldn't parse clipboard text.");
          }
        }
        if (local_2c == 5) {
          _sprintf(local_46c,"CVector(%g,%g,%g), makePBH(%g,%g,%g)");
          shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(g_CEditorToolsPtr,local_46c)
          ;
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                    (g_CEditorToolsPtr,"Copied text to clipboard:\n\n%s");
        }
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_E);
    if ((iVar8 != 0) &&
       (iVar8 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter .S3D filename to save model",local_4d0,100,0),
       iVar8 != 0)) {
      splitpath(local_4d0,local_14,local_a60,local_960,local_760);
      if (local_760[0] == '\0') {
        makepath(local_4d0,local_14,local_a60,local_960,"s3d");
      }
      core_skeledit_cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0(this_ptr,local_4d0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R);
    if (iVar8 != 0) {
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar8 == 0) {
        if (local_88 < 0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"No reference pose recorded.\n(Press Shift+R to record a refernece pose)");
        }
        else {
          local_88 = 1 - local_88;
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
                  (this_ptr,&SPose_036644d8);
        local_88 = 1;
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F1);
    if (iVar8 != 0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("P",7,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Pause/Unpause",0x69,0xb);
      engine_2d_c_drawText_FUN_00401fd0("G",7,0x16);
      engine_2d_c_drawText_FUN_00401fd0("Toggle ground plane",0x69,0x16);
      engine_2d_c_drawText_FUN_00401fd0("C",7,0x21);
      engine_2d_c_drawText_FUN_00401fd0("Toggle use canceled motion",0x69,0x21);
      engine_2d_c_drawText_FUN_00401fd0("O",7,0x2c);
      engine_2d_c_drawText_FUN_00401fd0("Move model back to the origin",0x69,0x2c);
      engine_2d_c_drawText_FUN_00401fd0("B",7,0x37);
      engine_2d_c_drawText_FUN_00401fd0("Toggle bones",0x69,0x37);
      engine_2d_c_drawText_FUN_00401fd0("D",7,0x42);
      engine_2d_c_drawText_FUN_00401fd0("Choose LOD",0x69,0x42);
      engine_2d_c_drawText_FUN_00401fd0("X",7,0x4d);
      engine_2d_c_drawText_FUN_00401fd0("Choose Texture set",0x69,0x4d);
      engine_2d_c_drawText_FUN_00401fd0("H",7,0x58);
      engine_2d_c_drawText_FUN_00401fd0("Toggle home pose",0x69,0x58);
      engine_2d_c_drawText_FUN_00401fd0("v",7,99);
      engine_2d_c_drawText_FUN_00401fd0("Toggle label vertices",0x69,99);
      engine_2d_c_drawText_FUN_00401fd0("1",7,0x6e);
      engine_2d_c_drawText_FUN_00401fd0("Toggle Axis (Hey, I ran out of keys!)",0x69,0x6e);
      engine_2d_c_drawText_FUN_00401fd0("CTRL-B",7,0x79);
      engine_2d_c_drawText_FUN_00401fd0("Begin/end interactive bias",0x69,0x79);
      engine_2d_c_drawText_FUN_00401fd0("SHIFT-B",7,0x84);
      engine_2d_c_drawText_FUN_00401fd0("Enter exact bias value",0x69,0x84);
      engine_2d_c_drawText_FUN_00401fd0("R",7,0x8f);
      engine_2d_c_drawText_FUN_00401fd0("Toggle reference pose",0x69,0x8f);
      engine_2d_c_drawText_FUN_00401fd0("SHIFT-R",7,0x9a);
      engine_2d_c_drawText_FUN_00401fd0("Record reference pose",0x69,0x9a);
      engine_2d_c_drawText_FUN_00401fd0("CTRL-S",7,0xa5);
      engine_2d_c_drawText_FUN_00401fd0("Scale model",0x69,0xa5);
      engine_2d_c_drawText_FUN_00401fd0("<",7,0xbb);
      engine_2d_c_drawText_FUN_00401fd0("Previous frame (in pause mode)",0x69,0xbb);
      engine_2d_c_drawText_FUN_00401fd0(">",7,0xc6);
      engine_2d_c_drawText_FUN_00401fd0("Next frame (in pause mode)",0x69,0xc6);
      engine_2d_c_drawText_FUN_00401fd0("F",7,0xd1);
      engine_2d_c_drawText_FUN_00401fd0("Go to a specific frame number",0x69,0xd1);
      engine_2d_c_drawText_FUN_00401fd0("HOME",7,0xdc);
      engine_2d_c_drawText_FUN_00401fd0("Go to the first frame of this motion",0x69,0xdc);
      engine_2d_c_drawText_FUN_00401fd0("SHIFT+<",7,0xf2);
      engine_2d_c_drawText_FUN_00401fd0("Previous motion",0x69,0xf2);
      engine_2d_c_drawText_FUN_00401fd0("SHIFT+>",7,0xfd);
      engine_2d_c_drawText_FUN_00401fd0("Next motion",0x69,0xfd);
      engine_2d_c_drawText_FUN_00401fd0("M",7,0x108);
      engine_2d_c_drawText_FUN_00401fd0("Select motion from list",0x69,0x108);
      engine_2d_c_drawText_FUN_00401fd0("TAB",7,0x11e);
      engine_2d_c_drawText_FUN_00401fd0("Next part",0x69,0x11e);
      engine_2d_c_drawText_FUN_00401fd0("SHIFT-TAB",7,0x129);
      engine_2d_c_drawText_FUN_00401fd0("Prev part",0x69,0x129);
      engine_2d_c_drawText_FUN_00401fd0("S",7,0x134);
      engine_2d_c_drawText_FUN_00401fd0("Cycle part mode",0x69,0x134);
      engine_2d_c_drawText_FUN_00401fd0("L",7,0x14a);
      engine_2d_c_drawText_FUN_00401fd0("Toggle loop mode",0x69,0x14a);
      engine_2d_c_drawText_FUN_00401fd0("T",7,0x155);
      engine_2d_c_drawText_FUN_00401fd0("Change loop back frame number (temp change only)",0x69,0x155);
      engine_2d_c_drawText_FUN_00401fd0("I",7,0x16b);
      engine_2d_c_drawText_FUN_00401fd0("Item tester (help place items in hands, etc)",0x69,0x16b);
      engine_2d_c_drawText_FUN_00401fd0("Z",7,0x176);
      engine_2d_c_drawText_FUN_00401fd0("Show some useful info",0x69,0x176);
      engine_2d_c_drawText_FUN_00401fd0("E",7,0x181);
      engine_2d_c_drawText_FUN_00401fd0("Export to S3D",0x69,0x181);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
    (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
  } while( true );
  if (((local_40 != 0) || (local_94 != 0)) &&
     (iVar8 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                        (g_CEditorToolsPtr,"You biased/scaled the model.  Save model before exiting viewer?"), iVar8 != 0)) {
    pcVar19 = local_860;
    pcVar18 = this_ptr_01->model_filename;
    do {
      cVar2 = *pcVar18;
      *pcVar19 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar18[1];
      pcVar18 = pcVar18 + 2;
      pcVar19[1] = cVar2;
      pcVar19 = pcVar19 + 2;
    } while (cVar2 != '\0');
    iVar8 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                      (g_CEditorToolsPtr,"Enter .DFM filename","models",
                       "dfm",local_860,1);
    if (iVar8 != 0) {
      core_skeledit_cpp_CDeformableModel_save_FUN_0058f040(this_ptr_01,local_860);
    }
  }
  g_CDemonSetPtr->lighting_quality_mode = 0;
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&g_SkeleditViewModel);
  return;
}
