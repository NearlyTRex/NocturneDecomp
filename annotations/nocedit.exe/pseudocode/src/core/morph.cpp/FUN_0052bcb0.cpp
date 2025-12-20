// Name: core_morph.cpp_FUN_0052bcb0
// Address: 0052bcb0
// Address Range: [[0052bcb0, 0052ca8d]]
// Convention: __cdecl
// Signature: undefined core_morph.cpp_FUN_0052bcb0()

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_morph_cpp_FUN_0052bcb0(void)

{
  float *pfVar1;
  CSpotView *this_ptr;
  float fVar2;
  uchar uVar3;
  int iVar4;
  int *piVar5;
  float y;
  undefined3 extraout_var;
  CMotionList *pCVar6;
  float *pfVar7;
  char *pcVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  float *pfVar12;
  int iVar13;
  BADSPACEBASE *in_ESP;
  int iVar14;
  float fVar15;
  CMotionController *this_ptr_00;
  int unaff_retaddr;
  int in_stack_00000014;
  float in_stack_00000018;
  CDeformableModelInstance *in_stack_0000001c;
  CDeformableModelInstance *in_stack_00000030;
  CDeformableModelInstance *in_stack_00000034;
  int in_stack_0000005c;
  float in_stack_00000060;
  CMorph *in_stack_000000bc;
  CMorphModel *in_stack_000000c0;
  int in_stack_000000d4;
  CGame *in_stack_ffffb26c;
  CMotionList *pCStack_4d18;
  float *pfStack_4d14;
  float in_stack_ffffb320;
  float in_stack_ffffb328;
  float in_stack_ffffb32c;
  float in_stack_ffffb330;
  float in_stack_ffffb334;
  CMotionController_vtable *in_stack_ffffb338;
  CVector3i *pCStack_2b40;
  float fStack_2b3c;
  int aiStack_2b20 [11];
  byte auStack_2af4 [20];
  byte auStack_2ae0 [136];
  CDeformableModelInstance CStack_2a58;
  byte auStack_778 [12];
  byte auStack_76c [748];
  byte auStack_480 [32];
  int aiStack_460 [2];
  float afStack_458 [5];
  float afStack_444 [11];
  SMorphControlPoint *apSStack_418 [125];
  byte auStack_224 [4];
  char acStack_220 [4];
  byte auStack_21c [4];
  char acStack_218 [292];
  byte local_f4 [48];
  float local_c4 [12];
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  CDeformableModel *local_68;
  float local_64;
  CDeformableModel *local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28 [2];
  float local_20;
  int local_18;
  int local_10;
  int local_c;
  float local_8;
  
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (&stack0xffffb248,2,&g_CDeformableModelInstanceTypeInfo);
  iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select 1st model file","models",
                     "*.dfm",SUB41 /* extract 2-byte value */(auStack_224,0));
  if (iVar4 != 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              ((CDeformableModelInstance *)&stack0xffffb250,acStack_220);
    iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select 2nd model file","models",
                       "*.dfm",SUB41 /* extract 2-byte value */(auStack_21c,0));
    if (iVar4 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                ((CDeformableModelInstance *)auStack_2af4,acStack_218);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Loading...");
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
                ((CDeformableModelInstance *)&stack0xffffb260);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
                ((CDeformableModelInstance *)(auStack_2af4 + 0xc));
      local_68 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                           ((CDeformableModelInstance *)&stack0xffffb268);
      local_60 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                           ((CDeformableModelInstance *)auStack_2ae0);
      crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                (auStack_480,0x14,&g_SMorphControlPointTypeInfo);
      this_ptr = g_CSpotViewPtr;
      local_54 = (float)g_CDemonSetPtr->lighting_quality_mode;
      g_CDemonSetPtr->lighting_quality_mode = 1;
      shape_spotview_cpp_CSpotView_FUN_005b9620(this_ptr);
      iVar4 = 0;
      core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffb26c);
      g_MouseButtonFlags = 0;
      local_28[0] = 0;
      local_44 = 0.0;
      local_38 = -NAN;
      local_3c = -NAN;
      local_40 = 0.0;
      while( true ) {
        crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                  (local_f4,2,&g_CBoundingBox3DTypeInfo);
        local_10 = 0;
        do {
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                    ((CDeformableModelInstance *)&stack0xffffb280);
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                    ((CDeformableModelInstance *)&stack0xffffb280);
          core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
                    ((CDeformableModelInstance *)&stack0xffffb280,0);
          core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
                    ((CBoundingBox3D *)0x0,
                     *(int *)(*(int *)((int)&local_48 + (int)&stack0xffffb280) + 0x2c),pCStack_2b40)
          ;
          iVar9 = 0;
          if (0 < iVar4) {
            pfVar10 = (float *)((int)afStack_458 + unaff_retaddr);
            iVar14 = in_stack_00000014;
            do {
              piVar5 = (int *)((int)aiStack_460 + iVar14);
              iVar14 = iVar14 + 0x20;
              piVar5 = (int *)((int)fStack_2b3c + *piVar5 * 0xc);
              iVar9 = iVar9 + 1;
              *pfVar10 = (float)*piVar5 * 0.00390625f;
              pfVar10[1] = (float)piVar5[1] * 0.00390625f;
              pfVar10[2] = (float)piVar5[2] * 0.00390625f;
              pfVar10 = pfVar10 + 8;
            } while (iVar9 < iVar4);
          }
          in_stack_00000014 = in_stack_00000014 + 4;
          unaff_retaddr = unaff_retaddr + 0xc;
          in_stack_00000018 = (float)((int)in_stack_00000018 + 1);
        } while ((int)in_stack_00000018 < 2);
        engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,4);
        wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
        y = (float)((int)((g_WindowHeight + (g_WindowHeight >> 0x1f) * -4) -
                         (uint)((g_WindowHeight >> 0x1f) << 1 < 0)) >> 2);
        fVar15 = -NAN;
        iVar9 = 0;
        local_8 = (float)(g_WindowHeight + (int)y * -2);
        do {
          engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                    (g_CDemonRendererPtr,(g_WindowWidth / 2) * iVar9,(int)y,g_WindowWidth / 2,
                     (int)local_8);
          shape_spotview_cpp_CSpotView_FUN_005b9a20(g_CSpotViewPtr);
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr,&g_ZeroVector);
          core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250
                    (in_stack_0000001c,0);
          iVar14 = 0;
          fVar2 = 0.0;
          while (fVar11 = fVar2,
                (int)fVar11 < *(int *)(*(int *)((int)&local_2c + (int)in_stack_0000001c) + 0x2c)) {
            iVar13 = *(int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                                    screen_x + iVar14);
            if ((((iVar13 < (g_MouseX + -5) * 0x10000) || ((g_MouseX + 5) * 0x10000 < iVar13)) ||
                (iVar13 = *(int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                                         screen_y + iVar14), iVar13 < (g_MouseY + -5) * 0x10000)) ||
               ((g_MouseY + 5) * 0x10000 < iVar13)) {
              iVar14 = iVar14 + 0x30;
              fVar2 = (float)((int)fVar11 + 1);
            }
            else {
              iVar14 = iVar14 + 0x30;
              fVar2 = (float)((int)fVar11 + 1);
              fVar15 = fVar11;
            }
          }
          engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
          iVar9 = iVar9 + 1;
        } while (iVar9 < 2);
        in_stack_00000014 = -1;
        if (-1 < (int)fVar15) {
          local_18 = 1 - in_stack_0000005c;
          iVar9 = in_stack_0000005c << 2;
          if (0 < iVar4) {
            y = (float)(local_18 * 4);
            iVar14 = 0;
            do {
              if (fVar15 == *(float *)((int)afStack_444 + iVar9)) {
                in_stack_00000014 = *(int *)((int)afStack_444 + (int)y + iVar14);
              }
              iVar14 = iVar14 + 0x20;
              iVar9 = iVar9 + 0x20;
            } while (iVar14 < iVar4 * 0x20);
          }
          if (in_stack_00000014 < 0) {
            piVar5 = (int *)(aiStack_2b20[in_stack_0000005c * 0x8ad] + (int)fVar15 * 0xc);
            local_70 = (float)*piVar5 * 0.00390625f;
            local_6c = (float)piVar5[1] * 0.00390625f;
            local_68 = (CDeformableModel *)((float)piVar5[2] * 0.00390625f);
            pfVar12 = local_c4 + in_stack_0000005c * 6;
            local_70 = (float)*piVar5 * 0.00390625f - *pfVar12;
            local_6c = (float)piVar5[1] * 0.00390625f - local_c4[in_stack_0000005c * 6 + 1];
            pfVar7 = local_c4 + local_18 * 6;
            local_68 = (CDeformableModel *)
                       ((float)piVar5[2] * 0.00390625f - local_c4[in_stack_0000005c * 6 + 2]);
            pfVar10 = local_c4 + local_18 * 6 + 3;
            local_94 = *pfVar10 - *pfVar7;
            local_90 = local_c4[local_18 * 6 + 4] - local_c4[local_18 * 6 + 1];
            pfVar1 = local_c4 + in_stack_0000005c * 6 + 3;
            local_8c = local_c4[local_18 * 6 + 5] - local_c4[local_18 * 6 + 2];
            local_40 = *pfVar1 - *pfVar12;
            local_3c = local_c4[in_stack_0000005c * 6 + 4] - local_c4[in_stack_0000005c * 6 + 1];
            local_70 = ((*pfVar10 - *pfVar7) / (*pfVar1 - *pfVar12)) * local_70;
            local_38 = local_c4[in_stack_0000005c * 6 + 5] - local_c4[in_stack_0000005c * 6 + 2];
            local_58 = *pfVar10 - *pfVar7;
            local_54 = local_c4[local_18 * 6 + 4] - local_c4[local_18 * 6 + 1];
            local_50 = local_c4[local_18 * 6 + 5] - local_c4[local_18 * 6 + 2];
            local_7c = *pfVar1 - *pfVar12;
            local_78 = local_c4[in_stack_0000005c * 6 + 4] - local_c4[in_stack_0000005c * 6 + 1];
            local_6c = ((local_c4[local_18 * 6 + 4] - local_c4[local_18 * 6 + 1]) /
                       (local_c4[in_stack_0000005c * 6 + 4] - local_c4[in_stack_0000005c * 6 + 1]))
                       * local_6c;
            local_74 = local_c4[in_stack_0000005c * 6 + 5] - local_c4[in_stack_0000005c * 6 + 2];
            local_88 = *pfVar10 - *pfVar7;
            local_84 = local_c4[local_18 * 6 + 4] - local_c4[local_18 * 6 + 1];
            local_80 = local_c4[local_18 * 6 + 5] - local_c4[local_18 * 6 + 2];
            local_64 = *pfVar1 - *pfVar12;
            local_60 = (CDeformableModel *)
                       (local_c4[in_stack_0000005c * 6 + 4] - local_c4[in_stack_0000005c * 6 + 1]);
            local_5c = local_c4[in_stack_0000005c * 6 + 5] - local_c4[in_stack_0000005c * 6 + 2];
            local_68 = (CDeformableModel *)
                       (((local_c4[local_18 * 6 + 5] - local_c4[local_18 * 6 + 2]) /
                        (local_c4[in_stack_0000005c * 6 + 5] - local_c4[in_stack_0000005c * 6 + 2]))
                       * (float)local_68);
            iVar14 = 0;
            local_20 = 1e+30;
            local_70 = local_70 + *pfVar7;
            local_6c = local_6c + local_c4[local_18 * 6 + 1];
            local_68 = (CDeformableModel *)((float)local_68 + local_c4[local_18 * 6 + 2]);
            iVar9 = 0;
            while (iVar13 = iVar9, iVar13 < *(int *)(local_28[1 - in_stack_0000005c] + 0x2c)) {
              piVar5 = (int *)(aiStack_2b20[(1 - in_stack_0000005c) * 0x8ad] + iVar14);
              local_4c = (float)*piVar5 * 0.00390625f;
              local_48 = (float)piVar5[1] * 0.00390625f;
              local_44 = (float)piVar5[2] * 0.00390625f;
              local_30 = local_6c - (float)piVar5[1] * 0.00390625f;
              local_34 = local_70 - (float)*piVar5 * 0.00390625f;
              local_2c = (float)local_68 - (float)piVar5[2] * 0.00390625f;
              in_stack_00000018 = local_2c * local_2c + local_34 * local_34 + local_30 * local_30;
              if (in_stack_00000018 < local_20) {
                local_20 = in_stack_00000018;
                iVar14 = iVar14 + 0xc;
                iVar9 = iVar13 + 1;
                in_stack_00000014 = iVar13;
              }
              else {
                iVar14 = iVar14 + 0xc;
                iVar9 = iVar13 + 1;
              }
            }
          }
        }
        unaff_retaddr = (int)fVar15 * 0x30;
        do {
          engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                    (g_CDemonRendererPtr,(g_WindowWidth / 2) * (int)in_stack_0000001c,(int)y,
                     g_WindowWidth / 2,(int)local_8);
          shape_spotview_cpp_CSpotView_FUN_005b9a20(g_CSpotViewPtr);
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr,&g_ZeroVector);
          core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250
                    (in_stack_00000030,0);
          if (in_stack_00000014 * 0x30 == 0) {
            core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340
                      (in_stack_00000034);
          }
          else {
            core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0
                      (in_stack_00000034);
          }
          iVar9 = 0;
          g_ActiveRenderColor = 0xff;
          if (0 < iVar4) {
            do {
              iVar9 = iVar9 + 1;
              core_morph_cpp_FUN_0052bb80();
            } while (iVar9 < iVar4);
          }
          if (-1 < (int)fVar15) {
            uVar3 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                              (g_CEditorToolsPtr);
            g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var,uVar3);
            core_morph_cpp_FUN_0052bb80();
          }
          engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
          in_stack_00000030 =
               (CDeformableModelInstance *)
               &(in_stack_00000030->motion_controller).current_motion_index;
          in_stack_0000005c = in_stack_0000005c + 1;
        } while (in_stack_0000005c < 2);
        if (g_MouseButtonFlags == 1) {
          if (local_10 == 1) {
            if (((-1 < (int)y) && (local_8 == in_stack_00000060)) && ((int)in_stack_0000001c < 0)) {
              afStack_444[(int)y * 8 + (int)local_8 + 1] = fVar15;
            }
          }
          else if (local_10 == 0) {
            if ((int)in_stack_0000001c < 0) {
              if (-1 < (int)fVar15) {
                if (iVar4 < 0x14) {
                  local_8 = in_stack_00000060;
                  *(float *)((int)afStack_444 + (int)in_stack_00000060 * 4 + local_c + 4U) = fVar15;
                  iVar4 = iVar4 + 1;
                  *(float *)((int)afStack_444 + (1 - (int)in_stack_00000060) * 4 + local_c + 4U) =
                       in_stack_00000018;
                  local_c = local_c + 0x20;
                }
                else {
                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                            (g_CEditorToolsPtr,"Can't add any more control points.  MAX_CONTROL_POINTS reached.");
                }
              }
            }
            else {
              local_8 = in_stack_00000060;
            }
          }
        }
        else {
          local_8 = -NAN;
        }
        if ((int)fVar15 < 0) {
          shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
        }
        local_c = g_MouseButtonFlags;
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
        shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
        iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
        if (iVar9 != 0) break;
        iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x14);
        if (iVar9 != 0) {
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                    ((CDeformableModelInstance *)&pCStack_4d18);
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                    ((CDeformableModelInstance *)(auStack_2ae0 + 0x80));
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                    ((CDeformableModelInstance *)&stack0xffffb2f0);
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                    (&CStack_2a58);
          pCStack_4d18 = (CMotionList *)&stack0xffffb2f8;
          core_morph_cpp_FUN_0052b430();
          pfStack_4d14 = &CStack_2a58.motion_controller.current_frame_number;
          pCStack_4d18 = (CMotionList *)&DAT_00000001;
          core_morph_cpp_FUN_0052b430();
          pfStack_4d14 = (float *)0x52c4b0;
          core_morph_cpp_CMorph_getReady_FUN_0052b680(in_stack_000000bc);
          pfStack_4d14 = (float *)0x52c4c5;
          core_morph_cpp_FUN_0052ca90();
          core_morph_cpp_CMorphModel_FUN_0052b350(in_stack_000000c0);
        }
        iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x32);
        if (iVar9 != 0) {
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_778);
          iVar9 = 0;
          this_ptr_00 = (CMotionController *)(&stack0xffffb324 + in_stack_000000d4 * 0x22b4);
          for (iVar14 = 0;
              pCVar6 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(this_ptr_00),
              iVar14 < pCVar6->motion_count; iVar14 = iVar14 + 1) {
            pCVar6 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(this_ptr_00);
            pcVar8 = pCVar6->motions[0].motion_name + iVar9;
            iVar9 = iVar9 + 0x54c;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_76c,pcVar8);
          }
          iVar9 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)(auStack_778 + 8),"Select motion",-1,0);
          if (-1 < iVar9) {
            pcVar8 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                               ((CStrList *)auStack_76c,iVar9);
            core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                      (this_ptr_00,pcVar8,in_stack_ffffb320);
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)(auStack_76c + 8),0,(uint)in_stack_ffffb328,
                     (uint)in_stack_ffffb32c,(uint)in_stack_ffffb330,(uint)in_stack_ffffb334,
                     (uint)in_stack_ffffb338);
        }
        in_stack_ffffb328 = 3.36312e-44;
        in_stack_ffffb320 = 7.603025e-39;
        (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x18);
      }
      g_CDemonSetPtr->lighting_quality_mode = 0;
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_morph_cpp_freeMorphControlPoints_FUN_0052ccb0(apSStack_418);
      core_morph_cpp_freeDeformableModelInstances_FUN_0052ccd0
                ((CDeformableModelInstance **)&stack0xffffb2dc);
      return;
    }
  }
  core_morph_cpp_freeDeformableModelInstances_FUN_0052ccd0
            ((CDeformableModelInstance **)&stack0xffffb258);
  return;
}
