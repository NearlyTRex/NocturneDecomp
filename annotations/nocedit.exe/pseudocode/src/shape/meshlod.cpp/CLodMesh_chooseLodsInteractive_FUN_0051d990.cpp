// Name: shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990
// Address: 0051d990
// Address Range: [[0051d990, 0051e6aa]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh * this_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh *this_ptr)

{
  float fVar1;
  uchar uVar2;
  int iVar3;
  CVector3f *pCVar4;
  CStrList_vtable *d2;
  float fVar5;
  CSpotView *this_ptr_00;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float fVar9;
  int unaff_EDI;
  int iVar10;
  SIZE_T n;
  bool bVar11;
  float *in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_0000001c;
  int in_stack_00000028;
  char *in_stack_0000002c;
  CGame *in_stack_fffff894;
  CStrList_vtable *d3;
  CStrList_vtable *d4;
  CStrList_vtable *d5;
  CDemonRenderer *d6;
  char *text;
  char *in_stack_fffff8c0;
  int in_stack_fffff8d4;
  float local_3d8 [2];
  byte auStack_3d0 [4];
  float afStack_3cc [6];
  float fStack_3b4;
  float afStack_398 [84];
  char local_248 [64];
  char acStack_208 [12];
  char acStack_1fc [4];
  char acStack_1f8 [12];
  char acStack_1ec [116];
  int local_178;
  byte auStack_168 [40];
  int iStack_140;
  int iStack_138;
  byte auStack_130 [8];
  byte auStack_128 [68];
  byte local_e4 [8];
  SSpatialGrid *local_dc;
  CLodEdge *local_d8;
  SSpatialGrid *local_d4;
  SLodSamplePoint *local_d0;
  byte local_cc [4];
  byte local_c8 [8];
  float local_c0;
  float local_bc;
  float local_b8;
  char local_b4 [8];
  float fStack_ac;
  int local_a8;
  CLodEdge *local_a4;
  SSpatialGrid *pSStack_a0;
  CLodEdge *pCStack_9c;
  SSpatialGrid *local_98;
  byte local_94 [20];
  float local_80;
  float local_7c;
  byte local_78 [8];
  float local_70;
  float fStack_6c;
  CLodEdge *pCStack_68;
  CBoundingBox3D local_64;
  CVector3f local_48;
  float local_38;
  float local_34;
  float local_30;
  int *local_2c;
  int local_24;
  int *local_20;
  int iStack_1c;
  int local_14;
  
  if (this_ptr->next_lod == (CLodMesh *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x155a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::chooseLodsInteractive until LODs have been created!");
  }
  *in_stack_00000008 = 1.401297e-39;
  local_30 = 1.4013e-45;
  iVar3 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr->next_lod);
  *in_stack_0000000c = iVar3;
  shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
            (this_ptr,(CBoundingBox3D *)local_94);
  shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0((CSpotView *)local_cc);
  shape_spotview_cpp_CSpotView_FUN_005b9620((CSpotView *)local_c8);
  pCVar4 = shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                     (this_ptr,&local_64.min,(CVector3f *)(local_94 + 0xc));
  if ((CVector3f *)(local_94 + 0x10) != pCVar4) {
    local_94._16_4_ = pCVar4->x;
    local_80 = pCVar4->y;
    local_7c = pCVar4->z;
  }
  pCVar4 = shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                     (this_ptr,&local_48,(CVector3f *)local_78);
  if ((CVector3f *)(local_78 + 4) != pCVar4) {
    local_78._4_4_ = pCVar4->x;
    local_70 = pCVar4->y;
    fStack_6c = pCVar4->z;
  }
  local_38 = local_80 + (float)local_78._4_4_;
  pCStack_68 = (CLodEdge *)(local_38 * 0.5f);
  local_34 = local_7c + local_70;
  local_30 = (float)local_78._0_4_ + fStack_6c;
  local_64.min.x = local_34 * 0.5f;
  local_64.min.y = local_30 * 0.5f;
  if (&local_a4 != &pCStack_68) {
    local_a4 = pCStack_68;
    pSStack_a0 = (SSpatialGrid *)local_64.min.x;
    pCStack_9c = (CLodEdge *)local_64.min.y;
  }
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff894);
  shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840((CLodMesh *)auStack_168);
  local_48.y = (float)pCStack_68 - (float)local_78._4_4_;
  afStack_3cc[4] = local_48.y * (float)0.75;
  fVar9 = -NAN;
  local_48.x = fStack_6c - (float)local_78._0_4_;
  local_48.z = local_64.min.x - local_70;
  do {
    d3 = (CStrList_vtable *)0xfc;
    d2 = (CStrList_vtable *)(g_WindowHeight - 1);
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,(int)d2,0xfc);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (fVar9 == 0.0) {
      local_80 = fStack_3b4;
    }
    d4 = (CStrList_vtable *)0x51dbce;
    shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0((CSpotView *)(auStack_128 + 0x40));
    local_e4._0_4_ = local_a8;
    local_e4._4_4_ = local_a4;
    local_dc = pSStack_a0;
    local_d8 = pCStack_9c;
    local_d4 = local_98;
    local_d0 = (SLodSamplePoint *)local_94._0_4_;
    if (local_cc != local_94 + 4) {
      local_cc = (byte  [4])local_94._4_4_;
      local_c8._0_4_ = local_94._8_4_;
      local_c8._4_4_ = local_94._12_4_;
    }
    local_bc = local_80;
    local_b8 = local_7c;
    fStack_ac = local_70;
    local_c0 = 0.0;
    local_b4[0] = '\0';
    local_b4[1] = '\0';
    local_b4[2] = '\0';
    local_b4[3] = '\0';
    local_b4[4] = '\0';
    local_b4[5] = '\0';
    local_b4[6] = '\0';
    local_b4[7] = '\0';
    shape_spotview_cpp_CSpotView_FUN_005b9a20((CSpotView *)local_e4);
    d5 = (CStrList_vtable *)0x51dcc3;
    d6 = g_CDemonRendererPtr;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&g_ZeroVector);
    fVar5 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(&local_64);
    crt_math_c_round_FUN_005fe6b0((double)fVar5);
    shape_spotview_cpp_CSpotView_FUN_005b9a20(this_ptr_00);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&g_ZeroVector);
    if ((int)fVar9 < 0) {
      iVar3 = (int)in_stack_00000008 + -1;
      if (iVar3 < 1) {
LAB_0051e453:
        iVar3 = in_stack_0000000c[iVar3];
      }
      else {
        pfVar7 = in_stack_00000008 + iVar3;
        do {
          if ((int)this_ptr < (int)*pfVar7) goto LAB_0051e453;
          iVar3 = iVar3 + -1;
          pfVar7 = pfVar7 + -1;
        } while (0 < iVar3);
        iVar3 = in_stack_0000000c[iVar3];
      }
    }
    else if (fVar9 == 0.0) {
      iVar3 = this_ptr->next_lod->tri_count;
    }
    else {
      iVar3 = in_stack_0000000c[(int)fVar9];
    }
    if (((iStack_140 < iVar3 + -1) || (iVar3 < iStack_140)) &&
       (shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(this_ptr), iVar3 = INT_0067d39c,
       INT_0067d39c = iVar3, in_stack_00000014 == 2)) {
      INT_0067d39c = 0;
      shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0((CLodMesh *)(auStack_168 + 0x24));
      INT_0067d39c = iVar3;
    }
    if (0 < (int)fVar9) {
      in_stack_0000000c[(int)fVar9] = iStack_138;
      in_stack_00000008[(int)fVar9] = (float)in_stack_0000000c;
      afStack_398[(int)fVar9] = local_64.min.x;
    }
    if ((int)fVar9 < 0) {
      engine_2d_c_drawText_FUN_00401fd0("TEST MODE: Adjust view to test LODs.",0,0);
      in_stack_fffff8c0 = (char *)0xb;
      text = "Press N to create a new LOD at this distance";
    }
    else if (fVar9 == 0.0) {
      text = (char *)0x0;
    }
    else {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_208,"Editing LOD %d of %d.");
      engine_2d_c_drawText_FUN_00401fd0(local_248,0,0);
      engine_2d_c_drawText_FUN_00401fd0("Use LEFT/RIGHT to adjust face count.",0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Press T to go to test mode.",0,0x16);
      in_stack_fffff8c0 = (char *)0x21;
      text = "Press TAB/SHIFT-TAB for prev/next LOD.";
    }
    engine_2d_c_drawText_FUN_00401fd0(text,0,(int)in_stack_fffff8c0);
    g_ActiveRenderColor = 1;
    engine_2d_c_drawLine_FUN_004011b0(0,0x2b,10,0x2b);
    in_stack_fffff8c0 = (char *)(in_stack_00000028 + 0xb);
    engine_2d_c_drawLine_FUN_004011b0(0,(int)in_stack_fffff8c0,10,(int)in_stack_fffff8c0);
    iVar3 = 0;
    if (0 < (int)fVar5) {
      do {
        if (iVar3 < 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1f8,"LOD%d: F=%d");
        }
        else {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1f8,"LOD%d: P=%d F=%d");
        }
        iVar10 = local_24 - (*local_2c * (int)local_38) / 0x1e0;
        if (iVar10 < 0x2c) {
          iVar10 = 0x2c;
        }
        if (local_24 < iVar10) {
          iVar10 = local_24;
        }
        if ((fVar9 == 0.0) && (iVar3 == 0)) {
          uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var,uVar2);
        }
        else if (local_178 == *local_20) {
          g_ActiveRenderColor = 0xfa;
        }
        else {
          g_ActiveRenderColor = 0xff;
        }
        engine_2d_c_drawLine_FUN_004011b0(0,iVar10,10,iVar10);
        in_stack_fffff8c0 = acStack_1fc;
        engine_2d_c_drawText_FUN_00401fd0(in_stack_fffff8c0,10,iVar10);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)fVar5);
    }
    if (fVar9 != 0.0) {
      in_stack_fffff8c0 =
           in_stack_0000002c + -(((int)(in_stack_0000002c + -0x2c) * in_stack_0000001c) / 0x1e0);
      if ((int)in_stack_fffff8c0 < 0x2c) {
        in_stack_fffff8c0 = (char *)0x2c;
      }
      if ((int)in_stack_0000002c < (int)in_stack_fffff8c0) {
        in_stack_fffff8c0 = in_stack_0000002c;
      }
      uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var_00,uVar2);
      engine_2d_c_drawLine_FUN_004011b0(0,(int)in_stack_fffff8c0,10,(int)in_stack_fffff8c0);
    }
    shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0((CLodMesh *)auStack_130);
    if (in_stack_00000014 == 0) {
      shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990((CLodMesh *)(auStack_130 + 4),0)
      ;
    }
    else if ((in_stack_00000014 < 2) || (in_stack_00000014 == 2)) {
      shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
                ((CLodMesh *)(auStack_130 + 4),0,in_stack_fffff8d4);
    }
    shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0((CLodMesh *)auStack_128);
    in_stack_fffff8d4 = in_stack_00000028;
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1ec,"Current: %d pixelHeight, %d faces");
    engine_2d_c_drawText_FUN_00401fd0(local_248,0,g_WindowHeight + -0xb);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x31);
    fVar5 = local_30;
    if (iVar3 != 0) {
      if ((int)local_30 < in_stack_00000010) {
        in_stack_0000000c[(int)local_30] = local_178;
        in_stack_00000008[(int)local_30] = local_34;
        pfVar7 = local_3d8 + (int)local_30;
        local_30 = (float)((int)local_30 + 1);
        *pfVar7 = (float)local_a4;
        fVar9 = fVar5;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't have more than %d LODs.",in_stack_00000010);
      }
    }
    if (0 < (int)fVar9) {
      iVar3 = in_stack_0000000c[(int)fVar9] / 0x14;
      iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar10 != 0) {
        iVar3 = iVar3 * 3;
      }
      iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
      if ((iVar10 != 0) || (iVar3 < 2)) {
        iVar3 = 2;
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4b);
      if (iVar10 != 0) {
        in_stack_0000000c[(int)fVar9] = in_stack_0000000c[(int)fVar9] - iVar3;
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4d);
      if (iVar10 != 0) {
        in_stack_0000000c[(int)fVar9] = in_stack_0000000c[(int)fVar9] + iVar3;
      }
      iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x21);
      if (iVar3 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                  (g_CEditorToolsPtr,"Enter face count",in_stack_0000000c + (int)fVar9,
                   false,0,0,true);
      }
    }
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
    if ((iVar3 != 0) && (0 < (int)fVar9)) {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_248,"Delete LOD %d?",fVar9);
      iVar3 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,local_248);
      if (iVar3 != 0) {
        local_30 = (float)((int)local_30 + -1);
        local_14 = (int)fVar9 * 4 + 4;
        n = ((int)local_30 - (int)fVar9) * 4;
        crt_string_c_memmove_FUN_005fe5e0
                  (in_stack_00000008 + (int)fVar9,in_stack_00000008 + (int)fVar9 + 1,n);
        crt_string_c_memmove_FUN_005fe5e0
                  (in_stack_0000000c + (int)fVar9,(void *)((int)in_stack_0000000c + unaff_EBP),n);
        crt_string_c_memmove_FUN_005fe5e0(auStack_3d0 + (int)fVar9 * 4,auStack_3d0 + unaff_EDI,n);
      }
    }
    iStack_1c = 0;
    if (0 < local_24) {
      unaff_EBP = local_24 + -1;
      do {
        fVar6 = 1.4013e-45;
        fVar5 = fVar9;
        pfVar7 = in_stack_00000008;
        if (1 < unaff_EBP) {
          do {
            pfVar8 = pfVar7 + 1;
            unaff_EDI = (int)fVar6 * 4;
            fVar9 = fVar5;
            if ((int)*pfVar8 < (int)pfVar7[2]) {
              local_34 = *pfVar8;
              *pfVar8 = in_stack_00000008[(int)fVar6 + 1];
              in_stack_00000008[(int)fVar6 + 1] = local_34;
              local_30 = (float)in_stack_0000000c[(int)fVar6];
              in_stack_0000000c[(int)fVar6] = in_stack_0000000c[(int)fVar6 + 1];
              in_stack_0000000c[(int)fVar6 + 1] = (int)local_30;
              fVar1 = afStack_3cc[(int)fVar6];
              afStack_3cc[(int)fVar6] = afStack_3cc[(int)fVar6 + 1];
              fVar9 = (float)((int)fVar6 + 1);
              afStack_3cc[(int)fVar6 + 1] = fVar1;
              if ((fVar5 != fVar6) && (bVar11 = fVar5 == fVar9, fVar9 = fVar5, bVar11)) {
                fVar9 = fVar6;
              }
            }
            fVar6 = (float)((int)fVar6 + 1);
            fVar5 = fVar9;
            pfVar7 = pfVar8;
          } while ((int)fVar6 < unaff_EBP);
        }
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < local_24);
    }
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
    if (iVar3 != 0) {
      iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar3 == 0) {
        fVar9 = (float)((int)fVar9 + 1);
      }
      else {
        fVar9 = (float)((int)fVar9 + -1);
      }
      if ((int)fVar9 < 0) {
        fVar9 = (float)((int)local_30 + -1);
      }
      if ((int)local_30 <= (int)fVar9) {
        fVar9 = 0.0;
      }
    }
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x14);
    if (iVar3 != 0) {
      if ((int)fVar9 < 0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = -NAN;
      }
    }
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar3 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff880);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff884,"Accept LOD settings.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff888,"Cancel LOD selection.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff88c,"Oops, go back to editing the LODs.");
      iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         ((CPickList *)&stack0xfffff890,"Accept or Cancel?",-1,0);
      iVar3 = iStack_1c;
      if (iVar10 == 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff894,0,(uint)d2,(uint)d3,(uint)d4,(uint)d5,(uint)d6);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)auStack_168);
        return iVar3;
      }
      if (iVar10 == 1) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff894,0,(uint)d2,(uint)d3,(uint)d4,(uint)d5,(uint)d6);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)auStack_168);
        return -1;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff894,0,(uint)d2,(uint)d3,(uint)d4,(uint)d5,(uint)d6);
    }
    if (-1 < (int)fVar9) {
      local_94._8_4_ = afStack_3cc[(int)fVar9 + 3];
    }
    shape_spotview_cpp_CSpotView_FUN_005b9670((CSpotView *)&local_b8);
  } while( true );
}
