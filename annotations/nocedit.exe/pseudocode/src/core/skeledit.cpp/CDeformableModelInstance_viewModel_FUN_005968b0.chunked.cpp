// Name: core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0
// Address: 005968b0
// Address Range: [[005968b0, 00598ed7] [006107b1, 006107ce] [03fc4de5, 03fc4eb0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModelInstance_viewModel_FUN_005968b0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"
/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

typedef struct CDeformableModelInstance_viewModel_Ctx {
    CDeformableModelInstance *this_ptr;
    int *piVar1;
    char cVar2;
    SRenderVertex *pSVar3;
    float fVar4;
    bool bVar5;
    CDemonRenderer *this_ptr_00;
    uint uVar6;
    CDeformableModel *this_ptr_01;
    CSkeleton *this_ptr_02;
    int iVar7;
    CDeformableModel *pCVar8;
    float fVar9;
    CSlew *pCVar10;
    SMotion *pSVar11;
    CMotionList *pCVar12;
    CVector3f *pCVar13;
    CVector3f *pCVar14;
    CDeformableModelInstance *pCVar15;
    int iVar16;
    SBone *string_data;
    char *pcVar17;
    int x;
    char *pcVar18;
    ushort uVar19;
    ushort uVar20;
    CPickList local_1900;
    CPickList local_1558;
    CPickList local_11b0;
    CPickList local_e08;
    char local_a60[256];
    char local_960[256];
    char local_860[256];
    char local_760[256];
    char local_660[200];
    char local_598[100];
    char local_534[100];
    char local_4d0[100];
    char local_46c[100];
    char local_408[100];
    SMRGLPrimitiveQuad local_3a4;
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
    CVector3f local_dc;
    CVector3f local_d0;
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
    char local_14[4];
} CDeformableModelInstance_viewModel_Ctx;

// Chunk: branch_0 (lines 71-109 of original)
static int CDeformableModelInstance_viewModel_branch_0(CDeformableModelInstance_viewModel_Ctx *ctx) {
    CDeformableModelInstance *&this_ptr = ctx->this_ptr;
    int *&piVar1 = ctx->piVar1;
    int &iVar7 = ctx->iVar7;
    SMotion *&pSVar11 = ctx->pSVar11;
    CMotionList *&pCVar12 = ctx->pCVar12;
    float &local_18 = ctx->local_18;

      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar7 == 0) {
        iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD7);
        if (iVar7 != 0) {
          (this_ptr->motion_controller).current_frame_number = 0.0;
        }
        iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD1);
        if (iVar7 != 0) {
          pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                              (&this_ptr->motion_controller);
          local_18 = (float)(pSVar11->frame_count + -1);
          (this_ptr->motion_controller).current_frame_number = (float)(int)local_18;
        }
      }
      else {
        iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_PERIOD);
        if (iVar7 != 0) {
          piVar1 = &(this_ptr->motion_controller).current_motion_index;
          *piVar1 = *piVar1 + 1;
        }
        iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_COMMA);
        if (iVar7 != 0) {
          piVar1 = &(this_ptr->motion_controller).current_motion_index;
          *piVar1 = *piVar1 + -1;
        }
        if ((this_ptr->motion_controller).current_motion_index < 0) {
          pCVar12 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&this_ptr->motion_controller);
          (this_ptr->motion_controller).current_motion_index = pCVar12->motion_count + -1;
        }
        pCVar12 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&this_ptr->motion_controller);
        if (pCVar12->motion_count <= (this_ptr->motion_controller).current_motion_index) {
          (this_ptr->motion_controller).current_motion_index = 0;
        }
      }
    return 0;
}

// Chunk: branch_0 (lines 117-220 of original)
static int CDeformableModelInstance_viewModel_branch_0(CDeformableModelInstance_viewModel_Ctx *ctx) {
    CDeformableModelInstance *&this_ptr = ctx->this_ptr;
    float &fVar4 = ctx->fVar4;
    bool &bVar5 = ctx->bVar5;
    int &iVar7 = ctx->iVar7;
    float &fVar9 = ctx->fVar9;
    SMotion *&pSVar11 = ctx->pSVar11;
    int &x = ctx->x;
    float &local_178 = ctx->local_178;
    float &local_174 = ctx->local_174;
    float &local_170 = ctx->local_170;
    CVector3f &local_100 = ctx->local_100;
    uint &local_a0 = ctx->local_a0;
    float &local_90 = ctx->local_90;
    float &local_8c = ctx->local_8c;
    float &local_80 = ctx->local_80;
    float &local_7c = ctx->local_7c;
    float &local_78 = ctx->local_78;
    float &local_74 = ctx->local_74;
    float &local_70 = ctx->local_70;
    CVector3f *&local_6c = ctx->local_6c;
    uint &local_48 = ctx->local_48;
    float &local_18 = ctx->local_18;

      pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&this_ptr->motion_controller);
      fVar9 = (float)pSVar11->frame_start;
      local_80 = (this_ptr->motion_controller).current_frame_number;
      pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&this_ptr->motion_controller);
      local_7c = (float)pSVar11->frame_count;
      if (local_a0 == 0) {
        pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&this_ptr->motion_controller);
        fVar4 = local_90 * pSVar11->fps * local_8c +
                (this_ptr->motion_controller).current_frame_number;
        (this_ptr->motion_controller).current_frame_number = fVar4;
        if (local_7c < fVar4) {
          do {
            local_18 = fVar9;
            (*((this_ptr->motion_controller).vtable)->accumulateScaledRootMotion)
                      (&this_ptr->motion_controller,(float)(int)fVar9 + local_80,
                       (float)(int)fVar9 + local_7c,1.0);
            if (bVar5) {
              pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                  (&this_ptr->motion_controller);
              (this_ptr->motion_controller).current_frame_number = pSVar11->exit_forward_to_frame;
            }
            else {
              (this_ptr->motion_controller).current_frame_number =
                   (this_ptr->motion_controller).current_frame_number - local_7c;
            }
            local_80 = 0.0;
          } while (local_7c < (this_ptr->motion_controller).current_frame_number);
        }
        local_18 = fVar9;
        (*((this_ptr->motion_controller).vtable)->accumulateScaledRootMotion)
                  (&this_ptr->motion_controller,(float)(int)fVar9 + local_80,
                   (float)(int)fVar9 + (this_ptr->motion_controller).current_frame_number,1.0);
      }
      else {
        iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_PERIOD);
        if (iVar7 != 0) {
          (this_ptr->motion_controller).current_frame_number =
               (this_ptr->motion_controller).current_frame_number + local_8c;
          local_78 = local_7c;
          if ((this_ptr->motion_controller).current_frame_number < local_7c) {
            local_78 = (this_ptr->motion_controller).current_frame_number;
          }
          local_18 = fVar9;
          (*((this_ptr->motion_controller).vtable)->accumulateScaledRootMotion)
                    (&this_ptr->motion_controller,(float)(int)fVar9 + local_80,
                     (float)(int)fVar9 + local_78,1.0);
        }
        iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_COMMA);
        if (iVar7 != 0) {
          (this_ptr->motion_controller).current_frame_number =
               (this_ptr->motion_controller).current_frame_number - local_8c;
          local_74 = 0.0;
          if (0.0 < (this_ptr->motion_controller).current_frame_number) {
            local_74 = (this_ptr->motion_controller).current_frame_number;
          }
          local_70 = (float)(int)fVar9;
          local_18 = fVar9;
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
        pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&this_ptr->motion_controller);
        (this_ptr->motion_controller).current_frame_number =
             (float)pSVar11->frame_count + (this_ptr->motion_controller).current_frame_number;
      }
      pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&this_ptr->motion_controller);
      if ((float)pSVar11->frame_count <= (this_ptr->motion_controller).current_frame_number) {
        if (bVar5) {
          pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                              (&this_ptr->motion_controller);
          (this_ptr->motion_controller).current_frame_number = pSVar11->exit_forward_to_frame;
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
    return 0;
}

// Chunk: check_0_2 (lines 298-320 of original)
static int CDeformableModelInstance_viewModel_check_0_2(CDeformableModelInstance_viewModel_Ctx *ctx) {
    int &iVar7 = ctx->iVar7;
    CSlew *&pCVar10 = ctx->pCVar10;
    CVector3f *&pCVar13 = ctx->pCVar13;
    int &x = ctx->x;
    CMatrix3x4f &local_320 = ctx->local_320;
    CMatrix3x4f &local_2f0 = ctx->local_2f0;
    CMatrix3x4f &local_2c0 = ctx->local_2c0;
    CSlew &local_200 = ctx->local_200;
    CVector3f &local_19c = ctx->local_19c;
    CVector3f &local_184 = ctx->local_184;
    CVector3f &local_16c = ctx->local_16c;
    CVector3f &local_148 = ctx->local_148;
    CMatrix3x4f *&local_54 = ctx->local_54;

      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_2c0,&local_184,&local_19c);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_2c0,local_54 + iVar7,&local_320);
      pCVar10 = (CSlew *)core_xform_cpp_getTranslation_FUN_005f6110(&local_2f0,&local_16c);
      if (&local_200 != pCVar10) {
        local_200.position.x = (pCVar10->position).x;
        local_200.position.y = (pCVar10->position).y;
        local_200.position.z = (pCVar10->position).z;
      }
      pCVar13 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_2f0,&local_148);
      if ((CVector3f *)&local_200.orientation != pCVar13) {
        local_200.orientation.vec.x = pCVar13->x;
        local_200.orientation.vec.y = pCVar13->y;
        local_200.orientation.vec.z = pCVar13->z;
      }
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,&local_200.orientation.vec,&local_200.position);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                (&g_SkeleditViewModel,0,(CKeyFramedModelInstance *)0x0,-1);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
    return 0;
}

// Chunk: check_local_4c_3 (lines 339-383 of original)
static int CDeformableModelInstance_viewModel_check_local_4c_3(CDeformableModelInstance_viewModel_Ctx *ctx) {
    int &x = ctx->x;
    SMRGLPrimitiveQuad &local_3a4 = ctx->local_3a4;
    CVector3i &local_154 = ctx->local_154;
    CVector3f &local_100 = ctx->local_100;
    CVector3f &local_dc = ctx->local_dc;
    CVector3f &local_d0 = ctx->local_d0;

      local_dc.x = -local_100.x;
      local_dc.y = -local_100.y;
      local_dc.z = -local_100.z;
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
      local_3a4.base.base.count = 4;
      local_3a4.vertices[1].texture_u = 0xfe0000;
      local_3a4.vertices[2].texture_u = 0xfe0000;
      local_3a4.vertices[2].texture_v = 0xfe0000;
      local_3a4.vertices[3].texture_v = 0xfe0000;
      local_3a4.base.surface_normal.D.i = 0;
      local_3a4.base.surface_normal.C.i = 0;
      local_3a4.base.surface_normal.B.i = 0;
      local_3a4.base.surface_normal.A.i = 0;
      local_3a4.vertices[0].vertex_index = 0;
      local_3a4.vertices[3].vertex_index = 3;
      local_3a4.vertices[0].texture_u = 0x20000;
      local_3a4.vertices[0].texture_v = 0x20000;
      local_3a4.vertices[1].texture_v = 0x20000;
      local_3a4.vertices[3].texture_u = 0x20000;
      local_3a4.vertices[1].vertex_index = 1;
      local_3a4.vertices[2].vertex_index = 2;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,&SMRGLTextureBasic_006819e4);
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr2,0xff,0,0xff);
      engine_drender_cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40
                (g_CDemonRendererPtr2,&local_3a4.base);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
    return 0;
}

// Chunk: else_4 (lines 469-514 of original)
static int CDeformableModelInstance_viewModel_else_4(CDeformableModelInstance_viewModel_Ctx *ctx) {
    CDeformableModel *&this_ptr_01 = ctx->this_ptr_01;
    int &iVar7 = ctx->iVar7;
    int &x = ctx->x;
    CSpotView &local_35c = ctx->local_35c;
    CVector3f &local_118 = ctx->local_118;
    float &local_50 = ctx->local_50;
    int &local_40 = ctx->local_40;

        shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(&local_35c,0x17);
        local_50 = g_CGamePtr->delta_time_float * (float)2;
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar7 != 0) {
          local_50 = local_50 * 3.0f;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
        if (iVar7 != 0) {
          local_50 = local_50 * 0.05f;
        }
        local_118.x = 0.0;
        local_118.y = 0.0;
        local_118.z = 0.0;
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
        if (iVar7 != 0) {
          local_118.y = local_118.y - local_50;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
        if (iVar7 != 0) {
          local_118.y = local_118.y + local_50;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
        if (iVar7 != 0) {
          local_118.x = local_118.x - local_50;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
        if (iVar7 != 0) {
          local_118.x = local_118.x + local_50;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
        if (iVar7 != 0) {
          local_118.z = local_118.z - local_50;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
        if (iVar7 != 0) {
          local_118.z = local_118.z + local_50;
        }
        if (0.0 < SQRT(local_118.z * local_118.z +
                       local_118.x * local_118.x + local_118.y * local_118.y)) {
          local_40 = 1;
          core_skeledit_cpp_CDeformableModel_offsetRootVertices_FUN_0058e600(this_ptr_01,&local_118)
          ;
        }
    return 0;
}

// Chunk: check_iVar7_5 (lines 534-560 of original)
static int CDeformableModelInstance_viewModel_check_iVar7_5(CDeformableModelInstance_viewModel_Ctx *ctx) {
    CDeformableModel *&this_ptr_01 = ctx->this_ptr_01;
    int &iVar7 = ctx->iVar7;
    int &x = ctx->x;
    CVector3f &local_13c = ctx->local_13c;
    int &local_a4 = ctx->local_a4;
    uint &local_98 = ctx->local_98;
    int &local_40 = ctx->local_40;

      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar7 == 0) {
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
        if (iVar7 == 0) {
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
        iVar7 = shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                          (g_CEditorToolsPtr,"Bias model x,y,z",&local_13c,0);
        if ((iVar7 != 0) &&
           (0.0 < SQRT(local_13c.z * local_13c.z +
                       local_13c.x * local_13c.x + local_13c.y * local_13c.y))) {
          local_40 = 1;
          core_skeledit_cpp_CDeformableModel_offsetRootVertices_FUN_0058e600(this_ptr_01,&local_13c)
          ;
        }
      }
    return 0;
}

// Chunk: check_iVar7_6 (lines 702-813 of original)
static int CDeformableModelInstance_viewModel_check_iVar7_6(CDeformableModelInstance_viewModel_Ctx *ctx) {
    char &cVar2 = ctx->cVar2;
    CSkeleton *&this_ptr_02 = ctx->this_ptr_02;
    int &iVar7 = ctx->iVar7;
    float &fVar9 = ctx->fVar9;
    SBone *&string_data = ctx->string_data;
    int &x = ctx->x;
    char *&pcVar18 = ctx->pcVar18;
    CPickList &local_11b0 = ctx->local_11b0;
    CPickList &local_e08 = ctx->local_e08;
    auto &local_46c = ctx->local_46c;
    auto &local_408 = ctx->local_408;
    float &local_1cc = ctx->local_1cc;
    float &local_1c8 = ctx->local_1c8;
    float &local_1c4 = ctx->local_1c4;
    float &local_1c0 = ctx->local_1c0;
    float &local_1bc = ctx->local_1bc;
    float &local_1b8 = ctx->local_1b8;
    CVector3f &local_19c = ctx->local_19c;
    CVector3f &local_184 = ctx->local_184;
    int &local_64 = ctx->local_64;
    int &local_2c = ctx->local_2c;
    SBone *&local_28 = ctx->local_28;
    float &local_24 = ctx->local_24;
    float &local_20 = ctx->local_20;
    int &local_1c = ctx->local_1c;

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
          iVar7 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                            (g_CEditorToolsPtr,"Select model to position","models"
                             ,"*.kfm",local_408,0);
          if (iVar7 == 0) {
            if (g_SkeleditViewModel.poly_count < 1) break;
          }
          else {
            core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(&g_SkeleditViewModel,local_408);
          }
        }
        if (local_2c == 1) {
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_11b0);
          iVar7 = 0;
          string_data = local_28;
          if (0 < this_ptr_02->bone_count) {
            do {
              shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_11b0.base,string_data->bone_name);
              iVar7 = iVar7 + 1;
              string_data = string_data + 1;
            } while (iVar7 < this_ptr_02->bone_count);
          }
          iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&local_11b0,"Select bone",-1,0);
          if (-1 < iVar7) {
            local_64 = iVar7;
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_11b0,0);
        }
        if (local_2c == 2) {
          shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                    (g_CEditorToolsPtr,"Edit item pos",&local_184,1);
        }
        fVar9 = local_19c.z;
        if (local_2c == 3) {
          local_24 = local_19c.z;
          local_19c.z = local_19c.y;
          local_19c.y = fVar9;
          shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                    (g_CEditorToolsPtr,"Edit item orient (P,B,H)",&local_19c,1);
          fVar9 = local_19c.z;
          local_20 = local_19c.z;
          local_19c.z = local_19c.y;
          local_19c.y = fVar9;
        }
        if (local_2c == 4) {
          iVar7 = 0;
          pcVar18 = shape_edittool_cpp_CEditorTools_getClipboardText_FUN_004a1b30(g_CEditorToolsPtr)
          ;
          cVar2 = *pcVar18;
          while (cVar2 != '\0') {
            local_1c = 0;
            sscanf(pcVar18,"%f%n");
            if (local_1c < 1) {
              pcVar18 = pcVar18 + 1;
            }
            else {
              iVar7 = iVar7 + 1;
              pcVar18 = pcVar18 + local_1c;
            }
            if (5 < iVar7) break;
            cVar2 = *pcVar18;
          }
          if (iVar7 == 6) {
            iVar7 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060
                              (g_CEditorToolsPtr,"Import these values:\nX: %g\nY: %g\nZ: %g\nP: %g\nB: %g\nH: %g\n");
            if (iVar7 != 0) {
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
    return 0;
}

// Chunk: check_iVar7_7 (lines 843-910 of original)
static int CDeformableModelInstance_viewModel_check_iVar7_7(CDeformableModelInstance_viewModel_Ctx *ctx) {
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
    return 0;
}

void __cdecl core_skeledit_cpp_CDeformableModelInstance_viewModel_FUN_005968b0(CDeformableModelInstance *this_ptr)

{
  CDeformableModelInstance_viewModel_Ctx _ctx_storage = {};
  CDeformableModelInstance_viewModel_Ctx *ctx = &_ctx_storage;
  ctx->this_ptr = this_ptr;

    int *&piVar1 = ctx->piVar1;
    char &cVar2 = ctx->cVar2;
    SRenderVertex *&pSVar3 = ctx->pSVar3;
    float &fVar4 = ctx->fVar4;
    bool &bVar5 = ctx->bVar5;
    CDemonRenderer *&this_ptr_00 = ctx->this_ptr_00;
    uint &uVar6 = ctx->uVar6;
    CDeformableModel *&this_ptr_01 = ctx->this_ptr_01;
    CSkeleton *&this_ptr_02 = ctx->this_ptr_02;
    int &iVar7 = ctx->iVar7;
    CDeformableModel *&pCVar8 = ctx->pCVar8;
    float &fVar9 = ctx->fVar9;
    CSlew *&pCVar10 = ctx->pCVar10;
    SMotion *&pSVar11 = ctx->pSVar11;
    CMotionList *&pCVar12 = ctx->pCVar12;
    CVector3f *&pCVar13 = ctx->pCVar13;
    CVector3f *&pCVar14 = ctx->pCVar14;
    CDeformableModelInstance *&pCVar15 = ctx->pCVar15;
    int &iVar16 = ctx->iVar16;
    SBone *&string_data = ctx->string_data;
    char *&pcVar17 = ctx->pcVar17;
    int &x = ctx->x;
    char *&pcVar18 = ctx->pcVar18;
    ushort &uVar19 = ctx->uVar19;
    ushort &uVar20 = ctx->uVar20;
    CPickList &local_1900 = ctx->local_1900;
    CPickList &local_1558 = ctx->local_1558;
    CPickList &local_11b0 = ctx->local_11b0;
    CPickList &local_e08 = ctx->local_e08;
    auto &local_a60 = ctx->local_a60;
    auto &local_960 = ctx->local_960;
    auto &local_860 = ctx->local_860;
    auto &local_760 = ctx->local_760;
    auto &local_660 = ctx->local_660;
    auto &local_598 = ctx->local_598;
    auto &local_534 = ctx->local_534;
    auto &local_4d0 = ctx->local_4d0;
    auto &local_46c = ctx->local_46c;
    auto &local_408 = ctx->local_408;
    SMRGLPrimitiveQuad &local_3a4 = ctx->local_3a4;
    CSpotView &local_35c = ctx->local_35c;
    CMatrix3x4f &local_320 = ctx->local_320;
    CMatrix3x4f &local_2f0 = ctx->local_2f0;
    CMatrix3x4f &local_2c0 = ctx->local_2c0;
    CMatrix3x4f &local_290 = ctx->local_290;
    CMatrix3x4f &local_260 = ctx->local_260;
    CMatrix3x4f &local_230 = ctx->local_230;
    CSlew &local_200 = ctx->local_200;
    CBoundingBox3D &local_1e4 = ctx->local_1e4;
    float &local_1cc = ctx->local_1cc;
    float &local_1c8 = ctx->local_1c8;
    float &local_1c4 = ctx->local_1c4;
    float &local_1c0 = ctx->local_1c0;
    float &local_1bc = ctx->local_1bc;
    float &local_1b8 = ctx->local_1b8;
    float &local_1b4 = ctx->local_1b4;
    float &local_1b0 = ctx->local_1b0;
    float &local_1ac = ctx->local_1ac;
    float &local_1a8 = ctx->local_1a8;
    float &local_1a4 = ctx->local_1a4;
    float &local_1a0 = ctx->local_1a0;
    CVector3f &local_19c = ctx->local_19c;
    CVector3f &local_190 = ctx->local_190;
    CVector3f &local_184 = ctx->local_184;
    float &local_178 = ctx->local_178;
    float &local_174 = ctx->local_174;
    float &local_170 = ctx->local_170;
    CVector3f &local_16c = ctx->local_16c;
    float &local_160 = ctx->local_160;
    float &local_15c = ctx->local_15c;
    float &local_158 = ctx->local_158;
    CVector3i &local_154 = ctx->local_154;
    CVector3f &local_148 = ctx->local_148;
    CVector3f &local_13c = ctx->local_13c;
    float &local_130 = ctx->local_130;
    float &local_12c = ctx->local_12c;
    float &local_128 = ctx->local_128;
    float &local_124 = ctx->local_124;
    float &local_120 = ctx->local_120;
    float &local_11c = ctx->local_11c;
    CVector3f &local_118 = ctx->local_118;
    CVector3f &local_10c = ctx->local_10c;
    CVector3f &local_100 = ctx->local_100;
    float &local_f4 = ctx->local_f4;
    float &local_f0 = ctx->local_f0;
    float &local_ec = ctx->local_ec;
    float &local_e8 = ctx->local_e8;
    float &local_e4 = ctx->local_e4;
    float &local_e0 = ctx->local_e0;
    CVector3f &local_dc = ctx->local_dc;
    CVector3f &local_d0 = ctx->local_d0;
    float *&local_c4 = ctx->local_c4;
    CDeformableModel *&local_c0 = ctx->local_c0;
    CSkeleton *&local_bc = ctx->local_bc;
    uint &local_b8 = ctx->local_b8;
    int &local_b4 = ctx->local_b4;
    int &local_b0 = ctx->local_b0;
    int &local_ac = ctx->local_ac;
    uint &local_a8 = ctx->local_a8;
    int &local_a4 = ctx->local_a4;
    uint &local_a0 = ctx->local_a0;
    uint &local_9c = ctx->local_9c;
    uint &local_98 = ctx->local_98;
    int &local_94 = ctx->local_94;
    float &local_90 = ctx->local_90;
    float &local_8c = ctx->local_8c;
    int &local_88 = ctx->local_88;
    uint &local_84 = ctx->local_84;
    float &local_80 = ctx->local_80;
    float &local_7c = ctx->local_7c;
    float &local_78 = ctx->local_78;
    float &local_74 = ctx->local_74;
    float &local_70 = ctx->local_70;
    CVector3f *&local_6c = ctx->local_6c;
    int &local_68 = ctx->local_68;
    int &local_64 = ctx->local_64;
    CBoundingBox3D *&local_60 = ctx->local_60;
    CVector3f *&local_5c = ctx->local_5c;
    CVector3f *&local_58 = ctx->local_58;
    CMatrix3x4f *&local_54 = ctx->local_54;
    float &local_50 = ctx->local_50;
    uint &local_4c = ctx->local_4c;
    uint &local_48 = ctx->local_48;
    int &local_44 = ctx->local_44;
    int &local_40 = ctx->local_40;
    float &local_3c = ctx->local_3c;
    float &local_38 = ctx->local_38;
    SPart *&local_34 = ctx->local_34;
    SBone *&local_30 = ctx->local_30;
    int &local_2c = ctx->local_2c;
    SBone *&local_28 = ctx->local_28;
    float &local_24 = ctx->local_24;
    float &local_20 = ctx->local_20;
    int &local_1c = ctx->local_1c;
    float &local_18 = ctx->local_18;
    auto &local_14 = ctx->local_14;
  // param this_ptr aliased into ctx above

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
  bVar5 = false;
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
    wincore_windll_cpp_clearZBufferNative_FUN_005b3ed4();
    shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(&local_35c);
    iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if (iVar7 == 0) {
      CDeformableModelInstance_viewModel_branch_0(ctx);
    }
    local_6c->z = 0.0;
    local_6c->y = local_6c->z;
    local_6c->x = local_6c->y;
    local_8c = 1.0;
    iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
    if (iVar7 != 0) {
      local_8c = 0.33333334;
    }
    if (local_a8 == 0) {
      CDeformableModelInstance_viewModel_branch_0(ctx);
    }
    iVar7 = local_44;
    pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
    if (iVar7 < pCVar8->num_parts) {
      if (iVar7 < 0) {
        pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
        local_44 = pCVar8->num_parts + -1;
      }
    }
    else {
      local_44 = 0;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&local_100);
    local_d0.x = 0.0;
    local_d0.y = 0.0;
    local_d0.z = 0.0;
    if (local_a8 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr)
      ;
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr);
      core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr);
    }
    if (local_b4 == 1) {
      pCVar15 = this_ptr;
      for (iVar7 = 0;
          pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr),
          iVar7 < pCVar8->num_parts; iVar7 = iVar7 + 1) {
        (pCVar15->part_data).visibility_flags[0] = 0;
        pCVar15 = (CDeformableModelInstance *)&(pCVar15->motion_controller).current_motion_index;
      }
      (this_ptr->part_data).visibility_flags[local_44] = 3;
    }
    else if (local_b4 == 2) {
      pCVar15 = this_ptr;
      for (iVar7 = 0;
          pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr),
          iVar7 < pCVar8->num_parts; iVar7 = iVar7 + 1) {
        (pCVar15->part_data).visibility_flags[0] = 3;
        pCVar15 = (CDeformableModelInstance *)&(pCVar15->motion_controller).current_motion_index;
      }
      (this_ptr->part_data).visibility_flags[local_44] = 0;
    }
    core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430(this_ptr);
    iVar7 = local_a4;
    this_ptr_00 = g_CDemonRendererPtr2;
    (this_ptr->part_data).texture_set_indices[local_44] = local_ac;
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(this_ptr_00,0);
    if (iVar7 < 2) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (this_ptr,local_b0,0xffffffff,1,0);
    }
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr2);
    uVar6 = local_84;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(this_ptr);
    if (uVar6 != 0) {
      iVar16 = 0;
      iVar7 = 0;
      while (iVar7 < this_ptr_01->vertex_count[this_ptr->cached_skinned_lod_index]) {
        pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        if ((*(byte *)((int)&(pSVar3->projected_vertex).screen_x + iVar16 + 3) & 0x80) == 0) {
          local_68 = *(int *)((int)&(pSVar3->projected_vertex).screen_y + iVar16) >> 0x10;
          x = *(int *)((int)&(pSVar3->projected_vertex).screen_x + iVar16) >> 0x10;
          if (x < 0) goto LAB_0059722b;
          _sprintf(local_598,"%d");
          engine_2d_c_drawText_FUN_00401fd0(local_598,x,local_68);
          iVar7 = iVar7 + 1;
          iVar16 = iVar16 + 0x30;
        }
        else {
LAB_0059722b:
          iVar7 = iVar7 + 1;
          iVar16 = iVar16 + 0x30;
        }
      }
    }
    iVar7 = local_64;
    if (0 < g_SkeleditViewModel.poly_count) {
      CDeformableModelInstance_viewModel_check_0_2(ctx);
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
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F4);
    if (iVar7 != 0) {
      g_SkeletonViewModelScreenshotCounter = g_SkeletonViewModelScreenshotCounter + 1;
      _sprintf(g_SkeletonViewModelScreenshotFilename,"noc%d.pcx");
      engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(g_SkeletonViewModelScreenshotFilename);
    }
    if (local_4c != 0) {
      CDeformableModelInstance_viewModel_check_local_4c_3(ctx);
    }
    iVar7 = local_a4;
    if (0 < local_a4) {
      iVar16 = 1;
      if (2 < local_a4) {
        iVar16 = 3;
      }
      core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_005a17b0
                (this_ptr,(uint)g_ColorCubeLookup[0x7c00],iVar16);
      if (iVar7 == 4) {
        core_skeleton_cpp_CDeformableModelInstance_renderBones_FUN_005a17e0(this_ptr);
      }
    }
    if (local_98 == 0) {
      if (local_9c != 0) {
        fVar9 = 3.57331e-43;
        uVar19 = SUB42(g_CEditorToolsPtr,0);
        uVar20 = (ushort)((uint)g_CEditorToolsPtr >> 0x10);
        goto LAB_005975b4;
      }
    }
    else {
      fVar9 = (float)shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                               (g_CEditorToolsPtr);
      uVar19 = SUB42(g_CEditorToolsPtr,0);
      uVar20 = (ushort)((uint)g_CEditorToolsPtr >> 0x10);
LAB_005975b4:
      shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
                ((CEditorTools *)CONCAT22(uVar20,uVar19),2.0,(int)fVar9);
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
    iVar7 = local_44;
    core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220(this_ptr_01,local_44);
    core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220(this_ptr_01,iVar7);
    _sprintf(local_46c);
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x37);
    _sprintf(local_46c," F1 for key list ");
    engine_2d_c_drawText_FUN_00401fd0(local_46c,0,0x42);
    fVar9 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(local_60);
    local_18 = (float)(int)ROUND(ROUND(fVar9));
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
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar7 != 0) break;
    iVar7 = 0;
    pCVar13 = local_5c;
    pCVar14 = local_58;
    if (0 < this_ptr_02->bone_count) {
      do {
        if (pCVar14 != pCVar13) {
          pCVar14->x = pCVar13->x;
          pCVar14->y = pCVar13->y;
          pCVar14->z = pCVar13->z;
        }
        iVar7 = iVar7 + 1;
        pCVar13 = pCVar13 + 1;
        pCVar14 = pCVar14 + 1;
      } while (iVar7 < this_ptr_02->bone_count);
    }
    if (((g_SkeleditViewModel.poly_count < 1) ||
        (iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar7 == 0)) ||
       (local_a0 == 0)) {
      if (local_98 == 0) {
        shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(&local_35c,0x1f);
      }
    else {
      CDeformableModelInstance_viewModel_else_4(ctx);
    }
    }
    else {
      core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_200);
      core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                (&local_230,&local_200.position,&local_200.orientation.vec);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(local_54 + local_64,&local_230,&local_290);
      pCVar13 = core_xform_cpp_invertAndGetTranslation_FUN_005f6140(&local_260,&local_10c);
      if (&local_184 != pCVar13) {
        local_184.x = pCVar13->x;
        local_184.y = pCVar13->y;
        local_184.z = pCVar13->z;
      }
      pCVar13 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(&local_260,&local_190);
      if (&local_19c != pCVar13) {
        local_19c.x = pCVar13->x;
        local_19c.y = pCVar13->y;
        local_19c.z = pCVar13->z;
      }
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_B);
    if (iVar7 != 0) {
      CDeformableModelInstance_viewModel_check_iVar7_5(ctx);
    }
    iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_O);
    if (iVar7 != 0) {
      local_100.y = 0.0;
      local_100.x = 0.0;
      local_100.z = 0.0;
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_P);
    if (iVar7 != 0) {
      local_a0 = (uint)(local_a0 == 0);
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_L);
    if (iVar7 != 0) {
      bVar5 = !bVar5;
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_G);
    if (iVar7 != 0) {
      local_4c = (uint)(local_4c == 0);
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_C);
    if (iVar7 != 0) {
      local_48 = (uint)(local_48 == 0);
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_1);
    if (iVar7 != 0) {
      local_9c = (uint)(local_9c == 0);
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_V);
    if (iVar7 != 0) {
      local_84 = (uint)(local_84 == 0);
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_S);
    if (iVar7 != 0) {
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
      if (iVar7 == 0) {
        local_b4 = (local_b4 + 1) % 3;
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr,0);
        core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
                  (&local_1e4,this_ptr_01->vertex_count[this_ptr->cached_skinned_lod_index],
                   this_ptr->skinned_vertices_buffer);
        _sprintf(local_660,"Current dimensions:\nX: %7.3f .. %7.3f : %7.3f\nY: %7.3f .. %7.3f : %7.3f\nZ: %7.3f .. %7.3f : %7.3f\n\nEnter scale factor");
        iVar7 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                          (g_CEditorToolsPtr,local_660,&local_3c,1,0.0001,999999.9,0);
        if ((iVar7 != 0) && (local_3c != 1.0)) {
          core_skeledit_cpp_CDeformableModel_scaleAllVertices_FUN_0058e3e0(this_ptr_01,local_3c);
          local_94 = 1;
        }
      }
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F);
    if (iVar7 != 0) {
      fVar9 = 0.0;
      pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&this_ptr->motion_controller);
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,"Enter frame number",
                 &(this_ptr->motion_controller).current_frame_number,1,0.0,
                 (float)pSVar11->frame_count,(int)fVar9);
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_M);
    if (iVar7 != 0) {
      iVar7 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1900);
      for (iVar16 = 0;
          pCVar12 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&this_ptr->motion_controller), iVar16 < pCVar12->motion_count;
          iVar16 = iVar16 + 1) {
        pCVar12 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&this_ptr->motion_controller);
        pcVar18 = pCVar12->motions[0].motion_name + iVar7;
        iVar7 = iVar7 + 0x54c;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1900.base,pcVar18);
      }
      iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_1900,"Select motion",
                         (this_ptr->motion_controller).current_motion_index,0);
      if (-1 < iVar7) {
        (this_ptr->motion_controller).current_motion_index = iVar7;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1900,0);
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_T);
    if (iVar7 != 0) {
      pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&this_ptr->motion_controller);
      local_38 = (float)(int)ROUND(ROUND(pSVar11->exit_forward_to_frame));
      iVar7 = pSVar11->exit_forward_to_motion;
      pCVar12 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                          (&this_ptr->motion_controller);
      iVar7 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                        (g_CEditorToolsPtr,"Enter exit forward to frame number",(int *)&local_38,1,0,
                         pCVar12->motions[iVar7].frame_count + -1,1);
      if (iVar7 != 0) {
        local_18 = local_38;
        pSVar11->exit_forward_to_frame = (float)(int)local_38;
      }
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_X);
    if (iVar7 != 0) {
      shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                (g_CEditorToolsPtr,"Select texture set",&local_ac,1,0,4,1);
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_D);
    if (iVar7 != 0) {
      pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
      iVar7 = pCVar8->num_lods;
      _sprintf(local_534,"Select LOD (0..%d), or -1 for auto-LOD");
      shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                (g_CEditorToolsPtr,local_534,&local_b0,1,-1,iVar7 + -1,1);
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_H);
    if (iVar7 != 0) {
      local_a8 = (uint)(local_a8 == 0);
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_Z);
    if (iVar7 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1558);
      iVar7 = 0;
      if (0 < this_ptr_02->bone_count) {
        do {
          core_skeleton_cpp_CDeformableModel_getBonePart_FUN_0059c2d0(this_ptr_01,iVar7);
          _sprintf(local_46c,"%s\t%s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1558.base,local_46c);
          iVar7 = iVar7 + 1;
        } while (iVar7 < this_ptr_02->bone_count);
      }
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_1558,"Part for bone info",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1558,0);
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB);
    if (iVar7 != 0) {
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar7 == 0) {
        local_44 = local_44 + 1;
      }
      else {
        local_44 = local_44 + -1;
      }
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_I);
    if (iVar7 != 0) {
      CDeformableModelInstance_viewModel_check_iVar7_6(ctx);
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_E);
    if ((iVar7 != 0) &&
       (iVar7 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter .S3D filename to save model",local_4d0,100,0),
       iVar7 != 0)) {
      splitpath(local_4d0,local_14,local_a60,local_960,local_760);
      if (local_760[0] == '\0') {
        makepath(local_4d0,local_14,local_a60,local_960,"s3d");
      }
      core_skeledit_cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0(this_ptr,local_4d0);
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R);
    if (iVar7 != 0) {
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar7 == 0) {
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
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F1);
    if (iVar7 != 0) {
      CDeformableModelInstance_viewModel_check_iVar7_7(ctx);
    }
    (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
  } while( true );
  if (((local_40 != 0) || (local_94 != 0)) &&
     (iVar7 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                        (g_CEditorToolsPtr,"You biased/scaled the model.  Save model before exiting viewer?"), iVar7 != 0)) {
    pcVar18 = local_860;
    pcVar17 = this_ptr_01->model_filename;
    do {
      cVar2 = *pcVar17;
      *pcVar18 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar17[1];
      pcVar17 = pcVar17 + 2;
      pcVar18[1] = cVar2;
      pcVar18 = pcVar18 + 2;
    } while (cVar2 != '\0');
    iVar7 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                      (g_CEditorToolsPtr,"Enter .DFM filename","models",
                       "dfm",local_860,1);
    if (iVar7 != 0) {
      core_skeledit_cpp_CDeformableModel_save_FUN_0058f040(this_ptr_01,local_860);
    }
  }
  g_CDemonSetPtr->lighting_quality_mode = 0;
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&g_SkeleditViewModel);
  return;
}
