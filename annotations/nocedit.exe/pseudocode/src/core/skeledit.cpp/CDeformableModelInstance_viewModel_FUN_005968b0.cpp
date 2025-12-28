// Name: core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0
// Address: 005968b0
// Address Range: [[005968b0, 0059754b] [0059754f, 0059796e] [00597977, 00598ed7]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0(CDeformableModelInstance * this_ptr)

#include "nocturne.h"

void __cdecl
core_skeledit_cpp_CDeformableModelInstance_viewModel_FUN_005968b0
          (CDeformableModelInstance *this_ptr)

{
  int *piVar1;
  char cVar2;
  float fVar3;
  SRenderVertex *pSVar4;
  float fVar5;
  CDemonRenderer *this_ptr_00;
  uchar uVar6;
  bool bVar7;
  int iVar8;
  CDeformableModel *pCVar9;
  undefined3 extraout_var;
  SMotion *pSVar10;
  char *pcVar11;
  SPart *pSVar12;
  float *extraout_EAX;
  CMotionList *pCVar13;
  CVector3f *pCVar14;
  int extraout_EAX_00;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  CVector3f *pCVar15;
  CDeformableModelInstance *pCVar16;
  BADSPACEBASE *in_ESP;
  int iVar17;
  float *pfVar18;
  SBone *pSVar19;
  char *pcVar20;
  int x_pos;
  char *pcVar21;
  byte bVar22;
  double dVar23;
  CDeformableModelInstance *in_stack_0000000c;
  CGame *in_stack_ffffcbc2;
  CPickList *this_ptr_01;
  byte show_current_value;
  uint uVar24;
  CMatrix3x4f *pCVar26;
  uint d5;
  uint in_stack_ffffcbfa;
  uint uVar27;
  uint in_stack_ffffcbfe;
  uint in_stack_ffffcc02;
  CDemonRenderer *in_stack_ffffcc06;
  uint in_stack_ffffcc0a;
  CPickList CStack_18f8;
  CPickList CStack_1550;
  CPickList CStack_11a8;
  CPickList CStack_e00;
  char acStack_a58 [256];
  char acStack_958 [256];
  char acStack_858 [256];
  char acStack_758 [256];
  char acStack_658 [200];
  char acStack_590 [100];
  char acStack_52c [100];
  char acStack_4c8 [100];
  char acStack_464 [100];
  char acStack_400 [100];
  SMRGLHeaderPrimitive local_39c;
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
  uint local_35c;
  uint uStack_358;
  byte auStack_354 [20];
  float fStack_340;
  float afStack_318 [12];
  CVector3f aCStack_2e8 [4];
  CMatrix3x4f CStack_2b8;
  float afStack_288 [12];
  CVector3f aCStack_258 [4];
  CMatrix3x4f CStack_228;
  byte local_1f8 [16];
  float fStack_1e8;
  float local_1e4;
  CBoundingBox3D local_1dc;
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
  float local_19c;
  float local_198;
  CVector3f local_194;
  CMatrix3x3f CStack_188;
  byte auStack_164 [28];
  float local_148 [2];
  CMatrix3x3f CStack_140;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float fStack_108;
  byte auStack_104 [16];
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  CVector3i local_d4;
  CVector3i local_c8;
  float *local_bc;
  CDeformableModel *local_b8;
  CSkeleton *local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  float local_88;
  float local_84;
  int local_80;
  uint local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  CVector3f *local_64;
  int local_60;
  int local_5c;
  CBoundingBox3D *local_58;
  CVector3f *local_54;
  CVector3f *local_50;
  CMatrix3x4f *local_4c;
  float local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30;
  SPart *local_2c;
  SBone *local_28;
  int local_24;
  SBone *local_20;
  float local_1c;
  float local_18;
  int local_14;
  float local_10;
  char acStack_c [4];
  CKeys *pCVar25;
  
  bVar22 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x33f0);
  core_skeleton_cpp_freeAllSkeletons_FUN_005a1ea0();
  core_skeleton_cpp_freeAllModels_FUN_005a1dc0();
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(in_stack_0000000c);
  local_b8 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(in_stack_0000000c);
  local_b4 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(local_b8);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffcbc2);
  shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0((CSpotView *)auStack_354);
  auStack_354[0] = '\0';
  auStack_354[1] = '\0';
  auStack_354[2] = 'p';
  auStack_354[3] = 'A';
  auStack_354[0xc] = -0x25;
  auStack_354[0xd] = '\x0f';
  auStack_354[0xe] = 'I';
  auStack_354[0xf] = '@';
  local_ec = (in_stack_0000000c->bounding_box).min.x + (in_stack_0000000c->bounding_box).max.x;
  local_e8 = (in_stack_0000000c->bounding_box).min.y + (in_stack_0000000c->bounding_box).max.y;
  auStack_354._16_4_ = local_ec * 0.5f;
  local_e4 = (in_stack_0000000c->bounding_box).min.z + (in_stack_0000000c->bounding_box).max.z;
  local_dc = local_e8 * 0.5f;
  local_d8 = local_e4 * 0.5f;
  local_1ac = (in_stack_0000000c->bounding_box).min.x + (in_stack_0000000c->bounding_box).max.x;
  local_1a8 = (in_stack_0000000c->bounding_box).min.y + (in_stack_0000000c->bounding_box).max.y;
  auStack_164._12_4_ = local_1ac * 0.5f;
  fStack_340 = local_1a8 * 0.5f;
  local_1a4 = (in_stack_0000000c->bounding_box).min.z + (in_stack_0000000c->bounding_box).max.z;
  auStack_164._20_4_ = local_1a4 * 0.5f;
  local_80 = -1;
  auStack_164._16_4_ = fStack_340;
  local_e0 = (float)auStack_354._16_4_;
  shape_spotview_cpp_CSpotView_FUN_005b9620((CSpotView *)auStack_354);
  local_a8 = -1;
  local_b0 = 0;
  local_40 = 0;
  local_3c = 0;
  local_ac = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_38 = 0;
  local_8c = 0;
  local_7c = 0;
  local_44 = 1;
  if ((DAT_0366b64c & 1) == 0) {
    DAT_0366b64c = DAT_0366b64c | 1;
  }
  local_5c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(local_b4,"bip01 r hand");
  if (local_5c < 0) {
    local_5c = 0;
  }
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_1f8);
  if ((DAT_0366b64c & 2) == 0) {
    DAT_0366b64c = DAT_0366b64c | 2;
    core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(&DAT_03665f74);
    crt_stdlib_c_atexit_FUN_005ff060(&DAT_00681850);
  }
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&DAT_03665f74);
  CStack_188.m[1].x = g_ZeroVector.x;
  CStack_188.m[1].y = g_ZeroVector.y;
  CStack_188.m[1].z = g_ZeroVector.z;
  local_194.x = g_ZeroVector.x;
  local_194.y = g_ZeroVector.y;
  local_194.z = g_ZeroVector.z;
  core_motion_cpp_CMotionController_reset_FUN_0052dad0(&in_stack_0000000c->motion_controller);
  auStack_104._12_4_ = 0.0;
  local_f4 = 0.0;
  local_f0 = 0.0;
  g_CDemonSetPtr->lighting_quality_mode = 1;
  local_28 = local_b4->bone_list;
  local_2c = local_b8->parts;
  local_54 = local_b8->vertex_pool;
  local_50 = in_stack_0000000c->transformed_vertices;
  local_bc = &(in_stack_0000000c->motion_controller).current_frame_number;
  local_4c = (in_stack_0000000c->bone_transform).bone_world_matrices;
  local_58 = &in_stack_0000000c->bounding_box;
  local_64 = &in_stack_0000000c->accumulated_root_motion;
  local_20 = local_28;
  do {
    local_88 = g_CGamePtr->delta_time_float;
    g_RenderedTriangleCount = 0;
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth,g_WindowHeight,0xf8);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    shape_spotview_cpp_CSpotView_FUN_005b9a20((CSpotView *)auStack_354);
    pCVar26 = (CMatrix3x4f *)0x1d;
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
    if (iVar8 == 0) {
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar8 == 0) {
        iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x47);
        if (iVar8 != 0) {
          (in_stack_0000000c->motion_controller).current_frame_number = 0.0;
        }
        iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4f);
        if (iVar8 != 0) {
          pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                              (&in_stack_0000000c->motion_controller);
          local_10 = (float)(pSVar10->frame_count + -1);
          (in_stack_0000000c->motion_controller).current_frame_number = (float)(int)local_10;
        }
      }
      else {
        iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x34);
        if (iVar8 != 0) {
          piVar1 = &(in_stack_0000000c->motion_controller).current_motion_index;
          *piVar1 = *piVar1 + 1;
        }
        iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x33);
        if (iVar8 != 0) {
          piVar1 = &(in_stack_0000000c->motion_controller).current_motion_index;
          *piVar1 = *piVar1 + -1;
        }
        if ((in_stack_0000000c->motion_controller).current_motion_index < 0) {
          pCVar13 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&in_stack_0000000c->motion_controller);
          (in_stack_0000000c->motion_controller).current_motion_index = pCVar13->motion_count + -1;
        }
        pCVar13 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&in_stack_0000000c->motion_controller);
        if (pCVar13->motion_count <= (in_stack_0000000c->motion_controller).current_motion_index) {
          (in_stack_0000000c->motion_controller).current_motion_index = 0;
        }
      }
    }
    local_64->z = 0.0;
    local_64->y = local_64->z;
    local_64->x = local_64->y;
    local_84 = 1.0;
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    if (iVar8 != 0) {
      local_84 = 0.33333334;
    }
    if (local_a0 == 0) {
      pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&in_stack_0000000c->motion_controller);
      fVar3 = (float)pSVar10->frame_start;
      local_78 = (in_stack_0000000c->motion_controller).current_frame_number;
      pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&in_stack_0000000c->motion_controller);
      local_74 = (float)pSVar10->frame_count;
      if (local_98 == 0) {
        pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&in_stack_0000000c->motion_controller);
        fVar5 = local_88 * pSVar10->fps * local_84 +
                (in_stack_0000000c->motion_controller).current_frame_number;
        (in_stack_0000000c->motion_controller).current_frame_number = fVar5;
        if (local_74 < fVar5) {
          do {
            local_10 = fVar3;
            (*((in_stack_0000000c->motion_controller).vtable)->accumulateScaledRootMotion)
                      (&in_stack_0000000c->motion_controller,(float)(int)fVar3 + local_78,
                       (float)(int)fVar3 + local_74,1.0);
            if (local_b0 == 0) {
              (in_stack_0000000c->motion_controller).current_frame_number =
                   (in_stack_0000000c->motion_controller).current_frame_number - local_74;
            }
            else {
              pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                  (&in_stack_0000000c->motion_controller);
              (in_stack_0000000c->motion_controller).current_frame_number =
                   pSVar10->exit_forward_to_frame;
            }
            local_78 = 0.0;
          } while (local_74 < (in_stack_0000000c->motion_controller).current_frame_number);
        }
        local_10 = fVar3;
        (*((in_stack_0000000c->motion_controller).vtable)->accumulateScaledRootMotion)
                  (&in_stack_0000000c->motion_controller,(float)(int)fVar3 + local_78,
                   (float)(int)fVar3 + (in_stack_0000000c->motion_controller).current_frame_number,
                   1.0);
      }
      else {
        iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x34);
        if (iVar8 != 0) {
          (in_stack_0000000c->motion_controller).current_frame_number =
               (in_stack_0000000c->motion_controller).current_frame_number + local_84;
          local_70 = local_74;
          if ((in_stack_0000000c->motion_controller).current_frame_number < local_74) {
            local_70 = (in_stack_0000000c->motion_controller).current_frame_number;
          }
          local_10 = fVar3;
          (*((in_stack_0000000c->motion_controller).vtable)->accumulateScaledRootMotion)
                    (&in_stack_0000000c->motion_controller,(float)(int)fVar3 + local_78,
                     (float)(int)fVar3 + local_70,1.0);
        }
        iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x33);
        if (iVar8 != 0) {
          (in_stack_0000000c->motion_controller).current_frame_number =
               (in_stack_0000000c->motion_controller).current_frame_number - local_84;
          local_6c = 0.0;
          if (0.0 < (in_stack_0000000c->motion_controller).current_frame_number) {
            local_6c = (in_stack_0000000c->motion_controller).current_frame_number;
          }
          local_68 = (float)(int)fVar3;
          local_10 = fVar3;
          (*((in_stack_0000000c->motion_controller).vtable)->accumulateScaledRootMotion)
                    (&in_stack_0000000c->motion_controller,local_68 + local_6c,local_68 + local_78,
                     1.0);
          if ((in_stack_0000000c->motion_controller).current_frame_number < 0.0) {
            local_10 = local_68 + local_74;
            (*((in_stack_0000000c->motion_controller).vtable)->accumulateScaledRootMotion)
                      (&in_stack_0000000c->motion_controller,
                       local_10 + (in_stack_0000000c->motion_controller).current_frame_number,
                       local_10,1.0);
          }
          CStack_188.m[2].x = -local_64->x;
          CStack_188.m[2].y = -local_64->y;
          CStack_188.m[2].z = -local_64->z;
          if (CStack_188.m + 2 != local_64) {
            local_64->x = CStack_188.m[2].x;
            local_64->y = CStack_188.m[2].y;
            local_64->z = CStack_188.m[2].z;
          }
        }
      }
      while ((in_stack_0000000c->motion_controller).current_frame_number < 0.0) {
        pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&in_stack_0000000c->motion_controller);
        (in_stack_0000000c->motion_controller).current_frame_number =
             (float)pSVar10->frame_count +
             (in_stack_0000000c->motion_controller).current_frame_number;
      }
      pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&in_stack_0000000c->motion_controller);
      if ((float)pSVar10->frame_count <= (in_stack_0000000c->motion_controller).current_frame_number
         ) {
        if (local_b0 == 0) {
          (in_stack_0000000c->motion_controller).current_frame_number = 0.0;
        }
        else {
          pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                              (&in_stack_0000000c->motion_controller);
          (in_stack_0000000c->motion_controller).current_frame_number =
               pSVar10->exit_forward_to_frame;
        }
      }
      if (local_40 != 0) {
        auStack_104._12_4_ = (float)auStack_104._12_4_ + local_64->x;
        local_f4 = local_f4 + local_64->y;
        local_f0 = local_f0 + local_64->z;
      }
    }
    iVar8 = local_3c;
    pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(in_stack_0000000c);
    if (iVar8 < pCVar9->num_parts) {
      if (iVar8 < 0) {
        pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                           (in_stack_0000000c);
        local_3c = pCVar9->num_parts + -1;
      }
    }
    else {
      local_3c = 0;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)(auStack_104 + 0xc));
    local_c8.x = 0;
    local_c8.y = 0;
    local_c8.z = 0;
    if (local_a0 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
                (in_stack_0000000c);
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(in_stack_0000000c);
      core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                (in_stack_0000000c);
    }
    if (local_ac == 1) {
      pCVar16 = in_stack_0000000c;
      for (iVar8 = 0;
          pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                             (in_stack_0000000c), iVar8 < pCVar9->num_parts; iVar8 = iVar8 + 1) {
        pCVar16->part_visibility_flags[0] = 0;
        pCVar16 = (CDeformableModelInstance *)&(pCVar16->motion_controller).current_motion_index;
      }
      in_stack_0000000c->part_visibility_flags[local_3c] = 3;
    }
    else if (local_ac == 2) {
      pCVar16 = in_stack_0000000c;
      for (iVar8 = 0;
          pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                             (in_stack_0000000c), iVar8 < pCVar9->num_parts; iVar8 = iVar8 + 1) {
        pCVar16->part_visibility_flags[0] = 3;
        pCVar16 = (CDeformableModelInstance *)&(pCVar16->motion_controller).current_motion_index;
      }
      in_stack_0000000c->part_visibility_flags[local_3c] = 0;
    }
    core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430
              (in_stack_0000000c);
    iVar8 = local_9c;
    this_ptr_00 = g_CDemonRendererPtr;
    in_stack_0000000c->texture_set_indices[local_3c] = local_a4;
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(this_ptr_00,0);
    if (iVar8 < 2) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (in_stack_0000000c,local_a8,0xffffffff,1,0);
    }
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr);
    uVar27 = local_7c;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(in_stack_0000000c);
    if (uVar27 != 0) {
      iVar17 = 0;
      iVar8 = 0;
      while (iVar8 < local_b8->vertex_count[in_stack_0000000c->cached_skinned_lod_index]) {
        pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
        if ((*(byte *)((int)&(pSVar4->projected_vertex).screen_x + iVar17 + 3) & 0x80) == 0) {
          local_60 = *(int *)((int)&(pSVar4->projected_vertex).screen_y + iVar17) >> 0x10;
          x_pos = *(int *)((int)&(pSVar4->projected_vertex).screen_x + iVar17) >> 0x10;
          if (x_pos < 0) goto LAB_0059722b;
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_590,"%d",iVar8);
          engine_2d_c_drawText_FUN_00401fd0(acStack_590,x_pos,local_60);
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
    iVar8 = local_5c;
    if (0 < DAT_03665f74.poly_count) {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&CStack_2b8,CStack_188.m + 1,&local_194);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_2b8,local_4c + iVar8,pCVar26);
      pfVar18 = afStack_318;
      pCVar14 = aCStack_2e8;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        pCVar14->x = *pfVar18;
        pfVar18 = pfVar18 + (uint)bVar22 * -2 + 1;
        pCVar14 = (CVector3f *)((int)pCVar14 + ((uint)bVar22 * -2 + 1) * 4);
      }
      core_xform_cpp_getTranslation_FUN_005f6110(aCStack_2e8,(CMatrix3x4f *)auStack_164);
      if ((float *)local_1f8 != extraout_EAX) {
        local_1f8._0_4_ = *extraout_EAX;
        local_1f8._4_4_ = extraout_EAX[1];
        local_1f8._8_4_ = extraout_EAX[2];
      }
      pCVar14 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(aCStack_2e8,&CStack_140);
      if ((CVector3f *)(local_1f8 + 0xc) != pCVar14) {
        local_1f8._12_4_ = pCVar14->x;
        fStack_1e8 = pCVar14->y;
        local_1e4 = pCVar14->z;
      }
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,(CVector3i *)(local_1f8 + 0xc),(CVector3i *)local_1f8);
      in_stack_ffffcbfe = 0;
      in_stack_ffffcbfa = 0;
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                (&DAT_03665f74,(CKeyFramedModelInstance *)0x0,0,-1);
      in_stack_ffffcc02 = 0x59796f;
      in_stack_ffffcc06 = g_CDemonRendererPtr;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    if (0 < local_80) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
                (in_stack_0000000c,(SBoneTransformData *)&stack0xffffcc6c);
      core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
                (in_stack_0000000c,(SBoneTransformData *)&DAT_036644d8);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr,1);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0x8000);
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (in_stack_0000000c,-1,0x2e7,1,0);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr);
      core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
                (in_stack_0000000c,(SBoneTransformData *)&stack0xffffcc6c);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3e);
    if (iVar8 != 0) {
      DAT_036712e0 = DAT_036712e0 + 1;
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_036712e8,"noc%d.pcx",DAT_036712e0);
      engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(&DAT_036712e8);
    }
    if (local_44 != 0) {
      local_d4.x = (int)-(float)auStack_104._12_4_;
      local_d4.y = (int)-local_f4;
      local_d4.z = (int)-local_f0;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,&local_c8,&local_d4);
      auStack_164._24_4_ = DAT_006819fc;
      local_148[(uint)bVar22 * -2] = (float)(&DAT_00681a00)[(uint)bVar22 * -2];
      *(uint *)((int)&CStack_140 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + -4) =
           (&DAT_00681a04)[(uint)bVar22 * -2 + (uint)bVar22 * -2];
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                 (CVector3i *)(auStack_164 + 0x18));
      auStack_164._24_4_ = 5.38099e-42;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
                 (CVector3i *)(auStack_164 + 0x18));
      local_148[1] = 5.38099e-42;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                 (CVector3i *)(auStack_164 + 0x18));
      auStack_164._24_4_ = -NAN;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
                 (CVector3i *)(auStack_164 + 0x18));
      local_39c.base.count = 4;
      local_374 = 0xfe0000;
      local_368 = 0xfe0000;
      local_364 = 0xfe0000;
      uStack_358 = 0xfe0000;
      local_39c.surface_normal.D = 0;
      local_39c.surface_normal.C = 0;
      local_39c.surface_normal.B = 0;
      local_39c.surface_normal.A = 0;
      local_384 = 0;
      local_360 = 3;
      local_380 = 0x20000;
      local_37c = 0x20000;
      local_370 = 0x20000;
      local_35c = 0x20000;
      local_378 = 1;
      local_36c = 2;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr,&DAT_006819e4);
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr,0xff,0,0xff);
      engine_drender_cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40
                (g_CDemonRendererPtr,&local_39c);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    iVar8 = local_9c;
    if (0 < local_9c) {
      iVar17 = 1;
      if (2 < local_9c) {
        iVar17 = 3;
      }
      core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_005a17b0
                (in_stack_0000000c,(uint)g_ColorCubeLookup[0x7c00],iVar17);
      if (iVar8 == 4) {
        core_skeleton_cpp_CDeformableModelInstance_renderBones_FUN_005a17e0(in_stack_0000000c);
      }
    }
    if (local_90 == 0) {
      if (local_94 != 0) {
        iVar8 = 0xff;
        goto LAB_005975b4;
      }
    }
    else {
      uVar6 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      iVar8 = CONCAT31 /* combine 2-byte values */(extraout_var,uVar6);
LAB_005975b4:
      shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,2.0,iVar8);
    }
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_464,"%f, %d",SUB84 /* extract 2-byte value */((double)(1.0 / local_88),0),
               (int)((ulonglong)(double)(1.0 / local_88) >> 0x20),g_RenderedTriangleCount);
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,g_WindowHeight + -0xb);
    uVar24 = (uint)
             ((ulonglong)(double)(in_stack_0000000c->motion_controller).current_frame_number >> 0x20
             );
    pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&in_stack_0000000c->motion_controller);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464," %s %7.2f ",pSVar10,uVar24);
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0xb);
    local_10 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                         (&in_stack_0000000c->motion_controller);
    dVar23 = (double)local_10;
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_464," Zone: %5.2f ",SUB84 /* extract 2-byte value */(dVar23,0),(int)((ulonglong)dVar23 >> 0x20));
    uVar27 = local_b0;
    uVar24 = (uint)((ulonglong)dVar23 >> 0x20);
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0x16);
    if (uVar27 == 0) {
      pcVar11 = "OFF";
    }
    else {
      pcVar11 = "ON";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464," [L] Loop mode: %s ",pcVar11,uVar24);
    uVar27 = local_40;
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0x21);
    if (uVar27 == 0) {
      pcVar11 = "OFF";
    }
    else {
      pcVar11 = "ON";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464," [C] Use canceled: %s ",pcVar11,uVar24);
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0x2c);
    iVar8 = local_3c;
    core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220(local_b8,local_3c);
    pSVar12 = core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220(local_b8,iVar8);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464," Selected part: %d \"%s\" Dominant bone: \"%s\"",iVar8,pSVar12);
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0x37);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464," F1 for key list ");
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0x42);
    local_10 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(local_58);
    uVar24 = 0x597792;
    dVar23 = crt_math_c_round_FUN_005fe6b0((double)local_10);
    local_10 = (float)(int)ROUND(dVar23);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_464," LOD: %d PixHeight: %d Polys %d",
               in_stack_0000000c->cached_skinned_lod_index,local_10,uVar24);
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0x4d);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464," Current texture set: %d",local_a4);
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0x58);
    if (0 < DAT_03665f74.poly_count) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_464," Item pos: X: %5.3f Y: %5.3f Z: %5.3f",SUB84 /* extract 2-byte value */((double)CStack_188.m[1].x,0),
                 (int)((ulonglong)(double)CStack_188.m[1].x >> 0x20),
                 SUB84 /* extract 2-byte value */((double)CStack_188.m[1].y,0),
                 (int)((ulonglong)(double)CStack_188.m[1].y >> 0x20),
                 SUB84 /* extract 2-byte value */((double)CStack_188.m[1].z,0),
                 (int)((ulonglong)(double)CStack_188.m[1].z >> 0x20));
      engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,99);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_464," Item orient: P: %5.3f B: %5.3f H: %5.3f",SUB84 /* extract 2-byte value */((double)local_194.x,0),
                 (int)((ulonglong)(double)local_194.x >> 0x20),SUB84 /* extract 2-byte value */((double)local_194.z,0),
                 (int)((ulonglong)(double)local_194.z >> 0x20),SUB84 /* extract 2-byte value */((double)local_194.y,0),
                 (int)((ulonglong)(double)local_194.y >> 0x20));
      engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0x6e);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    pcVar11 = &DAT_00000001;
    pCVar9 = (CDeformableModel *)g_CKeysPtr;
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar8 != 0) break;
    iVar8 = 0;
    pCVar14 = local_54;
    pCVar15 = local_50;
    if (0 < local_b4->bone_count) {
      do {
        if (pCVar15 != pCVar14) {
          pCVar15->x = pCVar14->x;
          pCVar15->y = pCVar14->y;
          pCVar15->z = pCVar14->z;
        }
        iVar8 = iVar8 + 1;
        pCVar14 = pCVar14 + 1;
        pCVar15 = pCVar15 + 1;
      } while (iVar8 < local_b4->bone_count);
    }
    if (((DAT_03665f74.poly_count < 1) ||
        (iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d), iVar8 == 0)) ||
       (local_98 == 0)) {
      if (local_90 == 0) {
        shape_spotview_cpp_CSpotView_FUN_005b9670((CSpotView *)auStack_354);
      }
      else {
        shape_spotview_cpp_CSpotView_FUN_005b9670((CSpotView *)auStack_354);
        local_48 = g_CGamePtr->delta_time_float * (float)2;
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
        if (iVar8 != 0) {
          local_48 = local_48 * 3f;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
        if (iVar8 != 0) {
          local_48 = local_48 * 0.05f;
        }
        local_110 = 0.0;
        local_10c = 0.0;
        fStack_108 = 0.0;
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
        if (iVar8 != 0) {
          local_10c = local_10c - local_48;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
        if (iVar8 != 0) {
          local_10c = local_10c + local_48;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
        if (iVar8 != 0) {
          local_110 = local_110 - local_48;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
        if (iVar8 != 0) {
          local_110 = local_110 + local_48;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
        if (iVar8 != 0) {
          fStack_108 = fStack_108 - local_48;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
        if (iVar8 != 0) {
          fStack_108 = fStack_108 + local_48;
        }
        if (0.0 < SQRT(fStack_108 * fStack_108 + local_110 * local_110 + local_10c * local_10c)) {
          local_38 = 1;
          core_skeledit_cpp_FUN_0058e600();
        }
      }
    }
    else {
      pCVar26 = (CMatrix3x4f *)0x59803c;
      core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)local_1f8);
      core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                (&CStack_228,(CVector3f *)local_1f8,(CVector3f *)(local_1f8 + 0xc));
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(local_4c + local_5c,&CStack_228,pCVar26);
      pfVar18 = afStack_288;
      pCVar14 = aCStack_258;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        pCVar14->x = *pfVar18;
        pfVar18 = pfVar18 + (uint)bVar22 * -2 + 1;
        pCVar14 = (CVector3f *)((int)pCVar14 + ((uint)bVar22 * -2 + 1) * 4);
      }
      pCVar14 = core_xform_cpp_invertAndGetTranslation_FUN_005f6140
                          (aCStack_258,(CMatrix3x4f *)auStack_104);
      if (CStack_188.m + 1 != pCVar14) {
        CStack_188.m[1].x = pCVar14->x;
        CStack_188.m[1].y = pCVar14->y;
        CStack_188.m[1].z = pCVar14->z;
      }
      pCVar14 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(aCStack_258,&CStack_188);
      if (&local_194 != pCVar14) {
        local_194.x = pCVar14->x;
        local_194.y = pCVar14->y;
        local_194.z = pCVar14->z;
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x30);
    if (iVar8 != 0) {
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar8 == 0) {
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
        if (iVar8 == 0) {
          local_9c = local_9c + 1;
          if (4 < local_9c) {
            local_9c = 0;
          }
        }
        else {
          local_90 = (uint)(local_90 == 0);
        }
      }
      else {
        iVar8 = shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                          (g_CEditorToolsPtr,"Bias model x,y,z",CStack_140.m + 1,false);
        if ((iVar8 != 0) &&
           (0.0 < SQRT(CStack_140.m[1].z * CStack_140.m[1].z +
                       CStack_140.m[1].x * CStack_140.m[1].x + CStack_140.m[1].y * CStack_140.m[1].y
                      ))) {
          local_38 = 1;
          core_skeledit_cpp_FUN_0058e600();
        }
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x18);
    if (iVar8 != 0) {
      local_f4 = 0.0;
      auStack_104._12_4_ = 0.0;
      local_f0 = 0.0;
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x19);
    if (iVar8 != 0) {
      local_98 = (uint)(local_98 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x26);
    if (iVar8 != 0) {
      local_b0 = (uint)(local_b0 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x22);
    if (iVar8 != 0) {
      local_44 = (uint)(local_44 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2e);
    if (iVar8 != 0) {
      local_40 = (uint)(local_40 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,2);
    if (iVar8 != 0) {
      local_94 = (uint)(local_94 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2f);
    if (iVar8 != 0) {
      local_7c = (uint)(local_7c == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1f);
    if (iVar8 != 0) {
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
      pCVar9 = local_b8;
      if (iVar8 == 0) {
        local_ac = (local_ac + 1) % 3;
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
                  (in_stack_0000000c,0);
        core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
                  (&local_1dc,pCVar9->vertex_count[in_stack_0000000c->cached_skinned_lod_index],
                   in_stack_0000000c->skinned_vertices_buffer);
        local_1a0 = local_1dc.max.x - local_1dc.min.x;
        local_19c = local_1dc.max.y - local_1dc.min.y;
        local_198 = local_1dc.max.z - local_1dc.min.z;
        CStack_140.m[2].x = local_1a0;
        CStack_140.m[2].y = local_19c;
        CStack_140.m[2].z = local_198;
        local_11c = local_1a0;
        local_118 = local_19c;
        local_114 = local_198;
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_658,"Current dimensions:\nX: %7.3f .. %7.3f : %7.3f\nY: %7.3f .. %7.3f : %7.3f\nZ: %7.3f .. %7.3f : %7.3f\n\nEnter scale factor",(double)local_1dc.min.x,
                   (double)local_1dc.max.x,SUB84 /* extract 2-byte value */((double)local_1a0,0),
                   (int)((ulonglong)(double)local_1a0 >> 0x20),SUB84 /* extract 2-byte value */((double)local_1dc.min.y,0),
                   (int)((ulonglong)(double)local_1dc.min.y >> 0x20),
                   SUB84 /* extract 2-byte value */((double)local_1dc.max.y,0),
                   (int)((ulonglong)(double)local_1dc.max.y >> 0x20),SUB84 /* extract 2-byte value */((double)local_19c,0),
                   (int)((ulonglong)(double)local_19c >> 0x20),SUB84 /* extract 2-byte value */((double)local_1dc.min.z,0),
                   (int)((ulonglong)(double)local_1dc.min.z >> 0x20),
                   SUB84 /* extract 2-byte value */((double)local_1dc.max.z,0),
                   (int)((ulonglong)(double)local_1dc.max.z >> 0x20),SUB84 /* extract 2-byte value */((double)local_198,0),
                   (int)((ulonglong)(double)local_198 >> 0x20));
        iVar8 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                          (g_CEditorToolsPtr,acStack_658,&local_34,true,0.0001,999999.9,false);
        if ((iVar8 != 0) && (local_34 != 1.0)) {
          core_skeledit_cpp_FUN_0058e3e0();
          local_8c = 1;
        }
      }
    }
    pCVar25 = g_CKeysPtr;
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x21);
    show_current_value = SUB41 /* extract 2-byte value */(pCVar25,0);
    if (iVar8 != 0) {
      pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&in_stack_0000000c->motion_controller);
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,"Enter frame number",local_bc,true,0.0,
                 (float)pSVar10->frame_count,(bool)show_current_value);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x32);
    if (iVar8 != 0) {
      iVar8 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_18f8);
      for (iVar17 = 0;
          pCVar13 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&in_stack_0000000c->motion_controller),
          iVar17 < pCVar13->motion_count; iVar17 = iVar17 + 1) {
        pCVar13 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&in_stack_0000000c->motion_controller);
        pcVar11 = pCVar13->motions[0].motion_name + iVar8;
        iVar8 = iVar8 + 0x54c;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_18f8.base_strlist,pcVar11);
      }
      iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&CStack_18f8,"Select motion",
                         (in_stack_0000000c->motion_controller).current_motion_index,0);
      if (-1 < iVar8) {
        (in_stack_0000000c->motion_controller).current_motion_index = iVar8;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&CStack_18f8,0,in_stack_ffffcbfa,in_stack_ffffcbfe,in_stack_ffffcc02,
                 (uint)in_stack_ffffcc06,in_stack_ffffcc0a);
    }
    uVar27 = 0x14;
    pCVar25 = g_CKeysPtr;
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x14);
    if (iVar8 != 0) {
      pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&in_stack_0000000c->motion_controller);
      dVar23 = crt_math_c_round_FUN_005fe6b0((double)pSVar10->exit_forward_to_frame);
      local_30 = (float)(int)ROUND(dVar23);
      iVar8 = *(int *)(extraout_EAX_00 + 0x34);
      pCVar13 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                          (&in_stack_0000000c->motion_controller);
      bVar7 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                        (g_CEditorToolsPtr,"Enter exit forward to frame number",(int *)&local_30,true
                         ,0,pCVar13->motions[iVar8].frame_count + -1,true);
      if (CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar7) != 0) {
        local_10 = local_30;
        *(float *)(extraout_EAX_00 + 0x38) = (float)(int)local_30;
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2d);
    if (iVar8 != 0) {
      shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                (g_CEditorToolsPtr,"Select texture set",&local_a4,true,0,4,true);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
    if (iVar8 != 0) {
      pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                         (in_stack_0000000c);
      iVar8 = pCVar9->num_lods + -1;
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_52c,"Select LOD (0..%d), or -1 for auto-LOD",iVar8);
      shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                (g_CEditorToolsPtr,acStack_52c,&local_a8,true,-1,iVar8,true);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x23);
    if (iVar8 != 0) {
      local_a0 = (uint)(local_a0 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2c);
    if (iVar8 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_1550);
      pCVar9 = local_b8;
      iVar8 = 0;
      pSVar19 = local_28;
      if (0 < local_b4->bone_count) {
        do {
          iVar17 = core_skeleton_cpp_CDeformableModel_getBonePart_FUN_0059c2d0(pCVar9,iVar8);
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464,"%s\t%s",pSVar19,local_2c + iVar17);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_1550.base_strlist,acStack_464);
          iVar8 = iVar8 + 1;
          pSVar19 = pSVar19 + 1;
        } while (iVar8 < local_b4->bone_count);
      }
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&CStack_1550,"Part for bone info",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&CStack_1550,0,(uint)pCVar25,uVar27,in_stack_ffffcbfe,in_stack_ffffcc02,
                 (uint)in_stack_ffffcc06);
    }
    d5 = 0xf;
    pcVar11 = (char *)0x598399;
    pCVar25 = g_CKeysPtr;
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
    if (iVar8 != 0) {
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar8 == 0) {
        local_3c = local_3c + 1;
      }
      else {
        local_3c = local_3c + -1;
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x17);
    if (iVar8 != 0) {
      while( true ) {
        local_24 = 0;
        if (0 < DAT_03665f74.poly_count) {
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_e00);
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464,"Model:\t%s",&DAT_03665f74);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_e00.base_strlist,acStack_464);
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464,"Bone:\t%s",local_20 + local_5c);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_e00.base_strlist,acStack_464);
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (acStack_464,"Pos: %5.3f %5.3f %5.3f",SUB84 /* extract 2-byte value */((double)CStack_188.m[1].x,0),
                     (int)((ulonglong)(double)CStack_188.m[1].x >> 0x20),
                     SUB84 /* extract 2-byte value */((double)CStack_188.m[1].y,0),
                     (int)((ulonglong)(double)CStack_188.m[1].y >> 0x20),
                     SUB84 /* extract 2-byte value */((double)CStack_188.m[1].z,0),
                     (int)((ulonglong)(double)CStack_188.m[1].z >> 0x20));
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_e00.base_strlist,acStack_464);
          pcVar11 = (char *)((ulonglong)(double)local_194.y >> 0x20);
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (acStack_464,"Orient: %5.3f %5.3f %5.3f",SUB84 /* extract 2-byte value */((double)local_194.x,0),
                     (int)((ulonglong)(double)local_194.x >> 0x20),SUB84 /* extract 2-byte value */((double)local_194.z,0),
                     (int)((ulonglong)(double)local_194.z >> 0x20),SUB84 /* extract 2-byte value */((double)local_194.y,0));
          pcVar21 = acStack_464;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_e00.base_strlist,pcVar21);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&CStack_e00.base_strlist,"Paste position/orientation from clipboard");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&CStack_e00.base_strlist,"Copy position/orientation to clipboard");
          local_24 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (&CStack_e00,"Item tester",-1,0);
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_e00,0,(uint)pcVar21,(uint)pcVar11,(uint)pCVar25,d5,uVar27);
        }
        if (local_24 < 0) break;
        if (local_24 == 0) {
          iVar8 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                            (g_CEditorToolsPtr,"Select model to position","models"
                             ,"*.kfm",false);
          if (iVar8 == 0) {
            if (DAT_03665f74.poly_count < 1) break;
          }
          else {
            core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(&DAT_03665f74,acStack_400);
          }
        }
        if (local_24 == 1) {
          this_ptr_01 = &CStack_11a8;
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(this_ptr_01);
          iVar8 = 0;
          pSVar19 = local_20;
          if (0 < local_b4->bone_count) {
            do {
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        (&CStack_11a8.base_strlist,pSVar19->bone_name);
              iVar8 = iVar8 + 1;
              pSVar19 = pSVar19 + 1;
            } while (iVar8 < local_b4->bone_count);
          }
          iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&CStack_11a8,"Select bone",-1,0);
          if (-1 < iVar8) {
            local_5c = iVar8;
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_11a8,0,(uint)this_ptr_01,(uint)pcVar11,(uint)pCVar25,d5,uVar27);
        }
        if (local_24 == 2) {
          shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                    (g_CEditorToolsPtr,"Edit item pos",CStack_188.m + 1,true);
        }
        fVar3 = local_194.z;
        if (local_24 == 3) {
          local_1c = local_194.z;
          local_194.z = local_194.y;
          local_194.y = fVar3;
          shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                    (g_CEditorToolsPtr,"Edit item orient (P,B,H)",&local_194,true);
          fVar3 = local_194.z;
          local_18 = local_194.z;
          local_194.z = local_194.y;
          local_194.y = fVar3;
        }
        if (local_24 == 4) {
          iVar8 = 0;
          pcVar11 = shape_edittool_cpp_CEditorTools_getClipboardText_FUN_004a1b30(g_CEditorToolsPtr)
          ;
          if (*pcVar11 != '\0') {
            pfVar18 = &local_1c4;
            do {
              local_14 = 0;
              crt_stdio_c_sscanf_FUN_0060013c(pcVar11,"%f%n",pfVar18,&local_14);
              if (local_14 < 1) {
                pcVar11 = pcVar11 + 1;
              }
              else {
                pfVar18 = pfVar18 + 1;
                iVar8 = iVar8 + 1;
                pcVar11 = pcVar11 + local_14;
              }
            } while ((iVar8 < 6) && (*pcVar11 != '\0'));
          }
          if (iVar8 == 6) {
            pcVar11 = (char *)((ulonglong)(double)local_1b0 >> 0x20);
            iVar8 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                              (g_CEditorToolsPtr,"Import these values:\nX: %g\nY: %g\nZ: %g\nP: %g\nB: %g\nH: %g\n",
                               SUB84 /* extract 2-byte value */((double)local_1c4,0),
                               (int)((ulonglong)(double)local_1c4 >> 0x20),
                               SUB84 /* extract 2-byte value */((double)local_1c0,0),
                               (int)((ulonglong)(double)local_1c0 >> 0x20),
                               SUB84 /* extract 2-byte value */((double)local_1bc,0),
                               (int)((ulonglong)(double)local_1bc >> 0x20),
                               SUB84 /* extract 2-byte value */((double)local_1b8,0),
                               (int)((ulonglong)(double)local_1b8 >> 0x20),
                               SUB84 /* extract 2-byte value */((double)local_1b4,0),
                               (int)((ulonglong)(double)local_1b4 >> 0x20),
                               SUB84 /* extract 2-byte value */((double)local_1b0,0));
            if (iVar8 != 0) {
              CStack_188.m[1].x = local_1c4;
              CStack_188.m[1].y = local_1c0;
              CStack_188.m[1].z = local_1bc;
              local_194.x = local_1b8;
              local_194.z = local_1b4;
              local_194.y = local_1b0;
            }
          }
          else {
            pcVar11 = "Couldn't parse clipboard text.";
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Couldn't parse clipboard text.");
          }
        }
        if (local_24 == 5) {
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (acStack_464,"CVector(%g,%g,%g), makePBH(%g,%g,%g)",
                     SUB84 /* extract 2-byte value */((double)CStack_188.m[1].x,0),
                     (int)((ulonglong)(double)CStack_188.m[1].x >> 0x20),
                     SUB84 /* extract 2-byte value */((double)CStack_188.m[1].y,0),
                     (int)((ulonglong)(double)CStack_188.m[1].y >> 0x20),
                     SUB84 /* extract 2-byte value */((double)CStack_188.m[1].z,0),
                     (int)((ulonglong)(double)CStack_188.m[1].z >> 0x20),
                     SUB84 /* extract 2-byte value */((double)local_194.x,0),(int)((ulonglong)(double)local_194.x >> 0x20),
                     SUB84 /* extract 2-byte value */((double)local_194.z,0),(int)((ulonglong)(double)local_194.z >> 0x20),
                     SUB84 /* extract 2-byte value */((double)local_194.y,0),(int)((ulonglong)(double)local_194.y >> 0x20));
          shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0
                    (g_CEditorToolsPtr,acStack_464);
          pcVar11 = acStack_464;
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                    (g_CEditorToolsPtr,"Copied text to clipboard:\n\n%s");
        }
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x12);
    if ((iVar8 != 0) &&
       (iVar8 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter .S3D filename to save model",acStack_4c8,100,0),
       iVar8 != 0)) {
      crt_string_c_splitpath_FUN_005ff178(acStack_4c8,acStack_c,acStack_a58,acStack_958,acStack_758)
      ;
      if (acStack_758[0] == '\0') {
        crt_file_c_makepath_FUN_005febfc
                  (acStack_4c8,acStack_c,acStack_a58,acStack_958,"s3d");
      }
      core_skeledit_cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0
                (in_stack_0000000c,acStack_4c8);
    }
    in_stack_ffffcbfa = 0x13;
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
    if (iVar8 != 0) {
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar8 == 0) {
        if (local_80 < 0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"No reference pose recorded.\n(Press Shift+R to record a refernece pose)");
        }
        else {
          local_80 = 1 - local_80;
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
                  (in_stack_0000000c,(SBoneTransformData *)&DAT_036644d8);
        local_80 = 1;
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3b);
    if (iVar8 != 0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("P",7,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Pause/Unpause",0x69,0xb);
      engine_2d_c_drawText_FUN_00401fd0("G",7,0x16);
      engine_2d_c_drawText_FUN_00401fd0("Toggle ground plane",0x69,0x16);
      engine_2d_c_drawText_FUN_00401fd0("C",7,0x21);
      engine_2d_c_drawText_FUN_00401fd0("Toggle use canceled motion",0x69,0x21);
      in_stack_ffffcbfa = 0x5989d5;
      engine_2d_c_drawText_FUN_00401fd0("O",7,0x2c);
      in_stack_ffffcbfe = 0x5989e6;
      engine_2d_c_drawText_FUN_00401fd0("Move model back to the origin",0x69,0x2c);
      in_stack_ffffcc02 = 0x5989f7;
      engine_2d_c_drawText_FUN_00401fd0("B",7,0x37);
      in_stack_ffffcc06 = (CDemonRenderer *)0x598a08;
      engine_2d_c_drawText_FUN_00401fd0("Toggle bones",0x69,0x37);
      in_stack_ffffcc0a = 0x598a19;
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
  if (((local_38 != 0) || (local_8c != 0)) &&
     (iVar8 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                        (g_CEditorToolsPtr,"You biased/scaled the model.  Save model before exiting viewer?"), iVar8 != 0)) {
    pcVar21 = acStack_858;
    pcVar20 = local_b8->model_filename;
    do {
      cVar2 = *pcVar20;
      *pcVar21 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar20[1];
      pcVar20 = pcVar20 + 2;
      pcVar21[1] = cVar2;
      pcVar21 = pcVar21 + 2;
    } while (cVar2 != '\0');
    bVar7 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                      (g_CEditorToolsPtr,"Enter .DFM filename","models",0x64e099,
                       SUB41 /* extract 2-byte value */(acStack_858,0));
    if (CONCAT31 /* combine 2-byte values */(extraout_var_01,bVar7) != 0) {
      core_skeledit_cpp_CDeformableModel_save_FUN_0058f040(pCVar9,pcVar11);
    }
  }
  g_CDemonSetPtr->lighting_quality_mode = 0;
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&DAT_03665f74);
  return;
}
