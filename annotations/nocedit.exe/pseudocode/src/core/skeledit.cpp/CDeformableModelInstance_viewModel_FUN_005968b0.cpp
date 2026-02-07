// Name: core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0
// Address: 005968b0
// Address Range: [[005968b0, 0059754b] [0059754f, 0059796e] [00597977, 00598ed7]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl
core_skeledit_cpp_CDeformableModelInstance_viewModel_FUN_005968b0
          (CDeformableModelInstance *this_ptr)

{
  int *piVar1;
  char cVar2;
  SRenderVertex *pSVar3;
  float fVar4;
  CDemonRenderer *this_ptr_00;
  uint uVar5;
  int iVar6;
  CDeformableModel *pCVar7;
  float fVar8;
  SMotion *pSVar9;
  CMotionList *pCVar10;
  CVector3f *pCVar11;
  CVector3f *pCVar12;
  CDeformableModelInstance *pCVar13;
  int iVar14;
  CDeformableModelInstance *pCVar15;
  CMatrix3x4f *pCVar16;
  SBone *string_data;
  char *pcVar17;
  int x;
  CMatrix3x4f *pCVar18;
  char *pcVar19;
  byte bVar20;
  double dVar21;
  CDeformableModelInstance *in_stack_00000004;
  CDeformableModel *in_stack_ffffccac;
  char *in_stack_ffffccb0;
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
  uint local_38c;
  uint local_388;
  uint local_384;
  uint local_380;
  uint local_37c;
  uint local_378;
  uint local_374;
  uint local_370;
  uint local_36c;
  uint local_368;
  uint local_364;
  uint local_360;
  byte local_35c [20];
  float local_348;
  CMatrix3x4f local_320;
  CMatrix3x4f local_2f0;
  CMatrix3x4f local_2c0;
  CMatrix3x4f local_290;
  CMatrix3x4f local_260;
  CMatrix3x4f local_230;
  byte local_200 [16];
  float local_1f0;
  float local_1ec;
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
  float local_118;
  float local_114;
  float local_110;
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
  int *local_c4;
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
  
  bVar20 = 0;
  __STK(0x33f0);
  core_skeleton_cpp_freeAllSkeletons_FUN_005a1ea0();
  core_skeleton_cpp_freeAllModels_FUN_005a1dc0();
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(in_stack_00000004);
  local_c0 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(in_stack_00000004);
  local_bc = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(local_c0);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  pCVar15 = in_stack_00000004;
  shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0((CSpotView *)local_35c);
  local_35c[0] = '\0';
  local_35c[1] = '\0';
  local_35c[2] = 'p';
  local_35c[3] = 'A';
  local_35c[0xc] = -0x25;
  local_35c[0xd] = '\x0f';
  local_35c[0xe] = 'I';
  local_35c[0xf] = '@';
  local_f4 = (pCVar15->bounding_box).min.x + (pCVar15->bounding_box).max.x;
  local_f0 = (pCVar15->bounding_box).min.y + (pCVar15->bounding_box).max.y;
  local_35c._16_4_ = local_f4 * 0.5f;
  local_ec = (pCVar15->bounding_box).min.z + (pCVar15->bounding_box).max.z;
  local_e4 = local_f0 * 0.5f;
  local_e0 = local_ec * 0.5f;
  local_1b4 = (pCVar15->bounding_box).min.x + (pCVar15->bounding_box).max.x;
  local_1b0 = (pCVar15->bounding_box).min.y + (pCVar15->bounding_box).max.y;
  local_160 = local_1b4 * 0.5f;
  local_348 = local_1b0 * 0.5f;
  local_1ac = (pCVar15->bounding_box).min.z + (pCVar15->bounding_box).max.z;
  local_158 = local_1ac * 0.5f;
  local_88 = -1;
  local_15c = local_348;
  local_e8 = (float)local_35c._16_4_;
  shape_spotview_cpp_CSpotView_FUN_005b9620((CSpotView *)local_35c);
  local_b0 = -1;
  local_b8 = 0;
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
  if ((DAT_0366b64c & 1) == 0) {
    DAT_0366b64c = DAT_0366b64c | 1;
  }
  local_64 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(local_bc,"bip01 r hand");
  if (local_64 < 0) {
    local_64 = 0;
  }
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_200);
  if ((DAT_0366b64c & 2) == 0) {
    DAT_0366b64c = DAT_0366b64c | 2;
    core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(&DAT_03665f74);
    _atexit(&DAT_00681850);
  }
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&DAT_03665f74);
  local_184.x = g_ZeroVector.x;
  local_184.y = g_ZeroVector.y;
  local_184.z = g_ZeroVector.z;
  local_19c.x = g_ZeroVector.x;
  local_19c.y = g_ZeroVector.y;
  local_19c.z = g_ZeroVector.z;
  core_motion_cpp_CMotionController_reset_FUN_0052dad0(&in_stack_00000004->motion_controller);
  local_100.x = 0.0;
  local_100.y = 0.0;
  local_100.z = 0.0;
  g_CDemonSetPtr->lighting_quality_mode = 1;
  local_30 = local_bc->bone_list;
  local_34 = local_c0->parts;
  local_5c = local_c0->vertex_pool;
  local_58 = in_stack_00000004->transformed_vertices;
  local_c4 = &(in_stack_00000004->motion_controller).current_frame_number;
  local_54 = (in_stack_00000004->bone_transform).bone_world_matrices;
  local_60 = &in_stack_00000004->bounding_box;
  local_6c = &in_stack_00000004->accumulated_root_motion;
  local_28 = local_30;
  do {
    local_90 = g_CGamePtr->delta_time_float;
    g_RenderedTriangleCount = 0;
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth,g_WindowHeight,0xf8);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    shape_spotview_cpp_CSpotView_FUN_005b9a20((CSpotView *)local_35c);
    iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
    if (iVar6 == 0) {
      iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar6 == 0) {
        iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x47);
        if (iVar6 != 0) {
          (in_stack_00000004->motion_controller).current_frame_number = 0;
        }
        iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4f);
        if (iVar6 != 0) {
          pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&in_stack_00000004->motion_controller);
          local_18 = (float)(pSVar9->frame_count + -1);
          (in_stack_00000004->motion_controller).current_frame_number = (int)(float)(int)local_18;
        }
      }
      else {
        iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x34);
        if (iVar6 != 0) {
          piVar1 = &(in_stack_00000004->motion_controller).current_motion_index;
          *piVar1 = *piVar1 + 1;
        }
        iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x33);
        pCVar15 = in_stack_00000004;
        if (iVar6 != 0) {
          piVar1 = &(in_stack_00000004->motion_controller).current_motion_index;
          *piVar1 = *piVar1 + -1;
        }
        if ((in_stack_00000004->motion_controller).current_motion_index < 0) {
          pCVar10 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&in_stack_00000004->motion_controller);
          (pCVar15->motion_controller).current_motion_index = pCVar10->motion_count + -1;
        }
        pCVar10 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&in_stack_00000004->motion_controller);
        if (pCVar10->motion_count <= (in_stack_00000004->motion_controller).current_motion_index) {
          (in_stack_00000004->motion_controller).current_motion_index = 0;
        }
      }
    }
    local_6c->z = 0.0;
    local_6c->y = local_6c->z;
    local_6c->x = local_6c->y;
    local_8c = 1.0;
    iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    if (iVar6 != 0) {
      local_8c = 0.33333334;
    }
    if (local_a8 == 0) {
      pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&in_stack_00000004->motion_controller);
      fVar8 = (float)pSVar9->frame_start;
      local_80 = (float)(in_stack_00000004->motion_controller).current_frame_number;
      pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&in_stack_00000004->motion_controller);
      pCVar15 = in_stack_00000004;
      local_7c = (float)pSVar9->frame_count;
      if (local_a0 == 0) {
        pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&in_stack_00000004->motion_controller);
        fVar4 = local_90 * pSVar9->fps * local_8c +
                (float)(pCVar15->motion_controller).current_frame_number;
        (pCVar15->motion_controller).current_frame_number = (int)fVar4;
        if (local_7c < fVar4) {
          do {
            local_18 = fVar8;
            (*((in_stack_00000004->motion_controller).vtable)->accumulateScaledRootMotion)
                      (&in_stack_00000004->motion_controller,(float)(int)fVar8 + local_80,
                       (float)(int)fVar8 + local_7c,1.0);
            pCVar15 = in_stack_00000004;
            if (local_b8 == 0) {
              (in_stack_00000004->motion_controller).current_frame_number =
                   (int)((float)(in_stack_00000004->motion_controller).current_frame_number -
                        local_7c);
            }
            else {
              pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                 (&in_stack_00000004->motion_controller);
              (pCVar15->motion_controller).current_frame_number = (int)pSVar9->exit_forward_to_frame
              ;
            }
            local_80 = 0.0;
          } while (local_7c < (float)(in_stack_00000004->motion_controller).current_frame_number);
        }
        local_18 = fVar8;
        (*((in_stack_00000004->motion_controller).vtable)->accumulateScaledRootMotion)
                  (&in_stack_00000004->motion_controller,(float)(int)fVar8 + local_80,
                   (float)(int)fVar8 +
                   (float)(in_stack_00000004->motion_controller).current_frame_number,1.0);
        pCVar15 = in_stack_00000004;
      }
      else {
        iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x34);
        if (iVar6 != 0) {
          (in_stack_00000004->motion_controller).current_frame_number =
               (int)((float)(in_stack_00000004->motion_controller).current_frame_number + local_8c);
          local_78 = local_7c;
          if ((float)(in_stack_00000004->motion_controller).current_frame_number < local_7c) {
            local_78 = (float)(in_stack_00000004->motion_controller).current_frame_number;
          }
          local_18 = fVar8;
          (*((in_stack_00000004->motion_controller).vtable)->accumulateScaledRootMotion)
                    (&in_stack_00000004->motion_controller,(float)(int)fVar8 + local_80,
                     (float)(int)fVar8 + local_78,1.0);
        }
        iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x33);
        pCVar15 = in_stack_00000004;
        if (iVar6 != 0) {
          (in_stack_00000004->motion_controller).current_frame_number =
               (int)((float)(in_stack_00000004->motion_controller).current_frame_number - local_8c);
          local_74 = 0.0;
          if (0.0 < (float)(in_stack_00000004->motion_controller).current_frame_number) {
            local_74 = (float)(in_stack_00000004->motion_controller).current_frame_number;
          }
          local_70 = (float)(int)fVar8;
          local_18 = fVar8;
          (*((in_stack_00000004->motion_controller).vtable)->accumulateScaledRootMotion)
                    (&in_stack_00000004->motion_controller,local_70 + local_74,local_70 + local_80,
                     1.0);
          if ((float)(in_stack_00000004->motion_controller).current_frame_number < 0.0) {
            local_18 = local_70 + local_7c;
            (*((in_stack_00000004->motion_controller).vtable)->accumulateScaledRootMotion)
                      (&in_stack_00000004->motion_controller,
                       local_18 + (float)(in_stack_00000004->motion_controller).current_frame_number
                       ,local_18,1.0);
          }
          local_178 = -local_6c->x;
          local_174 = -local_6c->y;
          local_170 = -local_6c->z;
          pCVar15 = in_stack_00000004;
          if ((CVector3f *)&local_178 != local_6c) {
            local_6c->x = local_178;
            local_6c->y = local_174;
            local_6c->z = local_170;
          }
        }
      }
      while (pCVar13 = in_stack_00000004,
            (float)(in_stack_00000004->motion_controller).current_frame_number < 0.0) {
        pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&pCVar15->motion_controller);
        (pCVar15->motion_controller).current_frame_number =
             (int)((float)pSVar9->frame_count +
                  (float)(pCVar15->motion_controller).current_frame_number);
      }
      pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&in_stack_00000004->motion_controller);
      if ((float)pSVar9->frame_count <= (float)(pCVar13->motion_controller).current_frame_number) {
        if (local_b8 == 0) {
          (pCVar13->motion_controller).current_frame_number = 0;
        }
        else {
          pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&pCVar13->motion_controller);
          (pCVar13->motion_controller).current_frame_number = (int)pSVar9->exit_forward_to_frame;
        }
      }
      if (local_48 != 0) {
        local_100.x = local_100.x + local_6c->x;
        local_100.y = local_100.y + local_6c->y;
        local_100.z = local_100.z + local_6c->z;
      }
    }
    iVar6 = local_44;
    pCVar15 = in_stack_00000004;
    pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(in_stack_00000004);
    if (iVar6 < pCVar7->num_parts) {
      if (iVar6 < 0) {
        pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(pCVar15);
        local_44 = pCVar7->num_parts + -1;
      }
    }
    else {
      local_44 = 0;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&local_100);
    pCVar15 = in_stack_00000004;
    local_d0.x = 0;
    local_d0.y = 0;
    local_d0.z = 0;
    if (local_a8 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
                (in_stack_00000004);
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(in_stack_00000004);
      core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(pCVar15);
    }
    pCVar15 = in_stack_00000004;
    if (local_b4 == 1) {
      pCVar13 = in_stack_00000004;
      for (iVar6 = 0;
          pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(pCVar15),
          iVar6 < pCVar7->num_parts; iVar6 = iVar6 + 1) {
        pCVar13->part_visibility_flags[0] = 0;
        pCVar13 = (CDeformableModelInstance *)&(pCVar13->motion_controller).current_motion_index;
      }
      pCVar15->part_visibility_flags[local_44] = 3;
    }
    else if (local_b4 == 2) {
      for (iVar6 = 0;
          pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                             (in_stack_00000004), iVar6 < pCVar7->num_parts; iVar6 = iVar6 + 1) {
        pCVar15->part_visibility_flags[0] = 3;
        pCVar15 = (CDeformableModelInstance *)&(pCVar15->motion_controller).current_motion_index;
      }
      in_stack_00000004->part_visibility_flags[local_44] = 0;
    }
    core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430
              (in_stack_00000004);
    iVar6 = local_a4;
    this_ptr_00 = g_CDemonRendererPtr2;
    in_stack_00000004->texture_set_indices[local_44] = local_ac;
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(this_ptr_00,0);
    if (iVar6 < 2) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (in_stack_00000004,local_b0,0xffffffff,1,0);
    }
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr2);
    uVar5 = local_84;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(in_stack_00000004);
    if (uVar5 != 0) {
      iVar14 = 0;
      iVar6 = 0;
      while (iVar6 < local_c0->vertex_count[in_stack_00000004->cached_skinned_lod_index]) {
        pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        if ((*(byte *)((int)&(pSVar3->projected_vertex).screen_x + iVar14 + 3) & 0x80) == 0) {
          local_68 = *(int *)((int)&(pSVar3->projected_vertex).screen_y + iVar14) >> 0x10;
          x = *(int *)((int)&(pSVar3->projected_vertex).screen_x + iVar14) >> 0x10;
          if (x < 0) goto LAB_0059722b;
          sprintf(local_598,"%d");
          engine_2d_c_drawText_FUN_00401fd0(local_598,x,local_68);
          iVar6 = iVar6 + 1;
          iVar14 = iVar14 + 0x30;
        }
        else {
LAB_0059722b:
          iVar6 = iVar6 + 1;
          iVar14 = iVar14 + 0x30;
        }
      }
    }
    iVar6 = local_64;
    if (0 < DAT_03665f74.poly_count) {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_2c0,&local_184,&local_19c);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_2c0,local_54 + iVar6,&local_320);
      pCVar16 = &local_320;
      pCVar18 = &local_2f0;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        pCVar18->m[0].w = pCVar16->m[0].w;
        pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar20 * -2 + 1) * 4);
        pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar20 * -2 + 1) * 4);
      }
      pCVar11 = core_xform_cpp_getTranslation_FUN_005f6110(&local_2f0,&local_16c);
      if ((CVector3f *)local_200 != pCVar11) {
        local_200._0_4_ = pCVar11->x;
        local_200._4_4_ = pCVar11->y;
        local_200._8_4_ = pCVar11->z;
      }
      pCVar11 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                          ((CMatrix3x3f *)&local_2f0,&local_148);
      if ((CVector3f *)(local_200 + 0xc) != pCVar11) {
        local_200._12_4_ = pCVar11->x;
        local_1f0 = pCVar11->y;
        local_1ec = pCVar11->z;
      }
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,(CVector3i *)(local_200 + 0xc),(CVector3i *)local_200);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                (&DAT_03665f74,(CKeyFramedModelInstance *)0x0,0,-1);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    pCVar15 = in_stack_00000004;
    if (0 < local_88) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
                (in_stack_00000004,(SBoneTransformData *)&stack0xffffcc64);
      core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
                (pCVar15,(SBoneTransformData *)&DAT_036644d8);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr2,1);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0x8000);
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (pCVar15,-1,0x2e7,1,0);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr2);
      core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
                (pCVar15,(SBoneTransformData *)&stack0xffffcc64);
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3e);
    if (iVar6 != 0) {
      DAT_036712e0 = DAT_036712e0 + 1;
      sprintf(&DAT_036712e8,"noc%d.pcx");
      engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(&DAT_036712e8);
    }
    if (local_4c != 0) {
      local_dc.x = (int)-local_100.x;
      local_dc.y = (int)-local_100.y;
      local_dc.z = (int)-local_100.z;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,&local_d0,&local_dc);
      local_154.x = 0xFFFFF100;
      *(uint *)((int)&local_154 + (uint)bVar20 * -8 + 4) = (&DAT_00681a00)[(uint)bVar20 * -2];
      *(uint *)((int)&local_154 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8) =
           (&0xFFFFF100)[(uint)bVar20 * -2 + (uint)bVar20 * -2];
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
      local_37c = 0xfe0000;
      local_370 = 0xfe0000;
      local_36c = 0xfe0000;
      local_360 = 0xfe0000;
      local_3a4.surface_normal.D = 0;
      local_3a4.surface_normal.C = 0;
      local_3a4.surface_normal.B = 0;
      local_3a4.surface_normal.A = 0;
      local_38c = 0;
      local_368 = 3;
      local_388 = 0x20000;
      local_384 = 0x20000;
      local_378 = 0x20000;
      local_364 = 0x20000;
      local_380 = 1;
      local_374 = 2;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,&DAT_006819e4);
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr2,0xff,0,0xff);
      engine_drender_cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40
                (g_CDemonRendererPtr2,&local_3a4);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    iVar6 = local_a4;
    pCVar15 = in_stack_00000004;
    if (0 < local_a4) {
      iVar14 = 1;
      if (2 < local_a4) {
        iVar14 = 3;
      }
      core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_005a17b0
                (in_stack_00000004,(uint)g_ColorCubeLookup[0x7c00],iVar14);
      if (iVar6 == 4) {
        core_skeleton_cpp_CDeformableModelInstance_renderBones_FUN_005a17e0(pCVar15);
      }
    }
    if (local_98 == 0) {
      if (local_9c != 0) {
        fVar8 = 3.57331e-43;
        goto LAB_005975b4;
      }
    }
    else {
      fVar8 = (float)shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                               (g_CEditorToolsPtr);
LAB_005975b4:
      shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
                (g_CEditorToolsPtr,2.0,(int)fVar8);
    }
    sprintf(local_46c,"%f, %d");
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,g_WindowHeight + -0xb);
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
              (&in_stack_00000004->motion_controller);
    sprintf(local_46c," %s %7.2f ");
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0xb);
    local_18 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                         (&in_stack_00000004->motion_controller);
    sprintf(local_46c," Zone: %5.2f ");
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x16);
    sprintf(local_46c," [L] Loop mode: %s ");
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x21);
    sprintf(local_46c," [C] Use canceled: %s ");
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x2c);
    iVar6 = local_44;
    core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220(local_c0,local_44);
    core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220(local_c0,iVar6);
    sprintf(local_46c," Selected part: %d \"%s\" Dominant bone: \"%s\"");
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x37);
    sprintf(local_46c," F1 for key list ");
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x42);
    local_18 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(local_60);
    dVar21 = round((double)local_18);
    local_18 = (float)(int)ROUND(dVar21);
    sprintf(local_46c," LOD: %d PixHeight: %d Polys %d");
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x4d);
    sprintf(local_46c," Current texture set: %d");
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x58);
    if (0 < DAT_03665f74.poly_count) {
      sprintf(local_46c," Item pos: X: %5.3f Y: %5.3f Z: %5.3f");
      engine_2d_c_drawText_FUN_00401fd0(local_46c,0,99);
      sprintf(local_46c," Item orient: P: %5.3f B: %5.3f H: %5.3f");
      engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x6e);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar6 != 0) break;
    iVar6 = 0;
    pCVar11 = local_5c;
    pCVar12 = local_58;
    if (0 < local_bc->bone_count) {
      do {
        if (pCVar12 != pCVar11) {
          pCVar12->x = pCVar11->x;
          pCVar12->y = pCVar11->y;
          pCVar12->z = pCVar11->z;
        }
        iVar6 = iVar6 + 1;
        pCVar11 = pCVar11 + 1;
        pCVar12 = pCVar12 + 1;
      } while (iVar6 < local_bc->bone_count);
    }
    if (((DAT_03665f74.poly_count < 1) ||
        (iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d), iVar6 == 0)) ||
       (local_a0 == 0)) {
      if (local_98 == 0) {
        shape_spotview_cpp_CSpotView_FUN_005b9670((CSpotView *)local_35c);
      }
      else {
        shape_spotview_cpp_CSpotView_FUN_005b9670((CSpotView *)local_35c);
        local_50 = g_CGamePtr->delta_time_float * (float)2;
        iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
        if (iVar6 != 0) {
          local_50 = local_50 * 3.0f;
        }
        iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
        if (iVar6 != 0) {
          local_50 = local_50 * 0.05f;
        }
        local_118 = 0.0;
        local_114 = 0.0;
        local_110 = 0.0;
        iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
        if (iVar6 != 0) {
          local_114 = local_114 - local_50;
        }
        iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
        if (iVar6 != 0) {
          local_114 = local_114 + local_50;
        }
        iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
        if (iVar6 != 0) {
          local_118 = local_118 - local_50;
        }
        iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
        if (iVar6 != 0) {
          local_118 = local_118 + local_50;
        }
        iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
        if (iVar6 != 0) {
          local_110 = local_110 - local_50;
        }
        iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
        if (iVar6 != 0) {
          local_110 = local_110 + local_50;
        }
        if (0.0 < SQRT(local_110 * local_110 + local_118 * local_118 + local_114 * local_114)) {
          local_40 = 1;
          core_skeledit_cpp_FUN_0058e600();
        }
      }
    }
    else {
      core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)local_200);
      core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                (&local_230,(CVector3f *)local_200,(CVector3f *)(local_200 + 0xc));
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(local_54 + local_64,&local_230,&local_290);
      pCVar16 = &local_290;
      pCVar18 = &local_260;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        pCVar18->m[0].w = pCVar16->m[0].w;
        pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar20 * -2 + 1) * 4);
        pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar20 * -2 + 1) * 4);
      }
      pCVar11 = core_xform_cpp_invertAndGetTranslation_FUN_005f6140(&local_260,&local_10c);
      if (&local_184 != pCVar11) {
        local_184.x = pCVar11->x;
        local_184.y = pCVar11->y;
        local_184.z = pCVar11->z;
      }
      pCVar11 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
                          ((CMatrix3x3f *)&local_260,&local_190);
      if (&local_19c != pCVar11) {
        local_19c.x = pCVar11->x;
        local_19c.y = pCVar11->y;
        local_19c.z = pCVar11->z;
      }
    }
    in_stack_ffffccb0 = (char *)0x30;
    in_stack_ffffccac = (CDeformableModel *)g_CKeysPtr;
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x30);
    if (iVar6 != 0) {
      in_stack_ffffccb0 = (char *)0x597c43;
      iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar6 == 0) {
        iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
        if (iVar6 == 0) {
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
        in_stack_ffffccb0 = (char *)0x597c68;
        iVar6 = shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                          (g_CEditorToolsPtr,"Bias model x,y,z",&local_13c,0);
        if ((iVar6 != 0) &&
           (0.0 < SQRT(local_13c.z * local_13c.z +
                       local_13c.x * local_13c.x + local_13c.y * local_13c.y))) {
          local_40 = 1;
          core_skeledit_cpp_FUN_0058e600();
        }
      }
    }
    iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x18);
    if (iVar6 != 0) {
      local_100.y = 0.0;
      local_100.x = 0.0;
      local_100.z = 0.0;
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x19);
    if (iVar6 != 0) {
      local_a0 = (uint)(local_a0 == 0);
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x26);
    if (iVar6 != 0) {
      local_b8 = (uint)(local_b8 == 0);
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x22);
    if (iVar6 != 0) {
      local_4c = (uint)(local_4c == 0);
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2e);
    if (iVar6 != 0) {
      local_48 = (uint)(local_48 == 0);
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,2);
    if (iVar6 != 0) {
      local_9c = (uint)(local_9c == 0);
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2f);
    if (iVar6 != 0) {
      local_84 = (uint)(local_84 == 0);
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1f);
    if (iVar6 != 0) {
      iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
      pCVar7 = local_c0;
      pCVar15 = in_stack_00000004;
      if (iVar6 == 0) {
        local_b4 = (local_b4 + 1) % 3;
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
                  (in_stack_00000004,0);
        core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
                  (&local_1e4,pCVar7->vertex_count[pCVar15->cached_skinned_lod_index],
                   pCVar15->skinned_vertices_buffer);
        local_1a8 = local_1e4.max.x - local_1e4.min.x;
        local_1a4 = local_1e4.max.y - local_1e4.min.y;
        local_1a0 = local_1e4.max.z - local_1e4.min.z;
        local_130 = local_1a8;
        local_12c = local_1a4;
        local_128 = local_1a0;
        local_124 = local_1a8;
        local_120 = local_1a4;
        local_11c = local_1a0;
        sprintf(local_660,"Current dimensions:\nX: %7.3f .. %7.3f : %7.3f\nY: %7.3f .. %7.3f : %7.3f\nZ: %7.3f .. %7.3f : %7.3f\n\nEnter scale factor");
        iVar6 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                          (g_CEditorToolsPtr,local_660,&local_3c,1,0.0001,999999.9,0);
        if ((iVar6 != 0) && (local_3c != 1.0)) {
          core_skeledit_cpp_FUN_0058e3e0();
          local_94 = 1;
        }
      }
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x21);
    if (iVar6 != 0) {
      fVar8 = 0.0;
      pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&in_stack_00000004->motion_controller);
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,"Enter frame number",(float *)local_c4,1,0.0,
                 (float)pSVar9->frame_count,(int)fVar8);
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x32);
    pCVar15 = in_stack_00000004;
    if (iVar6 != 0) {
      iVar6 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1900);
      for (iVar14 = 0;
          pCVar10 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&pCVar15->motion_controller), iVar14 < pCVar10->motion_count;
          iVar14 = iVar14 + 1) {
        pCVar10 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&pCVar15->motion_controller);
        pcVar19 = pCVar10->motions[0].motion_name + iVar6;
        iVar6 = iVar6 + 0x54c;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1900.base,pcVar19);
      }
      iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_1900,"Select motion",
                         (pCVar15->motion_controller).current_motion_index,0);
      if (-1 < iVar6) {
        (pCVar15->motion_controller).current_motion_index = iVar6;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1900,0);
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x14);
    if (iVar6 != 0) {
      pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&in_stack_00000004->motion_controller);
      dVar21 = round((double)pSVar9->exit_forward_to_frame);
      local_38 = (float)(int)ROUND(dVar21);
      iVar6 = pSVar9->exit_forward_to_motion;
      pCVar10 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                          (&in_stack_00000004->motion_controller);
      iVar6 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                        (g_CEditorToolsPtr,"Enter exit forward to frame number",(int *)&local_38,1,0,
                         pCVar10->motions[iVar6].frame_count + -1,1);
      if (iVar6 != 0) {
        local_18 = local_38;
        pSVar9->exit_forward_to_frame = (float)(int)local_38;
      }
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2d);
    if (iVar6 != 0) {
      shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                (g_CEditorToolsPtr,"Select texture set",&local_ac,1,0,4,1);
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
    if (iVar6 != 0) {
      pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                         (in_stack_00000004);
      iVar6 = pCVar7->num_lods;
      sprintf(local_534,"Select LOD (0..%d), or -1 for auto-LOD");
      shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                (g_CEditorToolsPtr,local_534,&local_b0,1,-1,iVar6 + -1,1);
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x23);
    if (iVar6 != 0) {
      local_a8 = (uint)(local_a8 == 0);
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2c);
    if (iVar6 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1558);
      pCVar7 = local_c0;
      iVar6 = 0;
      if (0 < local_bc->bone_count) {
        do {
          core_skeleton_cpp_CDeformableModel_getBonePart_FUN_0059c2d0(pCVar7,iVar6);
          sprintf(local_46c,"%s\t%s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1558.base,local_46c);
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_bc->bone_count);
      }
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_1558,"Part for bone info",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1558,0);
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
    if (iVar6 != 0) {
      iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar6 == 0) {
        local_44 = local_44 + 1;
      }
      else {
        local_44 = local_44 + -1;
      }
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x17);
    if (iVar6 != 0) {
      while( true ) {
        local_2c = 0;
        if (0 < DAT_03665f74.poly_count) {
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_e08);
          sprintf(local_46c,"Model:\t%s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_e08.base,local_46c);
          sprintf(local_46c,"Bone:\t%s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_e08.base,local_46c);
          sprintf(local_46c,"Pos: %5.3f %5.3f %5.3f");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_e08.base,local_46c);
          sprintf(local_46c,"Orient: %5.3f %5.3f %5.3f");
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
          iVar6 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                            (g_CEditorToolsPtr,"Select model to position","models"
                             ,"*.kfm",(int)local_408,0);
          if (iVar6 == 0) {
            if (DAT_03665f74.poly_count < 1) break;
          }
          else {
            core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(&DAT_03665f74,local_408);
          }
        }
        if (local_2c == 1) {
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_11b0);
          iVar6 = 0;
          string_data = local_28;
          if (0 < local_bc->bone_count) {
            do {
              shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_11b0.base,string_data->bone_name);
              iVar6 = iVar6 + 1;
              string_data = string_data + 1;
            } while (iVar6 < local_bc->bone_count);
          }
          iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&local_11b0,"Select bone",-1,0);
          if (-1 < iVar6) {
            local_64 = iVar6;
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_11b0,0);
        }
        if (local_2c == 2) {
          shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                    (g_CEditorToolsPtr,"Edit item pos",&local_184,1);
        }
        fVar8 = local_19c.z;
        if (local_2c == 3) {
          local_24 = local_19c.z;
          local_19c.z = local_19c.y;
          local_19c.y = fVar8;
          shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                    (g_CEditorToolsPtr,"Edit item orient (P,B,H)",&local_19c,1);
          fVar8 = local_19c.z;
          local_20 = local_19c.z;
          local_19c.z = local_19c.y;
          local_19c.y = fVar8;
        }
        if (local_2c == 4) {
          iVar6 = 0;
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
              iVar6 = iVar6 + 1;
              pcVar19 = pcVar19 + local_1c;
            }
            if (5 < iVar6) break;
            cVar2 = *pcVar19;
          }
          if (iVar6 == 6) {
            iVar6 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                              (g_CEditorToolsPtr,"Import these values:\nX: %g\nY: %g\nZ: %g\nP: %g\nB: %g\nH: %g\n");
            if (iVar6 != 0) {
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
          sprintf(local_46c,"CVector(%g,%g,%g), makePBH(%g,%g,%g)");
          shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(g_CEditorToolsPtr,local_46c)
          ;
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                    (g_CEditorToolsPtr,"Copied text to clipboard:\n\n%s");
        }
      }
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x12);
    if ((iVar6 != 0) &&
       (iVar6 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter .S3D filename to save model",local_4d0,100,0),
       iVar6 != 0)) {
      splitpath(local_4d0,local_14,local_a60,local_960,local_760);
      if (local_760[0] == '\0') {
        makepath(local_4d0,local_14,local_a60,local_960,"s3d");
      }
      core_skeledit_cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0
                (in_stack_00000004,local_4d0);
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
    if (iVar6 != 0) {
      iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar6 == 0) {
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
                  (in_stack_00000004,(SBoneTransformData *)&DAT_036644d8);
        local_88 = 1;
      }
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3b);
    if (iVar6 != 0) {
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
     (iVar6 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                        (g_CEditorToolsPtr,"You biased/scaled the model.  Save model before exiting viewer?"), iVar6 != 0)) {
    pcVar19 = local_860;
    pcVar17 = local_c0->model_filename;
    do {
      cVar2 = *pcVar17;
      *pcVar19 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar17[1];
      pcVar17 = pcVar17 + 2;
      pcVar19[1] = cVar2;
      pcVar19 = pcVar19 + 2;
    } while (cVar2 != '\0');
    iVar6 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                      (g_CEditorToolsPtr,"Enter .DFM filename","models",0x64e099,
                       (int)local_860);
    if (iVar6 != 0) {
      core_skeledit_cpp_CDeformableModel_save_FUN_0058f040(in_stack_ffffccac,in_stack_ffffccb0);
    }
  }
  g_CDemonSetPtr->lighting_quality_mode = 0;
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&DAT_03665f74);
  return;
}
