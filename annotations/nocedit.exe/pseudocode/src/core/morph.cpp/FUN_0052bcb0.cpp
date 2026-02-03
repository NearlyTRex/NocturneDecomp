// Name: core_morph.cpp_FUN_0052bcb0
// Address: 0052bcb0
// Address Range: [[0052bcb0, 0052ca8d]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_FUN_0052bcb0(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_morph_cpp_FUN_0052bcb0(void)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CSpotView *this_ptr;
  CDeformableModelInstance *this_ptr_00;
  int iVar3;
  int *piVar4;
  CMotionList *pCVar5;
  CBoundingBox3D *pCVar6;
  char *pcVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  CBoundingBox3D *pCVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  CMotionController *this_ptr_01;
  int in_stack_00000010;
  CMorphModel *in_stack_00000014;
  byte auStack_4da8 [8884];
  CDeformableModelInstance CStack_2af4;
  byte auStack_838 [920];
  SMorphControlPoint aSStack_4a0 [19];
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
  iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select 1st model file","models",
                     "*.dfm",(int)local_228);
  if (iVar3 != 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              ((CDeformableModelInstance *)&stack0xffffb248,local_228);
    iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select 2nd model file","models",
                       "*.dfm",(int)local_228);
    if (iVar3 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                ((CDeformableModelInstance *)(auStack_4da8 + 0x22a4),local_228);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Loading...");
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
                ((CDeformableModelInstance *)&stack0xffffb248);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
                ((CDeformableModelInstance *)(auStack_4da8 + 0x22a4));
      local_8c[0] = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                              ((CDeformableModelInstance *)&stack0xffffb248);
      local_8c[1] = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                              ((CDeformableModelInstance *)(auStack_4da8 + 0x22a4));
      __arrinit(auStack_838 + 0x390,0x14,&g_SMorphControlPointTypeInfo);
      this_ptr = g_CSpotViewPtr;
      local_80 = g_CDemonSetPtr->lighting_quality_mode;
      g_CDemonSetPtr->lighting_quality_mode = 1;
      shape_spotview_cpp_CSpotView_FUN_005b9620(this_ptr);
      iVar3 = 0;
      core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
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
          this_ptr_00 = local_28;
          iVar14 = local_30;
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(local_28);
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_00)
          ;
          core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr_00,0);
          core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
                    (local_3c,*(int *)(*(int *)((int)local_8c + local_34) + 0x2c),
                     (CVector3i *)(&CStack_2af4)[iVar14 + 0xffffffff].texture_set_indices[0x1b]);
          iVar8 = 0;
          if (0 < iVar3) {
            pfVar9 = (float *)(auStack_838 + local_48 + 0x398);
            iVar13 = local_34;
            do {
              iVar12 = iVar13 + 0x390;
              iVar13 = iVar13 + 0x20;
              piVar4 = (int *)((&CStack_2af4)[iVar14 + 0xffffffff].texture_set_indices[0x1b] +
                              *(int *)(auStack_838 + iVar12) * 0xc);
              iVar8 = iVar8 + 1;
              *pfVar9 = (float)*piVar4 * 0.00390625f;
              pfVar9[1] = (float)piVar4[1] * 0.00390625f;
              pfVar9[2] = (float)piVar4[2] * 0.00390625f;
              pfVar9 = pfVar9 + 8;
            } while (iVar8 < iVar3);
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
        iVar14 = -1;
        iVar8 = 0;
        local_58 = g_WindowHeight + local_54 * -2;
        local_40 = (CDeformableModelInstance *)&stack0xffffb248;
        local_8 = 0;
        local_44 = 0;
        do {
          engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                    (g_CDemonRendererPtr2,(g_WindowWidth / 2) * iVar8,local_54,g_WindowWidth / 2,
                     local_58);
          shape_spotview_cpp_CSpotView_FUN_005b9a20(g_CSpotViewPtr);
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr2,&g_ZeroVector);
          core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(local_40,0);
          local_14 = (g_MouseX + -5) * 0x10000;
          local_20 = (g_MouseX + 5) * 0x10000;
          local_18 = (g_MouseY + -5) * 0x10000;
          local_10 = (g_MouseY + 5) * 0x10000;
          iVar12 = 0;
          local_1c = local_44;
          iVar13 = 0;
          while (iVar10 = iVar13, iVar10 < *(int *)(*(int *)((int)local_8c + local_44) + 0x2c)) {
            iVar13 = *(int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                                    screen_x + iVar12);
            if ((((iVar13 < local_14) || (local_20 < iVar13)) ||
                (iVar13 = *(int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex)
                                         .screen_y + iVar12), iVar13 < local_18)) ||
               (local_10 < iVar13)) {
              iVar12 = iVar12 + 0x30;
              iVar13 = iVar10 + 1;
            }
            else {
              local_8 = iVar8;
              iVar12 = iVar12 + 0x30;
              iVar13 = iVar10 + 1;
              iVar14 = iVar10;
            }
          }
          engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr2);
          iVar8 = iVar8 + 1;
          local_44 = local_44 + 4;
          local_40 = local_40 + 1;
        } while (iVar8 < 2);
        local_50 = -1;
        if (-1 < iVar14) {
          local_7c = 1 - local_8;
          iVar8 = local_8 << 2;
          if (0 < iVar3) {
            local_68 = local_7c * 4;
            iVar13 = 0;
            do {
              if (iVar14 == *(int *)(auStack_838 + iVar8 + 0x390)) {
                local_50 = *(int *)(local_228 + local_7c * 4 + iVar13 + -0x280);
              }
              iVar13 = iVar13 + 0x20;
              iVar8 = iVar8 + 0x20;
            } while (iVar13 < iVar3 * 0x20);
          }
          if (local_50 < 0) {
            piVar4 = (int *)((&CStack_2af4)[local_8 + 0xffffffff].texture_set_indices[0x1b] +
                            iVar14 * 0xc);
            local_d4 = (float)*piVar4 * 0.00390625f;
            local_d0 = (float)piVar4[1] * 0.00390625f;
            local_cc = (float)piVar4[2] * 0.00390625f;
            pCVar11 = local_128 + local_8;
            local_d4 = (float)*piVar4 * 0.00390625f - (pCVar11->min).x;
            local_d0 = (float)piVar4[1] * 0.00390625f - local_128[local_8].min.y;
            pCVar6 = local_128 + local_7c;
            local_cc = (float)piVar4[2] * 0.00390625f - local_128[local_8].min.z;
            pCVar1 = &local_128[local_7c].max;
            local_f8 = pCVar1->x - (pCVar6->min).x;
            local_f4 = local_128[local_7c].max.y - local_128[local_7c].min.y;
            pCVar2 = &local_128[local_8].max;
            local_f0 = local_128[local_7c].max.z - local_128[local_7c].min.z;
            local_a4 = pCVar2->x - (pCVar11->min).x;
            local_a0 = local_128[local_8].max.y - local_128[local_8].min.y;
            local_d4 = (local_f8 / local_a4) * local_d4;
            local_9c = local_128[local_8].max.z - local_128[local_8].min.z;
            local_bc = pCVar1->x - (pCVar6->min).x;
            local_b8 = local_128[local_7c].max.y - local_128[local_7c].min.y;
            local_b4 = local_128[local_7c].max.z - local_128[local_7c].min.z;
            local_e0 = pCVar2->x - (pCVar11->min).x;
            local_dc = local_128[local_8].max.y - local_128[local_8].min.y;
            local_d0 = (local_b8 / local_dc) * local_d0;
            local_d8 = local_128[local_8].max.z - local_128[local_8].min.z;
            local_ec = pCVar1->x - (pCVar6->min).x;
            local_e8 = local_128[local_7c].max.y - local_128[local_7c].min.y;
            local_e4 = local_128[local_7c].max.z - local_128[local_7c].min.z;
            local_c8 = pCVar2->x - (pCVar11->min).x;
            local_c4 = local_128[local_8].max.y - local_128[local_8].min.y;
            local_c0 = local_128[local_8].max.z - local_128[local_8].min.z;
            local_cc = (local_e4 / local_c0) * local_cc;
            iVar8 = 0;
            local_84 = 1e+30;
            local_d4 = local_d4 + (pCVar6->min).x;
            iVar13 = 0;
            local_d0 = local_d0 + local_128[local_7c].min.y;
            local_cc = local_cc + local_128[local_7c].min.z;
            while (iVar13 < local_8c[-local_8 + 1]->vertex_count[0]) {
              piVar4 = (int *)((&CStack_2af4)[-local_8].texture_set_indices[0x1b] + iVar8);
              local_b0 = (float)*piVar4 * 0.00390625f;
              local_ac = (float)piVar4[1] * 0.00390625f;
              local_a8 = (float)piVar4[2] * 0.00390625f;
              local_94 = local_d0 - (float)piVar4[1] * 0.00390625f;
              local_98 = local_d4 - (float)*piVar4 * 0.00390625f;
              local_90 = local_cc - (float)piVar4[2] * 0.00390625f;
              local_4c = local_90 * local_90 + local_98 * local_98 + local_94 * local_94;
              if (local_4c < local_84) {
                local_50 = iVar13;
                local_84 = local_4c;
                iVar13 = iVar13 + 1;
                iVar8 = iVar8 + 0xc;
              }
              else {
                iVar13 = iVar13 + 1;
                iVar8 = iVar8 + 0xc;
              }
            }
          }
        }
        local_c = 0;
        local_64 = iVar14 * 0x30;
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
          iVar13 = 0;
          g_ActiveRenderColor = 0xff;
          iVar8 = local_38;
          if (0 < iVar3) {
            do {
              if ((local_8 == local_c) && (iVar14 == *(int *)(auStack_838 + iVar8 + 0x390))) {
                local_24 = iVar13;
              }
              iVar13 = iVar13 + 1;
              core_morph_cpp_FUN_0052bb80();
              iVar8 = iVar8 + 0x20;
            } while (iVar13 < iVar3);
          }
          if (-1 < iVar14) {
            g_ActiveRenderColor =
                 shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                           (g_CEditorToolsPtr);
            core_morph_cpp_FUN_0052bb80();
          }
          engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr2);
          iVar8 = local_8;
          local_2c = local_2c + 1;
          local_38 = local_38 + 4;
          local_c = local_c + 1;
        } while (local_c < 2);
        if (g_MouseButtonFlags == 1) {
          if (local_78 == 1) {
            if (((-1 < local_6c) && (local_70 == local_8)) && (local_24 < 0)) {
              *(int *)(local_228 + local_70 * 4 + local_6c * 0x20 + -0x280) = iVar14;
            }
          }
          else if (local_78 == 0) {
            if (local_24 < 0) {
              if (-1 < iVar14) {
                if (iVar3 < 0x14) {
                  local_70 = local_8;
                  *(int *)(local_228 + local_8 * 4 + local_74 + -0x280) = iVar14;
                  local_6c = iVar3;
                  *(int *)(local_228 + (1 - iVar8) * 4 + local_74 + -0x280) = local_50;
                  iVar3 = iVar3 + 1;
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
        if (iVar14 < 0) {
          shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
        }
        local_78 = g_MouseButtonFlags;
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
        shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
        iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
        if (iVar14 != 0) break;
        iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x14);
        if (iVar14 != 0) {
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                    ((CDeformableModelInstance *)auStack_4da8);
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(&CStack_2af4);
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                    ((CDeformableModelInstance *)auStack_4da8);
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                    (&CStack_2af4);
          core_morph_cpp_FUN_0052b430();
          core_morph_cpp_FUN_0052b430();
          core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)in_stack_00000014);
          core_morph_cpp_FUN_0052ca90();
          core_morph_cpp_CMorphModel_FUN_0052b350(in_stack_00000014);
        }
        iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x32);
        if (iVar14 != 0) {
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_838);
          iVar14 = 0;
          this_ptr_01 = (CMotionController *)(auStack_4da8 + in_stack_00000010 * 0x22b4 + 8);
          for (iVar8 = 0;
              pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(this_ptr_01),
              iVar8 < pCVar5->motion_count; iVar8 = iVar8 + 1) {
            pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(this_ptr_01);
            pcVar7 = pCVar5->motions[0].motion_name + iVar14;
            iVar14 = iVar14 + 0x54c;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_838,pcVar7);
          }
          iVar14 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                             ((CPickList *)auStack_838,"Select motion",-1,0);
          if (-1 < iVar14) {
            pCVar5 = (CMotionList *)0x0;
            pcVar7 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                               ((CStrList *)auStack_838,iVar14);
            core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                      (this_ptr_01,pcVar7,(float)pCVar5);
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)auStack_838,0);
        }
        iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x18);
        if (iVar14 != 0) {
          local_3c = (CBoundingBox3D *)(uint)(local_3c == (CBoundingBox3D *)0x0);
        }
      }
      g_CDemonSetPtr->lighting_quality_mode = local_78;
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_morph_cpp_freeMorphControlPoints_FUN_0052ccb0
                ((SMorphControlPoint *)(auStack_838 + 0x398));
      core_morph_cpp_freeDeformableModelInstances_FUN_0052ccd0
                ((CDeformableModelInstance *)&stack0xffffb250);
      return;
    }
  }
  core_morph_cpp_freeDeformableModelInstances_FUN_0052ccd0
            ((CDeformableModelInstance *)&stack0xffffb248);
  return;
}
