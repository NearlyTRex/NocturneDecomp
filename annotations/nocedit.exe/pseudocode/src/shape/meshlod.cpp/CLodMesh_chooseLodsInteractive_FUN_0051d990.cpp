// Name: shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990
// Address: 0051d990
// Address Range: [[0051d990, 0051e6aa]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh * this_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh *this_ptr)

{
  float *pfVar1;
  float fVar2;
  uchar uVar3;
  int iVar4;
  CVector3f *pCVar5;
  CStrList_vtable *d2;
  float fVar6;
  CSpotView *this_ptr_00;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar7;
  float fVar8;
  int *piVar9;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  float fVar10;
  int *piVar11;
  SIZE_T n;
  bool bVar12;
  double dVar13;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_0000001c;
  int *in_stack_00000028;
  int in_stack_0000002c;
  int *piStack00000030;
  int *in_stack_00000034;
  char *in_stack_00000038;
  CGame *in_stack_fffff894;
  CStrList_vtable *d3;
  CStrList_vtable *d4;
  CStrList_vtable *d5;
  CDemonRenderer *d6;
  char *in_stack_fffff8c4;
  int in_stack_fffff8c8;
  char *in_stack_fffff8cc;
  char *in_stack_fffff8e0;
  float local_3d8 [4];
  byte auStack_3c8 [4];
  float afStack_3c4 [4];
  SLodSamplePoint *pSStack_3b4;
  float afStack_398 [84];
  char local_248 [4];
  char acStack_244 [60];
  char acStack_208 [4];
  char acStack_204 [20];
  char acStack_1f0 [4];
  char acStack_1ec [12];
  char acStack_1e0 [4];
  char acStack_1dc [100];
  int local_178;
  byte auStack_168 [40];
  int iStack_140;
  int iStack_138;
  byte auStack_124 [8];
  byte auStack_11c [56];
  FILE *local_e4;
  float local_e0;
  CLodEdge *local_dc;
  float local_d8;
  CLodEdge *local_d4;
  SSpatialGrid *local_d0;
  byte local_cc [4];
  byte local_c8 [8];
  float local_c0;
  SLodSamplePoint *local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float fStack_ac;
  FILE *local_a8;
  float local_a4;
  CLodEdge *pCStack_a0;
  float fStack_9c;
  CLodEdge *local_98;
  byte local_94 [20];
  SLodSamplePoint *local_80;
  float local_7c;
  byte local_78 [8];
  float local_70;
  float fStack_6c;
  float fStack_68;
  CBoundingBox3D local_64;
  CVector3f local_48;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  int iStack_28;
  int iStack_1c;
  int local_14;
  
  if (this_ptr->next_lod == (CLodMesh *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x155a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::chooseLodsInteractive until LODs have been created!");
  }
  *in_stack_00000008 = 999999;
  local_34 = 1.4013e-45;
  iVar4 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr->next_lod);
  *in_stack_0000000c = iVar4;
  shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
            (this_ptr,(CBoundingBox3D *)local_94);
  shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0((CSpotView *)local_cc);
  shape_spotview_cpp_CSpotView_FUN_005b9620((CSpotView *)local_c8);
  pCVar5 = shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                     (this_ptr,&local_64.min,(CVector3f *)(local_94 + 0xc));
  if ((CVector3f *)(local_94 + 0x10) != pCVar5) {
    local_94._16_4_ = pCVar5->x;
    local_80 = (SLodSamplePoint *)pCVar5->y;
    local_7c = pCVar5->z;
  }
  pCVar5 = shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                     (this_ptr,&local_48,(CVector3f *)local_78);
  if ((CVector3f *)(local_78 + 4) != pCVar5) {
    local_78._4_4_ = pCVar5->x;
    local_70 = pCVar5->y;
    fStack_6c = pCVar5->z;
  }
  local_38 = (float)local_80 + (float)local_78._4_4_;
  fStack_68 = local_38 * 0.5f;
  local_34 = local_7c + local_70;
  local_30 = (float)local_78._0_4_ + fStack_6c;
  local_64.min.x = local_34 * 0.5f;
  local_64.min.y = local_30 * 0.5f;
  if (&local_a4 != &fStack_68) {
    local_a4 = fStack_68;
    pCStack_a0 = (CLodEdge *)local_64.min.x;
    fStack_9c = local_64.min.y;
  }
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff894);
  shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840((CLodMesh *)auStack_168);
  local_48.y = fStack_68 - (float)local_78._4_4_;
  afStack_3c4[2] = local_48.y * (float)0.75;
  fVar10 = -NAN;
  local_48.x = fStack_6c - (float)local_78._0_4_;
  local_48.z = local_64.min.x - local_70;
  do {
    d3 = (CStrList_vtable *)0xfc;
    d2 = (CStrList_vtable *)(g_WindowHeight - 1);
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,(int)d2,0xfc);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (fVar10 == 0.0) {
      local_80 = pSStack_3b4;
    }
    d4 = (CStrList_vtable *)0x51dbce;
    shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0((CSpotView *)(auStack_11c + 0x34));
    local_e4 = local_a8;
    local_e0 = local_a4;
    local_dc = pCStack_a0;
    local_d8 = fStack_9c;
    local_d4 = local_98;
    local_d0 = (SSpatialGrid *)local_94._0_4_;
    if (local_cc != local_94 + 4) {
      local_cc = (byte  [4])local_94._4_4_;
      local_c8._0_4_ = local_94._8_4_;
      local_c8._4_4_ = local_94._12_4_;
    }
    local_bc = local_80;
    local_b8 = local_7c;
    fStack_ac = local_70;
    local_c0 = 0.0;
    local_b4 = 0.0;
    local_b0 = 0.0;
    shape_spotview_cpp_CSpotView_FUN_005b9a20((CSpotView *)&local_e4);
    d5 = (CStrList_vtable *)0x51dcc3;
    d6 = g_CDemonRendererPtr;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&g_ZeroVector);
    fVar6 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(&local_64);
    dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
    shape_spotview_cpp_CSpotView_FUN_005b9a20(this_ptr_00);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&g_ZeroVector);
    if ((int)fVar10 < 0) {
      iVar4 = (int)in_stack_00000008 + -1;
      if (iVar4 < 1) {
LAB_0051e453:
        iVar4 = in_stack_0000000c[iVar4];
      }
      else {
        piVar11 = in_stack_00000008 + iVar4;
        do {
          if ((int)this_ptr < *piVar11) goto LAB_0051e453;
          iVar4 = iVar4 + -1;
          piVar11 = piVar11 + -1;
        } while (0 < iVar4);
        iVar4 = in_stack_0000000c[iVar4];
      }
    }
    else if (fVar10 == 0.0) {
      iVar4 = this_ptr->next_lod->tri_count;
    }
    else {
      iVar4 = in_stack_0000000c[(int)fVar10];
    }
    if (((iStack_140 < iVar4 + -1) || (iVar4 < iStack_140)) &&
       (shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(this_ptr), iVar4 = INT_0067d39c,
       INT_0067d39c = iVar4, in_stack_00000014 == 2)) {
      INT_0067d39c = 0;
      shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0((CLodMesh *)(auStack_168 + 0x24));
      INT_0067d39c = iVar4;
    }
    if (0 < (int)fVar10) {
      in_stack_0000000c[(int)fVar10] = iStack_138;
      in_stack_00000008[(int)fVar10] = (int)in_stack_0000000c;
      afStack_398[(int)fVar10] = local_64.min.x;
    }
    if ((int)fVar10 < 0) {
      engine_2d_c_drawText_FUN_00401fd0("TEST MODE: Adjust view to test LODs.",0,0);
      in_stack_fffff8cc = (char *)0xb;
      in_stack_fffff8c8 = 0;
      in_stack_fffff8c4 = "Press N to create a new LOD at this distance";
    }
    else if (fVar10 != 0.0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_208,"Editing LOD %d of %d.");
      engine_2d_c_drawText_FUN_00401fd0(acStack_204,0,0);
      engine_2d_c_drawText_FUN_00401fd0("Use LEFT/RIGHT to adjust face count.",0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Press T to go to test mode.",0,0x16);
      in_stack_fffff8cc = (char *)0x21;
      in_stack_fffff8c8 = 0;
      in_stack_fffff8c4 = "Press TAB/SHIFT-TAB for prev/next LOD.";
    }
    engine_2d_c_drawText_FUN_00401fd0(in_stack_fffff8c4,in_stack_fffff8c8,(int)in_stack_fffff8cc);
    g_ActiveRenderColor = 1;
    engine_2d_c_drawLine_FUN_004011b0(0,0x2b,10,0x2b);
    in_stack_fffff8cc = (char *)((int)in_stack_00000034 + 0xb);
    in_stack_fffff8c8 = 0;
    in_stack_fffff8c4 = (char *)0x51de02;
    engine_2d_c_drawLine_FUN_004011b0(0,(int)in_stack_fffff8cc,10,(int)in_stack_fffff8cc);
    iVar4 = 0;
    if (0 < in_stack_0000002c) {
      piStack00000030 = in_stack_00000008;
      do {
        if (iVar4 < 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1ec,"LOD%d: F=%d");
        }
        else {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1ec,"LOD%d: P=%d F=%d");
        }
        piVar11 = (int *)((int)piStack00000030 - (*in_stack_00000028 * in_stack_0000001c) / 0x1e0);
        if ((int)piVar11 < 0x2c) {
          piVar11 = (int *)0x2c;
        }
        if ((int)piStack00000030 < (int)piVar11) {
          piVar11 = piStack00000030;
        }
        if ((fVar10 == 0.0) && (iVar4 == 0)) {
          uVar3 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var,uVar3);
        }
        else if (auStack_124._0_4_ == *in_stack_00000034) {
          g_ActiveRenderColor = 0xfa;
        }
        else {
          g_ActiveRenderColor = 0xff;
        }
        in_stack_fffff8c4 = (char *)0x0;
        engine_2d_c_drawLine_FUN_004011b0(0,(int)piVar11,10,(int)piVar11);
        in_stack_fffff8cc = acStack_1f0;
        in_stack_fffff8c8 = 0x51def1;
        engine_2d_c_drawText_FUN_00401fd0(in_stack_fffff8cc,10,(int)piVar11);
        iVar4 = iVar4 + 1;
        piStack00000030 = piStack00000030 + 1;
      } while (iVar4 < in_stack_0000002c);
    }
    if (fVar10 != 0.0) {
      in_stack_fffff8cc =
           in_stack_00000038 +
           -(((int)(in_stack_00000038 + -0x2c) * (int)in_stack_00000028) / 0x1e0);
      if ((int)in_stack_fffff8cc < 0x2c) {
        in_stack_fffff8cc = (char *)0x2c;
      }
      if ((int)in_stack_00000038 < (int)in_stack_fffff8cc) {
        in_stack_fffff8cc = in_stack_00000038;
      }
      uVar3 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var_00,uVar3);
      in_stack_fffff8c8 = 0;
      in_stack_fffff8c4 = (char *)0x51df88;
      engine_2d_c_drawLine_FUN_004011b0(0,(int)in_stack_fffff8cc,10,(int)in_stack_fffff8cc);
    }
    shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0((CLodMesh *)auStack_124);
    if (in_stack_00000014 == 0) {
      shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990((CLodMesh *)(auStack_124 + 4),0)
      ;
    }
    else if ((in_stack_00000014 < 2) || (in_stack_00000014 == 2)) {
      shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
                ((CLodMesh *)(auStack_124 + 4),0,(int)in_stack_fffff8e0);
    }
    shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0((CLodMesh *)auStack_11c);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1e0,"Current: %d pixelHeight, %d faces");
    in_stack_fffff8e0 = acStack_1dc;
    engine_2d_c_drawText_FUN_00401fd0(in_stack_fffff8e0,0,g_WindowHeight + -0xb);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x31);
    fVar6 = local_30;
    if (iVar4 != 0) {
      if ((int)local_30 < in_stack_00000010) {
        in_stack_0000000c[(int)local_30] = local_178;
        in_stack_00000008[(int)local_30] = (int)local_34;
        pfVar1 = local_3d8 + (int)local_30;
        local_30 = (float)((int)local_30 + 1);
        *pfVar1 = local_a4;
        fVar10 = fVar6;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't have more than %d LODs.",in_stack_00000010);
      }
    }
    if (0 < (int)fVar10) {
      iVar4 = in_stack_0000000c[(int)fVar10] / 0x14;
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar7 != 0) {
        iVar4 = iVar4 * 3;
      }
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
      if ((iVar7 != 0) || (iVar4 < 2)) {
        iVar4 = 2;
      }
      iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4b);
      if (iVar7 != 0) {
        in_stack_0000000c[(int)fVar10] = in_stack_0000000c[(int)fVar10] - iVar4;
      }
      iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4d);
      if (iVar7 != 0) {
        in_stack_0000000c[(int)fVar10] = in_stack_0000000c[(int)fVar10] + iVar4;
      }
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x21);
      if (iVar4 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                  (g_CEditorToolsPtr,"Enter face count",in_stack_0000000c + (int)fVar10,
                   false,0,0,true);
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
    if ((iVar4 != 0) && (0 < (int)fVar10)) {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_248,"Delete LOD %d?",fVar10);
      iVar4 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,acStack_244);
      if (iVar4 != 0) {
        iStack_28 = iStack_28 + -1;
        n = (iStack_28 - (int)fVar10) * 4;
        crt_string_c_memmove_FUN_005fe5e0
                  (in_stack_00000008 + (int)fVar10,in_stack_00000008 + (int)fVar10 + 1,n);
        crt_string_c_memmove_FUN_005fe5e0
                  (in_stack_0000000c + (int)fVar10,(void *)((int)in_stack_0000000c + unaff_ESI),n);
        crt_string_c_memmove_FUN_005fe5e0
                  (auStack_3c8 + (int)fVar10 * 4,auStack_3c8 + (int)ROUND(dVar13),n);
      }
    }
    local_14 = 0;
    if (0 < iStack_1c) {
      unaff_ESI = iStack_1c + -1;
      do {
        fVar8 = 1.4013e-45;
        fVar6 = fVar10;
        piVar11 = in_stack_00000008;
        if (1 < unaff_ESI) {
          do {
            piVar9 = piVar11 + 1;
            fVar10 = fVar6;
            if (*piVar9 < piVar11[2]) {
              local_2c = *piVar9;
              *piVar9 = in_stack_00000008[(int)fVar8 + 1];
              in_stack_00000008[(int)fVar8 + 1] = local_2c;
              iStack_28 = in_stack_0000000c[(int)fVar8];
              in_stack_0000000c[(int)fVar8] = in_stack_0000000c[(int)fVar8 + 1];
              in_stack_0000000c[(int)fVar8 + 1] = iStack_28;
              fVar2 = afStack_3c4[(int)fVar8];
              afStack_3c4[(int)fVar8] = afStack_3c4[(int)fVar8 + 1];
              fVar10 = (float)((int)fVar8 + 1);
              afStack_3c4[(int)fVar8 + 1] = fVar2;
              if ((fVar6 != fVar8) && (bVar12 = fVar6 == fVar10, fVar10 = fVar6, bVar12)) {
                fVar10 = fVar8;
              }
            }
            fVar8 = (float)((int)fVar8 + 1);
            fVar6 = fVar10;
            piVar11 = piVar9;
          } while ((int)fVar8 < unaff_ESI);
        }
        local_14 = local_14 + 1;
      } while (local_14 < iStack_1c);
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
    if (iVar4 != 0) {
      iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar4 == 0) {
        fVar10 = (float)((int)fVar10 + 1);
      }
      else {
        fVar10 = (float)((int)fVar10 + -1);
      }
      if ((int)fVar10 < 0) {
        fVar10 = (float)((int)local_30 + -1);
      }
      if ((int)local_30 <= (int)fVar10) {
        fVar10 = 0.0;
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x14);
    if (iVar4 != 0) {
      if ((int)fVar10 < 0) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = -NAN;
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar4 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff880);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff884,"Accept LOD settings.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff888,"Cancel LOD selection.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff88c,"Oops, go back to editing the LODs.");
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffff890,"Accept or Cancel?",-1,0);
      if (iVar4 == 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff894,0,(uint)d2,(uint)d3,(uint)d4,(uint)d5,(uint)d6);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)auStack_168);
        return iStack_1c;
      }
      if (iVar4 == 1) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff894,0,(uint)d2,(uint)d3,(uint)d4,(uint)d5,(uint)d6);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)auStack_168);
        return -1;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff894,0,(uint)d2,(uint)d3,(uint)d4,(uint)d5,(uint)d6);
    }
    if (-1 < (int)fVar10) {
      local_94._8_4_ = afStack_3c4[(int)fVar10 + 1];
    }
    shape_spotview_cpp_CSpotView_FUN_005b9670((CSpotView *)&local_b8);
  } while( true );
}
