// Name: core_morph.cpp_CMorph_editMorph_FUN_0052bcb0
// Address: 0052bcb0
// Address Range: [[0052bcb0, 0052ca8d]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_editMorph_FUN_0052bcb0(CMorph *morph)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_editMorph_FUN_0052bcb0(CMorph *morph)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar3;
  int iVar5;
  CVector3i *pCVar4;
  int iVar6;
  int iVar7;
  SProjectedVertex *vertex;
  int iVar8;
  CMotionList *pCVar5;
  CMotionList *pCVar9;
  char *string_data;
  CVector3i *pCVar10;
  CBoundingBox3D *pCVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  float *pfVar10;
  int iVar12;
  int iVar11;
  int iVar16;
  CBoundingBox3D *pCVar12;
  int iVar17;
  int iVar13;
  int iVar14;
  int iVar18;
  int iVar15;
  CDeformableModelInstance *pCVar16;
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
  float frame_number;
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CSpotView *this_ptr;
  
  __arrinit(local_4db8,2,&g_CDeformableModelInstanceTypeInfo);
  iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select 1st model file","models",
                     "*.dfm",local_228,0);
  if (iVar3 != 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(local_4db8,local_228);
    iVar5 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select 2nd model file","models",
                       "*.dfm",local_228,0);
    if (iVar5 != 0) {
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
      iVar5 = g_CDemonSetPtr->lighting_quality_mode;
      g_CDemonSetPtr->lighting_quality_mode = 1;
      shape_spotview_cpp_CSpotView_reset_FUN_005b9620(this_ptr,0x1f);
      core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
      g_MouseButtonFlags.dword = 0;
      bVar4 = false;
      local_78.dword = 0;
      local_6c = -1;
      local_70 = -1;
      local_74 = 0;
      iVar8 = 0;
      while( true ) {
        __arrinit(local_128,2,&g_CBoundingBox3DTypeInfo);
        local_30 = 0;
        local_3c = local_128;
        local_34 = 0;
        local_28 = local_4db8;
        local_48 = 0;
        do {
          core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(local_28);
          core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(local_28);
          core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(local_28,0);
          core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
                    (local_3c,*(int *)(*(int *)((int)local_8c + local_34) + 0x2c),
                     local_4db8[local_30].skinned_vertices_buffer);
          iVar9 = 0;
          if (0 < iVar8) {
            pfVar10 = (float *)((int)&local_4a8[0].position[0].x + local_48);
            iVar6 = local_34;
            do {
              iVar14 = iVar6 + 0x20;
              pCVar4 = local_4db8[local_30].skinned_vertices_buffer +
                       *(int *)((int)local_4a8[0].vertex_index + iVar6);
              iVar9 = iVar9 + 1;
              *pfVar10 = (float)pCVar4->x * 0.00390625f;
              pfVar10[1] = (float)pCVar4->y * 0.00390625f;
              pfVar10[2] = (float)pCVar4->z * 0.00390625f;
              pfVar10 = pfVar10 + 8;
              iVar6 = iVar14;
            } while (iVar9 < iVar8);
          }
          local_34 = local_34 + 4;
          local_28 = local_28 + 1;
          local_48 = local_48 + 0xc;
          local_30 = local_30 + 1;
          local_3c = local_3c + 1;
        } while (local_30 < 2);
        engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,4);
        wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
        iVar6 = (int)((g_WindowHeight + (g_WindowHeight >> 0x1f) * -4) -
                     (uint)((g_WindowHeight >> 0x1f) << 1 < 0)) >> 2;
        iVar15 = -1;
        iVar18 = 0;
        iVar12 = g_WindowHeight + iVar6 * -2;
        local_40 = local_4db8;
        local_8 = 0;
        local_44 = 0;
        do {
          engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                    (g_CDemonRendererPtr2,(g_WindowWidth / 2) * iVar18,iVar6,g_WindowWidth / 2,
                     iVar12);
          shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(g_CSpotViewPtr);
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr2,&g_ZeroVector.f);
          core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(local_40,0);
          iVar13 = 0;
          iVar16 = 0;
          while (iVar11 = iVar16, iVar11 < *(int *)(*(int *)((int)local_8c + local_44) + 0x2c)) {
            iVar16 = *(int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                                    screen_x + iVar13);
            if ((((iVar16 < (g_MouseX + -5) * 0x10000) || ((g_MouseX + 5) * 0x10000 < iVar16)) ||
                (iVar16 = *(int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex)
                                         .screen_y + iVar13), iVar16 < (g_MouseY + -5) * 0x10000))
               || ((g_MouseY + 5) * 0x10000 < iVar16)) {
              iVar13 = iVar13 + 0x30;
              iVar16 = iVar11 + 1;
            }
            else {
              iVar13 = iVar13 + 0x30;
              iVar16 = iVar11 + 1;
              iVar15 = iVar11;
              local_8 = iVar18;
            }
          }
          engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480();
          iVar18 = iVar18 + 1;
          local_44 = local_44 + 4;
          local_40 = local_40 + 1;
        } while (iVar18 < 2);
        local_50 = -1;
        if (-1 < iVar15) {
          iVar18 = 1 - local_8;
          iVar16 = local_8 << 2;
          if (0 < iVar8) {
            iVar7 = 0;
            do {
              if (iVar15 == *(int *)((int)local_4a8[0].vertex_index + iVar16)) {
                local_50 = *(int *)((int)local_4a8 + iVar18 * 4 + iVar7);
              }
              iVar7 = iVar7 + 0x20;
              iVar16 = iVar16 + 0x20;
            } while (iVar7 < iVar8 * 0x20);
          }
          if (local_50 < 0) {
            pCVar10 = local_4db8[local_8].skinned_vertices_buffer + iVar15;
            pCVar12 = local_128 + local_8;
            pCVar6 = local_128 + iVar18;
            iVar7 = 0;
            local_84 = 1e+30;
            iVar16 = 0;
            while (iVar17 = iVar16, iVar17 < local_8c[1 - local_8]->vertex_count[0]) {
              piVar7 = (int *)((int)&(local_4db8[1 - local_8].skinned_vertices_buffer)->x + iVar7);
              fVar3 = (((local_128[iVar18].max.y - local_128[iVar18].min.y) /
                       (local_128[local_8].max.y - local_128[local_8].min.y)) *
                       ((float)pCVar10->y * 0.00390625f - local_128[local_8].min.y) +
                      local_128[iVar18].min.y) - (float)piVar7[1] * 0.00390625f;
              fVar1 = (((local_128[iVar18].max.x - (pCVar6->min).x) /
                       (local_128[local_8].max.x - (pCVar12->min).x)) *
                       ((float)pCVar10->x * 0.00390625f - (pCVar12->min).x) + (pCVar6->min).x) -
                      (float)*piVar7 * 0.00390625f;
              fVar2 = (((local_128[iVar18].max.z - local_128[iVar18].min.z) /
                       (local_128[local_8].max.z - local_128[local_8].min.z)) *
                       ((float)pCVar10->z * 0.00390625f - local_128[local_8].min.z) +
                      local_128[iVar18].min.z) - (float)piVar7[2] * 0.00390625f;
              fVar1 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
              if (fVar1 < local_84) {
                iVar7 = iVar7 + 0xc;
                iVar16 = iVar17 + 1;
                local_84 = fVar1;
                local_50 = iVar17;
              }
              else {
                iVar7 = iVar7 + 0xc;
                iVar16 = iVar17 + 1;
              }
            }
          }
        }
        local_c = 0;
        local_38 = 0;
        local_2c = local_4db8;
        local_24 = -1;
        do {
          engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                    (g_CDemonRendererPtr2,(g_WindowWidth / 2) * local_c,iVar6,g_WindowWidth / 2,
                     iVar12);
          shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(g_CSpotViewPtr);
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr2,&g_ZeroVector.f);
          core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(local_2c,0);
          if (bVar4) {
            core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0(local_2c);
          }
          else {
            core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(local_2c,-1,0);
          }
          iVar16 = 0;
          g_ActiveRenderColor = 0xff;
          iVar18 = local_38;
          if (0 < iVar8) {
            do {
              iVar7 = *(int *)((int)local_4a8[0].vertex_index + iVar18);
              if ((local_8 == local_c) && (iVar15 == iVar7)) {
                local_24 = iVar16;
              }
              iVar16 = iVar16 + 1;
              core_morph_cpp_drawVertexMarker_FUN_0052bb80
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[iVar7].projected_vertex,5);
              iVar18 = iVar18 + 0x20;
            } while (iVar16 < iVar8);
          }
          if (-1 < iVar15) {
            g_ActiveRenderColor =
                 shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                           (g_CEditorToolsPtr);
            if (local_8 == local_c) {
              vertex = &g_CDemonRendererPtr2->vertex_buffer_ptr[iVar15].projected_vertex;
            }
            else {
              vertex = &g_CDemonRendererPtr2->vertex_buffer_ptr[local_50].projected_vertex;
            }
            core_morph_cpp_drawVertexMarker_FUN_0052bb80(vertex,5);
          }
          engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480();
          local_2c = local_2c + 1;
          local_38 = local_38 + 4;
          local_c = local_c + 1;
        } while (local_c < 2);
        iVar6 = iVar8;
        if (g_MouseButtonFlags.dword == 1) {
          if (local_78.dword == 1) {
            if (((-1 < local_6c) && (local_70 == local_8)) && (local_24 < 0)) {
              local_4a8[local_6c].vertex_index[local_70] = iVar15;
            }
          }
          else if (local_78.dword == 0) {
            if (local_24 < 0) {
              if (-1 < iVar15) {
                if (iVar8 < 0x14) {
                  local_70 = local_8;
                  *(int *)((int)local_4a8[0].vertex_index + local_8 * 4 + local_74) = iVar15;
                  iVar6 = (1 - local_8) * 4 + local_74;
                  local_74 = local_74 + 0x20;
                  *(int *)((int)local_4a8 + iVar6) = local_50;
                  iVar6 = iVar8 + 1;
                  local_6c = iVar8;
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
        core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
        shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(g_CSpotViewPtr,0x1f);
        iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
        if (iVar8 != 0) break;
        iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_T);
        if (iVar8 != 0) {
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
        iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_M);
        if (iVar8 != 0) {
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_850);
          iVar8 = 0;
          pCVar16 = local_4db8 + local_8;
          for (iVar12 = 0;
              pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                 (&pCVar16->motion_controller), iVar12 < pCVar5->motion_count;
              iVar12 = iVar12 + 1) {
            pCVar9 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                               (&pCVar16->motion_controller);
            string_data = pCVar9->motions[0].motion_name + iVar8;
            iVar8 = iVar8 + 0x54c;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_850.base,string_data);
          }
          iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&CStack_850,"Select motion",-1,0);
          if (-1 < iVar8) {
            frame_number = 0.0;
            pcVar8 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_850.base,iVar8);
            core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                      (&pCVar16->motion_controller,pcVar8,frame_number);
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_850,0);
        }
        iVar12 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_O);
        iVar8 = iVar6;
        if (iVar12 != 0) {
          bVar4 = !bVar4;
        }
      }
      g_CDemonSetPtr->lighting_quality_mode = iVar5;
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_morph_cpp_SMorphControlPoint_arrdtor_FUN_0052ccb0(local_4a8,0);
      core_morph_cpp_CDeformableModelInstance_arrdtor_FUN_0052ccd0(local_4db8,0);
      return;
    }
  }
  core_morph_cpp_CDeformableModelInstance_arrdtor_FUN_0052ccd0(local_4db8,0);
  return;
}
