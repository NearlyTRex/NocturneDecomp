// Name: shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990
// Address: 0051d990
// Address Range: [[0051d990, 0051e6aa]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh *this_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh *this_ptr)

{
  float fVar1;
  int iVar2;
  CBoundingBox3D *pCVar3;
  CVector3f *pCVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int y1;
  SIZE_T n;
  bool bVar8;
  double dVar9;
  float *in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  char *text;
  int iVar10;
  CPickList CStack_780;
  float local_3d8 [99];
  char acStack_24c [200];
  byte auStack_184 [8];
  int iStack_17c;
  byte local_10c [24];
  float local_f4;
  float local_f0;
  float local_ec;
  char local_e8 [4];
  float local_e4;
  float local_e0;
  char local_dc [12];
  byte local_d0 [24];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  char local_98 [4];
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
  float local_38;
  int local_34;
  float *local_30;
  int local_2c;
  int iStack_28;
  int *local_24;
  int local_20;
  int iStack_1c;
  int *piStack_18;
  float local_14;
  
  if (this_ptr->next_lod == (CLodMesh *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x155a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::chooseLodsInteractive until LODs have been created!");
  }
  *in_stack_00000008 = 1.401297e-39;
  local_30 = (float *)0x1;
  iVar2 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr->next_lod);
  *in_stack_0000000c = iVar2;
  shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500(this_ptr,&local_94);
  shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0((CSpotView *)local_d0);
  shape_spotview_cpp_CSpotView_FUN_005b9620((CSpotView *)local_d0);
  pCVar3 = (CBoundingBox3D *)
           shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                     (this_ptr,&local_70,&local_94.min);
  if (&local_94 != pCVar3) {
    local_94.min.x = (pCVar3->min).x;
    local_94.min.y = (pCVar3->min).y;
    local_94.min.z = (pCVar3->min).z;
  }
  pCVar4 = shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                     (this_ptr,&local_58,&local_94.max);
  if (&local_94.max != pCVar4) {
    local_94.max.x = pCVar4->x;
    local_94.max.y = pCVar4->y;
    local_94.max.z = pCVar4->z;
  }
  local_4c = local_94.min.x + local_94.max.x;
  local_7c = local_4c * 0.5f;
  local_48 = local_94.min.y + local_94.max.y;
  local_44 = local_94.min.z + local_94.max.z;
  local_78 = local_48 * 0.5f;
  local_74 = local_44 * 0.5f;
  if (&local_b8 != &local_7c) {
    local_b8 = local_7c;
    local_b4 = local_78;
    local_b0 = local_74;
  }
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840((CLodMesh *)(auStack_184 + 4));
  local_60 = local_94.max.y - local_94.min.y;
  local_3d8[0] = local_60 * (float)0.75;
  iVar2 = -1;
  local_64 = local_94.max.x - local_94.min.x;
  local_5c = local_94.max.z - local_94.min.z;
  do {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xfc);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (iVar2 == 0) {
      local_a4 = local_3d8[0];
    }
    shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0((CSpotView *)local_10c);
    local_10c._0_4_ = local_d0._0_4_;
    local_10c._4_4_ = local_d0._4_4_;
    local_10c._8_4_ = local_d0._8_4_;
    local_10c._12_4_ = local_d0._12_4_;
    local_10c._16_4_ = local_d0._16_4_;
    local_10c._20_4_ = local_d0._20_4_;
    if (&local_f4 != &local_b8) {
      local_f4 = local_b8;
      local_f0 = local_b4;
      local_ec = local_b0;
    }
    local_e4 = local_a8;
    local_e0 = local_a4;
    local_dc[8] = local_98[0];
    local_dc[9] = local_98[1];
    local_dc[10] = local_98[2];
    local_dc[0xb] = local_98[3];
    local_e8[0] = '\0';
    local_e8[1] = '\0';
    local_e8[2] = '\0';
    local_e8[3] = '\0';
    local_dc[0] = '\0';
    local_dc[1] = '\0';
    local_dc[2] = '\0';
    local_dc[3] = '\0';
    local_dc[4] = '\0';
    local_dc[5] = '\0';
    local_dc[6] = '\0';
    local_dc[7] = '\0';
    shape_spotview_cpp_CSpotView_FUN_005b9a20((CSpotView *)local_10c);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&g_ZeroVector);
    local_14 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(&local_94);
    iVar10 = 0x51dcf0;
    dVar9 = round((double)local_14);
    local_38 = (float)(int)ROUND(dVar9);
    shape_spotview_cpp_CSpotView_FUN_005b9a20((CSpotView *)local_d0);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&g_ZeroVector);
    if (iVar2 < 0) {
      iVar7 = local_34 + -1;
      if (iVar7 < 1) {
LAB_0051e453:
        iVar7 = in_stack_0000000c[iVar7];
      }
      else {
        pfVar5 = in_stack_00000008 + iVar7;
        do {
          if ((int)local_38 < (int)*pfVar5) goto LAB_0051e453;
          iVar7 = iVar7 + -1;
          pfVar5 = pfVar5 + -1;
        } while (0 < iVar7);
        iVar7 = in_stack_0000000c[iVar7];
      }
    }
    else if (iVar2 == 0) {
      iVar7 = this_ptr->next_lod->tri_count;
    }
    else {
      iVar7 = in_stack_0000000c[iVar2];
    }
    if (((iStack_17c < iVar7 + -1) || (iVar7 < iStack_17c)) &&
       (shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(this_ptr), iVar7 = INT_0067d39c,
       INT_0067d39c = iVar7, in_stack_00000014 == 2)) {
      INT_0067d39c = 0;
      shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0((CLodMesh *)auStack_184);
      INT_0067d39c = iVar7;
    }
    if (0 < iVar2) {
      in_stack_0000000c[iVar2] = iStack_17c;
      in_stack_00000008[iVar2] = local_38;
      local_3d8[iVar2 + -1] = local_a8;
    }
    if (iVar2 < 0) {
      engine_2d_c_drawText_FUN_00401fd0("TEST MODE: Adjust view to test LODs.",0,0);
      iVar7 = 0xb;
      text = "Press N to create a new LOD at this distance";
    }
    else if (iVar2 == 0) {
      text = "Viewing LOD 0.  This LOD cannot be edited.";
      iVar7 = 0;
    }
    else {
      _sprintf(acStack_24c,"Editing LOD %d of %d.",iVar2,local_34);
      engine_2d_c_drawText_FUN_00401fd0(acStack_24c,0,0);
      engine_2d_c_drawText_FUN_00401fd0("Use LEFT/RIGHT to adjust face count.",0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Press T to go to test mode.",0,0x16);
      iVar7 = 0x21;
      text = "Press TAB/SHIFT-TAB for prev/next LOD.";
    }
    engine_2d_c_drawText_FUN_00401fd0(text,0,iVar7);
    iStack_28 = g_WindowHeight + -0x18;
    g_ActiveRenderColor = 1;
    engine_2d_c_drawLine_FUN_004011b0(0,0x2b,10,0x2b);
    engine_2d_c_drawLine_FUN_004011b0(0,iStack_28 + 0xb,10,iStack_28 + 0xb);
    iVar7 = 0;
    if (0 < local_34) {
      iStack_3c = iStack_28 + -0x2c;
      local_30 = in_stack_00000008;
      local_24 = in_stack_0000000c;
      do {
        if (iVar7 < 1) {
          _sprintf(acStack_24c,"LOD%d: F=%d",iVar7,*local_24);
        }
        else {
          _sprintf
                    (acStack_24c,"LOD%d: P=%d F=%d",iVar7,in_stack_00000008[iVar7],*local_24);
        }
        y1 = iStack_28 - ((int)*local_30 * iStack_3c) / 0x1e0;
        if (y1 < 0x2c) {
          y1 = 0x2c;
        }
        if (iStack_28 < y1) {
          y1 = iStack_28;
        }
        if ((iVar2 == 0) && (iVar7 == 0)) {
          g_ActiveRenderColor =
               shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                         (g_CEditorToolsPtr);
        }
        else if (iStack_17c == *local_24) {
          g_ActiveRenderColor = 0xfa;
        }
        else {
          g_ActiveRenderColor = 0xff;
        }
        engine_2d_c_drawLine_FUN_004011b0(0,y1,10,y1);
        engine_2d_c_drawText_FUN_00401fd0(acStack_24c,10,y1);
        iVar7 = iVar7 + 1;
        local_30 = local_30 + 1;
        local_24 = local_24 + 1;
      } while (iVar7 < local_34);
    }
    if (iVar2 != 0) {
      iVar7 = iStack_28 - ((iStack_28 + -0x2c) * (int)local_38) / 0x1e0;
      if (iVar7 < 0x2c) {
        iVar7 = 0x2c;
      }
      if (iStack_28 < iVar7) {
        iVar7 = iStack_28;
      }
      g_ActiveRenderColor =
           shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
      engine_2d_c_drawLine_FUN_004011b0(0,iVar7,10,iVar7);
    }
    shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0((CLodMesh *)auStack_184);
    if (in_stack_00000014 == 0) {
      shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990((CLodMesh *)auStack_184,0);
    }
    else if ((in_stack_00000014 < 2) || (in_stack_00000014 == 2)) {
      shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
                ((CLodMesh *)auStack_184,0,iVar10);
    }
    iVar10 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0((CLodMesh *)auStack_184);
    _sprintf
              (acStack_24c,"Current: %d pixelHeight, %d faces",local_38,iVar10);
    engine_2d_c_drawText_FUN_00401fd0(acStack_24c,0,g_WindowHeight + -0xb);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_N);
    iVar10 = local_34;
    if (iVar7 != 0) {
      if (local_34 < in_stack_00000010) {
        in_stack_0000000c[local_34] = iStack_17c;
        in_stack_00000008[local_34] = local_38;
        iVar2 = local_34 + -1;
        local_34 = local_34 + 1;
        local_3d8[iVar2] = local_a8;
        iVar2 = iVar10;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't have more than %d LODs.",in_stack_00000010);
      }
    }
    if (0 < iVar2) {
      iVar10 = in_stack_0000000c[iVar2] / 0x14;
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar7 != 0) {
        iVar10 = iVar10 * 3;
      }
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
      if ((iVar7 != 0) || (iVar10 < 2)) {
        iVar10 = 2;
      }
      iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD4);
      if (iVar7 != 0) {
        in_stack_0000000c[iVar2] = in_stack_0000000c[iVar2] - iVar10;
      }
      iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD6);
      if (iVar7 != 0) {
        in_stack_0000000c[iVar2] = in_stack_0000000c[iVar2] + iVar10;
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F);
      if (iVar10 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                  (g_CEditorToolsPtr,"Enter face count",in_stack_0000000c + iVar2,0,0,0,1);
      }
    }
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_D);
    if ((iVar10 != 0) && (0 < iVar2)) {
      _sprintf(acStack_24c,"Delete LOD %d?",iVar2);
      iVar10 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                         (g_CEditorToolsPtr,acStack_24c);
      if (iVar10 != 0) {
        local_34 = local_34 + -1;
        piStack_18 = (int *)(iVar2 * 4 + 4);
        n = (local_34 - iVar2) * 4;
        memmove(in_stack_00000008 + iVar2,in_stack_00000008 + iVar2 + 1,n)
        ;
        memmove
                  (in_stack_0000000c + iVar2,(void *)((int)in_stack_0000000c + (int)piStack_18),n);
        memmove
                  (local_3d8 + iVar2 + -1,
                   (void *)((int)&CStack_780.selection_state + (int)piStack_18),n);
      }
    }
    local_2c = 0;
    if (0 < local_34) {
      local_20 = local_34 + -1;
      do {
        iVar7 = 1;
        iVar10 = iVar2;
        pfVar5 = in_stack_00000008;
        if (1 < local_20) {
          do {
            pfVar6 = pfVar5 + 1;
            iStack_1c = iVar7 * 4;
            iVar2 = iVar10;
            if ((int)*pfVar6 < (int)pfVar5[2]) {
              local_44 = *pfVar6;
              *pfVar6 = in_stack_00000008[iVar7 + 1];
              in_stack_00000008[iVar7 + 1] = local_44;
              piStack_18 = in_stack_0000000c + iVar7 + 1;
              iStack_40 = in_stack_0000000c[iVar7];
              in_stack_0000000c[iVar7] = *piStack_18;
              *piStack_18 = iStack_40;
              fVar1 = local_3d8[iVar7 + -1];
              local_3d8[iVar7 + -1] = local_3d8[iVar7];
              iVar2 = iVar7 + 1;
              local_3d8[iVar7] = fVar1;
              if ((iVar10 != iVar7) && (bVar8 = iVar10 == iVar2, iVar2 = iVar10, bVar8)) {
                iVar2 = iVar7;
              }
            }
            iVar7 = iVar7 + 1;
            iVar10 = iVar2;
            pfVar5 = pfVar6;
          } while (iVar7 < local_20);
        }
        local_2c = local_2c + 1;
      } while (local_2c < local_34);
    }
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB);
    if (iVar10 != 0) {
      iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar10 == 0) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = iVar2 + -1;
      }
      if (iVar2 < 0) {
        iVar2 = local_34 + -1;
      }
      if (local_34 <= iVar2) {
        iVar2 = 0;
      }
    }
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_T);
    if (iVar10 != 0) {
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = -1;
      }
    }
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar10 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_780);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_780.base,"Accept LOD settings.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_780.base,"Cancel LOD selection.")
      ;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_780.base,"Oops, go back to editing the LODs.");
      iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&CStack_780,"Accept or Cancel?",-1,0);
      pfVar5 = local_30;
      if (iVar10 == 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_780,0);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)(auStack_184 + 4),0);
        return (int)pfVar5;
      }
      if (iVar10 == 1) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_780,0);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)(auStack_184 + 4),0);
        return -1;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_780,0);
    }
    if (-1 < iVar2) {
      local_a4 = local_3d8[iVar2];
    }
    shape_spotview_cpp_CSpotView_FUN_005b9670((CSpotView *)local_d0);
  } while( true );
}
