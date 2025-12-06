// Name: shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990
// Address: 0051d990
// Address Range: [[0051d990, 0051e6aa]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh * this_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh *this_ptr)

{
  uint uVar1;
  uchar uVar2;
  int iVar3;
  CVector3f *pCVar4;
  float fVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar6;
  int iVar7;
  uint extraout_EDX;
  int *piVar8;
  int iVar9;
  BADSPACEBASE *in_ESP;
  uint unaff_ESI;
  int *piVar10;
  SIZE_T n;
  bool bVar11;
  float10 fVar12;
  double dVar13;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  uint in_stack_00000020;
  int in_stack_0000002c;
  int *in_stack_00000038;
  int in_stack_0000003c;
  int *piStack00000040;
  int *in_stack_00000044;
  char *in_stack_00000048;
  int in_stack_00000068;
  int in_stack_0000006c;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000098;
  int in_stack_000000a0;
  int in_stack_000000a8;
  int in_stack_000000ac;
  int in_stack_000000b0;
  int *in_stack_000000b4;
  int in_stack_000000c0;
  int in_stack_000000fc;
  CGame *in_stack_fffff89c;
  char *in_stack_fffff8d4;
  CKeys *in_stack_fffff8d8;
  char *in_stack_fffff8dc;
  char *in_stack_fffff8f0;
  CStrList_vtable *in_stack_fffff9ac;
  CStrList_vtable *in_stack_fffff9b0;
  CStrList_vtable *in_stack_fffff9b4;
  CStrList_vtable *in_stack_fffff9b8;
  uint in_stack_fffff9bc;
  SLodSamplePoint *pSStack_3ac;
  float afStack_388 [19];
  uint auStack_33c [10];
  byte auStack_314 [4];
  uint auStack_310 [26];
  int aiStack_2a8 [44];
  char acStack_1f8 [4];
  char acStack_1f4 [20];
  char acStack_1e0 [4];
  char acStack_1dc [12];
  char acStack_1d0 [4];
  char acStack_1cc [56];
  char acStack_194 [4];
  char acStack_190 [48];
  byte auStack_160 [48];
  int iStack_130;
  FILE *pFStack_128;
  byte auStack_114 [8];
  byte local_10c [48];
  FILE *local_dc;
  CLodMesh *local_d8;
  FILE *local_d4;
  float local_d0;
  CLodEdge *local_cc;
  float local_c8;
  byte local_c4 [4];
  byte local_c0 [8];
  SSpatialGrid *local_b8;
  SLodSamplePoint *local_b4;
  float local_b0;
  SLodSamplePoint *pSStack_ac;
  float local_a8;
  float local_a4;
  FILE *pFStack_a0;
  CLodMesh *pCStack_9c;
  FILE *local_98;
  float local_94;
  CLodEdge *local_90;
  byte local_8c [20];
  SLodSamplePoint *local_78;
  float local_74;
  byte local_70 [8];
  float fStack_68;
  float local_64;
  CLodMesh *local_60;
  CBoundingBox3D local_5c;
  CVector3f CStack_40;
  float local_30;
  float local_2c;
  float fStack_28;
  
  if (this_ptr->next_lod == (CLodMesh *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x155a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::chooseLodsInteractive until LODs have been created!");
  }
  *in_stack_00000008 = 999999;
  local_2c = 1.4013e-45;
  iVar3 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr->next_lod);
  *in_stack_0000000c = iVar3;
  shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
            (this_ptr,(CBoundingBox3D *)local_8c);
  shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0((CSpotView *)local_c4);
  shape_spotview_cpp_CSpotView_FUN_005b9620((CSpotView *)local_c0);
  pCVar4 = shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                     (this_ptr,&local_5c.min,(CVector3f *)(local_8c + 0xc));
  if ((CVector3f *)(local_8c + 0x10) != pCVar4) {
    local_8c._16_4_ = pCVar4->x;
    local_78 = (SLodSamplePoint *)pCVar4->y;
    local_74 = pCVar4->z;
  }
  pCVar4 = shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                     (this_ptr,&CStack_40,(CVector3f *)local_70);
  if ((CVector3f *)(local_70 + 4) != pCVar4) {
    local_70._4_4_ = pCVar4->x;
    fStack_68 = pCVar4->y;
    local_64 = pCVar4->z;
  }
  local_30 = (float)local_78 + (float)local_70._4_4_;
  local_60 = (CLodMesh *)(local_30 * 0.5f);
  local_2c = local_74 + fStack_68;
  fStack_28 = (float)local_70._0_4_ + local_64;
  local_5c.min.x = local_2c * 0.5f;
  local_5c.min.y = fStack_28 * 0.5f;
  if (&pCStack_9c != &local_60) {
    pCStack_9c = local_60;
    local_98 = (FILE *)local_5c.min.x;
    local_94 = local_5c.min.y;
  }
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff89c);
  shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840((CLodMesh *)auStack_160);
  CStack_40.y = (float)local_60 - (float)local_70._4_4_;
  iVar3 = -1;
  CStack_40.x = local_64 - (float)local_70._0_4_;
  CStack_40.z = local_5c.min.x - fStack_68;
  do {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xfc);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (iVar3 == 0) {
      local_78 = pSStack_3ac;
    }
    shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0((CSpotView *)(local_10c + 0x2c));
    local_dc = pFStack_a0;
    local_d8 = pCStack_9c;
    local_d4 = local_98;
    local_d0 = local_94;
    local_cc = local_90;
    local_c8 = (float)local_8c._0_4_;
    if (local_c4 != local_8c + 4) {
      local_c4 = (byte  [4])local_8c._4_4_;
      local_c0._0_4_ = local_8c._8_4_;
      local_c0._4_4_ = local_8c._12_4_;
    }
    local_b4 = local_78;
    local_b0 = local_74;
    local_a4 = fStack_68;
    local_b8 = (SSpatialGrid *)0x0;
    pSStack_ac = (SLodSamplePoint *)0x0;
    local_a8 = 0.0;
    shape_spotview_cpp_CSpotView_FUN_005b9a20((CSpotView *)&local_dc);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&g_ZeroVector);
    fVar5 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(&local_5c);
    fVar12 = (float10)fVar5;
    dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,&local_94));
    iVar7 = (int)ROUND(fVar12);
    shape_spotview_cpp_CSpotView_FUN_005b9a20(SUB84 /* extract 2-byte value */(dVar13,0));
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&g_ZeroVector);
    if (iVar3 < 0) {
      iVar9 = in_stack_00000018 + -1;
      if (iVar9 < 1) {
LAB_0051e453:
        iVar9 = *(int *)(iVar7 + iVar9 * 4);
      }
      else {
        piVar10 = in_stack_00000008 + iVar9;
        do {
          if ((int)in_stack_00000014 < *piVar10) goto LAB_0051e453;
          iVar9 = iVar9 + -1;
          piVar10 = piVar10 + -1;
        } while (0 < iVar9);
        iVar9 = *(int *)(iVar7 + iVar9 * 4);
      }
    }
    else if (iVar3 == 0) {
      iVar9 = this_ptr->next_lod->tri_count;
    }
    else {
      iVar9 = *(int *)(iVar3 * 4 + iVar7);
    }
    if (((iStack_130 < iVar9 + -1) || (iVar9 < iStack_130)) &&
       (shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(this_ptr), iVar9 = INT_0067d39c,
       INT_0067d39c = iVar9, in_stack_00000014 == 2)) {
      INT_0067d39c = 0;
      shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0((CLodMesh *)(auStack_160 + 0x2c));
      INT_0067d39c = iVar9;
    }
    if (0 < iVar3) {
      *(FILE **)(iVar7 + iVar3 * 4) = pFStack_128;
      in_stack_00000008[iVar3] = in_stack_0000001c;
      afStack_388[iVar3] = local_5c.min.z;
    }
    if (iVar3 < 0) {
      engine_2d_c_drawText_FUN_00401fd0("TEST MODE: Adjust view to test LODs.",0,0);
      in_stack_fffff8dc = (char *)0xb;
      in_stack_fffff8d8 = (CKeys *)0x0;
      in_stack_fffff8d4 = "Press N to create a new LOD at this distance";
    }
    else if (iVar3 != 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_1f8,"Editing LOD %d of %d.",iVar3,in_stack_00000020);
      engine_2d_c_drawText_FUN_00401fd0(acStack_1f4,0,0);
      engine_2d_c_drawText_FUN_00401fd0("Use LEFT/RIGHT to adjust face count.",0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Press T to go to test mode.",0,0x16);
      in_stack_fffff8dc = (char *)0x21;
      in_stack_fffff8d8 = (CKeys *)0x0;
      in_stack_fffff8d4 = "Press TAB/SHIFT-TAB for prev/next LOD.";
    }
    engine_2d_c_drawText_FUN_00401fd0
              (in_stack_fffff8d4,(int)in_stack_fffff8d8,(int)in_stack_fffff8dc);
    g_ActiveRenderColor = 1;
    engine_2d_c_drawLine_FUN_004011b0(0,0x2b,10,0x2b);
    in_stack_fffff8dc = (char *)((int)in_stack_00000044 + 0xb);
    in_stack_fffff8d8 = (CKeys *)0x0;
    in_stack_fffff8d4 = (char *)0x51de02;
    engine_2d_c_drawLine_FUN_004011b0(0,(int)in_stack_fffff8dc,10,(int)in_stack_fffff8dc);
    iVar9 = 0;
    if (0 < in_stack_0000003c) {
      piStack00000040 = in_stack_00000008;
      do {
        if (iVar9 < 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1dc,"LOD%d: F=%d");
        }
        else {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1dc,"LOD%d: P=%d F=%d");
        }
        piVar10 = (int *)((int)piStack00000040 - (*in_stack_00000038 * in_stack_0000002c) / 0x1e0);
        if ((int)piVar10 < 0x2c) {
          piVar10 = (int *)0x2c;
        }
        if ((int)piStack00000040 < (int)piVar10) {
          piVar10 = piStack00000040;
        }
        if ((iVar3 == 0) && (iVar9 == 0)) {
          uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var,uVar2);
        }
        else if (auStack_114._0_4_ == *in_stack_00000044) {
          g_ActiveRenderColor = 0xfa;
        }
        else {
          g_ActiveRenderColor = 0xff;
        }
        in_stack_fffff8d4 = (char *)0x0;
        engine_2d_c_drawLine_FUN_004011b0(0,(int)piVar10,10,(int)piVar10);
        in_stack_fffff8dc = acStack_1e0;
        in_stack_fffff8d8 = (CKeys *)0x51def1;
        engine_2d_c_drawText_FUN_00401fd0(in_stack_fffff8dc,10,(int)piVar10);
        iVar9 = iVar9 + 1;
        piStack00000040 = piStack00000040 + 1;
      } while (iVar9 < in_stack_0000003c);
    }
    if (iVar3 != 0) {
      in_stack_fffff8dc =
           in_stack_00000048 +
           -(((int)(in_stack_00000048 + -0x2c) * (int)in_stack_00000038) / 0x1e0);
      if ((int)in_stack_fffff8dc < 0x2c) {
        in_stack_fffff8dc = (char *)0x2c;
      }
      if ((int)in_stack_00000048 < (int)in_stack_fffff8dc) {
        in_stack_fffff8dc = in_stack_00000048;
      }
      uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var_00,uVar2);
      in_stack_fffff8d8 = (CKeys *)0x0;
      in_stack_fffff8d4 = (char *)0x51df88;
      engine_2d_c_drawLine_FUN_004011b0(0,(int)in_stack_fffff8dc,10,(int)in_stack_fffff8dc);
    }
    shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0((CLodMesh *)auStack_114);
    if (in_stack_00000014 == 0) {
      shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990((CLodMesh *)(auStack_114 + 4),0)
      ;
    }
    else if ((in_stack_00000014 < 2) || (in_stack_00000014 == 2)) {
      shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
                ((CLodMesh *)(auStack_114 + 4),0,(int)in_stack_fffff8f0);
    }
    iVar9 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0((CLodMesh *)local_10c);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_1d0,"Current: %d pixelHeight, %d faces",in_stack_00000044,iVar9);
    in_stack_fffff8f0 = acStack_1cc;
    engine_2d_c_drawText_FUN_00401fd0(in_stack_fffff8f0,0,g_WindowHeight + -0xb);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar9 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x31);
    if (iVar9 != 0) {
      if (in_stack_0000006c < in_stack_00000010) {
        *(FILE **)(in_stack_0000006c * 4 + iVar7) = local_dc;
        in_stack_00000008[in_stack_0000006c] = in_stack_00000068;
        auStack_33c[in_stack_0000006c] = unaff_ESI;
        iVar3 = in_stack_0000006c;
        in_stack_0000006c = in_stack_0000006c + 1;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't have more than %d LODs.",in_stack_00000010);
      }
    }
    if (0 < iVar3) {
      iVar9 = *(int *)(iVar3 * 4 + iVar7) / 0x14;
      iVar6 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
      if (iVar6 != 0) {
        iVar9 = iVar9 * 3;
      }
      iVar6 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
      if ((iVar6 != 0) || (iVar9 < 2)) {
        iVar9 = 2;
      }
      in_stack_fffff8dc = (char *)0x4b;
      in_stack_fffff8d4 = (char *)0x51e0dc;
      in_stack_fffff8d8 = g_CKeysPtr;
      iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4b);
      if (iVar6 != 0) {
        piVar10 = (int *)(iVar3 * 4 + iVar7);
        *piVar10 = *piVar10 - iVar9;
      }
      in_stack_fffff8f0 = (char *)0x4d;
      iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4d);
      if (iVar6 != 0) {
        piVar10 = (int *)(iVar3 * 4 + iVar7);
        *piVar10 = *piVar10 + iVar9;
      }
      iVar9 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x21);
      if (iVar9 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                  (g_CEditorToolsPtr,"Enter face count",(int *)(iVar3 * 4 + iVar7),false,0,
                   0,true);
      }
    }
    iVar9 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x20);
    if ((iVar9 != 0) && (0 < iVar3)) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_194,"Delete LOD %d?",iVar3);
      iVar9 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,acStack_190);
      if (iVar9 != 0) {
        in_stack_0000008c = in_stack_0000008c + -1;
        iVar9 = iVar3 * 4;
        in_stack_000000a8 = iVar9 + 4;
        n = (in_stack_0000008c - iVar3) * 4;
        crt_string_c_memmove_FUN_005fe5e0(in_stack_00000008 + iVar3,in_stack_00000008 + iVar3 + 1,n)
        ;
        crt_string_c_memmove_FUN_005fe5e0
                  ((void *)(iVar7 + iVar9),(void *)(iVar7 + in_stack_000000ac),n);
        crt_string_c_memmove_FUN_005fe5e0(auStack_314 + iVar9,auStack_314 + in_stack_000000b0,n);
      }
    }
    in_stack_000000a0 = 0;
    if (0 < in_stack_00000098) {
      in_stack_000000ac = in_stack_00000098 + -1;
      do {
        iVar6 = 1;
        iVar9 = iVar3;
        piVar10 = in_stack_00000008;
        if (1 < in_stack_000000ac) {
          do {
            piVar8 = piVar10 + 1;
            in_stack_000000b0 = iVar6 * 4;
            iVar3 = iVar9;
            if (*piVar8 < piVar10[2]) {
              in_stack_00000088 = *piVar8;
              *piVar8 = in_stack_00000008[iVar6 + 1];
              in_stack_00000008[iVar6 + 1] = in_stack_00000088;
              in_stack_000000b4 = (int *)(iVar7 + in_stack_000000b0 + 4);
              in_stack_0000008c = *(int *)(iVar7 + in_stack_000000b0);
              *(int *)(iVar7 + in_stack_000000b0) = *in_stack_000000b4;
              *in_stack_000000b4 = in_stack_0000008c;
              uVar1 = auStack_310[iVar6];
              auStack_310[iVar6] = auStack_310[iVar6 + 1];
              iVar3 = iVar6 + 1;
              auStack_310[iVar6 + 1] = uVar1;
              if ((iVar9 != iVar6) && (bVar11 = iVar9 == iVar3, iVar3 = iVar9, bVar11)) {
                iVar3 = iVar6;
              }
            }
            iVar6 = iVar6 + 1;
            iVar9 = iVar3;
            piVar10 = piVar8;
          } while (iVar6 < in_stack_000000ac);
        }
        in_stack_000000a0 = in_stack_000000a0 + 1;
      } while (in_stack_000000a0 < in_stack_00000098);
    }
    iVar7 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf);
    if (iVar7 != 0) {
      iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
      if (iVar7 == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = iVar3 + -1;
      }
      if (iVar3 < 0) {
        iVar3 = in_stack_000000c0 + -1;
      }
      if (in_stack_000000c0 <= iVar3) {
        iVar3 = 0;
      }
    }
    iVar7 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x14);
    if (iVar7 != 0) {
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = -1;
      }
    }
    iVar7 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar7 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff998);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff99c,"Accept LOD settings.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff9a0,"Cancel LOD selection.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff9a4,"Oops, go back to editing the LODs.");
      iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffff9a8,"Accept or Cancel?",-1,0);
      if (iVar7 == 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff9ac,0,(uint)in_stack_fffff9ac,(uint)in_stack_fffff9b0,
                   (uint)in_stack_fffff9b4,(uint)in_stack_fffff9b8,in_stack_fffff9bc);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)&local_5c.max);
        return in_stack_000000fc;
      }
      if (iVar7 == 1) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff9ac,0,(uint)in_stack_fffff9ac,(uint)in_stack_fffff9b0,
                   (uint)in_stack_fffff9b4,(uint)in_stack_fffff9b8,in_stack_fffff9bc);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)&local_5c.max);
        return -1;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff9ac,0,(uint)in_stack_fffff9ac,(uint)in_stack_fffff9b0,
                 (uint)in_stack_fffff9b4,(uint)in_stack_fffff9b8,in_stack_fffff9bc);
    }
    if (-1 < iVar3) {
      in_stack_0000008c = aiStack_2a8[iVar3];
    }
    in_stack_fffff9ac = (CStrList_vtable *)0xf;
    shape_spotview_cpp_CSpotView_FUN_005b9670((CSpotView *)&stack0x00000060);
  } while( true );
}
