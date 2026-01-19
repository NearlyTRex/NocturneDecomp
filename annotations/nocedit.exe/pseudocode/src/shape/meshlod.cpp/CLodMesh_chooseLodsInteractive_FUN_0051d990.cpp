// Name: shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990
// Address: 0051d990
// Address Range: [[0051d990, 0051e6aa]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh * this_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh *this_ptr)

{
  byte *puVar1;
  uint uVar2;
  uchar uVar3;
  int iVar4;
  CBoundingBox3D *pCVar5;
  CVector3f *pCVar6;
  CSpotView *this_ptr_00;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int y1;
  SIZE_T n;
  bool bVar10;
  double dVar11;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000024;
  char *text;
  int iVar12;
  CGame *in_stack_fffff880;
  uint in_stack_fffff8d4;
  uint in_stack_fffff8d8;
  char **in_stack_fffff8dc;
  CStrList_vtable *in_stack_fffff8e0;
  uint in_stack_fffff8e4;
  char acStack_3dc [4];
  float local_3d8;
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
  FILE *local_f4;
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
  FILE *local_b8;
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
  iVar4 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr->next_lod);
  *in_stack_0000000c = iVar4;
  shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500(this_ptr,&local_94);
  shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0((CSpotView *)local_d0);
  shape_spotview_cpp_CSpotView_FUN_005b9620((CSpotView *)local_d0);
  pCVar5 = (CBoundingBox3D *)
           shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                     (this_ptr,&local_70,&local_94.min);
  if (&local_94 != pCVar5) {
    local_94.min.x = (pCVar5->min).x;
    local_94.min.y = (pCVar5->min).y;
    local_94.min.z = (pCVar5->min).z;
  }
  pCVar6 = shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                     (this_ptr,&local_58,&local_94.max);
  if (&local_94.max != pCVar6) {
    local_94.max.x = pCVar6->x;
    local_94.max.y = pCVar6->y;
    local_94.max.z = pCVar6->z;
  }
  local_4c = local_94.min.x + local_94.max.x;
  local_7c._0_4_ = local_4c * 0.5f;
  local_48 = local_94.min.y + local_94.max.y;
  local_44 = local_94.min.z + local_94.max.z;
  local_7c._4_4_ = local_48 * 0.5f;
  local_74 = local_44 * 0.5f;
  if (&local_b8 != (FILE **)local_7c) {
    local_b8 = (FILE *)local_7c._0_4_;
    local_b4 = (float)local_7c._4_4_;
    local_b0 = local_74;
  }
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff880);
  shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840((CLodMesh *)(auStack_184 + 4));
  local_60 = local_94.max.y - local_94.min.y;
  local_3d8 = local_60 * (float)0.75;
  iVar4 = -1;
  local_64 = local_94.max.x - local_94.min.x;
  local_5c = local_94.max.z - local_94.min.z;
  do {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xfc);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (iVar4 == 0) {
      local_a4 = local_3d8;
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
    iVar12 = 0x51dcf0;
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)local_14);
    local_38 = (int)ROUND(dVar11);
    shape_spotview_cpp_CSpotView_FUN_005b9a20(this_ptr_00);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&g_ZeroVector);
    if (iVar4 < 0) {
      iVar9 = local_34 + -1;
      if (iVar9 < 1) {
LAB_0051e453:
        iVar9 = in_stack_0000000c[iVar9];
      }
      else {
        piVar7 = in_stack_00000008 + iVar9;
        do {
          if (local_38 < *piVar7) goto LAB_0051e453;
          iVar9 = iVar9 + -1;
          piVar7 = piVar7 + -1;
        } while (0 < iVar9);
        iVar9 = in_stack_0000000c[iVar9];
      }
    }
    else if (iVar4 == 0) {
      iVar9 = this_ptr->next_lod->tri_count;
    }
    else {
      iVar9 = in_stack_0000000c[iVar4];
    }
    if (((iStack_17c < iVar9 + -1) || (iVar9 < iStack_17c)) &&
       (shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(this_ptr), iVar9 = INT_0067d39c,
       INT_0067d39c = iVar9, in_stack_00000014 == 2)) {
      INT_0067d39c = 0;
      shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0((CLodMesh *)auStack_184);
      INT_0067d39c = iVar9;
    }
    if (0 < iVar4) {
      in_stack_0000000c[iVar4] = iStack_17c;
      in_stack_00000008[iVar4] = local_38;
      *(CLodEdge **)(acStack_3dc + iVar4 * 4) = local_a8;
    }
    if (iVar4 < 0) {
      engine_2d_c_drawText_FUN_00401fd0("TEST MODE: Adjust view to test LODs.",0,0);
      iVar9 = 0xb;
      text = "Press N to create a new LOD at this distance";
    }
    else if (iVar4 == 0) {
      text = "Viewing LOD 0.  This LOD cannot be edited.";
      iVar9 = 0;
    }
    else {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_24c,"Editing LOD %d of %d.",iVar4,local_34);
      engine_2d_c_drawText_FUN_00401fd0(acStack_24c,0,0);
      engine_2d_c_drawText_FUN_00401fd0("Use LEFT/RIGHT to adjust face count.",0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Press T to go to test mode.",0,0x16);
      iVar9 = 0x21;
      text = "Press TAB/SHIFT-TAB for prev/next LOD.";
    }
    engine_2d_c_drawText_FUN_00401fd0(text,0,iVar9);
    iStack_28 = g_WindowHeight + -0x18;
    g_ActiveRenderColor = 1;
    engine_2d_c_drawLine_FUN_004011b0(0,0x2b,10,0x2b);
    engine_2d_c_drawLine_FUN_004011b0(0,iStack_28 + 0xb,10,iStack_28 + 0xb);
    iVar9 = 0;
    if (0 < local_34) {
      iStack_3c = iStack_28 + -0x2c;
      local_30 = in_stack_00000008;
      local_24 = in_stack_0000000c;
      do {
        if (iVar9 < 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_24c,"LOD%d: F=%d",iVar9,*local_24);
        }
        else {
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (acStack_24c,"LOD%d: P=%d F=%d",iVar9,in_stack_00000008[iVar9],*local_24);
        }
        y1 = iStack_28 - (*local_30 * iStack_3c) / 0x1e0;
        if (y1 < 0x2c) {
          y1 = 0x2c;
        }
        if (iStack_28 < y1) {
          y1 = iStack_28;
        }
        if ((iVar4 == 0) && (iVar9 == 0)) {
          uVar3 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var,uVar3);
        }
        else if (iStack_17c == *local_24) {
          g_ActiveRenderColor = 0xfa;
        }
        else {
          g_ActiveRenderColor = 0xff;
        }
        engine_2d_c_drawLine_FUN_004011b0(0,y1,10,y1);
        engine_2d_c_drawText_FUN_00401fd0(acStack_24c,10,y1);
        iVar9 = iVar9 + 1;
        local_30 = local_30 + 1;
        local_24 = local_24 + 1;
      } while (iVar9 < local_34);
    }
    if (iVar4 != 0) {
      iVar9 = iStack_28 - ((iStack_28 + -0x2c) * local_38) / 0x1e0;
      if (iVar9 < 0x2c) {
        iVar9 = 0x2c;
      }
      if (iStack_28 < iVar9) {
        iVar9 = iStack_28;
      }
      uVar3 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var_00,uVar3);
      engine_2d_c_drawLine_FUN_004011b0(0,iVar9,10,iVar9);
    }
    shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0((CLodMesh *)auStack_184);
    if (in_stack_00000014 == 0) {
      shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990((CLodMesh *)auStack_184,0);
    }
    else if ((in_stack_00000014 < 2) || (in_stack_00000014 == 2)) {
      shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
                ((CLodMesh *)auStack_184,0,iVar12);
    }
    iVar12 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0((CLodMesh *)auStack_184);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_24c,"Current: %d pixelHeight, %d faces",local_38,iVar12);
    engine_2d_c_drawText_FUN_00401fd0(acStack_24c,0,g_WindowHeight + -0xb);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x31);
    iVar12 = local_2c;
    if (iVar9 != 0) {
      if (local_2c < in_stack_00000010) {
        in_stack_0000000c[local_2c] = iStack_174;
        in_stack_00000008[local_2c] = (int)local_30;
        iVar4 = local_2c * 4;
        local_2c = local_2c + 1;
        *(uint *)(acStack_3d4 + iVar4) = acStack_a0._0_4_;
        iVar4 = iVar12;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't have more than %d LODs.",in_stack_00000010);
      }
    }
    if (0 < iVar4) {
      iVar12 = in_stack_0000000c[iVar4] / 0x14;
      iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar9 != 0) {
        iVar12 = iVar12 * 3;
      }
      iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
      if ((iVar9 != 0) || (iVar12 < 2)) {
        iVar12 = 2;
      }
      iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4b);
      if (iVar9 != 0) {
        in_stack_0000000c[iVar4] = in_stack_0000000c[iVar4] - iVar12;
      }
      iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4d);
      if (iVar9 != 0) {
        in_stack_0000000c[iVar4] = in_stack_0000000c[iVar4] + iVar12;
      }
      iVar12 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x21);
      if (iVar12 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                  (g_CEditorToolsPtr,"Enter face count",in_stack_0000000c + iVar4,0,0,0,1);
      }
    }
    iVar12 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
    if ((iVar12 != 0) && (0 < iVar4)) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_214,"Delete LOD %d?",iVar4);
      iVar12 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                         (g_CEditorToolsPtr,acStack_214);
      if (iVar12 != 0) {
        this_ptr = (CLodMesh *)((int)&this_ptr[-1].scale_factor + 3);
        n = ((int)this_ptr - iVar4) * 4;
        crt_string_c_memmove_FUN_005fe5e0(in_stack_00000008 + iVar4,in_stack_00000008 + iVar4 + 1,n)
        ;
        crt_string_c_memmove_FUN_005fe5e0(in_stack_0000000c + iVar4,in_stack_0000000c + iVar4 + 1,n)
        ;
        crt_string_c_memmove_FUN_005fe5e0(auStack_3a0 + iVar4 + -1,auStack_3a0 + iVar4,n);
      }
    }
    in_stack_0000000c = (int *)0x0;
    if (0 < (int)this_ptr) {
      puVar1 = (byte *)((int)&this_ptr[-1].scale_factor + 3);
      do {
        iVar9 = 1;
        iVar12 = iVar4;
        piVar7 = in_stack_00000008;
        if (1 < (int)puVar1) {
          do {
            piVar8 = piVar7 + 1;
            iVar4 = iVar12;
            if (*piVar8 < piVar7[2]) {
              iVar4 = *piVar8;
              *piVar8 = in_stack_00000008[iVar9 + 1];
              in_stack_00000008[iVar9 + 1] = iVar4;
              iVar4 = in_stack_0000000c[iVar9];
              in_stack_0000000c[iVar9] = in_stack_0000000c[iVar9 + 1];
              in_stack_0000000c[iVar9 + 1] = iVar4;
              uVar2 = auStack_3a0[iVar9 + -1];
              auStack_3a0[iVar9 + -1] = auStack_3a0[iVar9];
              iVar4 = iVar9 + 1;
              auStack_3a0[iVar9] = uVar2;
              if ((iVar12 != iVar9) && (bVar10 = iVar12 == iVar4, iVar4 = iVar12, bVar10)) {
                iVar4 = iVar9;
              }
            }
            iVar9 = iVar9 + 1;
            iVar12 = iVar4;
            piVar7 = piVar8;
          } while (iVar9 < (int)puVar1);
        }
        in_stack_0000000c = (int *)((int)in_stack_0000000c + 1);
      } while ((int)in_stack_0000000c < (int)this_ptr);
    }
    iVar12 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
    if (iVar12 != 0) {
      iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar12 == 0) {
        iVar4 = iVar4 + 1;
      }
      else {
        iVar4 = iVar4 + -1;
      }
      if (iVar4 < 0) {
        iVar4 = in_stack_00000014 - 1;
      }
      if ((int)in_stack_00000014 <= iVar4) {
        iVar4 = 0;
      }
    }
    iVar12 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x14);
    if (iVar12 != 0) {
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = -1;
      }
    }
    iVar12 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar12 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff8d4);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff8d4,"Accept LOD settings.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff8d4,"Cancel LOD selection.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff8d4,"Oops, go back to editing the LODs.");
      iVar12 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         ((CPickList *)&stack0xfffff8d4,"Accept or Cancel?",-1,0);
      if (iVar12 == 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff8d4,0,in_stack_fffff8d4,in_stack_fffff8d8,
                   (uint)in_stack_fffff8dc,(uint)in_stack_fffff8e0,in_stack_fffff8e4);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)auStack_12c);
        return in_stack_00000024;
      }
      if (iVar12 == 1) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff8d4,0,in_stack_fffff8d4,in_stack_fffff8d8,
                   (uint)in_stack_fffff8dc,(uint)in_stack_fffff8e0,in_stack_fffff8e4);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)auStack_12c);
        return -1;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff8d4,0,in_stack_fffff8d4,in_stack_fffff8d8,
                 (uint)in_stack_fffff8dc,(uint)in_stack_fffff8e0,in_stack_fffff8e4);
    }
    if (-1 < iVar4) {
      local_58.z = afStack_384[iVar4];
    }
    shape_spotview_cpp_CSpotView_FUN_005b9670((CSpotView *)local_7c);
  } while( true );
}
