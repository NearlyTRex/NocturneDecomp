// Name: shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990
// Address: 0051d990
// Address Range: [[0051d990, 0051e6aa]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh *this_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh *this_ptr)

{
  byte *puVar1;
  uint uVar2;
  int iVar3;
  CBoundingBox3D *pCVar4;
  CVector3f *pCVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int y1;
  SIZE_T n;
  bool bVar9;
  double dVar10;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000024;
  char *text;
  int iVar11;
  byte auStack_72c [856];
  char acStack_3d4 [52];
  uint auStack_3a0 [7];
  float afStack_384 [78];
  char acStack_24c [56];
  char acStack_214 [144];
  byte auStack_184 [8];
  int iStack_17c;
  int iStack_174;
  byte auStack_12c [36];
  SLodSamplePoint *local_108;
  float local_104;
  float local_100;
  float local_fc;
  CLodMesh *local_f8;
  _FILE *local_f4;
  float local_f0;
  float local_ec;
  int local_e8;
  CLodEdge *local_e4;
  float local_e0;
  CLodEdge *local_dc;
  SSpatialGrid *local_d8;
  int *local_d4;
  byte local_d0 [8];
  float local_c8;
  float local_c4;
  float local_c0;
  CLodMesh *local_bc;
  _FILE *local_b8;
  float local_b4;
  float local_b0;
  CLodEdge *local_a8;
  float local_a4;
  char acStack_a0 [8];
  int *local_98;
  CBoundingBox3D local_94;
  byte local_7c [8];
  float local_74;
  CVector3f local_70;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  float local_4c;
  float local_48;
  float local_44;
  int iStack_3c;
  int local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int iStack_28;
  int *local_24;
  float local_14;
  
  if (this_ptr->next_lod == (CLodMesh *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x155a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::chooseLodsInteractive until LODs have been created!");
  }
  *in_stack_00000008 = 999999;
  local_30 = (int *)0x1;
  iVar3 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr->next_lod);
  *in_stack_0000000c = iVar3;
  shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500(this_ptr,&local_94);
  shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0((CSpotView *)local_d0);
  shape_spotview_cpp_CSpotView_FUN_005b9620((CSpotView *)local_d0);
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
  local_7c._0_4_ = local_4c * 0.5f;
  local_48 = local_94.min.y + local_94.max.y;
  local_44 = local_94.min.z + local_94.max.z;
  local_7c._4_4_ = local_48 * 0.5f;
  local_74 = local_44 * 0.5f;
  if (&local_b8 != (_FILE **)local_7c) {
    local_b8 = (_FILE *)local_7c._0_4_;
    local_b4 = (float)local_7c._4_4_;
    local_b0 = local_74;
  }
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840((CLodMesh *)(auStack_184 + 4));
  local_60 = local_94.max.y - local_94.min.y;
  auStack_72c._852_4_ = local_60 * (float)0.75;
  iVar3 = -1;
  local_64 = local_94.max.x - local_94.min.x;
  local_5c = local_94.max.z - local_94.min.z;
  do {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xfc);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (iVar3 == 0) {
      local_a4 = (float)auStack_72c._852_4_;
    }
    shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0((CSpotView *)(auStack_12c + 0x20));
    auStack_12c._32_4_ = local_d0._0_4_;
    local_108 = (SLodSamplePoint *)local_d0._4_4_;
    local_104 = local_c8;
    local_100 = local_c4;
    local_fc = local_c0;
    local_f8 = local_bc;
    if (&local_f4 != &local_b8) {
      local_f4 = local_b8;
      local_f0 = local_b4;
      local_ec = local_b0;
    }
    local_e4 = local_a8;
    local_e0 = local_a4;
    local_d4 = local_98;
    local_e8 = 0;
    local_dc = (CLodEdge *)0x0;
    local_d8 = (SSpatialGrid *)0x0;
    shape_spotview_cpp_CSpotView_FUN_005b9a20((CSpotView *)(auStack_12c + 0x20));
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&g_ZeroVector);
    local_14 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(&local_94);
    iVar11 = 0x51dcf0;
    dVar10 = round((double)local_14);
    local_38 = (int)ROUND(dVar10);
    shape_spotview_cpp_CSpotView_FUN_005b9a20((CSpotView *)local_d0);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&g_ZeroVector);
    if (iVar3 < 0) {
      iVar8 = local_34 + -1;
      if (iVar8 < 1) {
LAB_0051e453:
        iVar8 = in_stack_0000000c[iVar8];
      }
      else {
        piVar6 = in_stack_00000008 + iVar8;
        do {
          if (local_38 < *piVar6) goto LAB_0051e453;
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
    if (((iStack_17c < iVar8 + -1) || (iVar8 < iStack_17c)) &&
       (shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(this_ptr), iVar8 = INT_0067d39c,
       INT_0067d39c = iVar8, in_stack_00000014 == 2)) {
      INT_0067d39c = 0;
      shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0((CLodMesh *)auStack_184);
      INT_0067d39c = iVar8;
    }
    if (0 < iVar3) {
      in_stack_0000000c[iVar3] = iStack_17c;
      in_stack_00000008[iVar3] = local_38;
      *(CLodEdge **)(acStack_3d4 + iVar3 * 4 + -8) = local_a8;
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
      _sprintf(acStack_24c,"Editing LOD %d of %d.",iVar3,local_34);
      engine_2d_c_drawText_FUN_00401fd0(acStack_24c,0,0);
      engine_2d_c_drawText_FUN_00401fd0("Use LEFT/RIGHT to adjust face count.",0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Press T to go to test mode.",0,0x16);
      iVar8 = 0x21;
      text = "Press TAB/SHIFT-TAB for prev/next LOD.";
    }
    engine_2d_c_drawText_FUN_00401fd0(text,0,iVar8);
    iStack_28 = g_WindowHeight + -0x18;
    g_ActiveRenderColor = 1;
    engine_2d_c_drawLine_FUN_004011b0(0,0x2b,10,0x2b);
    engine_2d_c_drawLine_FUN_004011b0(0,iStack_28 + 0xb,10,iStack_28 + 0xb);
    iVar8 = 0;
    if (0 < local_34) {
      iStack_3c = iStack_28 + -0x2c;
      local_30 = in_stack_00000008;
      local_24 = in_stack_0000000c;
      do {
        if (iVar8 < 1) {
          _sprintf(acStack_24c,"LOD%d: F=%d",iVar8,*local_24);
        }
        else {
          _sprintf
                    (acStack_24c,"LOD%d: P=%d F=%d",iVar8,in_stack_00000008[iVar8],*local_24);
        }
        y1 = iStack_28 - (*local_30 * iStack_3c) / 0x1e0;
        if (y1 < 0x2c) {
          y1 = 0x2c;
        }
        if (iStack_28 < y1) {
          y1 = iStack_28;
        }
        if ((iVar3 == 0) && (iVar8 == 0)) {
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
        iVar8 = iVar8 + 1;
        local_30 = local_30 + 1;
        local_24 = local_24 + 1;
      } while (iVar8 < local_34);
    }
    if (iVar3 != 0) {
      iVar8 = iStack_28 - ((iStack_28 + -0x2c) * local_38) / 0x1e0;
      if (iVar8 < 0x2c) {
        iVar8 = 0x2c;
      }
      if (iStack_28 < iVar8) {
        iVar8 = iStack_28;
      }
      g_ActiveRenderColor =
           shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
      engine_2d_c_drawLine_FUN_004011b0(0,iVar8,10,iVar8);
    }
    shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0((CLodMesh *)auStack_184);
    if (in_stack_00000014 == 0) {
      shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990((CLodMesh *)auStack_184,0);
    }
    else if ((in_stack_00000014 < 2) || (in_stack_00000014 == 2)) {
      shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
                ((CLodMesh *)auStack_184,0,iVar11);
    }
    iVar11 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0((CLodMesh *)auStack_184);
    _sprintf
              (acStack_24c,"Current: %d pixelHeight, %d faces",local_38,iVar11);
    engine_2d_c_drawText_FUN_00401fd0(acStack_24c,0,g_WindowHeight + -0xb);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x31);
    iVar11 = local_2c;
    if (iVar8 != 0) {
      if (local_2c < in_stack_00000010) {
        in_stack_0000000c[local_2c] = iStack_174;
        in_stack_00000008[local_2c] = (int)local_30;
        iVar3 = local_2c * 4;
        local_2c = local_2c + 1;
        *(uint *)(acStack_3d4 + iVar3) = acStack_a0._0_4_;
        iVar3 = iVar11;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't have more than %d LODs.",in_stack_00000010);
      }
    }
    if (0 < iVar3) {
      iVar11 = in_stack_0000000c[iVar3] / 0x14;
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar8 != 0) {
        iVar11 = iVar11 * 3;
      }
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
      if ((iVar8 != 0) || (iVar11 < 2)) {
        iVar11 = 2;
      }
      iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4b);
      if (iVar8 != 0) {
        in_stack_0000000c[iVar3] = in_stack_0000000c[iVar3] - iVar11;
      }
      iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4d);
      if (iVar8 != 0) {
        in_stack_0000000c[iVar3] = in_stack_0000000c[iVar3] + iVar11;
      }
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x21);
      if (iVar11 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                  (g_CEditorToolsPtr,"Enter face count",in_stack_0000000c + iVar3,0,0,0,1);
      }
    }
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
    if ((iVar11 != 0) && (0 < iVar3)) {
      _sprintf(acStack_214,"Delete LOD %d?",iVar3);
      iVar11 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                         (g_CEditorToolsPtr,acStack_214);
      if (iVar11 != 0) {
        this_ptr = (CLodMesh *)((int)&this_ptr[-1].scale_factor + 3);
        n = ((int)this_ptr - iVar3) * 4;
        memmove(in_stack_00000008 + iVar3,in_stack_00000008 + iVar3 + 1,n)
        ;
        memmove(in_stack_0000000c + iVar3,in_stack_0000000c + iVar3 + 1,n)
        ;
        memmove(auStack_3a0 + iVar3 + -1,auStack_3a0 + iVar3,n);
      }
    }
    in_stack_0000000c = (int *)0x0;
    if (0 < (int)this_ptr) {
      puVar1 = (byte *)((int)&this_ptr[-1].scale_factor + 3);
      do {
        iVar8 = 1;
        iVar11 = iVar3;
        piVar6 = in_stack_00000008;
        if (1 < (int)puVar1) {
          do {
            piVar7 = piVar6 + 1;
            iVar3 = iVar11;
            if (*piVar7 < piVar6[2]) {
              iVar3 = *piVar7;
              *piVar7 = in_stack_00000008[iVar8 + 1];
              in_stack_00000008[iVar8 + 1] = iVar3;
              iVar3 = in_stack_0000000c[iVar8];
              in_stack_0000000c[iVar8] = in_stack_0000000c[iVar8 + 1];
              in_stack_0000000c[iVar8 + 1] = iVar3;
              uVar2 = auStack_3a0[iVar8 + -1];
              auStack_3a0[iVar8 + -1] = auStack_3a0[iVar8];
              iVar3 = iVar8 + 1;
              auStack_3a0[iVar8] = uVar2;
              if ((iVar11 != iVar8) && (bVar9 = iVar11 == iVar3, iVar3 = iVar11, bVar9)) {
                iVar3 = iVar8;
              }
            }
            iVar8 = iVar8 + 1;
            iVar11 = iVar3;
            piVar6 = piVar7;
          } while (iVar8 < (int)puVar1);
        }
        in_stack_0000000c = (int *)((int)in_stack_0000000c + 1);
      } while ((int)in_stack_0000000c < (int)this_ptr);
    }
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
    if (iVar11 != 0) {
      iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar11 == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = iVar3 + -1;
      }
      if (iVar3 < 0) {
        iVar3 = in_stack_00000014 - 1;
      }
      if ((int)in_stack_00000014 <= iVar3) {
        iVar3 = 0;
      }
    }
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x14);
    if (iVar11 != 0) {
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = -1;
      }
    }
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar11 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_72c);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)auStack_72c,"Accept LOD settings.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)auStack_72c,"Cancel LOD selection.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)auStack_72c,"Oops, go back to editing the LODs.");
      iVar11 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         ((CPickList *)auStack_72c,"Accept or Cancel?",-1,0);
      if (iVar11 == 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)auStack_72c,0);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)auStack_12c,0);
        return in_stack_00000024;
      }
      if (iVar11 == 1) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)auStack_72c,0);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)auStack_12c,0);
        return -1;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)auStack_72c,0);
    }
    if (-1 < iVar3) {
      local_58.z = afStack_384[iVar3];
    }
    shape_spotview_cpp_CSpotView_FUN_005b9670((CSpotView *)local_7c);
  } while( true );
}
