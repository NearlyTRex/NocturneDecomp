// Name: core_morph.cpp_CMorph_editMorph_FUN_0052bcb0
// Address: 0052bcb0
// MANUAL RECONSTRUCTION
// Address Range: [[0052bcb0, 0052ca8d]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_editMorph_FUN_0052bcb0(CMorph *morph)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_editMorph_FUN_0052bcb0(CMorph *morph)

{
  float fVar1;
  int _Var2;
  float fVar2;
  float fVar3;
  int iVar3;
  int iVar4;
  CVector3i *pCVar4;
  int iVar5;
  int iVar6;
  SProjectedVertex *vertex;
  CMotionList *pCVar5;
  CMotionList *pCVar7;
  int *piVar8;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  float *pfVar10;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  int iVar16;
  int iVar15;
  CMotionController *pCVar16;
  CDeformableModelInstance local_4db8 [2];
  CPickList CStack_850;
  SMorphControlPoint local_4a8 [20];
  char local_228 [256];
  CBoundingBox3D local_128 [3];
  CDeformableModel *local_8c [3];
  int local_80;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_5c;
  CDeformableModelInstance *local_40;
  CBoundingBox3D *local_3c;
  int local_38;
  int local_30;
  CDeformableModelInstance *local_2c;
  CDeformableModelInstance *local_28;
  int local_24;
  int local_8;
  CSpotView *this_ptr;
  CPickList *picklist;
  int selected_idx;
  int paired_vertex_idx;
  int picked_side;

  __arrinit(local_4db8,2,&g_CDeformableModelInstanceTypeInfo);
  iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select 1st model file","models",
                     "*.dfm",local_228,0);
  if (iVar3 != 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(local_4db8,local_228);
    iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select 2nd model file","models",
                       "*.dfm",local_228,0);
    if (iVar4 != 0) {
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
      g_CDemonSetPtr->lighting_quality_mode = 1;
      shape_spotview_cpp_CSpotView_reset_FUN_005b9620(this_ptr,0x1f);
      core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
      g_MouseButtonFlags.dword = 0;
      local_6c = -1;
      local_70 = -1;
      local_74 = 0;
      iVar4 = 0;
      while( true ) {
        __arrinit(local_128,2,&g_CBoundingBox3DTypeInfo);
        local_30 = 0;
        local_3c = local_128;
        local_28 = local_4db8;
        do {
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(local_28);
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(local_28);
          core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(local_28,0);
          core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
                    (local_3c,local_8c[local_30]->vertex_count[0],
                     local_4db8[local_30].skinned_vertices_buffer);
          iVar9 = 0;
          if (0 < iVar4) {
            pfVar10 = &local_4a8[0].position[local_30].x;
            do {
              pCVar4 = local_4db8[local_30].skinned_vertices_buffer +
                       local_4a8[iVar9].vertex_index[local_30];
              *pfVar10 = (float)pCVar4->x * 0.00390625f;
              pfVar10[1] = (float)pCVar4->y * 0.00390625f;
              pfVar10[2] = (float)pCVar4->z * 0.00390625f;
              pfVar10 = pfVar10 + 8;
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar4);
          }
          local_28 = local_28 + 1;
          local_30 = local_30 + 1;
          local_3c = local_3c + 1;
        } while (local_30 < 2);
        engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,4);
        engine_special_cpp_clearZBufferNative_FUN_005b3ed4();
        iVar5 = g_WindowHeight / 4;
        iVar15 = -1;
        iVar16 = 0;
        picked_side = 0;
        iVar10 = g_WindowHeight + iVar5 * -2;
        local_40 = local_4db8;
        do {
          engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                    (g_CDemonRendererPtr2,(g_WindowWidth / 2) * iVar16,iVar5,g_WindowWidth / 2,
                     iVar10);
          shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(g_CSpotViewPtr);
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr2,&g_ZeroVector.f);
          core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(local_40,0);
          iVar12 = 0;
          while (iVar11 = iVar12, iVar11 < local_8c[iVar16]->vertex_count[0]) {
            iVar12 = g_CDemonRendererPtr2->vertex_buffer_ptr[iVar11].projected_vertex.screen_x;
            if ((((iVar12 < (g_MouseX + -5) * 0x10000) || ((g_MouseX + 5) * 0x10000 < iVar12)) ||
                (iVar12 = g_CDemonRendererPtr2->vertex_buffer_ptr[iVar11].projected_vertex.screen_y,
                iVar12 < (g_MouseY + -5) * 0x10000))
               || ((g_MouseY + 5) * 0x10000 < iVar12)) {
              iVar12 = iVar11 + 1;
            }
            else {
              iVar12 = iVar11 + 1;
              iVar15 = iVar11;
              picked_side = iVar16;
            }
          }
          engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(g_CDemonRendererPtr2);
          iVar16 = iVar16 + 1;
          local_40 = local_40 + 1;
        } while (iVar16 < 2);
        paired_vertex_idx = -1;
        if (-1 < iVar15) {
          iVar6 = 0;
          iVar9 = 0;
          if (0 < iVar4) {
            do {
              if (iVar15 == local_4a8[iVar9].vertex_index[picked_side]) {
                paired_vertex_idx = local_4a8[iVar9].vertex_index[1 - picked_side];
              }
              iVar6 = iVar6 + sizeof(SMorphControlPoint);
              iVar9 = iVar9 + 1;
            } while (iVar6 < iVar4 * 0x20);
          }
          if (paired_vertex_idx < 0) {
            piVar8 = (int *)((char *)local_4db8[picked_side].skinned_vertices_buffer + iVar15 * 0xc);
            iVar12 = 0;
            local_80 = 0x7149f2ca;
            fVar3 = 0.0;
            while (fVar13 = fVar3, (int)fVar13 < local_8c[1 - picked_side]->vertex_count[0]) {
              piVar7 = (int *)((char *)local_4db8[1 - picked_side].skinned_vertices_buffer + iVar12);
              fVar1 = (((local_128[1 - picked_side].max.z - local_128[1 - picked_side].min.z) /
                       (local_128[picked_side].max.z - local_128[picked_side].min.z)) *
                       ((float)piVar8[1] * 0.00390625f - local_128[picked_side].min.z) +
                      local_128[1 - picked_side].min.z) - (float)piVar7[1] * 0.00390625f;
              fVar3 = (((local_128[1 - picked_side].max.y - local_128[1 - picked_side].min.y) /
                       (local_128[picked_side].max.y - local_128[picked_side].min.y)) *
                       ((float)*piVar8 * 0.00390625f - local_128[picked_side].min.y) +
                      local_128[1 - picked_side].min.y) - (float)*piVar7 * 0.00390625f;
              fVar2 = (((local_128[1 - picked_side].max.x - local_128[1 - picked_side].min.x) /
                       (local_128[picked_side].max.x - local_128[picked_side].min.x)) *
                       ((float)piVar8[2] * 0.00390625f - local_128[picked_side].min.x) +
                      local_128[1 - picked_side].min.x) - (float)piVar7[2] * 0.00390625f;
              fVar1 = fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1;
              if (fVar1 < (float)local_80) {
                iVar12 = iVar12 + 0xc;
                fVar3 = (float)((int)fVar13 + 1);
                local_80 = (int)fVar1;
                paired_vertex_idx = (int)fVar13;
              }
              else {
                iVar12 = iVar12 + 0xc;
                fVar3 = (float)((int)fVar13 + 1);
              }
            }
          }
        }
        local_2c = local_4db8;
        local_24 = -1;
        local_38 = 0;
        local_8 = 0;
        do {
          engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                    (g_CDemonRendererPtr2,(g_WindowWidth / 2) * local_8,iVar5,g_WindowWidth / 2,
                     iVar10);
          shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(g_CSpotViewPtr);
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr2,&g_ZeroVector.f);
          core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(local_2c,0);
          if (local_5c == 0) {
            core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(local_2c,-1,0);
          }
          else {
            core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0(local_2c);
          }
          g_ActiveRenderColor = 0xff;
          for (iVar12 = 0; iVar12 < iVar4; iVar12 = iVar12 + 1) {
            iVar6 = local_4a8[iVar12].vertex_index[local_38 >> 2];
            if ((local_8 == picked_side) && (iVar15 == iVar6)) {
              local_24 = iVar12;
            }
            core_morph_cpp_drawVertexMarker_FUN_0052bb80
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr[iVar6].projected_vertex,5);
          }
          if (-1 < iVar15) {
            g_ActiveRenderColor =
                 shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                           (g_CEditorToolsPtr);
            if (local_8 == picked_side) {
              vertex = &g_CDemonRendererPtr2->vertex_buffer_ptr[iVar15].projected_vertex;
            }
            else {
              vertex = &g_CDemonRendererPtr2->vertex_buffer_ptr[paired_vertex_idx].projected_vertex;
            }
            core_morph_cpp_drawVertexMarker_FUN_0052bb80(vertex,5);
          }
          engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(g_CDemonRendererPtr2);
          local_38 = local_38 + 4;
          local_2c = local_2c + 1;
          local_8 = local_8 + 1;
        } while (local_8 < 2);
        iVar5 = iVar4;
        if (g_MouseButtonFlags.dword == 1) {
          if (local_74 == 1) {
            if ((-1 < local_68) && (local_6c == picked_side) && (local_24 < 0)) {
              local_4a8[local_68].vertex_index[local_6c] = iVar15;
            }
          }
          else if (local_74 == 0) {
            if (-1 < local_24) {
              local_68 = local_24;
              local_6c = picked_side;
            }
            else if (-1 < iVar15) {
              if (iVar4 < 0x14) {
                local_4a8[iVar4].vertex_index[picked_side] = iVar15;
                local_4a8[iVar4].vertex_index[1 - picked_side] = paired_vertex_idx;
                local_70 = local_70 + 0x20;
                iVar5 = iVar4 + 1;
                local_6c = picked_side;
                local_68 = iVar4;
              }
              else {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Can't add any more control points.  MAX_CONTROL_POINTS reached.");
              }
            }
          }
        }
        else {
          local_68 = -1;
          local_6c = -1;
        }
        if (iVar15 < 0) {
          shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004a1380(g_CEditorToolsPtr,0);
        }
        _Var2 = g_MouseButtonFlags.dword;
        local_74 = g_MouseButtonFlags.dword;
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
        shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(g_CSpotViewPtr,0x1f);
        iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
        if (iVar4 != 0) break;
        iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_T);
        if (iVar4 != 0) {
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(local_4db8);
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(local_4db8 + 1);
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(local_4db8);
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(local_4db8 + 1);
          core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(morph,0,local_4db8);
          core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(morph,1,local_4db8 + 1);
          core_morph_cpp_CMorph_getReady_FUN_0052b680(morph);
          core_morph_cpp_CMorph_previewMorph_FUN_0052ca90(morph,local_4db8);
          core_morph_cpp_CMorph_free_FUN_0052b350(morph);
        }
        iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_M);
        if (iVar4 != 0) {
          picklist = &CStack_850;
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(picklist);
          iVar10 = 0;
          iVar4 = 0;
          pCVar16 = &local_4db8[0].motion_controller;
          while( true ) {
            pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(pCVar16);
            if (pCVar5->motion_count <= iVar10) break;
            pCVar7 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(pCVar16);
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      (&picklist->base, pCVar7->motions[iVar10].motion_name);
            iVar10 = iVar10 + 1;
            iVar4 = iVar4 + 0x54c;
          }
          selected_idx = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                  (picklist,"Select motion",-1,0);
          if (-1 < selected_idx) {
            pcVar8 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                               (&picklist->base,selected_idx);
            core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                      (pCVar16,pcVar8,(float)MOTION_CMD_NONE);
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(picklist,0);
        }
        iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_O);
        iVar4 = iVar5;
        if (iVar10 != 0) {
          local_5c = (uint)(local_5c == 0);
        }
      }
      g_CDemonSetPtr->lighting_quality_mode = (int)_Var2;
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_morph_cpp_SMorphControlPoint_arrdtor20_FUN_0052ccb0(local_4a8,0);
      core_morph_cpp_CDeformableModelInstance_arrdtor2_FUN_0052ccd0(local_4db8,0);
      return;
    }
  }
  core_morph_cpp_CDeformableModelInstance_arrdtor2_FUN_0052ccd0(local_4db8,0);
  return;
}
