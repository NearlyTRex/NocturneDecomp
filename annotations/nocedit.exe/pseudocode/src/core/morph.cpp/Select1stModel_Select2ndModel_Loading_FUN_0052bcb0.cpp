// Name: core_morph.cpp_Select1stModel_Select2ndModel_Loading_FUN_0052bcb0
// Address: 0052bcb0
// Address Range: [[0052bcb0, 0052ca8d]]
// Convention: unknown
// Signature: undefined core_morph.cpp_Select1stModel_Select2ndModel_Loading_FUN_0052bcb0()
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005078a6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_dfm_0063a498
//   TerminatedCString s_models_0063a49e
//   TerminatedCString s_Select_1st_model_file_0063a4a5
//   TerminatedCString s_dfm_0063a4bb
//   TerminatedCString s_models_0063a4c1
//   TerminatedCString s_Select_2nd_model_file_0063a4c8
//   TerminatedCString s_Loading_0063a4de
//   TerminatedCString s_Can_t_add_any_more_contr_0063a4e9
//   TerminatedCString s_Select_motion_0063a529
//   WatcomTypeInfo g_CBoundingBox3DTypeInfo
//   WatcomTypeInfo g_CDeformableModelInstanceTypeInfo
//   undefined4 DAT_00661b48
//   WatcomTypeInfo g_SMorphControlPointTypeInfo
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSpotView* g_CSpotViewPtr = 03f6b9e0
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags
//   int g_ActiveRenderColor
//   CGame g_CGameInstance
//   void* g_CKeysPtr
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.field22_0x15ac80[0]
//   CSpotView g_CSpotViewInstance
//   CVector3f g_ZeroVector
// Function calls:
//   core_box.cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_morph.cpp_CallToFreeSomething1_FUN_0052b430
//   core_morph.cpp_CMorph_getReady_FUN_0052b680
//   core_morph.cpp_CMorphModel_CallToFreeSomething1_FUN_0052b350
//   core_morph.cpp_FUN_0052bb80
//   core_morph.cpp_FUN_0052ca90
//   core_morph.cpp_FUN_0052ccb0
//   core_morph.cpp_FUN_0052ccd0
//   core_motion.cpp_CMotionController_FUN_0052ddb0
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_skeleton.cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80
//   core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0250
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0
//   core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0
//   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340
//   core_skeleton.cpp_FUN_005a0840
//   core_stairs.cpp_FUN_005b9620
//   core_stairs.cpp_FUN_005b9670
//   core_stairs.cpp_FUN_005b9a20
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_morph.cpp_Select1stModel_Select2ndModel_Loading() */

void core_morph_cpp_Select1stModel_Select2ndModel_Loading_FUN_0052bcb0(void)

{
  float *pfVar1;
  CDemonSet *pCVar2;
  float fVar3;
  uchar uVar4;
  int iVar5;
  int *piVar6;
  undefined3 extraout_var;
  char *string_data;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  BADSPACEBASE *in_ESP;
  int iVar14;
  float fVar15;
  int unaff_retaddr;
  int in_stack_00000014;
  float in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_0000005c;
  int in_stack_00000060;
  CGame *in_stack_ffffb26c;
  uint in_stack_ffffb328;
  uint in_stack_ffffb32c;
  uint in_stack_ffffb330;
  uint in_stack_ffffb334;
  uint in_stack_ffffb338;
  CVector3i *pCStack_2b40;
  int iStack_2b3c;
  int aiStack_2b20 [2282];
  undefined1 auStack_778 [12];
  undefined1 auStack_76c [748];
  undefined1 auStack_480 [32];
  int aiStack_460 [2];
  float afStack_458 [5];
  float afStack_444 [136];
  undefined1 auStack_224 [8];
  undefined1 auStack_21c [296];
  undefined1 local_f4 [48];
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
  float local_68;
  float local_64;
  float local_60;
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
  int local_8;
  
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (&stack0xffffb248,2,&g_CDeformableModelInstanceTypeInfo);
  iVar5 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select 1st model file","models",
                     "*.dfm",SUB41(auStack_224,0));
  if (iVar5 != 0) {
    core_skeleton_cpp_FUN_005a0840();
    iVar5 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select 2nd model file","models",
                       "*.dfm",SUB41(auStack_21c,0));
    if (iVar5 != 0) {
      core_skeleton_cpp_FUN_005a0840();
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Loading...");
      core_skeleton_cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450();
      core_skeleton_cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450();
      local_68 = (float)core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
      local_60 = (float)core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
      crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                (auStack_480,0x14,&g_SMorphControlPointTypeInfo);
      local_54 = *(float *)g_CDemonSetPtr->field22_0x15ac80;
      pCVar2 = g_CDemonSetPtr;
      pCVar2->field22_0x15ac80[0] = '\x01';
      pCVar2->field22_0x15ac80[1] = '\0';
      pCVar2->field22_0x15ac80[2] = '\0';
      pCVar2->field22_0x15ac80[3] = '\0';
      core_stairs_cpp_FUN_005b9620();
      iVar5 = 0;
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
          core_skeleton_cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80();
          core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb40();
          core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0();
          core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
                    ((CBoundingBox3D *)0x0,
                     *(int *)(*(int *)((int)&stack0x00000000 * 2 + -0x4dc8) + 0x2c),pCStack_2b40);
          iVar8 = 0;
          if (0 < iVar5) {
            pfVar9 = (float *)((int)afStack_458 + unaff_retaddr);
            iVar14 = in_stack_00000014;
            do {
              piVar6 = (int *)((int)aiStack_460 + iVar14);
              iVar14 = iVar14 + 0x20;
              piVar6 = (int *)(iStack_2b3c + *piVar6 * 0xc);
              iVar8 = iVar8 + 1;
              *pfVar9 = (float)*piVar6 * _DAT_00661b48;
              pfVar9[1] = (float)piVar6[1] * _DAT_00661b48;
              pfVar9[2] = (float)piVar6[2] * _DAT_00661b48;
              pfVar9 = pfVar9 + 8;
            } while (iVar8 < iVar5);
          }
          in_stack_00000014 = in_stack_00000014 + 4;
          unaff_retaddr = unaff_retaddr + 0xc;
          in_stack_00000018 = (float)((int)in_stack_00000018 + 1);
        } while ((int)in_stack_00000018 < 2);
        engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,4);
        wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
        iVar8 = (int)((g_WindowHeight + (g_WindowHeight >> 0x1f) * -4) -
                     (uint)((g_WindowHeight >> 0x1f) << 1 < 0)) >> 2;
        fVar15 = -NAN;
        iVar14 = 0;
        local_8 = g_WindowHeight + iVar8 * -2;
        do {
          engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                    (g_CDemonRendererPtr,(g_WindowWidth / 2) * iVar14,iVar8,g_WindowWidth / 2,
                     local_8);
          core_stairs_cpp_FUN_005b9a20();
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr,&g_ZeroVector);
          core_skeleton_cpp_CDeformableModelInstance_FUN_005a0250();
          iVar13 = 0;
          fVar3 = 0.0;
          while (fVar10 = fVar3,
                (int)fVar10 < *(int *)(*(int *)((int)local_28 + in_stack_0000001c + -4) + 0x2c)) {
            iVar12 = *(int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                                    screen_x + iVar13);
            if ((((iVar12 < (g_MouseX + -5) * 0x10000) || ((g_MouseX + 5) * 0x10000 < iVar12)) ||
                (iVar12 = *(int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                                         screen_y + iVar13), iVar12 < (g_MouseY + -5) * 0x10000)) ||
               ((g_MouseY + 5) * 0x10000 < iVar12)) {
              iVar13 = iVar13 + 0x30;
              fVar3 = (float)((int)fVar10 + 1);
            }
            else {
              iVar13 = iVar13 + 0x30;
              fVar3 = (float)((int)fVar10 + 1);
              fVar15 = fVar10;
            }
          }
          engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
          iVar14 = iVar14 + 1;
        } while (iVar14 < 2);
        in_stack_00000014 = -1;
        if (-1 < (int)fVar15) {
          local_18 = 1 - in_stack_0000005c;
          iVar14 = in_stack_0000005c << 2;
          if (0 < iVar5) {
            iVar8 = local_18 * 4;
            iVar13 = 0;
            do {
              if (fVar15 == *(float *)((int)afStack_444 + iVar14)) {
                in_stack_00000014 = *(int *)((int)afStack_444 + iVar8 + iVar13);
              }
              iVar13 = iVar13 + 0x20;
              iVar14 = iVar14 + 0x20;
            } while (iVar13 < iVar5 * 0x20);
          }
          if (in_stack_00000014 < 0) {
            piVar6 = (int *)(aiStack_2b20[in_stack_0000005c * 0x8ad] + (int)fVar15 * 0xc);
            local_70 = (float)*piVar6 * _DAT_00661b48;
            local_6c = (float)piVar6[1] * _DAT_00661b48;
            local_68 = (float)piVar6[2] * _DAT_00661b48;
            pfVar11 = local_c4 + in_stack_0000005c * 6;
            local_70 = (float)*piVar6 * _DAT_00661b48 - *pfVar11;
            local_6c = (float)piVar6[1] * _DAT_00661b48 - local_c4[in_stack_0000005c * 6 + 1];
            pfVar7 = local_c4 + local_18 * 6;
            local_68 = (float)piVar6[2] * _DAT_00661b48 - local_c4[in_stack_0000005c * 6 + 2];
            pfVar9 = local_c4 + local_18 * 6 + 3;
            local_94 = *pfVar9 - *pfVar7;
            local_90 = local_c4[local_18 * 6 + 4] - local_c4[local_18 * 6 + 1];
            pfVar1 = local_c4 + in_stack_0000005c * 6 + 3;
            local_8c = local_c4[local_18 * 6 + 5] - local_c4[local_18 * 6 + 2];
            local_40 = *pfVar1 - *pfVar11;
            local_3c = local_c4[in_stack_0000005c * 6 + 4] - local_c4[in_stack_0000005c * 6 + 1];
            local_70 = ((*pfVar9 - *pfVar7) / (*pfVar1 - *pfVar11)) * local_70;
            local_38 = local_c4[in_stack_0000005c * 6 + 5] - local_c4[in_stack_0000005c * 6 + 2];
            local_58 = *pfVar9 - *pfVar7;
            local_54 = local_c4[local_18 * 6 + 4] - local_c4[local_18 * 6 + 1];
            local_50 = local_c4[local_18 * 6 + 5] - local_c4[local_18 * 6 + 2];
            local_7c = *pfVar1 - *pfVar11;
            local_78 = local_c4[in_stack_0000005c * 6 + 4] - local_c4[in_stack_0000005c * 6 + 1];
            local_6c = ((local_c4[local_18 * 6 + 4] - local_c4[local_18 * 6 + 1]) /
                       (local_c4[in_stack_0000005c * 6 + 4] - local_c4[in_stack_0000005c * 6 + 1]))
                       * local_6c;
            local_74 = local_c4[in_stack_0000005c * 6 + 5] - local_c4[in_stack_0000005c * 6 + 2];
            local_88 = *pfVar9 - *pfVar7;
            local_84 = local_c4[local_18 * 6 + 4] - local_c4[local_18 * 6 + 1];
            local_80 = local_c4[local_18 * 6 + 5] - local_c4[local_18 * 6 + 2];
            local_64 = *pfVar1 - *pfVar11;
            local_60 = local_c4[in_stack_0000005c * 6 + 4] - local_c4[in_stack_0000005c * 6 + 1];
            local_5c = local_c4[in_stack_0000005c * 6 + 5] - local_c4[in_stack_0000005c * 6 + 2];
            local_68 = ((local_c4[local_18 * 6 + 5] - local_c4[local_18 * 6 + 2]) /
                       (local_c4[in_stack_0000005c * 6 + 5] - local_c4[in_stack_0000005c * 6 + 2]))
                       * local_68;
            iVar13 = 0;
            local_20 = 1e+30;
            local_70 = local_70 + *pfVar7;
            local_6c = local_6c + local_c4[local_18 * 6 + 1];
            local_68 = local_68 + local_c4[local_18 * 6 + 2];
            iVar14 = 0;
            while (iVar12 = iVar14, iVar12 < *(int *)(local_28[1 - in_stack_0000005c] + 0x2c)) {
              piVar6 = (int *)(aiStack_2b20[(1 - in_stack_0000005c) * 0x8ad] + iVar13);
              local_4c = (float)*piVar6 * _DAT_00661b48;
              local_48 = (float)piVar6[1] * _DAT_00661b48;
              local_44 = (float)piVar6[2] * _DAT_00661b48;
              local_30 = local_6c - (float)piVar6[1] * _DAT_00661b48;
              local_34 = local_70 - (float)*piVar6 * _DAT_00661b48;
              local_2c = local_68 - (float)piVar6[2] * _DAT_00661b48;
              in_stack_00000018 = local_2c * local_2c + local_34 * local_34 + local_30 * local_30;
              if (in_stack_00000018 < local_20) {
                local_20 = in_stack_00000018;
                iVar13 = iVar13 + 0xc;
                iVar14 = iVar12 + 1;
                in_stack_00000014 = iVar12;
              }
              else {
                iVar13 = iVar13 + 0xc;
                iVar14 = iVar12 + 1;
              }
            }
          }
        }
        unaff_retaddr = (int)fVar15 * 0x30;
        do {
          engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                    (g_CDemonRendererPtr,(g_WindowWidth / 2) * in_stack_0000001c,iVar8,
                     g_WindowWidth / 2,local_8);
          core_stairs_cpp_FUN_005b9a20();
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr,&g_ZeroVector);
          core_skeleton_cpp_CDeformableModelInstance_FUN_005a0250();
          if (in_stack_00000014 * 0x30 == 0) {
            core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340();
          }
          else {
            core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0();
          }
          iVar14 = 0;
          g_ActiveRenderColor = 0xff;
          if (0 < iVar5) {
            do {
              iVar14 = iVar14 + 1;
              core_morph_cpp_FUN_0052bb80();
            } while (iVar14 < iVar5);
          }
          if (-1 < (int)fVar15) {
            uVar4 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                              (g_CEditorToolsPtr);
            g_ActiveRenderColor = CONCAT31(extraout_var,uVar4);
            core_morph_cpp_FUN_0052bb80();
          }
          engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
          in_stack_0000005c = in_stack_0000005c + 1;
        } while (in_stack_0000005c < 2);
        if (g_MouseButtonFlags == 1) {
          if (local_10 == 1) {
            if (((-1 < iVar8) && (local_8 == in_stack_00000060)) && (in_stack_0000001c < 0)) {
              afStack_444[iVar8 * 8 + local_8 + 1] = fVar15;
            }
          }
          else if (local_10 == 0) {
            if (in_stack_0000001c < 0) {
              if (-1 < (int)fVar15) {
                if (iVar5 < 0x14) {
                  local_8 = in_stack_00000060;
                  *(float *)((int)afStack_444 + in_stack_00000060 * 4 + local_c + 4U) = fVar15;
                  iVar5 = iVar5 + 1;
                  *(float *)((int)afStack_444 + (1 - in_stack_00000060) * 4 + local_c + 4U) =
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
          local_8 = -1;
        }
        if ((int)fVar15 < 0) {
          shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
        }
        local_c = g_MouseButtonFlags;
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
        core_stairs_cpp_FUN_005b9670();
        iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
        if (iVar8 != 0) break;
        iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x14);
        if (iVar8 != 0) {
          core_skeleton_cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80();
          core_skeleton_cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80();
          core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb40();
          core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb40();
          core_morph_cpp_CallToFreeSomething1_FUN_0052b430();
          core_morph_cpp_CallToFreeSomething1_FUN_0052b430();
          core_morph_cpp_CMorph_getReady_FUN_0052b680();
          core_morph_cpp_FUN_0052ca90();
          core_morph_cpp_CMorphModel_CallToFreeSomething1_FUN_0052b350();
        }
        iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x32);
        if (iVar8 != 0) {
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_778);
          iVar8 = 0;
          for (iVar14 = 0; iVar13 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(),
              iVar14 < *(int *)(iVar13 + 0x964); iVar14 = iVar14 + 1) {
            iVar13 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0();
            string_data = (char *)(iVar13 + 0x968 + iVar8);
            iVar8 = iVar8 + 0x54c;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_76c,string_data);
          }
          iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)(auStack_778 + 8),"Select motion",-1,0);
          if (-1 < iVar8) {
            shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_76c,iVar8);
            core_motion_cpp_CMotionController_FUN_0052ddb0();
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)(auStack_76c + 8),0,in_stack_ffffb328,in_stack_ffffb32c,
                     in_stack_ffffb330,in_stack_ffffb334,in_stack_ffffb338);
        }
        in_stack_ffffb328 = 0x18;
        (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x18);
      }
      pCVar2 = g_CDemonSetPtr;
      pCVar2->field22_0x15ac80[0] = '\0';
      pCVar2->field22_0x15ac80[1] = '\0';
      pCVar2->field22_0x15ac80[2] = '\0';
      pCVar2->field22_0x15ac80[3] = '\0';
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_morph_cpp_FUN_0052ccb0();
      core_morph_cpp_FUN_0052ccd0();
      return;
    }
  }
  core_morph_cpp_FUN_0052ccd0();
  return;
}


// Assembly code:
// 0052bcb0: PUSH EBP
//   Label: core_morph.cpp_Select1stModel_Select2ndModel_Loading_FUN_0052bcb0
// 0052bcb1: SUB ESP,0x4db4
// 0052bcb7: PUSH 0x65af20
//   XREF to: 0065af20 (DATA)
// 0052bcbc: PUSH 0x2
// 0052bcbe: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x4db8] (DATA)
// 0052bcc2: PUSH EAX
// 0052bcc3: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0052bcc8: ADD ESP,0xc
// 0052bccb: PUSH 0x0
// 0052bccd: LEA EAX,[ESP + 0x4b94]
//   XREF to: Stack[-0x228] (DATA)
// 0052bcd4: PUSH EAX
// 0052bcd5: PUSH 0x63a498
//   XREF to: 0063a498 (DATA)
// 0052bcda: PUSH 0x63a49e
//   XREF to: 0063a49e (DATA)
// 0052bcdf: PUSH 0x63a4a5
//   XREF to: 0063a4a5 (DATA)
// 0052bce4: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0052bcea: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0052bceb: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 0052bcf0: ADD ESP,0x18
// 0052bcf3: TEST EAX,EAX
// 0052bcf5: JZ 0x0052c0fa
//   XREF to: 0052c0fa (CONDITIONAL_JUMP)
// 0052bcfb: LEA EAX,[ESP + 0x4b90]
//   XREF to: Stack[-0x228] (DATA)
// 0052bd02: PUSH EAX
// 0052bd03: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4db8] (DATA)
// 0052bd07: PUSH EAX
// 0052bd08: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 0052bd0d: ADD ESP,0x8
// 0052bd10: PUSH 0x0
// 0052bd12: LEA EAX,[ESP + 0x4b94]
//   XREF to: Stack[-0x228] (DATA)
// 0052bd19: PUSH EAX
// 0052bd1a: PUSH 0x63a4bb
//   XREF to: 0063a4bb (DATA)
// 0052bd1f: PUSH 0x63a4c1
//   XREF to: 0063a4c1 (DATA)
// 0052bd24: PUSH 0x63a4c8
//   XREF to: 0063a4c8 (DATA)
// 0052bd29: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0052bd2f: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0052bd30: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 0052bd35: ADD ESP,0x18
// 0052bd38: TEST EAX,EAX
// 0052bd3a: JZ 0x0052c0fa
//   XREF to: 0052c0fa (CONDITIONAL_JUMP)
// 0052bd40: PUSH EDI
// 0052bd41: PUSH ESI
// 0052bd42: PUSH EBX
// 0052bd43: LEA EAX,[ESP + 0x4b9c]
//   XREF to: Stack[-0x228] (DATA)
// 0052bd4a: PUSH EAX
// 0052bd4b: LEA EAX,[ESP + 0x22c4]
//   XREF to: Stack[-0x2b04] (DATA)
// 0052bd52: PUSH EAX
// 0052bd53: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 0052bd58: ADD ESP,0x8
// 0052bd5b: PUSH 0x63a4de
//   XREF to: 0063a4de (DATA)
// 0052bd60: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0052bd66: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0052bd67: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0052bd6c: ADD ESP,0x8
// 0052bd6f: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x4db8] (DATA)
// 0052bd73: PUSH EAX
// 0052bd74: CALL core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 0052bd79: ADD ESP,0x4
// 0052bd7c: LEA EAX,[ESP + 0x22c0]
//   XREF to: Stack[-0x2b04] (DATA)
// 0052bd83: PUSH EAX
// 0052bd84: CALL core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 0052bd89: ADD ESP,0x4
// 0052bd8c: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x4db8] (DATA)
// 0052bd90: PUSH EAX
// 0052bd91: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0052bd96: ADD ESP,0x4
// 0052bd99: MOV dword ptr [ESP + 0x4d38],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 0052bda0: LEA EAX,[ESP + 0x22c0]
//   XREF to: Stack[-0x2b04] (DATA)
// 0052bda7: PUSH EAX
// 0052bda8: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0052bdad: ADD ESP,0x4
// 0052bdb0: PUSH 0x661b80
//   XREF to: 00661b80 (DATA)
// 0052bdb5: PUSH 0x14
// 0052bdb7: MOV dword ptr [ESP + 0x4d44],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0052bdbe: LEA EAX,[ESP + 0x4924]
//   XREF to: Stack[-0x4a8] (DATA)
// 0052bdc5: PUSH EAX
// 0052bdc6: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0052bdcb: ADD ESP,0xc
// 0052bdce: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0052bdd3: PUSH 0x1f
// 0052bdd5: MOV ESI,dword ptr [0x0068416c]
//   XREF to: 0068416c (READ)
// 0052bddb: MOV EDX,dword ptr [EAX + 0x15ac80]
//   XREF to: 0326eef8 (READ)
// 0052bde1: PUSH ESI
//   XREF to: 03f6b9e0 (DATA)
// 0052bde2: MOV dword ptr [ESP + 0x4d4c],EDX
//   XREF to: Stack[-0x80] (WRITE)
// 0052bde9: MOV dword ptr [EAX + 0x15ac80],0x1
//   XREF to: 0326eef8 (WRITE)
// 0052bdf3: CALL core_stairs.cpp_FUN_005b9620
//   XREF to: 005b9620 (UNCONDITIONAL_CALL)
// 0052bdf8: ADD ESP,0x8
// 0052bdfb: MOV EDI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 0052be01: PUSH EDI
//   XREF to: 02d81a9c (DATA)
// 0052be02: XOR EBP,EBP
// 0052be04: MOV EBX,0xffffffff
// 0052be09: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 0052be0e: ADD ESP,0x4
// 0052be11: MOV dword ptr [0x02cf6a94],EBP
//   XREF to: 02cf6a94 (WRITE)
// 0052be17: MOV dword ptr [ESP + 0x4d68],EBP
//   XREF to: Stack[-0x5c] (WRITE)
// 0052be1e: MOV dword ptr [ESP + 0x4d4c],EBP
//   XREF to: Stack[-0x78] (WRITE)
// 0052be25: MOV dword ptr [ESP + 0x4d58],EBX
//   XREF to: Stack[-0x6c] (WRITE)
// 0052be2c: MOV dword ptr [ESP + 0x4d54],EBX
//   XREF to: Stack[-0x70] (WRITE)
// 0052be33: MOV dword ptr [ESP + 0x4d50],EBP
//   XREF to: Stack[-0x74] (WRITE)
// 0052be3a: PUSH 0x659900
//   Label: LAB_0052be3a
//   XREF to: 00659900 (DATA)
// 0052be3f: PUSH 0x2
// 0052be41: LEA EAX,[ESP + 0x4ca4]
//   XREF to: Stack[-0x128] (DATA)
// 0052be48: PUSH EAX
// 0052be49: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0052be4e: ADD ESP,0xc
// 0052be51: XOR EAX,EAX
// 0052be53: XOR EDX,EDX
// 0052be55: MOV dword ptr [ESP + 0x4d94],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0052be5c: LEA EAX,[ESP + 0x4c9c]
//   XREF to: Stack[-0x128] (DATA)
// 0052be63: MOV dword ptr [ESP + 0x4d90],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0052be6a: MOV dword ptr [ESP + 0x4d88],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0052be71: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x4db8] (DATA)
// 0052be75: MOV dword ptr [ESP + 0x4d7c],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 0052be7c: MOV dword ptr [ESP + 0x4d9c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0052be83: IMUL EDI,dword ptr [ESP + 0x4d94],0x22b4
//   Label: LAB_0052be83
//   XREF to: Stack[-0x30] (READ)
// 0052be8e: MOV ESI,dword ptr [ESP + 0x4d9c]
//   XREF to: Stack[-0x28] (READ)
// 0052be95: PUSH ESI
// 0052be96: CALL core_skeleton.cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 0052be9b: ADD ESP,0x4
// 0052be9e: PUSH ESI
// 0052be9f: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 0052bea4: ADD ESP,0x4
// 0052bea7: PUSH 0x0
// 0052bea9: PUSH ESI
// 0052beaa: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 0052beaf: ADD ESP,0x8
// 0052beb2: MOV EAX,dword ptr [ESP + 0x4d90]
//   XREF to: Stack[-0x34] (READ)
// 0052beb9: MOV ECX,dword ptr [ESP + EDI*0x1 + 0x2240]
// 0052bec0: MOV EAX,dword ptr [ESP + EAX*0x1 + 0x4d38]
// 0052bec7: PUSH ECX
// 0052bec8: MOV EBX,dword ptr [EAX + 0x2c]
// 0052becb: PUSH EBX
// 0052becc: MOV ESI,dword ptr [ESP + 0x4d90]
//   XREF to: Stack[-0x3c] (READ)
// 0052bed3: PUSH ESI
// 0052bed4: CALL core_box.cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
//   XREF to: 00420e90 (UNCONDITIONAL_CALL)
// 0052bed9: ADD ESP,0xc
// 0052bedc: XOR ECX,ECX
// 0052bede: TEST EBP,EBP
// 0052bee0: JLE 0x0052bf3c
//   XREF to: 0052bf3c (CONDITIONAL_JUMP)
// 0052bee2: MOV EDX,dword ptr [ESP + 0x4d7c]
//   XREF to: Stack[-0x48] (READ)
// 0052bee9: LEA EAX,[ESP + 0x491c]
//   XREF to: Stack[-0x4a8] (DATA)
// 0052bef0: ADD EDX,0x8
// 0052bef3: MOV ESI,dword ptr [ESP + 0x4d90]
//   XREF to: Stack[-0x34] (READ)
// 0052befa: ADD EDX,EAX
// 0052befc: IMUL EBX,dword ptr [ESP + ESI*0x1 + 0x491c],0xc
//   Label: LAB_0052befc
// 0052bf04: MOV EAX,dword ptr [ESP + EDI*0x1 + 0x2240]
// 0052bf0b: ADD ESI,0x20
// 0052bf0e: ADD EAX,EBX
// 0052bf10: MOV EBX,EDX
// 0052bf12: INC ECX
// 0052bf13: FILD dword ptr [EAX]
// 0052bf15: FMUL float ptr [0x00661b48]
//   XREF to: 00661b48 (READ)
// 0052bf1b: FSTP float ptr [EBX]
// 0052bf1d: FILD dword ptr [EAX + 0x4]
// 0052bf20: FMUL float ptr [0x00661b48]
//   XREF to: 00661b48 (READ)
// 0052bf26: FSTP float ptr [EBX + 0x4]
// 0052bf29: FILD dword ptr [EAX + 0x8]
// 0052bf2c: FMUL float ptr [0x00661b48]
//   XREF to: 00661b48 (READ)
// 0052bf32: FSTP float ptr [EBX + 0x8]
// 0052bf35: ADD EDX,0x20
// 0052bf38: CMP ECX,EBP
// 0052bf3a: JL 0x0052befc
//   XREF to: 0052befc (CONDITIONAL_JUMP)
// 0052bf3c: MOV ECX,dword ptr [ESP + 0x4d90]
//   Label: LAB_0052bf3c
//   XREF to: Stack[-0x34] (READ)
// 0052bf43: MOV EBX,dword ptr [ESP + 0x4d9c]
//   XREF to: Stack[-0x28] (READ)
// 0052bf4a: MOV ESI,dword ptr [ESP + 0x4d7c]
//   XREF to: Stack[-0x48] (READ)
// 0052bf51: MOV EDI,dword ptr [ESP + 0x4d94]
//   XREF to: Stack[-0x30] (READ)
// 0052bf58: MOV EDX,dword ptr [ESP + 0x4d88]
//   XREF to: Stack[-0x3c] (READ)
// 0052bf5f: ADD ECX,0x4
// 0052bf62: ADD EBX,0x22b4
// 0052bf68: ADD ESI,0xc
// 0052bf6b: INC EDI
// 0052bf6c: ADD EDX,0x18
// 0052bf6f: MOV dword ptr [ESP + 0x4d90],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 0052bf76: MOV dword ptr [ESP + 0x4d9c],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 0052bf7d: MOV dword ptr [ESP + 0x4d7c],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 0052bf84: MOV dword ptr [ESP + 0x4d94],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 0052bf8b: MOV dword ptr [ESP + 0x4d88],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 0052bf92: CMP EDI,0x2
// 0052bf95: JL 0x0052be83
//   XREF to: 0052be83 (CONDITIONAL_JUMP)
// 0052bf9b: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0052bfa0: PUSH 0x4
// 0052bfa2: DEC EAX
// 0052bfa3: PUSH EAX
// 0052bfa4: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0052bfa9: DEC EAX
// 0052bfaa: PUSH EAX
// 0052bfab: PUSH 0x0
// 0052bfad: PUSH 0x0
// 0052bfaf: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 0052bfb4: ADD ESP,0x14
// 0052bfb7: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 0052bfbc: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0052bfc1: MOV EDX,EAX
// 0052bfc3: SAR EDX,0x1f
// 0052bfc6: SHL EDX,0x2
// 0052bfc9: SBB EAX,EDX
// 0052bfcb: SAR EAX,0x2
// 0052bfce: MOV EDI,0xffffffff
// 0052bfd3: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0052bfd9: MOV dword ptr [ESP + 0x4d70],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0052bfe0: ADD EAX,EAX
// 0052bfe2: XOR ESI,ESI
// 0052bfe4: SUB EDX,EAX
// 0052bfe6: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x4db8] (DATA)
// 0052bfea: MOV dword ptr [ESP + 0x4d6c],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 0052bff1: XOR EDX,EDX
// 0052bff3: MOV dword ptr [ESP + 0x4d84],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0052bffa: MOV dword ptr [ESP + 0x4dbc],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 0052c001: MOV dword ptr [ESP + 0x4d80],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 0052c008: MOV EAX,[0x00679394]
//   Label: LAB_0052c008
//   XREF to: 00679394 (READ)
// 0052c00d: MOV EDX,EAX
// 0052c00f: SAR EDX,0x1f
// 0052c012: SUB EAX,EDX
// 0052c014: SAR EAX,0x1
// 0052c016: MOV EBX,dword ptr [ESP + 0x4d6c]
//   XREF to: Stack[-0x58] (READ)
// 0052c01d: PUSH EBX
// 0052c01e: PUSH EAX
// 0052c01f: IMUL EAX,ESI
// 0052c022: MOV EDX,dword ptr [ESP + 0x4d78]
//   XREF to: Stack[-0x54] (READ)
// 0052c029: PUSH EDX
// 0052c02a: PUSH EAX
// 0052c02b: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052c031: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0052c032: CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   XREF to: 0048c890 (UNCONDITIONAL_CALL)
// 0052c037: ADD ESP,0x14
// 0052c03a: MOV EBX,dword ptr [0x0068416c]
//   XREF to: 03f6b9e0 (PARAM)
//   XREF to: 0068416c (READ)
// 0052c040: PUSH EBX
//   XREF to: 03f6b9e0 (DATA)
// 0052c041: CALL core_stairs.cpp_FUN_005b9a20
//   XREF to: 005b9a20 (UNCONDITIONAL_CALL)
// 0052c046: ADD ESP,0x4
// 0052c049: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0052c04e: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052c053: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0052c054: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0052c059: ADD ESP,0x8
// 0052c05c: PUSH 0x0
// 0052c05e: MOV EDX,dword ptr [ESP + 0x4d88]
//   XREF to: Stack[-0x40] (READ)
// 0052c065: PUSH EDX
// 0052c066: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0250
//   XREF to: 005a0250 (UNCONDITIONAL_CALL)
// 0052c06b: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 0052c070: SUB EAX,0x5
// 0052c073: ADD ESP,0x8
// 0052c076: SHL EAX,0x10
// 0052c079: MOV dword ptr [ESP + 0x4db0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052c080: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 0052c085: ADD EAX,0x5
// 0052c088: SHL EAX,0x10
// 0052c08b: MOV dword ptr [ESP + 0x4da4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0052c092: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 0052c097: SUB EAX,0x5
// 0052c09a: SHL EAX,0x10
// 0052c09d: MOV dword ptr [ESP + 0x4dac],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052c0a4: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 0052c0a9: ADD EAX,0x5
// 0052c0ac: SHL EAX,0x10
// 0052c0af: XOR EBX,EBX
// 0052c0b1: MOV dword ptr [ESP + 0x4db4],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0052c0b8: MOV EAX,dword ptr [ESP + 0x4d80]
//   XREF to: Stack[-0x44] (READ)
// 0052c0bf: XOR EDX,EDX
// 0052c0c1: MOV dword ptr [ESP + 0x4da8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0052c0c8: MOV EAX,dword ptr [ESP + 0x4da8]
//   Label: LAB_0052c0c8
//   XREF to: Stack[-0x1c] (READ)
// 0052c0cf: MOV EAX,dword ptr [ESP + EAX*0x1 + 0x4d38]
// 0052c0d6: CMP EDX,dword ptr [EAX + 0x2c]
// 0052c0d9: JGE 0x0052c110
//   XREF to: 0052c110 (CONDITIONAL_JUMP)
// 0052c0db: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0052c0e0: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0052c0e2: ADD EAX,EBX
// 0052c0e4: MOV ECX,dword ptr [EAX + 0x10]
// 0052c0e7: CMP ECX,dword ptr [ESP + 0x4db0]
//   XREF to: Stack[-0x14] (READ)
// 0052c0ee: JGE 0x0052c54f
//   XREF to: 0052c54f (CONDITIONAL_JUMP)
// 0052c0f4: INC EDX
//   Label: LAB_0052c0f4
// 0052c0f5: ADD EBX,0x30
// 0052c0f8: JMP 0x0052c0c8
//   XREF to: 0052c0c8 (UNCONDITIONAL_JUMP)
// 0052c0fa: PUSH EAX
//   Label: LAB_0052c0fa
// 0052c0fb: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4db8] (DATA)
// 0052c0ff: PUSH EAX
// 0052c100: CALL core_morph.cpp_FUN_0052ccd0
//   XREF to: 0052ccd0 (UNCONDITIONAL_CALL)
// 0052c105: ADD ESP,0x8
// 0052c108: ADD ESP,0x4db4
// 0052c10e: POP EBP
// 0052c10f: RET
// 0052c110: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_0052c110
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052c116: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0052c117: CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)
// 0052c11c: ADD ESP,0x4
// 0052c11f: INC ESI
// 0052c120: MOV EAX,dword ptr [ESP + 0x4d80]
//   XREF to: Stack[-0x44] (READ)
// 0052c127: MOV EDX,dword ptr [ESP + 0x4d84]
//   XREF to: Stack[-0x40] (READ)
// 0052c12e: ADD EAX,0x4
// 0052c131: ADD EDX,0x22b4
// 0052c137: MOV dword ptr [ESP + 0x4d80],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0052c13e: MOV dword ptr [ESP + 0x4d84],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 0052c145: CMP ESI,0x2
// 0052c148: JL 0x0052c008
//   XREF to: 0052c008 (CONDITIONAL_JUMP)
// 0052c14e: MOV dword ptr [ESP + 0x4d74],0xffffffff
//   XREF to: Stack[-0x50] (WRITE)
// 0052c159: TEST EDI,EDI
// 0052c15b: JL 0x0052c1c9
//   XREF to: 0052c1c9 (CONDITIONAL_JUMP)
// 0052c15d: MOV EAX,0x1
// 0052c162: MOV EBX,dword ptr [ESP + 0x4dbc]
//   XREF to: Stack[-0x8] (READ)
// 0052c169: MOV EDX,dword ptr [ESP + 0x4dbc]
//   XREF to: Stack[-0x8] (READ)
// 0052c170: SUB EAX,EBX
// 0052c172: SHL EDX,0x2
// 0052c175: MOV dword ptr [ESP + 0x4d48],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0052c17c: TEST EBP,EBP
// 0052c17e: JLE 0x0052c1bb
//   XREF to: 0052c1bb (CONDITIONAL_JUMP)
// 0052c180: SHL EAX,0x2
// 0052c183: MOV EBX,EBP
// 0052c185: MOV dword ptr [ESP + 0x4d5c],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 0052c18c: SHL EBX,0x5
// 0052c18f: XOR EAX,EAX
// 0052c191: CMP EDI,dword ptr [ESP + EDX*0x1 + 0x491c]
//   Label: LAB_0052c191
// 0052c198: JNZ 0x0052c1b1
//   XREF to: 0052c1b1 (CONDITIONAL_JUMP)
// 0052c19a: MOV ECX,dword ptr [ESP + 0x4d5c]
//   XREF to: Stack[-0x68] (READ)
// 0052c1a1: ADD ECX,EAX
// 0052c1a3: MOV ECX,dword ptr [ESP + ECX*0x1 + 0x491c]
// 0052c1aa: MOV dword ptr [ESP + 0x4d74],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 0052c1b1: ADD EAX,0x20
//   Label: LAB_0052c1b1
// 0052c1b4: ADD EDX,0x20
// 0052c1b7: CMP EAX,EBX
// 0052c1b9: JL 0x0052c191
//   XREF to: 0052c191 (CONDITIONAL_JUMP)
// 0052c1bb: CMP dword ptr [ESP + 0x4d74],0x0
//   Label: LAB_0052c1bb
//   XREF to: Stack[-0x50] (READ)
// 0052c1c3: JL 0x0052c58d
//   XREF to: 0052c58d (CONDITIONAL_JUMP)
// 0052c1c9: XOR EAX,EAX
//   Label: LAB_0052c1c9
// 0052c1cb: MOV dword ptr [ESP + 0x4db8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0052c1d2: IMUL EAX,EDI,0x30
// 0052c1d5: MOV EDX,dword ptr [ESP + 0x4d74]
//   XREF to: Stack[-0x50] (READ)
// 0052c1dc: MOV dword ptr [ESP + 0x4d60],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0052c1e3: IMUL EAX,EDX,0x30
// 0052c1e6: XOR ECX,ECX
// 0052c1e8: MOV ESI,0xffffffff
// 0052c1ed: MOV dword ptr [ESP + 0x4d8c],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 0052c1f4: MOV dword ptr [ESP + 0x4d64],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0052c1fb: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x4db8] (DATA)
// 0052c1ff: MOV dword ptr [ESP + 0x4da0],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0052c206: MOV dword ptr [ESP + 0x4d98],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0052c20d: MOV EAX,[0x00679394]
//   Label: LAB_0052c20d
//   XREF to: 00679394 (READ)
// 0052c212: MOV EDX,EAX
// 0052c214: SAR EDX,0x1f
// 0052c217: SUB EAX,EDX
// 0052c219: SAR EAX,0x1
// 0052c21b: MOV EBX,dword ptr [ESP + 0x4d6c]
//   XREF to: Stack[-0x58] (READ)
// 0052c222: PUSH EBX
// 0052c223: MOV EDX,dword ptr [ESP + 0x4dbc]
//   XREF to: Stack[-0xc] (READ)
// 0052c22a: PUSH EAX
// 0052c22b: IMUL EAX,EDX
// 0052c22e: MOV ESI,dword ptr [ESP + 0x4d78]
//   XREF to: Stack[-0x54] (READ)
// 0052c235: PUSH ESI
// 0052c236: PUSH EAX
// 0052c237: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052c23d: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0052c23e: CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   XREF to: 0048c890 (UNCONDITIONAL_CALL)
// 0052c243: ADD ESP,0x14
// 0052c246: MOV EBX,dword ptr [0x0068416c]
//   XREF to: 03f6b9e0 (PARAM)
//   XREF to: 0068416c (READ)
// 0052c24c: PUSH EBX
//   XREF to: 03f6b9e0 (DATA)
// 0052c24d: CALL core_stairs.cpp_FUN_005b9a20
//   XREF to: 005b9a20 (UNCONDITIONAL_CALL)
// 0052c252: ADD ESP,0x4
// 0052c255: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0052c25a: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0052c260: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0052c261: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0052c266: ADD ESP,0x8
// 0052c269: PUSH 0x0
// 0052c26b: MOV EAX,dword ptr [ESP + 0x4d9c]
//   XREF to: Stack[-0x2c] (READ)
// 0052c272: PUSH EAX
// 0052c273: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0250
//   XREF to: 005a0250 (UNCONDITIONAL_CALL)
// 0052c278: ADD ESP,0x8
// 0052c27b: MOV EDX,dword ptr [ESP + 0x4d68]
//   XREF to: Stack[-0x5c] (READ)
// 0052c282: TEST EDX,EDX
// 0052c284: JZ 0x0052c8a0
//   XREF to: 0052c8a0 (CONDITIONAL_JUMP)
// 0052c28a: MOV EBX,dword ptr [ESP + 0x4d98]
//   XREF to: Stack[-0x2c] (READ)
// 0052c291: PUSH EBX
// 0052c292: CALL core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0
//   XREF to: 005a03b0 (UNCONDITIONAL_CALL)
// 0052c297: ADD ESP,0x4
// 0052c29a: MOV ESI,0xff
//   Label: LAB_0052c29a
// 0052c29f: XOR EBX,EBX
// 0052c2a1: MOV dword ptr [0x02d02570],ESI
//   XREF to: 02d02570 (WRITE)
// 0052c2a7: TEST EBP,EBP
// 0052c2a9: JLE 0x0052c2f6
//   XREF to: 0052c2f6 (CONDITIONAL_JUMP)
// 0052c2ab: MOV ESI,dword ptr [ESP + 0x4d8c]
//   XREF to: Stack[-0x38] (READ)
// 0052c2b2: MOV EDX,dword ptr [ESP + 0x4dbc]
//   Label: LAB_0052c2b2
//   XREF to: Stack[-0x8] (READ)
// 0052c2b9: MOV ECX,dword ptr [ESP + 0x4db8]
//   XREF to: Stack[-0xc] (READ)
// 0052c2c0: MOV EAX,dword ptr [ESP + ESI*0x1 + 0x491c]
// 0052c2c7: CMP EDX,ECX
// 0052c2c9: JNZ 0x0052c2d6
//   XREF to: 0052c2d6 (CONDITIONAL_JUMP)
// 0052c2cb: CMP EDI,EAX
// 0052c2cd: JNZ 0x0052c2d6
//   XREF to: 0052c2d6 (CONDITIONAL_JUMP)
// 0052c2cf: MOV dword ptr [ESP + 0x4da0],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0052c2d6: IMUL EAX,EAX,0x30
//   Label: LAB_0052c2d6
// 0052c2d9: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0052c2df: MOV EDX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0052c2e1: PUSH 0x5
// 0052c2e3: ADD EAX,EDX
// 0052c2e5: PUSH EAX
// 0052c2e6: ADD ESI,0x20
// 0052c2e9: INC EBX
// 0052c2ea: CALL core_morph.cpp_FUN_0052bb80
//   XREF to: 0052bb80 (UNCONDITIONAL_CALL)
// 0052c2ef: ADD ESP,0x8
// 0052c2f2: CMP EBX,EBP
// 0052c2f4: JL 0x0052c2b2
//   XREF to: 0052c2b2 (CONDITIONAL_JUMP)
// 0052c2f6: TEST EDI,EDI
//   Label: LAB_0052c2f6
// 0052c2f8: JL 0x0052c33d
//   XREF to: 0052c33d (CONDITIONAL_JUMP)
// 0052c2fa: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0052c300: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0052c301: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 0052c306: ADD ESP,0x4
// 0052c309: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 0052c30e: MOV EAX,dword ptr [ESP + 0x4dbc]
//   XREF to: Stack[-0x8] (READ)
// 0052c315: CMP EAX,dword ptr [ESP + 0x4db8]
//   XREF to: Stack[-0xc] (READ)
// 0052c31c: JNZ 0x0052c8b8
//   XREF to: 0052c8b8 (CONDITIONAL_JUMP)
// 0052c322: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0052c327: MOV ECX,dword ptr [ESP + 0x4d60]
//   XREF to: Stack[-0x64] (READ)
// 0052c32e: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0052c330: PUSH 0x5
// 0052c332: ADD EAX,ECX
// 0052c334: PUSH EAX
//   Label: LAB_0052c334
// 0052c335: CALL core_morph.cpp_FUN_0052bb80
//   XREF to: 0052bb80 (UNCONDITIONAL_CALL)
// 0052c33a: ADD ESP,0x8
// 0052c33d: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_0052c33d
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052c343: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0052c344: CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)
// 0052c349: ADD ESP,0x4
// 0052c34c: MOV ESI,dword ptr [ESP + 0x4d98]
//   XREF to: Stack[-0x2c] (READ)
// 0052c353: MOV EAX,dword ptr [ESP + 0x4d8c]
//   XREF to: Stack[-0x38] (READ)
// 0052c35a: MOV EDX,dword ptr [ESP + 0x4db8]
//   XREF to: Stack[-0xc] (READ)
// 0052c361: ADD ESI,0x22b4
// 0052c367: ADD EAX,0x4
// 0052c36a: INC EDX
// 0052c36b: MOV dword ptr [ESP + 0x4d98],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 0052c372: MOV dword ptr [ESP + 0x4d8c],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0052c379: MOV dword ptr [ESP + 0x4db8],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 0052c380: CMP EDX,0x2
// 0052c383: JL 0x0052c20d
//   XREF to: 0052c20d (CONDITIONAL_JUMP)
// 0052c389: MOV EBX,dword ptr [0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 0052c38f: CMP EBX,0x1
// 0052c392: JNZ 0x0052c99d
//   XREF to: 0052c99d (CONDITIONAL_JUMP)
// 0052c398: MOV EDX,dword ptr [ESP + 0x4d4c]
//   XREF to: Stack[-0x78] (READ)
// 0052c39f: CMP EDX,EBX
// 0052c3a1: JNZ 0x0052c8f1
//   XREF to: 0052c8f1 (CONDITIONAL_JUMP)
// 0052c3a7: CMP dword ptr [ESP + 0x4d58],0x0
//   XREF to: Stack[-0x6c] (READ)
// 0052c3af: JL 0x0052c3cf
//   XREF to: 0052c3cf (CONDITIONAL_JUMP)
// 0052c3b1: MOV EAX,dword ptr [ESP + 0x4d54]
//   XREF to: Stack[-0x70] (READ)
// 0052c3b8: CMP EAX,dword ptr [ESP + 0x4dbc]
//   XREF to: Stack[-0x8] (READ)
// 0052c3bf: JNZ 0x0052c3cf
//   XREF to: 0052c3cf (CONDITIONAL_JUMP)
// 0052c3c1: CMP dword ptr [ESP + 0x4da0],0x0
//   XREF to: Stack[-0x24] (READ)
// 0052c3c9: JL 0x0052c8cf
//   XREF to: 0052c8cf (CONDITIONAL_JUMP)
// 0052c3cf: TEST EDI,EDI
//   Label: LAB_0052c3cf
// 0052c3d1: JL 0x0052c9b5
//   XREF to: 0052c9b5 (CONDITIONAL_JUMP)
// 0052c3d7: MOV EAX,[0x02cf6a94]
//   Label: LAB_0052c3d7
//   XREF to: 02cf6a94 (READ)
// 0052c3dc: MOV dword ptr [ESP + 0x4d4c],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 0052c3e3: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0052c3e8: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 0052c3ee: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 0052c3ef: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 0052c3f4: ADD ESP,0x4
// 0052c3f7: PUSH 0x1f
// 0052c3f9: MOV EDI,dword ptr [0x0068416c]
//   XREF to: 0068416c (READ)
// 0052c3ff: PUSH EDI
//   XREF to: 03f6b9e0 (DATA)
// 0052c400: CALL core_stairs.cpp_FUN_005b9670
//   XREF to: 005b9670 (UNCONDITIONAL_CALL)
// 0052c405: ADD ESP,0x8
// 0052c408: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0052c40d: PUSH 0x1
// 0052c40f: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0052c411: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0052c412: CALL dword ptr [EDX + 0x4]
// 0052c415: ADD ESP,0x8
// 0052c418: TEST EAX,EAX
// 0052c41a: JNZ 0x0052ca4b
//   XREF to: 0052ca4b (CONDITIONAL_JUMP)
// 0052c420: PUSH 0x14
// 0052c422: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0052c427: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0052c428: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0052c42a: CALL dword ptr [EDX + 0x4]
// 0052c42d: ADD ESP,0x8
// 0052c430: TEST EAX,EAX
// 0052c432: JZ 0x0052c4d1
//   XREF to: 0052c4d1 (CONDITIONAL_JUMP)
// 0052c438: LEA EAX,[ESP + 0xc]
// 0052c43c: PUSH EAX
// 0052c43d: CALL core_skeleton.cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 0052c442: ADD ESP,0x4
// 0052c445: LEA EAX,[ESP + 0x22c0]
// 0052c44c: PUSH EAX
// 0052c44d: CALL core_skeleton.cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 0052c452: ADD ESP,0x4
// 0052c455: LEA EAX,[ESP + 0xc]
// 0052c459: PUSH EAX
// 0052c45a: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 0052c45f: ADD ESP,0x4
// 0052c462: LEA EAX,[ESP + 0x22c0]
// 0052c469: PUSH EAX
// 0052c46a: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 0052c46f: ADD ESP,0x4
// 0052c472: LEA EAX,[ESP + 0xc]
// 0052c476: PUSH EAX
// 0052c477: PUSH 0x0
// 0052c479: MOV EAX,dword ptr [ESP + 0x4dd0]
// 0052c480: PUSH EAX
// 0052c481: CALL core_morph.cpp_CallToFreeSomething1_FUN_0052b430
//   XREF to: 0052b430 (UNCONDITIONAL_CALL)
// 0052c486: ADD ESP,0xc
// 0052c489: LEA EAX,[ESP + 0x22c0]
// 0052c490: PUSH EAX
// 0052c491: PUSH 0x1
// 0052c493: MOV EDX,dword ptr [ESP + 0x4dd0]
// 0052c49a: PUSH EDX
// 0052c49b: CALL core_morph.cpp_CallToFreeSomething1_FUN_0052b430
//   XREF to: 0052b430 (UNCONDITIONAL_CALL)
// 0052c4a0: ADD ESP,0xc
// 0052c4a3: MOV ECX,dword ptr [ESP + 0x4dc8]
// 0052c4aa: PUSH ECX
// 0052c4ab: CALL core_morph.cpp_CMorph_getReady_FUN_0052b680
//   XREF to: 0052b680 (UNCONDITIONAL_CALL)
// 0052c4b0: ADD ESP,0x4
// 0052c4b3: LEA EAX,[ESP + 0xc]
// 0052c4b7: PUSH EAX
// 0052c4b8: MOV EBX,dword ptr [ESP + 0x4dcc]
// 0052c4bf: PUSH EBX
// 0052c4c0: CALL core_morph.cpp_FUN_0052ca90
//   XREF to: 0052ca90 (UNCONDITIONAL_CALL)
// 0052c4c5: ADD ESP,0x8
// 0052c4c8: PUSH EBX
// 0052c4c9: CALL core_morph.cpp_CMorphModel_CallToFreeSomething1_FUN_0052b350
//   XREF to: 0052b350 (UNCONDITIONAL_CALL)
// 0052c4ce: ADD ESP,0x4
// 0052c4d1: PUSH 0x32
//   Label: LAB_0052c4d1
// 0052c4d3: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0052c4d8: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0052c4d9: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0052c4db: CALL dword ptr [EDX + 0x4]
// 0052c4de: ADD ESP,0x8
// 0052c4e1: TEST EAX,EAX
// 0052c4e3: JZ 0x0052ca17
//   XREF to: 0052ca17 (CONDITIONAL_JUMP)
// 0052c4e9: LEA EAX,[ESP + 0x4574]
// 0052c4f0: PUSH EAX
// 0052c4f1: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0052c4f6: ADD ESP,0x4
// 0052c4f9: IMUL EDI,dword ptr [ESP + 0x4dbc],0x22b4
// 0052c504: XOR ESI,ESI
// 0052c506: LEA EAX,[ESP + 0xc]
// 0052c50a: XOR EBX,EBX
// 0052c50c: ADD EDI,EAX
// 0052c50e: PUSH EDI
//   Label: LAB_0052c50e
// 0052c50f: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 0052c514: MOV EDX,dword ptr [EAX + 0x964]
// 0052c51a: ADD ESP,0x4
// 0052c51d: CMP ESI,EDX
// 0052c51f: JGE 0x0052c9cb
//   XREF to: 0052c9cb (CONDITIONAL_JUMP)
// 0052c525: PUSH EDI
// 0052c526: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 0052c52b: ADD EAX,0x968
// 0052c530: ADD ESP,0x4
// 0052c533: ADD EAX,EBX
// 0052c535: PUSH EAX
// 0052c536: LEA EAX,[ESP + 0x4578]
// 0052c53d: PUSH EAX
// 0052c53e: INC ESI
// 0052c53f: ADD EBX,0x54c
// 0052c545: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0052c54a: ADD ESP,0x8
// 0052c54d: JMP 0x0052c50e
//   XREF to: 0052c50e (UNCONDITIONAL_JUMP)
// 0052c54f: CMP ECX,dword ptr [ESP + 0x4da4]
//   Label: LAB_0052c54f
//   XREF to: Stack[-0x20] (READ)
// 0052c556: JG 0x0052c0f4
//   XREF to: 0052c0f4 (CONDITIONAL_JUMP)
// 0052c55c: MOV ECX,dword ptr [EAX + 0x14]
// 0052c55f: CMP ECX,dword ptr [ESP + 0x4dac]
//   XREF to: Stack[-0x18] (READ)
// 0052c566: JL 0x0052c0f4
//   XREF to: 0052c0f4 (CONDITIONAL_JUMP)
// 0052c56c: MOV EAX,ECX
// 0052c56e: CMP EAX,dword ptr [ESP + 0x4db4]
//   XREF to: Stack[-0x10] (READ)
// 0052c575: JG 0x0052c0f4
//   XREF to: 0052c0f4 (CONDITIONAL_JUMP)
// 0052c57b: MOV EDI,EDX
// 0052c57d: MOV dword ptr [ESP + 0x4dbc],ESI
//   XREF to: Stack[-0x8] (WRITE)
// 0052c584: INC EDX
// 0052c585: ADD EBX,0x30
// 0052c588: JMP 0x0052c0c8
//   XREF to: 0052c0c8 (UNCONDITIONAL_JUMP)
// 0052c58d: MOV ESI,dword ptr [ESP + 0x4dbc]
//   Label: LAB_0052c58d
//   XREF to: Stack[-0x8] (READ)
// 0052c594: IMUL EAX,ESI,0x22b4
// 0052c59a: IMUL EDX,EDI,0xc
// 0052c59d: MOV EAX,dword ptr [ESP + EAX*0x1 + 0x2240]
// 0052c5a4: ADD EAX,EDX
// 0052c5a6: IMUL EDX,ESI,0x18
// 0052c5a9: LEA EBX,[ESP + 0x4cf0]
//   XREF to: Stack[-0xd4] (DATA)
// 0052c5b0: FILD dword ptr [EAX]
// 0052c5b2: FMUL float ptr [0x00661b48]
//   XREF to: 00661b48 (READ)
// 0052c5b8: FSTP float ptr [EBX]
//   XREF to: Stack[-0xd4] (DATA)
// 0052c5ba: FILD dword ptr [EAX + 0x4]
// 0052c5bd: FMUL float ptr [0x00661b48]
//   XREF to: 00661b48 (READ)
// 0052c5c3: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0xd0] (WRITE)
// 0052c5c6: FILD dword ptr [EAX + 0x8]
// 0052c5c9: FMUL float ptr [0x00661b48]
//   XREF to: 00661b48 (READ)
// 0052c5cf: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0xcc] (WRITE)
// 0052c5d2: LEA EAX,[ESP + 0x4c9c]
//   XREF to: Stack[-0x128] (DATA)
// 0052c5d9: MOV ECX,dword ptr [ESP + 0x4d48]
//   XREF to: Stack[-0x7c] (READ)
// 0052c5e0: ADD EDX,EAX
// 0052c5e2: IMUL EAX,ECX,0x18
// 0052c5e5: FLD float ptr [ESP + 0x4cf4]
//   XREF to: Stack[-0xd0] (READ)
// 0052c5ec: FLD float ptr [ESP + 0x4cf0]
//   XREF to: Stack[-0xd4] (READ)
// 0052c5f3: FSUB float ptr [EDX]
// 0052c5f5: FLD float ptr [ESP + 0x4cf8]
//   XREF to: Stack[-0xcc] (READ)
// 0052c5fc: FXCH
// 0052c5fe: FSTP float ptr [ESP + 0x4cf0]
//   XREF to: Stack[-0xd4] (WRITE)
// 0052c605: FXCH
// 0052c607: FSUB float ptr [EDX + 0x4]
// 0052c60a: LEA ECX,[ESP + 0x4c9c]
//   XREF to: Stack[-0x128] (DATA)
// 0052c611: FSTP float ptr [ESP + 0x4cf4]
//   XREF to: Stack[-0xd0] (WRITE)
// 0052c618: ADD EAX,ECX
// 0052c61a: FSUB float ptr [EDX + 0x8]
// 0052c61d: LEA ECX,[EAX + 0xc]
// 0052c620: FSTP float ptr [ESP + 0x4cf8]
//   XREF to: Stack[-0xcc] (WRITE)
// 0052c627: FLD float ptr [ECX]
// 0052c629: FSUB float ptr [EAX]
// 0052c62b: FSTP float ptr [ESP + 0x4ccc]
//   XREF to: Stack[-0xf8] (WRITE)
// 0052c632: FLD float ptr [ECX + 0x4]
// 0052c635: FSUB float ptr [EAX + 0x4]
// 0052c638: FSTP float ptr [ESP + 0x4cd0]
//   XREF to: Stack[-0xf4] (WRITE)
// 0052c63f: FLD float ptr [ECX + 0x8]
// 0052c642: FSUB float ptr [EAX + 0x8]
// 0052c645: LEA EBX,[EDX + 0xc]
// 0052c648: FSTP float ptr [ESP + 0x4cd4]
//   XREF to: Stack[-0xf0] (WRITE)
// 0052c64f: FLD float ptr [EBX]
// 0052c651: FSUB float ptr [EDX]
// 0052c653: FLD float ptr [ESP + 0x4ccc]
//   XREF to: Stack[-0xf8] (READ)
// 0052c65a: FXCH
// 0052c65c: FSTP float ptr [ESP + 0x4d20]
//   XREF to: Stack[-0xa4] (WRITE)
// 0052c663: FDIV float ptr [ESP + 0x4d20]
//   XREF to: Stack[-0xa4] (READ)
// 0052c66a: FLD float ptr [EBX + 0x4]
// 0052c66d: FSUB float ptr [EDX + 0x4]
// 0052c670: FSTP float ptr [ESP + 0x4d24]
//   XREF to: Stack[-0xa0] (WRITE)
// 0052c677: FLD float ptr [EBX + 0x8]
// 0052c67a: FSUB float ptr [EDX + 0x8]
// 0052c67d: FXCH
// 0052c67f: FMUL float ptr [ESP + 0x4cf0]
//   XREF to: Stack[-0xd4] (READ)
// 0052c686: FXCH
// 0052c688: FSTP float ptr [ESP + 0x4d28]
//   XREF to: Stack[-0x9c] (WRITE)
// 0052c68f: FSTP float ptr [ESP + 0x4cf0]
//   XREF to: Stack[-0xd4] (WRITE)
// 0052c696: FLD float ptr [ECX]
// 0052c698: FSUB float ptr [EAX]
// 0052c69a: FSTP float ptr [ESP + 0x4d08]
//   XREF to: Stack[-0xbc] (WRITE)
// 0052c6a1: FLD float ptr [ECX + 0x4]
// 0052c6a4: FSUB float ptr [EAX + 0x4]
// 0052c6a7: FSTP float ptr [ESP + 0x4d0c]
//   XREF to: Stack[-0xb8] (WRITE)
// 0052c6ae: FLD float ptr [ECX + 0x8]
// 0052c6b1: FSUB float ptr [EAX + 0x8]
// 0052c6b4: FSTP float ptr [ESP + 0x4d10]
//   XREF to: Stack[-0xb4] (WRITE)
// 0052c6bb: FLD float ptr [EBX]
// 0052c6bd: FSUB float ptr [EDX]
// 0052c6bf: FSTP float ptr [ESP + 0x4ce4]
//   XREF to: Stack[-0xe0] (WRITE)
// 0052c6c6: FLD float ptr [EBX + 0x4]
// 0052c6c9: FSUB float ptr [EDX + 0x4]
// 0052c6cc: FLD float ptr [ESP + 0x4d0c]
//   XREF to: Stack[-0xb8] (READ)
// 0052c6d3: FXCH
// 0052c6d5: FSTP float ptr [ESP + 0x4ce8]
//   XREF to: Stack[-0xdc] (WRITE)
// 0052c6dc: FDIV float ptr [ESP + 0x4ce8]
//   XREF to: Stack[-0xdc] (READ)
// 0052c6e3: FLD float ptr [EBX + 0x8]
// 0052c6e6: FSUB float ptr [EDX + 0x8]
// 0052c6e9: FXCH
// 0052c6eb: FMUL float ptr [ESP + 0x4cf4]
//   XREF to: Stack[-0xd0] (READ)
// 0052c6f2: FXCH
// 0052c6f4: FSTP float ptr [ESP + 0x4cec]
//   XREF to: Stack[-0xd8] (WRITE)
// 0052c6fb: FSTP float ptr [ESP + 0x4cf4]
//   XREF to: Stack[-0xd0] (WRITE)
// 0052c702: FLD float ptr [ECX]
// 0052c704: FSUB float ptr [EAX]
// 0052c706: FSTP float ptr [ESP + 0x4cd8]
//   XREF to: Stack[-0xec] (WRITE)
// 0052c70d: FLD float ptr [ECX + 0x4]
// 0052c710: FSUB float ptr [EAX + 0x4]
// 0052c713: FSTP float ptr [ESP + 0x4cdc]
//   XREF to: Stack[-0xe8] (WRITE)
// 0052c71a: FLD float ptr [ECX + 0x8]
// 0052c71d: FSUB float ptr [EAX + 0x8]
// 0052c720: FSTP float ptr [ESP + 0x4ce0]
//   XREF to: Stack[-0xe4] (WRITE)
// 0052c727: FLD float ptr [EBX]
// 0052c729: FSUB float ptr [EDX]
// 0052c72b: FSTP float ptr [ESP + 0x4cfc]
//   XREF to: Stack[-0xc8] (WRITE)
// 0052c732: FLD float ptr [EBX + 0x4]
// 0052c735: FSUB float ptr [EDX + 0x4]
// 0052c738: FSTP float ptr [ESP + 0x4d00]
//   XREF to: Stack[-0xc4] (WRITE)
// 0052c73f: FLD float ptr [EBX + 0x8]
// 0052c742: FSUB float ptr [EDX + 0x8]
// 0052c745: FLD float ptr [ESP + 0x4ce0]
//   XREF to: Stack[-0xe4] (READ)
// 0052c74c: FXCH
// 0052c74e: FSTP float ptr [ESP + 0x4d04]
//   XREF to: Stack[-0xc0] (WRITE)
// 0052c755: FDIV float ptr [ESP + 0x4d04]
//   XREF to: Stack[-0xc0] (READ)
// 0052c75c: FMUL float ptr [ESP + 0x4cf8]
//   XREF to: Stack[-0xcc] (READ)
// 0052c763: MOV ESI,0x1
// 0052c768: FLD float ptr [ESP + 0x4cf0]
//   XREF to: Stack[-0xd4] (READ)
// 0052c76f: FLD float ptr [ESP + 0x4cf4]
//   XREF to: Stack[-0xd0] (READ)
// 0052c776: MOV EBX,0x7149f2ca
// 0052c77b: XOR ECX,ECX
// 0052c77d: MOV dword ptr [ESP + 0x4d40],EBX
//   XREF to: Stack[-0x84] (WRITE)
// 0052c784: FXCH ST2
// 0052c786: FSTP float ptr [ESP + 0x4cf8]
//   XREF to: Stack[-0xcc] (WRITE)
// 0052c78d: FADD float ptr [EAX]
// 0052c78f: XOR EDX,EDX
// 0052c791: FSTP float ptr [ESP + 0x4cf0]
//   XREF to: Stack[-0xd4] (WRITE)
// 0052c798: FADD float ptr [EAX + 0x4]
// 0052c79b: FLD float ptr [ESP + 0x4cf8]
//   XREF to: Stack[-0xcc] (READ)
// 0052c7a2: FXCH
// 0052c7a4: FSTP float ptr [ESP + 0x4cf4]
//   XREF to: Stack[-0xd0] (WRITE)
// 0052c7ab: FADD float ptr [EAX + 0x8]
// 0052c7ae: MOV EAX,dword ptr [ESP + 0x4dbc]
//   XREF to: Stack[-0x8] (READ)
// 0052c7b5: FSTP float ptr [ESP + 0x4cf8]
//   XREF to: Stack[-0xcc] (WRITE)
// 0052c7bc: SUB ESI,EAX
// 0052c7be: MOV EAX,dword ptr [ESP + ESI*0x4 + 0x4d38]
//   Label: LAB_0052c7be
// 0052c7c5: CMP EDX,dword ptr [EAX + 0x2c]
// 0052c7c8: JGE 0x0052c1c9
//   XREF to: 0052c1c9 (CONDITIONAL_JUMP)
// 0052c7ce: IMUL EAX,ESI,0x22b4
// 0052c7d4: MOV EAX,dword ptr [ESP + EAX*0x1 + 0x2240]
// 0052c7db: LEA EBX,[ESP + 0x4d14]
//   XREF to: Stack[-0xb0] (DATA)
// 0052c7e2: ADD EAX,ECX
// 0052c7e4: FILD dword ptr [EAX]
// 0052c7e6: FMUL float ptr [0x00661b48]
//   XREF to: 00661b48 (READ)
// 0052c7ec: FSTP float ptr [EBX]
//   XREF to: Stack[-0xb0] (DATA)
// 0052c7ee: FILD dword ptr [EAX + 0x4]
// 0052c7f1: FMUL float ptr [0x00661b48]
//   XREF to: 00661b48 (READ)
// 0052c7f7: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0xac] (WRITE)
// 0052c7fa: FILD dword ptr [EAX + 0x8]
// 0052c7fd: FMUL float ptr [0x00661b48]
//   XREF to: 00661b48 (READ)
// 0052c803: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0xa8] (WRITE)
// 0052c806: FLD float ptr [ESP + 0x4cf0]
//   XREF to: Stack[-0xd4] (READ)
// 0052c80d: FLD float ptr [ESP + 0x4cf4]
//   XREF to: Stack[-0xd0] (READ)
// 0052c814: FSUB float ptr [ESP + 0x4d18]
//   XREF to: Stack[-0xac] (READ)
// 0052c81b: FXCH
// 0052c81d: FSUB float ptr [ESP + 0x4d14]
//   XREF to: Stack[-0xb0] (READ)
// 0052c824: FXCH
// 0052c826: FST float ptr [ESP + 0x4d30]
//   XREF to: Stack[-0x94] (WRITE)
// 0052c82d: FMUL float ptr [ESP + 0x4d30]
//   XREF to: Stack[-0x94] (READ)
// 0052c834: FXCH
// 0052c836: FST float ptr [ESP + 0x4d2c]
//   XREF to: Stack[-0x98] (WRITE)
// 0052c83d: FMUL float ptr [ESP + 0x4d2c]
//   XREF to: Stack[-0x98] (READ)
// 0052c844: FLD float ptr [ESP + 0x4cf8]
//   XREF to: Stack[-0xcc] (READ)
// 0052c84b: FSUB float ptr [ESP + 0x4d1c]
//   XREF to: Stack[-0xa8] (READ)
// 0052c852: FXCH
// 0052c854: FADDP ST2,ST0
// 0052c856: FST float ptr [ESP + 0x4d34]
//   XREF to: Stack[-0x90] (WRITE)
// 0052c85d: FMUL float ptr [ESP + 0x4d34]
//   XREF to: Stack[-0x90] (READ)
// 0052c864: FADDP
// 0052c866: FST float ptr [ESP + 0x4d78]
//   XREF to: Stack[-0x4c] (WRITE)
// 0052c86d: FCOMP float ptr [ESP + 0x4d40]
//   XREF to: Stack[-0x84] (READ)
// 0052c874: FNSTSW AX
// 0052c876: SAHF
// 0052c877: JC 0x0052c882
//   XREF to: 0052c882 (CONDITIONAL_JUMP)
// 0052c879: INC EDX
// 0052c87a: ADD ECX,0xc
// 0052c87d: JMP 0x0052c7be
//   XREF to: 0052c7be (UNCONDITIONAL_JUMP)
// 0052c882: MOV EAX,dword ptr [ESP + 0x4d78]
//   Label: LAB_0052c882
//   XREF to: Stack[-0x4c] (READ)
// 0052c889: MOV dword ptr [ESP + 0x4d74],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 0052c890: MOV dword ptr [ESP + 0x4d40],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0052c897: INC EDX
// 0052c898: ADD ECX,0xc
// 0052c89b: JMP 0x0052c7be
//   XREF to: 0052c7be (UNCONDITIONAL_JUMP)
// 0052c8a0: PUSH EDX
//   Label: LAB_0052c8a0
// 0052c8a1: PUSH -0x1
// 0052c8a3: MOV ECX,dword ptr [ESP + 0x4da0]
//   XREF to: Stack[-0x2c] (READ)
// 0052c8aa: PUSH ECX
// 0052c8ab: CALL core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340
//   XREF to: 005a0340 (UNCONDITIONAL_CALL)
// 0052c8b0: ADD ESP,0xc
// 0052c8b3: JMP 0x0052c29a
//   XREF to: 0052c29a (UNCONDITIONAL_JUMP)
// 0052c8b8: MOV EAX,[0x006703ec]
//   Label: LAB_0052c8b8
//   XREF to: 006703ec (READ)
// 0052c8bd: MOV EDX,dword ptr [ESP + 0x4d64]
//   XREF to: Stack[-0x60] (READ)
// 0052c8c4: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0052c8c6: PUSH 0x5
// 0052c8c8: ADD EAX,EDX
// 0052c8ca: JMP 0x0052c334
//   XREF to: 0052c334 (UNCONDITIONAL_JUMP)
// 0052c8cf: MOV EAX,dword ptr [ESP + 0x4d54]
//   Label: LAB_0052c8cf
//   XREF to: Stack[-0x70] (READ)
// 0052c8d6: MOV EDX,dword ptr [ESP + 0x4d58]
//   XREF to: Stack[-0x6c] (READ)
// 0052c8dd: SHL EAX,0x2
// 0052c8e0: SHL EDX,0x5
// 0052c8e3: ADD EAX,EDX
// 0052c8e5: MOV dword ptr [ESP + EAX*0x1 + 0x491c],EDI
// 0052c8ec: JMP 0x0052c3cf
//   XREF to: 0052c3cf (UNCONDITIONAL_JUMP)
// 0052c8f1: TEST EDX,EDX
//   Label: LAB_0052c8f1
// 0052c8f3: JNZ 0x0052c3cf
//   XREF to: 0052c3cf (CONDITIONAL_JUMP)
// 0052c8f9: MOV EBX,dword ptr [ESP + 0x4da0]
//   XREF to: Stack[-0x24] (READ)
// 0052c900: TEST EBX,EBX
// 0052c902: JL 0x0052c91e
//   XREF to: 0052c91e (CONDITIONAL_JUMP)
// 0052c904: MOV EAX,dword ptr [ESP + 0x4dbc]
//   XREF to: Stack[-0x8] (READ)
// 0052c90b: MOV dword ptr [ESP + 0x4d58],EBX
//   XREF to: Stack[-0x6c] (WRITE)
// 0052c912: MOV dword ptr [ESP + 0x4d54],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0052c919: JMP 0x0052c3cf
//   XREF to: 0052c3cf (UNCONDITIONAL_JUMP)
// 0052c91e: TEST EDI,EDI
//   Label: LAB_0052c91e
// 0052c920: JL 0x0052c3cf
//   XREF to: 0052c3cf (CONDITIONAL_JUMP)
// 0052c926: CMP EBP,0x14
// 0052c929: JL 0x0052c944
//   XREF to: 0052c944 (CONDITIONAL_JUMP)
// 0052c92b: PUSH 0x63a4e9
//   XREF to: 0063a4e9 (DATA)
// 0052c930: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0052c936: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0052c937: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0052c93c: ADD ESP,0x8
// 0052c93f: JMP 0x0052c3cf
//   XREF to: 0052c3cf (UNCONDITIONAL_JUMP)
// 0052c944: MOV EAX,dword ptr [ESP + 0x4dbc]
//   Label: LAB_0052c944
//   XREF to: Stack[-0x8] (READ)
// 0052c94b: MOV ESI,dword ptr [ESP + 0x4d50]
//   XREF to: Stack[-0x74] (READ)
// 0052c952: MOV dword ptr [ESP + 0x4d54],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0052c959: SHL EAX,0x2
// 0052c95c: ADD EAX,ESI
// 0052c95e: MOV EDX,dword ptr [ESP + 0x4dbc]
//   XREF to: Stack[-0x8] (READ)
// 0052c965: MOV dword ptr [ESP + EAX*0x1 + 0x491c],EDI
// 0052c96c: MOV EAX,0x1
// 0052c971: SUB EAX,EDX
// 0052c973: MOV dword ptr [ESP + 0x4d58],EBP
//   XREF to: Stack[-0x6c] (WRITE)
// 0052c97a: SHL EAX,0x2
// 0052c97d: INC EBP
// 0052c97e: ADD EAX,ESI
// 0052c980: MOV EDX,dword ptr [ESP + 0x4d74]
//   XREF to: Stack[-0x50] (READ)
// 0052c987: LEA EBX,[ESI + 0x20]
// 0052c98a: MOV dword ptr [ESP + EAX*0x1 + 0x491c],EDX
// 0052c991: MOV dword ptr [ESP + 0x4d50],EBX
//   XREF to: Stack[-0x74] (WRITE)
// 0052c998: JMP 0x0052c3cf
//   XREF to: 0052c3cf (UNCONDITIONAL_JUMP)
// 0052c99d: MOV ESI,0xffffffff
//   Label: LAB_0052c99d
// 0052c9a2: MOV dword ptr [ESP + 0x4d58],ESI
//   XREF to: Stack[-0x6c] (WRITE)
// 0052c9a9: MOV dword ptr [ESP + 0x4d54],ESI
//   XREF to: Stack[-0x70] (WRITE)
// 0052c9b0: JMP 0x0052c3cf
//   XREF to: 0052c3cf (UNCONDITIONAL_JUMP)
// 0052c9b5: PUSH 0x0
//   Label: LAB_0052c9b5
// 0052c9b7: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0052c9bd: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0052c9be: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   XREF to: 004a1380 (UNCONDITIONAL_CALL)
// 0052c9c3: ADD ESP,0x8
// 0052c9c6: JMP 0x0052c3d7
//   XREF to: 0052c3d7 (UNCONDITIONAL_JUMP)
// 0052c9cb: PUSH 0x0
//   Label: LAB_0052c9cb
// 0052c9cd: PUSH -0x1
// 0052c9cf: PUSH 0x63a529
//   XREF to: 0063a529 (DATA)
// 0052c9d4: LEA EAX,[ESP + 0x4580]
// 0052c9db: PUSH EAX
// 0052c9dc: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0052c9e1: ADD ESP,0x10
// 0052c9e4: TEST EAX,EAX
// 0052c9e6: JL 0x0052ca05
//   XREF to: 0052ca05 (CONDITIONAL_JUMP)
// 0052c9e8: PUSH 0x0
// 0052c9ea: PUSH EAX
// 0052c9eb: LEA EAX,[ESP + 0x457c]
// 0052c9f2: PUSH EAX
// 0052c9f3: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0052c9f8: ADD ESP,0x8
// 0052c9fb: PUSH EAX
// 0052c9fc: PUSH EDI
// 0052c9fd: CALL core_motion.cpp_CMotionController_FUN_0052ddb0
//   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)
// 0052ca02: ADD ESP,0xc
// 0052ca05: PUSH 0x0
//   Label: LAB_0052ca05
// 0052ca07: LEA EAX,[ESP + 0x4578]
// 0052ca0e: PUSH EAX
// 0052ca0f: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0052ca14: ADD ESP,0x8
// 0052ca17: PUSH 0x18
//   Label: LAB_0052ca17
// 0052ca19: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0052ca1e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0052ca1f: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0052ca21: CALL dword ptr [EDX + 0x4]
// 0052ca24: ADD ESP,0x8
// 0052ca27: TEST EAX,EAX
// 0052ca29: JZ 0x0052be3a
//   XREF to: 0052be3a (CONDITIONAL_JUMP)
// 0052ca2f: CMP dword ptr [ESP + 0x4d68],0x0
// 0052ca37: SETZ AL
// 0052ca3a: AND EAX,0xff
// 0052ca3f: MOV dword ptr [ESP + 0x4d68],EAX
// 0052ca46: JMP 0x0052be3a
//   XREF to: 0052be3a (UNCONDITIONAL_JUMP)
// 0052ca4b: MOV EAX,[0x006810c8]
//   Label: LAB_0052ca4b
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0052ca50: MOV EDX,dword ptr [ESP + 0x4d44]
// 0052ca57: MOV dword ptr [EAX + 0x15ac80],EDX
//   XREF to: 0326eef8 (WRITE)
// 0052ca5d: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0052ca62: PUSH 0x0
// 0052ca64: LEA EAX,[ESP + 0x4920]
// 0052ca6b: PUSH EAX
// 0052ca6c: CALL core_morph.cpp_FUN_0052ccb0
//   XREF to: 0052ccb0 (UNCONDITIONAL_CALL)
// 0052ca71: ADD ESP,0x8
// 0052ca74: PUSH 0x0
// 0052ca76: LEA EAX,[ESP + 0x10]
// 0052ca7a: PUSH EAX
// 0052ca7b: CALL core_morph.cpp_FUN_0052ccd0
//   XREF to: 0052ccd0 (UNCONDITIONAL_CALL)
// 0052ca80: ADD ESP,0x8
// 0052ca83: POP EBX
// 0052ca84: POP ESI
// 0052ca85: POP EDI
// 0052ca86: ADD ESP,0x4db4
// 0052ca8c: POP EBP
// 0052ca8d: RET
