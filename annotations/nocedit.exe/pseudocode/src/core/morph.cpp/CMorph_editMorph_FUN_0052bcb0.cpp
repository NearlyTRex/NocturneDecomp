// Name: core_morph.cpp_CMorph_editMorph_FUN_0052bcb0
// Address: 0052bcb0
// Address Range: [[0052bcb0, 0052ca8d]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_editMorph_FUN_0052bcb0(CMorph *morph)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_editMorph_FUN_0052bcb0(CMorph *morph)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CSpotView *this_ptr;
  int iVar3;
  CVector3i *pCVar4;
  SProjectedVertex *vertex;
  CMotionList *pCVar5;
  CBoundingBox3D *pCVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  CBoundingBox3D *pCVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  CDeformableModelInstance *pCVar16;
  float frame_number;
  CDeformableModelInstance local_4db8 [2];
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
  int local_6c;
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
  
  __arrinit(local_4db8,2,&g_CDeformableModelInstanceTypeInfo);
  iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select 1st model file","models",
                     "*.dfm",(int)local_228,0);
  if (iVar3 != 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(local_4db8,local_228);
    iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select 2nd model file","models",
                       "*.dfm",(int)local_228,0);
    if (iVar3 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(local_4db8 + 1,local_228);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Loading...");
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(local_4db8);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(local_4db8 + 1);
      local_8c[0] = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(local_4db8);
      local_8c[1] = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                              (local_4db8 + 1);
      __arrinit(local_4a8,0x14,&g_SMorphControlPointTypeInfo);
      this_ptr = g_CSpotViewPtr;
      local_80 = g_CDemonSetPtr->lighting_quality_mode;
      g_CDemonSetPtr->lighting_quality_mode = 1;
      shape_spotview_cpp_CSpotView_reset_FUN_005b9620(this_ptr,0x1f);
      iVar3 = 0;
      core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
      g_MouseButtonFlags.dword = 0;
      local_5c = 0;
      local_78.dword = 0;
      local_6c = -1;
      local_70 = -1;
      local_74 = 0;
      while( true ) {
        __arrinit(local_128,2,&g_CBoundingBox3DTypeInfo);
        local_30 = 0;
        local_3c = local_128;
        local_34 = 0;
        local_28 = local_4db8;
        local_48 = 0;
        do {
          pCVar16 = local_28;
          iVar15 = local_30;
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(local_28);
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(pCVar16);
          core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(pCVar16,0);
          core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
                    (local_3c,*(int *)(*(int *)((int)local_8c + local_34) + 0x2c),
                     local_4db8[iVar15].skinned_vertices_buffer);
          iVar9 = 0;
          if (0 < iVar3) {
            pfVar10 = (float *)((int)&local_4a8[0].position[0].x + local_48);
            iVar14 = local_34;
            do {
              piVar7 = (int *)((int)local_4a8[0].vertex_index + iVar14);
              iVar14 = iVar14 + 0x20;
              pCVar4 = local_4db8[iVar15].skinned_vertices_buffer + *piVar7;
              iVar9 = iVar9 + 1;
              *pfVar10 = (float)pCVar4->x * 0.00390625f;
              pfVar10[1] = (float)pCVar4->y * 0.00390625f;
              pfVar10[2] = (float)pCVar4->z * 0.00390625f;
              pfVar10 = pfVar10 + 8;
            } while (iVar9 < iVar3);
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
        iVar15 = -1;
        iVar9 = 0;
        local_58 = g_WindowHeight + local_54 * -2;
        local_40 = local_4db8;
        local_8 = 0;
        local_44 = 0;
        do {
          engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                    (g_CDemonRendererPtr2,(g_WindowWidth / 2) * iVar9,local_54,g_WindowWidth / 2,
                     local_58);
          shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(g_CSpotViewPtr);
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr2,&g_ZeroVector);
          core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(local_40,0);
          local_14 = (g_MouseX + -5) * 0x10000;
          local_20 = (g_MouseX + 5) * 0x10000;
          local_18 = (g_MouseY + -5) * 0x10000;
          local_10 = (g_MouseY + 5) * 0x10000;
          iVar13 = 0;
          local_1c = local_44;
          iVar14 = 0;
          while (iVar11 = iVar14, iVar11 < *(int *)(*(int *)((int)local_8c + local_44) + 0x2c)) {
            iVar14 = *(int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                                    screen_x + iVar13);
            if ((((iVar14 < local_14) || (local_20 < iVar14)) ||
                (iVar14 = *(int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex)
                                         .screen_y + iVar13), iVar14 < local_18)) ||
               (local_10 < iVar14)) {
              iVar13 = iVar13 + 0x30;
              iVar14 = iVar11 + 1;
            }
            else {
              local_8 = iVar9;
              iVar13 = iVar13 + 0x30;
              iVar14 = iVar11 + 1;
              iVar15 = iVar11;
            }
          }
          engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480();
          iVar9 = iVar9 + 1;
          local_44 = local_44 + 4;
          local_40 = local_40 + 1;
        } while (iVar9 < 2);
        local_50 = -1;
        if (-1 < iVar15) {
          local_7c = 1 - local_8;
          iVar9 = local_8 << 2;
          if (0 < iVar3) {
            local_68 = local_7c * 4;
            iVar14 = 0;
            do {
              if (iVar15 == *(int *)((int)local_4a8[0].vertex_index + iVar9)) {
                local_50 = *(int *)((int)local_4a8 + local_7c * 4 + iVar14);
              }
              iVar14 = iVar14 + 0x20;
              iVar9 = iVar9 + 0x20;
            } while (iVar14 < iVar3 * 0x20);
          }
          if (local_50 < 0) {
            pCVar4 = local_4db8[local_8].skinned_vertices_buffer + iVar15;
            local_d4 = (float)pCVar4->x * 0.00390625f;
            local_d0 = (float)pCVar4->y * 0.00390625f;
            local_cc = (float)pCVar4->z * 0.00390625f;
            pCVar12 = local_128 + local_8;
            local_d4 = local_d4 - (pCVar12->min).x;
            local_d0 = local_d0 - local_128[local_8].min.y;
            pCVar6 = local_128 + local_7c;
            local_cc = local_cc - local_128[local_8].min.z;
            pCVar1 = &local_128[local_7c].max;
            local_f8 = pCVar1->x - (pCVar6->min).x;
            local_f4 = local_128[local_7c].max.y - local_128[local_7c].min.y;
            pCVar2 = &local_128[local_8].max;
            local_f0 = local_128[local_7c].max.z - local_128[local_7c].min.z;
            local_a4 = pCVar2->x - (pCVar12->min).x;
            local_a0 = local_128[local_8].max.y - local_128[local_8].min.y;
            local_d4 = (local_f8 / local_a4) * local_d4;
            local_9c = local_128[local_8].max.z - local_128[local_8].min.z;
            local_bc = pCVar1->x - (pCVar6->min).x;
            local_b8 = local_128[local_7c].max.y - local_128[local_7c].min.y;
            local_b4 = local_128[local_7c].max.z - local_128[local_7c].min.z;
            local_e0 = pCVar2->x - (pCVar12->min).x;
            local_dc = local_128[local_8].max.y - local_128[local_8].min.y;
            local_d0 = (local_b8 / local_dc) * local_d0;
            local_d8 = local_128[local_8].max.z - local_128[local_8].min.z;
            local_ec = pCVar1->x - (pCVar6->min).x;
            local_e8 = local_128[local_7c].max.y - local_128[local_7c].min.y;
            local_e4 = local_128[local_7c].max.z - local_128[local_7c].min.z;
            local_c8 = pCVar2->x - (pCVar12->min).x;
            local_c4 = local_128[local_8].max.y - local_128[local_8].min.y;
            local_c0 = local_128[local_8].max.z - local_128[local_8].min.z;
            local_cc = (local_e4 / local_c0) * local_cc;
            iVar9 = 0;
            local_84 = 1e+30;
            local_d4 = local_d4 + (pCVar6->min).x;
            iVar14 = 0;
            local_d0 = local_d0 + local_128[local_7c].min.y;
            local_cc = local_cc + local_128[local_7c].min.z;
            while (iVar14 < local_8c[1 - local_8]->vertex_count[0]) {
              piVar7 = (int *)((int)&(local_4db8[1 - local_8].skinned_vertices_buffer)->x + iVar9);
              local_b0 = (float)*piVar7 * 0.00390625f;
              local_ac = (float)piVar7[1] * 0.00390625f;
              local_a8 = (float)piVar7[2] * 0.00390625f;
              local_94 = local_d0 - (float)piVar7[1] * 0.00390625f;
              local_98 = local_d4 - (float)*piVar7 * 0.00390625f;
              local_90 = local_cc - (float)piVar7[2] * 0.00390625f;
              local_4c = local_90 * local_90 + local_98 * local_98 + local_94 * local_94;
              if (local_4c < local_84) {
                local_50 = iVar14;
                local_84 = local_4c;
                iVar14 = iVar14 + 1;
                iVar9 = iVar9 + 0xc;
              }
              else {
                iVar14 = iVar14 + 1;
                iVar9 = iVar9 + 0xc;
              }
            }
          }
        }
        local_c = 0;
        local_64 = iVar15 * 0x30;
        local_60 = local_50 * 0x30;
        local_38 = 0;
        local_2c = local_4db8;
        local_24 = -1;
        do {
          engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                    (g_CDemonRendererPtr2,(g_WindowWidth / 2) * local_c,local_54,g_WindowWidth / 2,
                     local_58);
          shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(g_CSpotViewPtr);
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr2,&g_ZeroVector);
          core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(local_2c,0);
          if (local_5c == 0) {
            core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(local_2c,-1,0);
          }
          else {
            core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0(local_2c);
          }
          iVar14 = 0;
          g_ActiveRenderColor = 0xff;
          iVar9 = local_38;
          if (0 < iVar3) {
            do {
              iVar13 = *(int *)((int)local_4a8[0].vertex_index + iVar9);
              if ((local_8 == local_c) && (iVar15 == iVar13)) {
                local_24 = iVar14;
              }
              iVar14 = iVar14 + 1;
              core_morph_cpp_drawVertexMarker_FUN_0052bb80
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[iVar13].projected_vertex,5);
              iVar9 = iVar9 + 0x20;
            } while (iVar14 < iVar3);
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
              vertex = (SProjectedVertex *)
                       ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                              transformed_x + local_60);
            }
            core_morph_cpp_drawVertexMarker_FUN_0052bb80(vertex,5);
          }
          engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480();
          iVar9 = local_8;
          local_2c = local_2c + 1;
          local_38 = local_38 + 4;
          local_c = local_c + 1;
        } while (local_c < 2);
        if (g_MouseButtonFlags.dword == 1) {
          if (local_78.dword == 1) {
            if (((-1 < local_6c) && (local_70 == local_8)) && (local_24 < 0)) {
              local_4a8[local_6c].vertex_index[local_70] = iVar15;
            }
          }
          else if (local_78.dword == 0) {
            if (local_24 < 0) {
              if (-1 < iVar15) {
                if (iVar3 < 0x14) {
                  local_70 = local_8;
                  *(int *)((int)local_4a8[0].vertex_index + local_8 * 4 + local_74) = iVar15;
                  local_6c = iVar3;
                  *(int *)((int)local_4a8 + (1 - iVar9) * 4 + local_74) = local_50;
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
        if (iVar15 < 0) {
          shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
        }
        local_78 = g_MouseButtonFlags;
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
        shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(g_CSpotViewPtr,0x1f);
        iVar15 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
        if (iVar15 != 0) break;
        iVar15 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_T);
        if (iVar15 != 0) {
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(local_4db8);
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(local_4db8 + 1);
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(local_4db8);
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                    (local_4db8 + 1);
          core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(morph,0,local_4db8);
          core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(morph,1,local_4db8 + 1);
          core_morph_cpp_CMorph_getReady_FUN_0052b680(morph);
          core_morph_cpp_CMorph_previewMorph_FUN_0052ca90(morph);
          core_morph_cpp_CMorph_free_FUN_0052b350(morph);
        }
        iVar15 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_M);
        if (iVar15 != 0) {
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_850);
          iVar15 = 0;
          pCVar16 = local_4db8 + local_8;
          for (iVar9 = 0;
              pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                 (&pCVar16->motion_controller), iVar9 < pCVar5->motion_count;
              iVar9 = iVar9 + 1) {
            pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                               (&pCVar16->motion_controller);
            pcVar8 = pCVar5->motions[0].motion_name + iVar15;
            iVar15 = iVar15 + 0x54c;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_850.base,pcVar8);
          }
          iVar15 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                             (&CStack_850,"Select motion",-1,0);
          if (-1 < iVar15) {
            frame_number = 0.0;
            pcVar8 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_850.base,iVar15);
            core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                      (&pCVar16->motion_controller,pcVar8,frame_number);
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_850,0);
        }
        iVar15 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_O);
        if (iVar15 != 0) {
          local_5c = (uint)(local_5c == 0);
        }
      }
      g_CDemonSetPtr->lighting_quality_mode = local_80;
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_morph_cpp_SMorphControlPoint_arrdtor_FUN_0052ccb0(local_4a8,0);
      core_morph_cpp_CDeformableModelInstance_arrdtor_FUN_0052ccd0(local_4db8,0);
      return;
    }
  }
  core_morph_cpp_CDeformableModelInstance_arrdtor_FUN_0052ccd0(local_4db8,0);
  return;
}
