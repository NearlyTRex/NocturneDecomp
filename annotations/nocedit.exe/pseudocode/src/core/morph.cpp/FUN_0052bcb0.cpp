// Name: core_morph.cpp_FUN_0052bcb0
// Address: 0052bcb0
// Address Range: [[0052bcb0, 0052ca8d]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_FUN_0052bcb0(void)

#include "nocturne.h"

void __cdecl core_morph_cpp_FUN_0052bcb0(void)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CSpotView *this_ptr;
  char *pcVar4;
  uchar uVar5;
  int iVar6;
  int *piVar7;
  undefined3 extraout_var;
  CMotionList *pCVar8;
  CBoundingBox3D *pCVar9;
  int iVar10;
  float *pfVar11;
  char *pcVar12;
  CBoundingBox3D *pCVar13;
  CGame *unaff_EBX;
  int iVar14;
  int iVar15;
  char *pcVar16;
  CMotionController *this_ptr_00;
  int in_stack_00000010;
  CMorphModel *in_stack_00000014;
  CDeformableModelInstance *pCVar17;
  uint in_stack_ffffb254;
  CMotionList *in_stack_ffffb258;
  float in_stack_ffffb25c;
  uint in_stack_ffffb260;
  float in_stack_ffffb264;
  int aiStack_2b84 [32];
  byte local_2b04 [8908];
  byte auStack_838 [920];
  SMorphControlPoint *apSStack_4a0 [158];
  char local_228 [256];
  CBoundingBox3D local_128 [2];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  CDeformableModel *local_8c [2];
  float local_84;
  int local_80;
  int local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
  int local_48;
  int local_44;
  CDeformableModelInstance *local_40;
  CBoundingBox3D *local_3c;
  int local_38;
  int local_34;
  int local_30;
  CDeformableModelInstance *local_2c;
  CDeformableModelInstance *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  __arrinit(&stack0xffffb248,2,&g_CDeformableModelInstanceTypeInfo);
  iVar6 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select 1st model file","models",
                     "*.dfm",(int)local_228);
  if (iVar6 != 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              ((CDeformableModelInstance *)&stack0xffffb248,local_228);
    iVar6 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select 2nd model file","models",
                       "*.dfm",(int)local_228);
    if (iVar6 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                ((CDeformableModelInstance *)local_2b04,local_228);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Loading...");
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
                ((CDeformableModelInstance *)&stack0xffffb248);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
                ((CDeformableModelInstance *)local_2b04);
      local_8c[0] = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                              ((CDeformableModelInstance *)&stack0xffffb248);
      local_8c[1] = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                              ((CDeformableModelInstance *)local_2b04);
      __arrinit(auStack_838 + 0x390,0x14,&g_SMorphControlPointTypeInfo);
      this_ptr = g_CSpotViewPtr;
      local_80 = g_CDemonSetPtr->lighting_quality_mode;
      g_CDemonSetPtr->lighting_quality_mode = 1;
      shape_spotview_cpp_CSpotView_FUN_005b9620(this_ptr);
      iVar6 = 0;
      core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,unaff_EBX);
      g_MouseButtonFlags = 0;
      local_5c = 0;
      local_78 = 0;
      local_6c = -1;
      local_70 = -1;
      local_74 = 0;
      while( true ) {
        __arrinit(local_128,2,&g_CBoundingBox3DTypeInfo);
        local_30 = 0;
        local_3c = local_128;
        local_34 = 0;
        local_28 = (CDeformableModelInstance *)&stack0xffffb248;
        local_48 = 0;
        do {
          pCVar17 = local_28;
          iVar15 = local_30;
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(local_28);
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(pCVar17);
          core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(pCVar17,0);
          core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
                    (local_3c,*(int *)(*(int *)((int)local_8c + local_34) + 0x2c),
                     (CVector3i *)aiStack_2b84[iVar15 * 0x8ad]);
          iVar10 = 0;
          if (0 < iVar6) {
            pfVar11 = (float *)((int)apSStack_4a0 + local_48);
            iVar14 = local_34;
            do {
              iVar3 = iVar14 + 0x390;
              iVar14 = iVar14 + 0x20;
              piVar7 = (int *)(aiStack_2b84[iVar15 * 0x8ad] + *(int *)(auStack_838 + iVar3) * 0xc);
              iVar10 = iVar10 + 1;
              *pfVar11 = (float)*piVar7 * 0.00390625f;
              pfVar11[1] = (float)piVar7[1] * 0.00390625f;
              pfVar11[2] = (float)piVar7[2] * 0.00390625f;
              pfVar11 = pfVar11 + 8;
            } while (iVar10 < iVar6);
          }
          local_34 = local_34 + 4;
          local_28 = local_28 + 1;
          local_48 = local_48 + 0xc;
          local_30 = local_30 + 1;
          local_3c = local_3c + 1;
        } while (local_30 < 2);
        engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,4);
        wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
        local_54 = (int)((g_WindowHeight + (g_WindowHeight >> 0x1f) * -4) -
                        (uint)((g_WindowHeight >> 0x1f) << 1 < 0)) >> 2;
        pcVar16 = (char *)0xffffffff;
        iVar15 = 0;
        local_58 = g_WindowHeight + local_54 * -2;
        local_40 = (CDeformableModelInstance *)&stack0xffffb248;
        local_8 = 0;
        local_44 = 0;
        do {
          engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                    (g_CDemonRendererPtr2,(g_WindowWidth / 2) * iVar15,local_54,g_WindowWidth / 2,
                     local_58);
          shape_spotview_cpp_CSpotView_FUN_005b9a20(g_CSpotViewPtr);
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr2,&g_ZeroVector);
          core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(local_40,0);
          local_14 = (g_MouseX + -5) * 0x10000;
          local_20 = (g_MouseX + 5) * 0x10000;
          local_18 = (g_MouseY + -5) * 0x10000;
          local_10 = (g_MouseY + 5) * 0x10000;
          iVar10 = 0;
          local_1c = local_44;
          pcVar4 = (char *)0x0;
          while (pcVar12 = pcVar4,
                (int)pcVar12 < *(int *)(*(int *)((int)local_8c + local_44) + 0x2c)) {
            iVar14 = *(int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                                    screen_x + iVar10);
            if ((((iVar14 < local_14) || (local_20 < iVar14)) ||
                (iVar14 = *(int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex)
                                         .screen_y + iVar10), iVar14 < local_18)) ||
               (local_10 < iVar14)) {
              iVar10 = iVar10 + 0x30;
              pcVar4 = pcVar12 + 1;
            }
            else {
              local_8 = iVar15;
              iVar10 = iVar10 + 0x30;
              pcVar4 = pcVar12 + 1;
              pcVar16 = pcVar12;
            }
          }
          engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr2);
          iVar15 = iVar15 + 1;
          local_44 = local_44 + 4;
          local_40 = local_40 + 1;
        } while (iVar15 < 2);
        local_50 = -1;
        if (-1 < (int)pcVar16) {
          local_7c = 1 - local_8;
          iVar15 = local_8 << 2;
          if (0 < iVar6) {
            local_68 = local_7c * 4;
            iVar10 = 0;
            do {
              if ((SMorphControlPoint *)pcVar16 ==
                  *(SMorphControlPoint **)(auStack_838 + iVar15 + 0x390)) {
                local_50 = *(int *)((int)apSStack_4a0 + local_7c * 4 + iVar10 + -8);
              }
              iVar10 = iVar10 + 0x20;
              iVar15 = iVar15 + 0x20;
            } while (iVar10 < iVar6 * 0x20);
          }
          if (local_50 < 0) {
            piVar7 = (int *)(aiStack_2b84[local_8 * 0x8ad] + (int)pcVar16 * 0xc);
            local_d4 = (float)*piVar7 * 0.00390625f;
            local_d0 = (float)piVar7[1] * 0.00390625f;
            local_cc = (float)piVar7[2] * 0.00390625f;
            pCVar13 = local_128 + local_8;
            local_d4 = (float)*piVar7 * 0.00390625f - (pCVar13->min).x;
            local_d0 = (float)piVar7[1] * 0.00390625f - local_128[local_8].min.y;
            pCVar9 = local_128 + local_7c;
            local_cc = (float)piVar7[2] * 0.00390625f - local_128[local_8].min.z;
            pCVar1 = &local_128[local_7c].max;
            local_f8 = pCVar1->x - (pCVar9->min).x;
            local_f4 = local_128[local_7c].max.y - local_128[local_7c].min.y;
            pCVar2 = &local_128[local_8].max;
            local_f0 = local_128[local_7c].max.z - local_128[local_7c].min.z;
            local_a4 = pCVar2->x - (pCVar13->min).x;
            local_a0 = local_128[local_8].max.y - local_128[local_8].min.y;
            local_d4 = (local_f8 / local_a4) * local_d4;
            local_9c = local_128[local_8].max.z - local_128[local_8].min.z;
            local_bc = pCVar1->x - (pCVar9->min).x;
            local_b8 = local_128[local_7c].max.y - local_128[local_7c].min.y;
            local_b4 = local_128[local_7c].max.z - local_128[local_7c].min.z;
            local_e0 = pCVar2->x - (pCVar13->min).x;
            local_dc = local_128[local_8].max.y - local_128[local_8].min.y;
            local_d0 = (local_b8 / local_dc) * local_d0;
            local_d8 = local_128[local_8].max.z - local_128[local_8].min.z;
            local_ec = pCVar1->x - (pCVar9->min).x;
            local_e8 = local_128[local_7c].max.y - local_128[local_7c].min.y;
            local_e4 = local_128[local_7c].max.z - local_128[local_7c].min.z;
            local_c8 = pCVar2->x - (pCVar13->min).x;
            local_c4 = local_128[local_8].max.y - local_128[local_8].min.y;
            local_c0 = local_128[local_8].max.z - local_128[local_8].min.z;
            local_cc = (local_e4 / local_c0) * local_cc;
            iVar15 = 0;
            local_84 = 1e+30;
            local_d4 = local_d4 + (pCVar9->min).x;
            iVar10 = 0;
            local_d0 = local_d0 + local_128[local_7c].min.y;
            local_cc = local_cc + local_128[local_7c].min.z;
            while (iVar10 < local_8c[1 - local_8]->vertex_count[0]) {
              piVar7 = (int *)(aiStack_2b84[(1 - local_8) * 0x8ad] + iVar15);
              local_b0 = (float)*piVar7 * 0.00390625f;
              local_ac = (float)piVar7[1] * 0.00390625f;
              local_a8 = (float)piVar7[2] * 0.00390625f;
              local_94 = local_d0 - (float)piVar7[1] * 0.00390625f;
              local_98 = local_d4 - (float)*piVar7 * 0.00390625f;
              local_90 = local_cc - (float)piVar7[2] * 0.00390625f;
              local_4c = local_90 * local_90 + local_98 * local_98 + local_94 * local_94;
              if (local_4c < local_84) {
                local_50 = iVar10;
                local_84 = local_4c;
                iVar10 = iVar10 + 1;
                iVar15 = iVar15 + 0xc;
              }
              else {
                iVar10 = iVar10 + 1;
                iVar15 = iVar15 + 0xc;
              }
            }
          }
        }
        local_c = 0;
        local_64 = (int)pcVar16 * 0x30;
        local_60 = local_50 * 0x30;
        local_38 = 0;
        local_2c = (CDeformableModelInstance *)&stack0xffffb248;
        local_24 = -1;
        do {
          engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                    (g_CDemonRendererPtr2,(g_WindowWidth / 2) * local_c,local_54,g_WindowWidth / 2,
                     local_58);
          shape_spotview_cpp_CSpotView_FUN_005b9a20(g_CSpotViewPtr);
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr2,&g_ZeroVector);
          core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(local_2c,0);
          if (local_5c == 0) {
            core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(local_2c);
          }
          else {
            core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0(local_2c);
          }
          iVar10 = 0;
          g_ActiveRenderColor = 0xff;
          iVar15 = local_38;
          if (0 < iVar6) {
            do {
              if ((local_8 == local_c) &&
                 ((SMorphControlPoint *)pcVar16 ==
                  *(SMorphControlPoint **)(auStack_838 + iVar15 + 0x390))) {
                local_24 = iVar10;
              }
              iVar10 = iVar10 + 1;
              core_morph_cpp_FUN_0052bb80();
              iVar15 = iVar15 + 0x20;
            } while (iVar10 < iVar6);
          }
          if (-1 < (int)pcVar16) {
            uVar5 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                              (g_CEditorToolsPtr);
            g_ActiveRenderColor = CONCAT31(extraout_var,uVar5);
            core_morph_cpp_FUN_0052bb80();
          }
          engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr2);
          iVar15 = local_8;
          local_2c = local_2c + 1;
          local_38 = local_38 + 4;
          local_c = local_c + 1;
        } while (local_c < 2);
        if (g_MouseButtonFlags == 1) {
          if (local_78 == 1) {
            if (((-1 < local_6c) && (local_70 == local_8)) && (local_24 < 0)) {
              apSStack_4a0[local_6c * 8 + local_70 + -2] = (SMorphControlPoint *)pcVar16;
            }
          }
          else if (local_78 == 0) {
            if (local_24 < 0) {
              if (-1 < (int)pcVar16) {
                if (iVar6 < 0x14) {
                  local_70 = local_8;
                  *(char **)((int)apSStack_4a0 + local_8 * 4 + local_74 + -8) = pcVar16;
                  local_6c = iVar6;
                  *(int *)((int)apSStack_4a0 + (1 - iVar15) * 4 + local_74 + -8) = local_50;
                  iVar6 = iVar6 + 1;
                  local_74 = local_74 + 0x20;
                }
                else {
                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                            (g_CEditorToolsPtr,"Can't add any more control points.  MAX_CONTROL_POINTS reached.");
                }
              }
            }
            else {
              local_70 = local_8;
              local_6c = local_24;
            }
          }
        }
        else {
          local_6c = -1;
          local_70 = -1;
        }
        if ((int)pcVar16 < 0) {
          shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
        }
        local_78 = g_MouseButtonFlags;
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
        shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
        iVar15 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
        if (iVar15 != 0) break;
        iVar15 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x14);
        if (iVar15 != 0) {
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                    ((CDeformableModelInstance *)&stack0xffffb258);
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                    ((CDeformableModelInstance *)(local_2b04 + 0x10));
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                    ((CDeformableModelInstance *)&stack0xffffb258);
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                    ((CDeformableModelInstance *)(local_2b04 + 0x10));
          core_morph_cpp_FUN_0052b430();
          core_morph_cpp_FUN_0052b430();
          core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)in_stack_00000014);
          core_morph_cpp_FUN_0052ca90();
          core_morph_cpp_CMorphModel_FUN_0052b350(in_stack_00000014);
        }
        iVar15 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x32);
        if (iVar15 != 0) {
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_838);
          iVar15 = 0;
          this_ptr_00 = (CMotionController *)(&stack0xffffb260 + in_stack_00000010 * 0x22b4);
          for (iVar10 = 0;
              pCVar8 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(this_ptr_00),
              iVar10 < pCVar8->motion_count; iVar10 = iVar10 + 1) {
            pCVar8 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(this_ptr_00);
            pcVar16 = pCVar8->motions[0].motion_name + iVar15;
            iVar15 = iVar15 + 0x54c;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_838,pcVar16);
          }
          iVar15 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                             ((CPickList *)auStack_838,"Select motion",-1,0);
          if (-1 < iVar15) {
            pCVar17 = (CDeformableModelInstance *)0x0;
            pcVar16 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                ((CStrList *)auStack_838,iVar15);
            core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                      (this_ptr_00,pcVar16,(float)pCVar17);
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)auStack_838,0,in_stack_ffffb254,(uint)in_stack_ffffb258,
                     (uint)in_stack_ffffb25c,in_stack_ffffb260,(uint)in_stack_ffffb264);
        }
        iVar15 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x18);
        if (iVar15 != 0) {
          local_3c = (CBoundingBox3D *)(uint)(local_3c == (CBoundingBox3D *)0x0);
        }
      }
      g_CDemonSetPtr->lighting_quality_mode = local_78;
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_morph_cpp_freeMorphControlPoints_FUN_0052ccb0(apSStack_4a0);
      core_morph_cpp_freeDeformableModelInstances_FUN_0052ccd0
                ((CDeformableModelInstance **)&stack0xffffb250);
      return;
    }
  }
  core_morph_cpp_freeDeformableModelInstances_FUN_0052ccd0
            ((CDeformableModelInstance **)&stack0xffffb248);
  return;
}
