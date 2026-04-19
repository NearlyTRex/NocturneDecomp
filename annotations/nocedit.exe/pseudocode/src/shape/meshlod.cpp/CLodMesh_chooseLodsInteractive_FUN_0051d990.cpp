// Name: shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990
// Address: 0051d990
// Address Range: [[0051d990, 0051e6aa]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh *this_ptr,int *pixel_heights,int *face_counts,int max_lods,int render_mode)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh *this_ptr,int *pixel_heights,int *face_counts,int max_lods,int render_mode)

{
  int *piVar1;
  int iVar3;
  CBoundingBox3D *pCVar4;
  CVector3f *pCVar5;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar6;
  int iVar7;
  int iVar9;
  SIZE_T n;
  bool bVar10;
  CPickList CStack_780;
  float local_3d8 [100];
  char local_248 [200];
  CLodMesh local_180;
  CSpotView local_10c;
  CSpotView local_d0;
  CBoundingBox3D local_94;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  float local_4c;
  float local_48;
  float local_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  int iStack_28;
  int local_24;
  int *local_20;
  int iStack_1c;
  int iStack_18;
  int *local_14;
  char *text;
  float *pfVar1;
  float fVar2;
  
  if (this_ptr->next_lod == (CLodMesh *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x155a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::chooseLodsInteractive until LODs have been created!");
  }
  *pixel_heights = 999999;
  local_30 = 1;
  iVar3 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr->next_lod);
  *face_counts = iVar3;
  shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500(this_ptr,&local_94);
  shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0(&local_d0);
  shape_spotview_cpp_CSpotView_reset_FUN_005b9620(&local_d0,0x1f);
  pCVar4 = (CBoundingBox3D *)
           shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                     (this_ptr,&local_70,&local_94.min);
  if (&local_94 != pCVar4) {
    local_94.min.x = (pCVar4->min).x;
    local_94.min.y = (pCVar4->min).y;
    local_94.min.z = (pCVar4->min).z;
  }
  pCVar5 = shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                     (this_ptr,&local_58,&local_94.max);
  if (&local_94.max != pCVar5) {
    local_94.max.x = pCVar5->x;
    local_94.max.y = pCVar5->y;
    local_94.max.z = pCVar5->z;
  }
  local_7c = (local_94.min.x + local_94.max.x) * 0.5f;
  local_78 = (local_94.min.y + local_94.max.y) * 0.5f;
  local_74 = (local_94.min.z + local_94.max.z) * 0.5f;
  if (&local_d0.loat_at != (CVector3f *)&local_7c) {
    local_d0.loat_at.x = local_7c;
    local_d0.loat_at.y = local_78;
    local_d0.loat_at.z = local_74;
  }
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840(&local_180);
  local_3d8[0] = (local_94.max.y - local_94.min.y) * (float)0.75;
  iVar7 = -1;
  do {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xfc);
    wincore_windll_cpp_clearZBufferNative_FUN_005b3ed4();
    if (iVar7 == 0) {
      local_d0.distance = local_3d8[0];
    }
    shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0(&local_10c);
    local_10c.default_distance = local_d0.default_distance;
    local_10c.default_zoom = local_d0.default_zoom;
    local_10c.default_pitch = local_d0.default_pitch;
    local_10c.default_yaw = local_d0.default_yaw;
    local_10c.default_pan_x = local_d0.default_pan_x;
    local_10c.default_pan_y = local_d0.default_pan_y;
    if (&local_10c.loat_at != &local_d0.loat_at) {
      local_10c.loat_at.x = local_d0.loat_at.x;
      local_10c.loat_at.y = local_d0.loat_at.y;
      local_10c.loat_at.z = local_d0.loat_at.z;
    }
    local_10c.yaw = local_d0.yaw;
    local_10c.distance = local_d0.distance;
    local_10c.zoom = local_d0.zoom;
    local_10c.pitch = 0.0;
    local_10c.pan_x = 0.0;
    local_10c.pan_y = 0.0;
    shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(&local_10c);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&g_ZeroVector.f);
    fVar3 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(&local_94);
    iVar5 = (int)ROUND(ROUND(fVar3));
    shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(&local_d0);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&g_ZeroVector.f);
    if (iVar7 < 0) {
      iVar6 = local_30 + -1;
      if (iVar6 < 1) {
LAB_0051e453:
        iVar6 = face_counts[iVar6];
      }
      else {
        piVar6 = pixel_heights + iVar6;
        do {
          if (iVar5 < *piVar6) goto LAB_0051e453;
          iVar6 = iVar6 + -1;
          piVar6 = piVar6 + -1;
        } while (0 < iVar6);
        iVar6 = face_counts[iVar6];
      }
    }
    else if (iVar7 == 0) {
      iVar6 = this_ptr->next_lod->tri_count;
    }
    else {
      iVar6 = face_counts[iVar7];
    }
    if (((local_180.tri_count < iVar6 + -1) || (iVar6 < local_180.tri_count)) &&
       (shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(this_ptr,iVar6,&local_180),
       iVar6 = INT_0067d39c, INT_0067d39c = iVar6, render_mode == 2)) {
      INT_0067d39c = 0;
      shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0(&local_180);
      INT_0067d39c = iVar6;
    }
    if (0 < iVar7) {
      face_counts[iVar7] = local_180.tri_count;
      pixel_heights[iVar7] = iVar5;
      local_3d8[iVar7] = local_d0.distance;
    }
    if (iVar7 < 0) {
      engine_2d_c_drawText_FUN_00401fd0("TEST MODE: Adjust view to test LODs.",0,0);
      iVar6 = 0xb;
      text = "Press N to create a new LOD at this distance";
    }
    else if (iVar7 == 0) {
      text = "Viewing LOD 0.  This LOD cannot be edited.";
      iVar6 = 0;
    }
    else {
      _sprintf(local_248,"Editing LOD %d of %d.",iVar7,local_30);
      engine_2d_c_drawText_FUN_00401fd0(local_248,0,0);
      engine_2d_c_drawText_FUN_00401fd0("Use LEFT/RIGHT to adjust face count.",0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Press T to go to test mode.",0,0x16);
      iVar6 = 0x21;
      text = "Press TAB/SHIFT-TAB for prev/next LOD.";
    }
    engine_2d_c_drawText_FUN_00401fd0(text,0,iVar6);
    iVar6 = g_WindowHeight;
    iVar4 = g_WindowHeight + -0x18;
    g_ActiveRenderColor = 1;
    engine_2d_c_drawLine_FUN_004011b0(0,0x2b,10,0x2b);
    engine_2d_c_drawLine_FUN_004011b0(0,iVar6 + -0xd,10,iVar6 + -0xd);
    iVar8 = 0;
    if (0 < local_30) {
      local_2c = pixel_heights;
      local_20 = face_counts;
      do {
        if (iVar8 < 1) {
          _sprintf(local_248,"LOD%d: F=%d",iVar8,*local_20);
        }
        else {
          _sprintf(local_248,"LOD%d: P=%d F=%d",iVar8,pixel_heights[iVar8],*local_20);
        }
        iVar9 = iVar4 - (*local_2c * (iVar6 + -0x44)) / 0x1e0;
        if (iVar9 < 0x2c) {
          iVar9 = 0x2c;
        }
        if (iVar4 < iVar9) {
          iVar9 = iVar4;
        }
        if ((iVar7 == 0) && (iVar8 == 0)) {
          g_ActiveRenderColor =
               shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                         (g_CEditorToolsPtr);
        }
        else if (local_180.tri_count == *local_20) {
          g_ActiveRenderColor = 0xfa;
        }
        else {
          g_ActiveRenderColor = 0xff;
        }
        engine_2d_c_drawLine_FUN_004011b0(0,iVar9,10,iVar9);
        engine_2d_c_drawText_FUN_00401fd0(local_248,10,iVar9);
        iVar8 = iVar8 + 1;
        local_2c = local_2c + 1;
        local_20 = local_20 + 1;
      } while (iVar8 < local_30);
    }
    if (iVar7 != 0) {
      iVar6 = iVar4 - ((iVar6 + -0x44) * iVar5) / 0x1e0;
      if (iVar6 < 0x2c) {
        iVar6 = 0x2c;
      }
      if (iVar4 < iVar6) {
        iVar6 = iVar4;
      }
      g_ActiveRenderColor =
           shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
      engine_2d_c_drawLine_FUN_004011b0(0,iVar6,10,iVar6);
    }
    shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(&local_180);
    if (render_mode == 0) {
      shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990(&local_180,0);
    }
    else if (((uint)render_mode < 2) || (render_mode == 2)) {
      shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0(&local_180,0);
    }
    iVar6 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(&local_180);
    _sprintf(local_248,"Current: %d pixelHeight, %d faces",iVar5,iVar6);
    engine_2d_c_drawText_FUN_00401fd0(local_248,0,g_WindowHeight + -0xb);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_N);
    if (iVar6 != 0) {
      if (local_30 < max_lods) {
        face_counts[local_30] = local_180.tri_count;
        pixel_heights[local_30] = iVar5;
        pfVar1 = local_3d8 + local_30;
        *pfVar1 = local_d0.distance;
        iVar7 = local_30;
        local_30 = local_30 + 1;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't have more than %d LODs.",max_lods);
      }
    }
    if (0 < iVar7) {
      iVar5 = face_counts[iVar7] / 0x14;
      iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar6 != 0) {
        iVar5 = iVar5 * 3;
      }
      iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
      if ((iVar6 != 0) || (iVar5 < 2)) {
        iVar5 = 2;
      }
      iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD4);
      if (iVar6 != 0) {
        face_counts[iVar7] = face_counts[iVar7] - iVar5;
      }
      iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD6);
      if (iVar6 != 0) {
        face_counts[iVar7] = face_counts[iVar7] + iVar5;
      }
      iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F);
      if (iVar5 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                  (g_CEditorToolsPtr,"Enter face count",face_counts + iVar7,0,0,0,1);
      }
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_D);
    if ((iVar5 != 0) && (0 < iVar7)) {
      _sprintf(local_248,"Delete LOD %d?",iVar7);
      iVar5 = shape_edittool_cpp_CEditorTools_showYesNoDialog1_FUN_0049f060
                        (g_CEditorToolsPtr,local_248);
      if (iVar5 != 0) {
        local_30 = local_30 + -1;
        n = (local_30 - iVar7) * 4;
        memmove(pixel_heights + iVar7,pixel_heights + iVar7 + 1,n);
        memmove(face_counts + iVar7,face_counts + iVar7 + 1,n);
        memmove(local_3d8 + iVar7,local_3d8 + iVar7 + 1,n);
      }
    }
    iStack_28 = 0;
    if (0 < local_30) {
      do {
        iVar6 = 1;
        iVar5 = iVar7;
        piVar1 = pixel_heights;
        if (1 < local_30 + -1) {
          do {
            piVar7 = piVar1 + 1;
            iVar7 = iVar5;
            if (*piVar7 < piVar1[2]) {
              iVar7 = *piVar7;
              *piVar7 = pixel_heights[iVar6 + 1];
              pixel_heights[iVar6 + 1] = iVar7;
              iVar7 = face_counts[iVar6];
              face_counts[iVar6] = face_counts[iVar6 + 1];
              face_counts[iVar6 + 1] = iVar7;
              fVar2 = local_3d8[iVar6];
              local_3d8[iVar6] = local_3d8[iVar6 + 1];
              iVar7 = iVar6 + 1;
              local_3d8[iVar6 + 1] = fVar2;
              if ((iVar5 != iVar6) && (bVar10 = iVar5 == iVar7, iVar7 = iVar5, bVar10)) {
                iVar7 = iVar6;
              }
            }
            iVar6 = iVar6 + 1;
            iVar5 = iVar7;
            piVar1 = piVar7;
          } while (iVar6 < local_30 + -1);
        }
        iStack_28 = iStack_28 + 1;
      } while (iStack_28 < local_30);
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB);
    if (iVar5 != 0) {
      iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar5 == 0) {
        iVar7 = iVar7 + 1;
      }
      else {
        iVar7 = iVar7 + -1;
      }
      if (iVar7 < 0) {
        iVar7 = local_30 + -1;
      }
      if (local_30 <= iVar7) {
        iVar7 = 0;
      }
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_T);
    if (iVar5 != 0) {
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = -1;
      }
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar5 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_780);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_780.base,"Accept LOD settings.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_780.base,"Cancel LOD selection.")
      ;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_780.base,"Oops, go back to editing the LODs.");
      iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&CStack_780,"Accept or Cancel?",-1,0);
      if (iVar5 == 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_780,0);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_180,0);
        return local_30;
      }
      if (iVar5 == 1) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_780,0);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_180,0);
        return -1;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_780,0);
    }
    if (-1 < iVar7) {
      local_d0.distance = local_3d8[iVar7];
    }
    shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(&local_d0,0xf);
  } while( true );
}
