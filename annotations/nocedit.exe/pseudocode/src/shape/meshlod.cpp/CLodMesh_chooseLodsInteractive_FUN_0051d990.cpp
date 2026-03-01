// Name: shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990
// Address: 0051d990
// Address Range: [[0051d990, 0051e6aa]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh *this_ptr)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  CBoundingBox3D *pCVar4;
  CVector3f *pCVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  SIZE_T n;
  bool bVar10;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  char *text;
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
  
  if (this_ptr->next_lod == (CLodMesh *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x155a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::chooseLodsInteractive until LODs have been created!");
  }
  *in_stack_00000008 = 999999;
  local_30 = 1;
  iVar3 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr->next_lod);
  *in_stack_0000000c = iVar3;
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
  local_4c = local_94.min.x + local_94.max.x;
  local_7c = local_4c * 0.5f;
  local_48 = local_94.min.y + local_94.max.y;
  local_44 = local_94.min.z + local_94.max.z;
  local_78 = local_48 * 0.5f;
  local_74 = local_44 * 0.5f;
  if (&local_d0.loat_at != (CVector3f *)&local_7c) {
    local_d0.loat_at.x = local_7c;
    local_d0.loat_at.y = local_78;
    local_d0.loat_at.z = local_74;
  }
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840(&local_180);
  local_60 = local_94.max.y - local_94.min.y;
  local_3d8[0] = local_60 * (float)0.75;
  iVar3 = -1;
  local_64 = local_94.max.x - local_94.min.x;
  local_5c = local_94.max.z - local_94.min.z;
  do {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xfc);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (iVar3 == 0) {
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
    local_14 = (int *)core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(&local_94);
    local_34 = (int)ROUND(ROUND((float)local_14));
    shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(&local_d0);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&g_ZeroVector.f);
    if (iVar3 < 0) {
      iVar8 = local_30 + -1;
      if (iVar8 < 1) {
LAB_0051e453:
        iVar8 = in_stack_0000000c[iVar8];
      }
      else {
        piVar6 = in_stack_00000008 + iVar8;
        do {
          if (local_34 < *piVar6) goto LAB_0051e453;
          iVar8 = iVar8 + -1;
          piVar6 = piVar6 + -1;
        } while (0 < iVar8);
        iVar8 = in_stack_0000000c[iVar8];
      }
    }
    else if (iVar3 == 0) {
      iVar8 = this_ptr->next_lod->tri_count;
    }
    else {
      iVar8 = in_stack_0000000c[iVar3];
    }
    if (((local_180.tri_count < iVar8 + -1) || (iVar8 < local_180.tri_count)) &&
       (shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(this_ptr), iVar8 = INT_0067d39c,
       INT_0067d39c = iVar8, in_stack_00000014 == 2)) {
      INT_0067d39c = 0;
      shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0(&local_180);
      INT_0067d39c = iVar8;
    }
    if (0 < iVar3) {
      in_stack_0000000c[iVar3] = local_180.tri_count;
      in_stack_00000008[iVar3] = local_34;
      local_3d8[iVar3] = local_d0.distance;
    }
    if (iVar3 < 0) {
      engine_2d_c_drawText_FUN_00401fd0("TEST MODE: Adjust view to test LODs.",0,0);
      iVar8 = 0xb;
      text = "Press N to create a new LOD at this distance";
    }
    else if (iVar3 == 0) {
      text = "Viewing LOD 0.  This LOD cannot be edited.";
      iVar8 = 0;
    }
    else {
      _sprintf(local_248,"Editing LOD %d of %d.",iVar3,local_30);
      engine_2d_c_drawText_FUN_00401fd0(local_248,0,0);
      engine_2d_c_drawText_FUN_00401fd0("Use LEFT/RIGHT to adjust face count.",0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Press T to go to test mode.",0,0x16);
      iVar8 = 0x21;
      text = "Press TAB/SHIFT-TAB for prev/next LOD.";
    }
    engine_2d_c_drawText_FUN_00401fd0(text,0,iVar8);
    local_24 = g_WindowHeight + -0x18;
    g_ActiveRenderColor = 1;
    engine_2d_c_drawLine_FUN_004011b0(0,0x2b,10,0x2b);
    engine_2d_c_drawLine_FUN_004011b0(0,local_24 + 0xb,10,local_24 + 0xb);
    iVar8 = 0;
    if (0 < local_30) {
      local_38 = local_24 + -0x2c;
      local_2c = in_stack_00000008;
      local_20 = in_stack_0000000c;
      do {
        if (iVar8 < 1) {
          _sprintf(local_248,"LOD%d: F=%d",iVar8,*local_20);
        }
        else {
          _sprintf
                    (local_248,"LOD%d: P=%d F=%d",iVar8,in_stack_00000008[iVar8],*local_20);
        }
        iVar9 = local_24 - (*local_2c * local_38) / 0x1e0;
        if (iVar9 < 0x2c) {
          iVar9 = 0x2c;
        }
        if (local_24 < iVar9) {
          iVar9 = local_24;
        }
        if ((iVar3 == 0) && (iVar8 == 0)) {
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
    if (iVar3 != 0) {
      iVar8 = local_24 - ((local_24 + -0x2c) * local_34) / 0x1e0;
      if (iVar8 < 0x2c) {
        iVar8 = 0x2c;
      }
      if (local_24 < iVar8) {
        iVar8 = local_24;
      }
      g_ActiveRenderColor =
           shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
      engine_2d_c_drawLine_FUN_004011b0(0,iVar8,10,iVar8);
    }
    shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(&local_180);
    if (in_stack_00000014 == 0) {
      shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990(&local_180,0);
    }
    else if ((in_stack_00000014 < 2) || (in_stack_00000014 == 2)) {
      shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0(&local_180,0);
    }
    iVar8 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(&local_180);
    _sprintf(local_248,"Current: %d pixelHeight, %d faces",local_34,iVar8);
    engine_2d_c_drawText_FUN_00401fd0(local_248,0,g_WindowHeight + -0xb);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_N);
    iVar8 = local_30;
    if (iVar9 != 0) {
      if (local_30 < in_stack_00000010) {
        in_stack_0000000c[local_30] = local_180.tri_count;
        in_stack_00000008[local_30] = local_34;
        pfVar1 = local_3d8 + local_30;
        local_30 = local_30 + 1;
        *pfVar1 = local_d0.distance;
        iVar3 = iVar8;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't have more than %d LODs.",in_stack_00000010);
      }
    }
    if (0 < iVar3) {
      iVar8 = in_stack_0000000c[iVar3] / 0x14;
      iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar9 != 0) {
        iVar8 = iVar8 * 3;
      }
      iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
      if ((iVar9 != 0) || (iVar8 < 2)) {
        iVar8 = 2;
      }
      iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD4);
      if (iVar9 != 0) {
        in_stack_0000000c[iVar3] = in_stack_0000000c[iVar3] - iVar8;
      }
      iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD6);
      if (iVar9 != 0) {
        in_stack_0000000c[iVar3] = in_stack_0000000c[iVar3] + iVar8;
      }
      iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F);
      if (iVar8 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                  (g_CEditorToolsPtr,"Enter face count",in_stack_0000000c + iVar3,0,0,0,1);
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_D);
    if ((iVar8 != 0) && (0 < iVar3)) {
      _sprintf(local_248,"Delete LOD %d?",iVar3);
      iVar8 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,local_248);
      if (iVar8 != 0) {
        local_30 = local_30 + -1;
        local_14 = (int *)(iVar3 * 4 + 4);
        n = (local_30 - iVar3) * 4;
        memmove(in_stack_00000008 + iVar3,in_stack_00000008 + iVar3 + 1,n)
        ;
        memmove
                  (in_stack_0000000c + iVar3,(void *)((int)in_stack_0000000c + (int)local_14),n);
        memmove
                  (local_3d8 + iVar3,(void *)((int)local_3d8 + (int)local_14),n);
      }
    }
    iStack_28 = 0;
    if (0 < local_30) {
      iStack_1c = local_30 + -1;
      do {
        iVar9 = 1;
        iVar8 = iVar3;
        piVar6 = in_stack_00000008;
        if (1 < iStack_1c) {
          do {
            piVar7 = piVar6 + 1;
            iStack_18 = iVar9 * 4;
            iVar3 = iVar8;
            if (*piVar7 < piVar6[2]) {
              iStack_40 = *piVar7;
              *piVar7 = in_stack_00000008[iVar9 + 1];
              in_stack_00000008[iVar9 + 1] = iStack_40;
              local_14 = in_stack_0000000c + iVar9 + 1;
              iStack_3c = in_stack_0000000c[iVar9];
              in_stack_0000000c[iVar9] = *local_14;
              *local_14 = iStack_3c;
              fVar2 = local_3d8[iVar9];
              local_3d8[iVar9] = local_3d8[iVar9 + 1];
              iVar3 = iVar9 + 1;
              local_3d8[iVar9 + 1] = fVar2;
              if ((iVar8 != iVar9) && (bVar10 = iVar8 == iVar3, iVar3 = iVar8, bVar10)) {
                iVar3 = iVar9;
              }
            }
            iVar9 = iVar9 + 1;
            iVar8 = iVar3;
            piVar6 = piVar7;
          } while (iVar9 < iStack_1c);
        }
        iStack_28 = iStack_28 + 1;
      } while (iStack_28 < local_30);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB);
    if (iVar8 != 0) {
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar8 == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = iVar3 + -1;
      }
      if (iVar3 < 0) {
        iVar3 = local_30 + -1;
      }
      if (local_30 <= iVar3) {
        iVar3 = 0;
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_T);
    if (iVar8 != 0) {
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = -1;
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar8 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_780);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_780.base,"Accept LOD settings.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_780.base,"Cancel LOD selection.")
      ;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_780.base,"Oops, go back to editing the LODs.");
      iVar9 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&CStack_780,"Accept or Cancel?",-1,0);
      iVar8 = local_30;
      if (iVar9 == 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_780,0);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_180,0);
        return iVar8;
      }
      if (iVar9 == 1) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_780,0);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_180,0);
        return -1;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_780,0);
    }
    if (-1 < iVar3) {
      local_d0.distance = local_3d8[iVar3];
    }
    shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(&local_d0,0xf);
  } while( true );
}
