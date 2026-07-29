// Name: core_morph.cpp_CMorph_editMorph_FUN_0052bcb0
// Address: 0052bcb0
// Address Range: [[0052bcb0, 0052ca8d]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_editMorph_FUN_0052bcb0(CMorph *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0052c904) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl core_morph_cpp_CMorph_editMorph_FUN_0052bcb0(CMorph *this_ptr)

{
  float fVar1;
  _BIT_INTEGER32 _Var2;
  float fVar3;
  int iVar3;
  int iVar4;
  CVector3i *pCVar4;
  int iVar5;
  int iVar6;
  SProjectedVertex *vertex;
  CMotionList *pCVar5;
  CMotionList *pCVar7;
  char *string_data;
  int *piVar8;
  CBoundingBox3D *pCVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  float *pfVar10;
  int iVar10;
  int iVar11;
  int iVar12;
  CBoundingBox3D *pCVar12;
  float fVar13;
  int iVar13;
  int unaff_EBP;
  int iVar14;
  int iVar16;
  int iVar15;
  CDeformableModelInstance *pCVar16;
  int in_stack_00000014;
  CMorph *in_stack_00000018;
  byte auStack_4da4 [8736];
  int aiStack_2b84 [32];
  byte auStack_2b04 [8884];
  CPickList CStack_850;
  SMorphControlPoint local_4a8 [20];
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
  _BIT_INTEGER32 local_78;
  int local_74;
  int local_70;
  int iVar17;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
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
  float frame_number;
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CSpotView *this_ptr_01;
  
  __arrinit(&stack0xffffb248,2,&g_CDeformableModelInstanceTypeInfo);
  iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select 1st model file","models",
                     "*.dfm",local_228,0);
  if (iVar3 != 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              ((CDeformableModelInstance *)&stack0xffffb248,local_228);
    iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select 2nd model file","models",
                       "*.dfm",local_228,0);
    if (iVar4 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                ((CDeformableModelInstance *)auStack_2b04,local_228);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Loading...");
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
                ((CDeformableModelInstance *)&stack0xffffb248);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
                ((CDeformableModelInstance *)auStack_2b04);
      local_8c[0] = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                              ((CDeformableModelInstance *)&stack0xffffb248);
      local_8c[1] = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                              ((CDeformableModelInstance *)auStack_2b04);
      __arrinit(local_4a8,0x14,&g_SMorphControlPointTypeInfo);
      this_ptr_01 = g_CSpotViewPtr;
      g_CDemonSetPtr->lighting_quality_mode = 1;
      shape_spotview_cpp_CSpotView_reset_FUN_005b9620(this_ptr_01,0x1f);
      core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
      g_MouseButtonFlags.dword = 0;
      iVar17 = -1;
      local_70 = -1;
      local_74 = 0;
      iVar4 = 0;
      while( true ) {
        __arrinit(local_128,2,&g_CBoundingBox3DTypeInfo);
        local_30 = 0;
        local_3c = local_128;
        local_34 = 0;
        local_28 = (CDeformableModelInstance *)&stack0xffffb248;
        local_48 = 0;
        do {
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(local_28);
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(local_28);
          core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(local_28,0);
          core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
                    (local_3c,*(int *)(*(int *)((int)local_8c + local_34) + 0x2c),
                     (CVector3i *)aiStack_2b84[local_30 * 0x8ad]);
          iVar9 = 0;
          if (0 < iVar4) {
            pfVar10 = (float *)((int)&local_4a8[0].position[0].x + local_48);
            iVar5 = local_34;
            do {
              iVar14 = iVar5 + 0x20;
              pCVar4 = (CVector3i *)
                       (aiStack_2b84[local_30 * 0x8ad] +
                       *(int *)((int)local_4a8[0].vertex_index + iVar5) * 0xc);
              iVar9 = iVar9 + 1;
              *pfVar10 = (float)pCVar4->x * 0.00390625f;
              pfVar10[1] = (float)pCVar4->y * 0.00390625f;
              pfVar10[2] = (float)pCVar4->z * 0.00390625f;
              pfVar10 = pfVar10 + 8;
              iVar5 = iVar14;
            } while (iVar9 < iVar4);
          }
          local_34 = local_34 + 4;
          local_28 = local_28 + 1;
          local_48 = local_48 + 0xc;
          local_30 = local_30 + 1;
          local_3c = local_3c + 1;
        } while (local_30 < 2);
        engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,4);
        engine_special_cpp_clearZBufferNative_FUN_005b3ed4();
        iVar5 = (int)((g_WindowHeight + (g_WindowHeight >> 0x1f) * -4) -
                     (uint)((g_WindowHeight >> 0x1f) << 1 < 0)) >> 2;
        iVar15 = -1;
        iVar16 = 0;
        iVar10 = g_WindowHeight + iVar5 * -2;
        local_40 = (CDeformableModelInstance *)&stack0xffffb248;
        do {
          engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                    (g_CDemonRendererPtr2,(g_WindowWidth / 2) * iVar16,iVar5,g_WindowWidth / 2,
                     iVar10);
          shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(g_CSpotViewPtr);
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr2,&g_ZeroVector.f);
          core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(local_40,0);
          iVar13 = 0;
          iVar12 = 0;
          while (iVar11 = iVar12, iVar11 < local_8c[0]->vertex_count[0]) {
            iVar12 = *(int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                                    screen_x + iVar13);
            if ((((iVar12 < (g_MouseX + -5) * 0x10000) || ((g_MouseX + 5) * 0x10000 < iVar12)) ||
                (iVar12 = *(int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex)
                                         .screen_y + iVar13), iVar12 < (g_MouseY + -5) * 0x10000))
               || ((g_MouseY + 5) * 0x10000 < iVar12)) {
              iVar13 = iVar13 + 0x30;
              iVar12 = iVar11 + 1;
            }
            else {
              iVar13 = iVar13 + 0x30;
              iVar12 = iVar11 + 1;
              iVar15 = iVar11;
            }
          }
          engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(g_CDemonRendererPtr2);
          iVar16 = iVar16 + 1;
          local_40 = (CDeformableModelInstance *)&(local_40->motion_controller).current_motion_index
          ;
        } while (iVar16 < 2);
        local_4c = -NAN;
        if (-1 < iVar15) {
          iVar16 = -unaff_EBP + 1;
          iVar12 = unaff_EBP << 2;
          if (0 < iVar4) {
            local_64 = iVar16 * 4;
            iVar6 = 0;
            do {
              if (iVar15 == *(int *)((int)local_4a8[0].vertex_index + iVar12 + 4)) {
                local_4c = *(float *)((int)local_4a8 + local_64 + iVar6 + 4);
              }
              iVar6 = iVar6 + 0x20;
              iVar12 = iVar12 + 0x20;
            } while (iVar6 < iVar4 * 0x20);
          }
          if ((int)local_4c < 0) {
            piVar8 = (int *)(aiStack_2b84[unaff_EBP * 0x8ad + 1] + iVar15 * 0xc);
            pCVar12 = (CBoundingBox3D *)&local_128[unaff_EBP].min.y;
            pCVar6 = (CBoundingBox3D *)&local_128[iVar16].min.y;
            iVar12 = 0;
            local_80 = 0x7149f2ca;
            fVar3 = 0.0;
            while (fVar13 = fVar3, (int)fVar13 < local_8c[-unaff_EBP + 2]->vertex_count[0]) {
              piVar7 = (int *)(aiStack_2b84[(-unaff_EBP + 1) * 0x8ad + 1] + iVar12);
              fVar1 = (((local_128[iVar16].max.z - local_128[iVar16].min.z) /
                       (local_128[unaff_EBP].max.z - local_128[unaff_EBP].min.z)) *
                       ((float)piVar8[1] * 0.00390625f - local_128[unaff_EBP].min.z) +
                      local_128[iVar16].min.z) - (float)piVar7[1] * 0.00390625f;
              fVar3 = (((local_128[iVar16].max.y - (pCVar6->min).x) /
                       (local_128[unaff_EBP].max.y - (pCVar12->min).x)) *
                       ((float)*piVar8 * 0.00390625f - (pCVar12->min).x) + (pCVar6->min).x) -
                      (float)*piVar7 * 0.00390625f;
              local_8c[0] = (CDeformableModel *)
                            ((((local_128[-unaff_EBP + 2].min.x - local_128[iVar16].max.x) /
                              (local_128[unaff_EBP + 1].min.x - local_128[unaff_EBP].max.x)) *
                              ((float)piVar8[2] * 0.00390625f - local_128[unaff_EBP].max.x) +
                             local_128[iVar16].max.x) - (float)piVar7[2] * 0.00390625f);
              fVar1 = (float)local_8c[0] * (float)local_8c[0] + fVar3 * fVar3 + fVar1 * fVar1;
              if (fVar1 < (float)local_80) {
                iVar12 = iVar12 + 0xc;
                fVar3 = (float)((int)fVar13 + 1);
                local_80 = (int)fVar1;
                local_4c = fVar13;
              }
              else {
                iVar12 = iVar12 + 0xc;
                fVar3 = (float)((int)fVar13 + 1);
              }
            }
          }
        }
        local_8 = 0;
        do {
          engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                    (g_CDemonRendererPtr2,(g_WindowWidth / 2) * local_c,iVar5,g_WindowWidth / 2,
                     iVar10);
          shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(g_CSpotViewPtr);
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr2,&g_ZeroVector.f);
          core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(local_2c,0);
          if ((int)local_4c * 0x30 == 0) {
            core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(local_2c,-1,0);
          }
          else {
            core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0(local_2c);
          }
          iVar12 = 0;
          g_ActiveRenderColor = 0xff;
          iVar16 = local_38;
          if (0 < iVar4) {
            do {
              iVar12 = iVar12 + 1;
              core_morph_cpp_drawVertexMarker_FUN_0052bb80
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr
                          [*(int *)((int)local_4a8[0].vertex_index + iVar16)].projected_vertex,5);
              iVar16 = iVar16 + 0x20;
            } while (iVar12 < iVar4);
          }
          if (-1 < iVar15) {
            g_ActiveRenderColor =
                 shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                           (g_CEditorToolsPtr);
            if (local_8 == local_c) {
              vertex = (SProjectedVertex *)
                       ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                              transformed_x + local_64);
            }
            else {
              vertex = &g_CDemonRendererPtr2->vertex_buffer_ptr[iVar15].projected_vertex;
            }
            core_morph_cpp_drawVertexMarker_FUN_0052bb80(vertex,5);
          }
          engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(g_CDemonRendererPtr2);
          local_8 = local_8 + 1;
        } while (local_8 < 2);
        iVar5 = iVar4;
        if (g_MouseButtonFlags.dword == 1) {
          if (local_74 == 1) {
            if ((-1 < local_68) && (iVar17 == unaff_EBP)) {
              local_4a8[local_68].vertex_index[iVar17 + 1] = iVar15;
            }
          }
          else if ((local_74 == 0) && (-1 < iVar15)) {
            if (iVar4 < 0x14) {
              *(int *)((int)local_4a8[0].vertex_index + unaff_EBP * 4 + local_70 + 4) = iVar15;
              iVar17 = (1 - unaff_EBP) * 4 + local_70;
              local_70 = local_70 + 0x20;
              *(float *)((int)local_4a8 + iVar17 + 4) = local_4c;
              iVar5 = iVar4 + 1;
              iVar17 = unaff_EBP;
              local_68 = iVar4;
            }
            else {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Can't add any more control points.  MAX_CONTROL_POINTS reached.");
            }
          }
        }
        else {
          local_68 = -1;
          iVar17 = -1;
        }
        if (iVar15 < 0) {
          shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004a1380(g_CEditorToolsPtr,0);
        }
        _Var2 = g_MouseButtonFlags;
        local_74 = g_MouseButtonFlags.dword;
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
        shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(g_CSpotViewPtr,0x1f);
        iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
        if (iVar4 != 0) break;
        iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_T);
        if (iVar4 != 0) {
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                    ((CDeformableModelInstance *)auStack_4da4);
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                    ((CDeformableModelInstance *)(auStack_2b04 + 0x14));
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                    ((CDeformableModelInstance *)auStack_4da4);
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                    ((CDeformableModelInstance *)(auStack_2b04 + 0x14));
          core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430
                    (in_stack_00000018,0,(CDeformableModelInstance *)auStack_4da4);
          core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430
                    (in_stack_00000018,1,(CDeformableModelInstance *)(auStack_2b04 + 0x14));
          core_morph_cpp_CMorph_getReady_FUN_0052b680(in_stack_00000018);
          core_morph_cpp_CMorph_previewMorph_FUN_0052ca90
                    (in_stack_00000018,(CDeformableModelInstance *)auStack_4da4);
          core_morph_cpp_CMorph_free_FUN_0052b350(in_stack_00000018);
        }
        iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_M);
        if (iVar4 != 0) {
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90
                    ((CPickList *)(CStack_850.tab_column_widths + 3));
          iVar4 = 0;
          pCVar16 = (CDeformableModelInstance *)(auStack_4da4 + in_stack_00000014 * 0x22b4 + 8);
          for (iVar10 = 0;
              pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                 ((CMotionController *)pCVar16), iVar10 < pCVar5->motion_count;
              iVar10 = iVar10 + 1) {
            pCVar7 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                               ((CMotionController *)pCVar16);
            string_data = pCVar7->motions[0].motion_name + iVar4;
            iVar4 = iVar4 + 0x54c;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)(CStack_850.tab_column_widths + 3),string_data);
          }
          iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)(CStack_850.tab_column_widths + 3),
                             "Select motion",-1,0);
          if (-1 < iVar4) {
            frame_number = 0.0;
            pcVar8 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                               ((CStrList *)(CStack_850.tab_column_widths + 3),iVar4);
            core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                      ((CMotionController *)pCVar16,pcVar8,frame_number);
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)(CStack_850.tab_column_widths + 3),0);
        }
        iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_O);
        iVar4 = iVar5;
        if (iVar10 != 0) {
          local_38 = (int)(local_38 == 0);
        }
      }
      g_CDemonSetPtr->lighting_quality_mode = (int)_Var2;
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_morph_cpp_SMorphControlPoint_arrdtor_FUN_0052ccb0
                ((SMorphControlPoint *)&local_4a8[0].position[0].y,0);
      core_morph_cpp_CDeformableModelInstance_arrdtor_FUN_0052ccd0
                ((CDeformableModelInstance *)&stack0xffffb254,0);
      return;
    }
  }
  core_morph_cpp_CDeformableModelInstance_arrdtor_FUN_0052ccd0
            ((CDeformableModelInstance *)&stack0xffffb248,0);
  return;
}
