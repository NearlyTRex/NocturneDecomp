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
  int *piVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  uint unaff_EBP;
  int *piVar9;
  SIZE_T n;
  bool bVar10;
  double dVar11;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  int in_stack_00000024;
  int *in_stack_00000030;
  int in_stack_00000034;
  int *piStack00000038;
  int *in_stack_0000003c;
  char *in_stack_00000040;
  int in_stack_00000060;
  int in_stack_00000064;
  int in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000090;
  int in_stack_00000098;
  int in_stack_000000a0;
  int in_stack_000000a4;
  int in_stack_000000a8;
  int *in_stack_000000ac;
  int in_stack_000000b8;
  int in_stack_000000f4;
  CGame *in_stack_fffff89c;
  char *in_stack_fffff8cc;
  CKeys *in_stack_fffff8d0;
  char *in_stack_fffff8d4;
  char *in_stack_fffff8e8;
  CStrList_vtable *in_stack_fffff9a4;
  CStrList_vtable *in_stack_fffff9a8;
  CStrList_vtable *in_stack_fffff9ac;
  CStrList_vtable *in_stack_fffff9b0;
  uint in_stack_fffff9b4;
  SLodSamplePoint *pSStack_3ac;
  float afStack_390 [19];
  uint auStack_344 [10];
  byte auStack_31c [4];
  uint auStack_318 [26];
  int aiStack_2b0 [44];
  char acStack_200 [4];
  char acStack_1fc [20];
  char acStack_1e8 [4];
  char acStack_1e4 [12];
  char acStack_1d8 [4];
  char acStack_1d4 [56];
  char acStack_19c [4];
  char acStack_198 [56];
  byte auStack_160 [40];
  int iStack_138;
  int iStack_130;
  byte auStack_11c [8];
  byte auStack_114 [56];
  FILE *local_dc;
  float local_d8;
  CLodEdge *local_d4;
  float local_d0;
  CLodEdge *local_cc;
  SSpatialGrid *local_c8;
  byte local_c4 [4];
  byte local_c0 [8];
  float local_b8;
  SLodSamplePoint *local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  FILE *pFStack_a0;
  float fStack_9c;
  CLodEdge *local_98;
  float local_94;
  CLodEdge *local_90;
  byte local_8c [20];
  SLodSamplePoint *local_78;
  float local_74;
  byte local_70 [8];
  float fStack_68;
  float local_64;
  float local_60;
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
  local_60 = local_30 * 0.5f;
  local_2c = local_74 + fStack_68;
  fStack_28 = (float)local_70._0_4_ + local_64;
  local_5c.min.x = local_2c * 0.5f;
  local_5c.min.y = fStack_28 * 0.5f;
  if (&fStack_9c != &local_60) {
    fStack_9c = local_60;
    local_98 = (CLodEdge *)local_5c.min.x;
    local_94 = local_5c.min.y;
  }
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff89c);
  shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840((CLodMesh *)auStack_160);
  CStack_40.y = local_60 - (float)local_70._4_4_;
  iVar3 = -1;
  CStack_40.x = local_64 - (float)local_70._0_4_;
  CStack_40.z = local_5c.min.x - fStack_68;
  do {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xfc);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (iVar3 == 0) {
      local_78 = pSStack_3ac;
    }
    shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0((CSpotView *)(auStack_114 + 0x34));
    local_dc = pFStack_a0;
    local_d8 = fStack_9c;
    local_d4 = local_98;
    local_d0 = local_94;
    local_cc = local_90;
    local_c8 = (SSpatialGrid *)local_8c._0_4_;
    if (local_c4 != local_8c + 4) {
      local_c4 = (byte  [4])local_8c._4_4_;
      local_c0._0_4_ = local_8c._8_4_;
      local_c0._4_4_ = local_8c._12_4_;
    }
    local_b4 = local_78;
    local_b0 = local_74;
    local_a4 = fStack_68;
    local_b8 = 0.0;
    fStack_ac = 0.0;
    local_a8 = 0.0;
    shape_spotview_cpp_CSpotView_FUN_005b9a20((CSpotView *)&local_dc);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&g_ZeroVector);
    fVar5 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(&local_5c);
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar5);
    shape_spotview_cpp_CSpotView_FUN_005b9a20((CSpotView *)&local_94);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&g_ZeroVector);
    if (iVar3 < 0) {
      iVar8 = in_stack_00000010 + -1;
      if (iVar8 < 1) {
LAB_0051e453:
        iVar8 = in_stack_0000000c[iVar8];
      }
      else {
        piVar9 = in_stack_00000008 + iVar8;
        do {
          if ((int)in_stack_0000000c < *piVar9) goto LAB_0051e453;
          iVar8 = iVar8 + -1;
          piVar9 = piVar9 + -1;
        } while (0 < iVar8);
        iVar8 = in_stack_0000000c[iVar8];
      }
    }
    else if (iVar3 == 0) {
      iVar8 = ((CLodMesh *)(int)ROUND(dVar11))->next_lod->tri_count;
    }
    else {
      iVar8 = in_stack_0000000c[iVar3];
    }
    if (((iStack_138 < iVar8 + -1) || (iVar8 < iStack_138)) &&
       (shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920((CLodMesh *)(int)ROUND(dVar11)),
       iVar8 = INT_0067d39c, INT_0067d39c = iVar8, in_stack_00000014 == 2)) {
      INT_0067d39c = 0;
      shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0((CLodMesh *)(auStack_160 + 0x24));
      INT_0067d39c = iVar8;
    }
    if (0 < iVar3) {
      in_stack_0000000c[iVar3] = iStack_130;
      in_stack_00000008[iVar3] = in_stack_00000014;
      afStack_390[iVar3] = local_5c.min.x;
    }
    if (iVar3 < 0) {
      engine_2d_c_drawText_FUN_00401fd0("TEST MODE: Adjust view to test LODs.",0,0);
      in_stack_fffff8d4 = (char *)0xb;
      in_stack_fffff8d0 = (CKeys *)0x0;
      in_stack_fffff8cc = "Press N to create a new LOD at this distance";
    }
    else if (iVar3 != 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_200,"Editing LOD %d of %d.",iVar3,in_stack_00000018);
      engine_2d_c_drawText_FUN_00401fd0(acStack_1fc,0,0);
      engine_2d_c_drawText_FUN_00401fd0("Use LEFT/RIGHT to adjust face count.",0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Press T to go to test mode.",0,0x16);
      in_stack_fffff8d4 = (char *)0x21;
      in_stack_fffff8d0 = (CKeys *)0x0;
      in_stack_fffff8cc = "Press TAB/SHIFT-TAB for prev/next LOD.";
    }
    engine_2d_c_drawText_FUN_00401fd0
              (in_stack_fffff8cc,(int)in_stack_fffff8d0,(int)in_stack_fffff8d4);
    g_ActiveRenderColor = 1;
    engine_2d_c_drawLine_FUN_004011b0(0,0x2b,10,0x2b);
    in_stack_fffff8d4 = (char *)((int)in_stack_0000003c + 0xb);
    in_stack_fffff8d0 = (CKeys *)0x0;
    in_stack_fffff8cc = (char *)0x51de02;
    engine_2d_c_drawLine_FUN_004011b0(0,(int)in_stack_fffff8d4,10,(int)in_stack_fffff8d4);
    iVar8 = 0;
    if (0 < in_stack_00000034) {
      piStack00000038 = in_stack_00000008;
      do {
        if (iVar8 < 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1e4,"LOD%d: F=%d");
        }
        else {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1e4,"LOD%d: P=%d F=%d");
        }
        piVar9 = (int *)((int)piStack00000038 - (*in_stack_00000030 * in_stack_00000024) / 0x1e0);
        if ((int)piVar9 < 0x2c) {
          piVar9 = (int *)0x2c;
        }
        if ((int)piStack00000038 < (int)piVar9) {
          piVar9 = piStack00000038;
        }
        if ((iVar3 == 0) && (iVar8 == 0)) {
          uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var,uVar2);
        }
        else if (auStack_11c._0_4_ == *in_stack_0000003c) {
          g_ActiveRenderColor = 0xfa;
        }
        else {
          g_ActiveRenderColor = 0xff;
        }
        in_stack_fffff8cc = (char *)0x0;
        engine_2d_c_drawLine_FUN_004011b0(0,(int)piVar9,10,(int)piVar9);
        in_stack_fffff8d4 = acStack_1e8;
        in_stack_fffff8d0 = (CKeys *)0x51def1;
        engine_2d_c_drawText_FUN_00401fd0(in_stack_fffff8d4,10,(int)piVar9);
        iVar8 = iVar8 + 1;
        piStack00000038 = piStack00000038 + 1;
      } while (iVar8 < in_stack_00000034);
    }
    if (iVar3 != 0) {
      in_stack_fffff8d4 =
           in_stack_00000040 +
           -(((int)(in_stack_00000040 + -0x2c) * (int)in_stack_00000030) / 0x1e0);
      if ((int)in_stack_fffff8d4 < 0x2c) {
        in_stack_fffff8d4 = (char *)0x2c;
      }
      if ((int)in_stack_00000040 < (int)in_stack_fffff8d4) {
        in_stack_fffff8d4 = in_stack_00000040;
      }
      uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var_00,uVar2);
      in_stack_fffff8d0 = (CKeys *)0x0;
      in_stack_fffff8cc = (char *)0x51df88;
      engine_2d_c_drawLine_FUN_004011b0(0,(int)in_stack_fffff8d4,10,(int)in_stack_fffff8d4);
    }
    shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0((CLodMesh *)auStack_11c);
    if (in_stack_00000014 == 0) {
      shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990((CLodMesh *)(auStack_11c + 4),0)
      ;
    }
    else if ((in_stack_00000014 < 2) || (in_stack_00000014 == 2)) {
      shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
                ((CLodMesh *)(auStack_11c + 4),0,(int)in_stack_fffff8e8);
    }
    iVar8 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0((CLodMesh *)auStack_114);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_1d8,"Current: %d pixelHeight, %d faces",in_stack_0000003c,iVar8);
    in_stack_fffff8e8 = acStack_1d4;
    engine_2d_c_drawText_FUN_00401fd0(in_stack_fffff8e8,0,g_WindowHeight + -0xb);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x31);
    if (iVar8 != 0) {
      if (in_stack_00000064 < in_stack_00000010) {
        in_stack_0000000c[in_stack_00000064] = auStack_114._48_4_;
        in_stack_00000008[in_stack_00000064] = in_stack_00000060;
        auStack_344[in_stack_00000064] = unaff_EBP;
        iVar3 = in_stack_00000064;
        in_stack_00000064 = in_stack_00000064 + 1;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't have more than %d LODs.",in_stack_00000010);
      }
    }
    if (0 < iVar3) {
      iVar8 = in_stack_0000000c[iVar3] / 0x14;
      iVar6 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
      if (iVar6 != 0) {
        iVar8 = iVar8 * 3;
      }
      iVar6 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
      if ((iVar6 != 0) || (iVar8 < 2)) {
        iVar8 = 2;
      }
      in_stack_fffff8d4 = (char *)0x4b;
      in_stack_fffff8cc = (char *)0x51e0dc;
      in_stack_fffff8d0 = g_CKeysPtr;
      iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4b);
      if (iVar6 != 0) {
        in_stack_0000000c[iVar3] = in_stack_0000000c[iVar3] - iVar8;
      }
      in_stack_fffff8e8 = (char *)0x4d;
      iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4d);
      if (iVar6 != 0) {
        in_stack_0000000c[iVar3] = in_stack_0000000c[iVar3] + iVar8;
      }
      iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x21);
      if (iVar8 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                  (g_CEditorToolsPtr,"Enter face count",in_stack_0000000c + iVar3,false,0,0
                   ,true);
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x20);
    if ((iVar8 != 0) && (0 < iVar3)) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_19c,"Delete LOD %d?",iVar3);
      iVar8 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,acStack_198);
      if (iVar8 != 0) {
        in_stack_00000084 = in_stack_00000084 + -1;
        in_stack_000000a0 = iVar3 * 4 + 4;
        n = (in_stack_00000084 - iVar3) * 4;
        crt_string_c_memmove_FUN_005fe5e0(in_stack_00000008 + iVar3,in_stack_00000008 + iVar3 + 1,n)
        ;
        crt_string_c_memmove_FUN_005fe5e0
                  (in_stack_0000000c + iVar3,(void *)((int)in_stack_0000000c + in_stack_000000a4),n)
        ;
        crt_string_c_memmove_FUN_005fe5e0(auStack_31c + iVar3 * 4,auStack_31c + in_stack_000000a8,n)
        ;
      }
    }
    in_stack_00000098 = 0;
    if (0 < in_stack_00000090) {
      in_stack_000000a4 = in_stack_00000090 + -1;
      do {
        iVar6 = 1;
        iVar8 = iVar3;
        piVar9 = in_stack_00000008;
        if (1 < in_stack_000000a4) {
          do {
            piVar7 = piVar9 + 1;
            in_stack_000000a8 = iVar6 * 4;
            iVar3 = iVar8;
            if (*piVar7 < piVar9[2]) {
              in_stack_00000080 = *piVar7;
              *piVar7 = in_stack_00000008[iVar6 + 1];
              in_stack_00000008[iVar6 + 1] = in_stack_00000080;
              in_stack_000000ac = in_stack_0000000c + iVar6 + 1;
              in_stack_00000084 = in_stack_0000000c[iVar6];
              in_stack_0000000c[iVar6] = *in_stack_000000ac;
              *in_stack_000000ac = in_stack_00000084;
              uVar1 = auStack_318[iVar6];
              auStack_318[iVar6] = auStack_318[iVar6 + 1];
              iVar3 = iVar6 + 1;
              auStack_318[iVar6 + 1] = uVar1;
              if ((iVar8 != iVar6) && (bVar10 = iVar8 == iVar3, iVar3 = iVar8, bVar10)) {
                iVar3 = iVar6;
              }
            }
            iVar6 = iVar6 + 1;
            iVar8 = iVar3;
            piVar9 = piVar7;
          } while (iVar6 < in_stack_000000a4);
        }
        in_stack_00000098 = in_stack_00000098 + 1;
      } while (in_stack_00000098 < in_stack_00000090);
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf);
    if (iVar8 != 0) {
      iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
      if (iVar8 == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = iVar3 + -1;
      }
      if (iVar3 < 0) {
        iVar3 = in_stack_000000b8 + -1;
      }
      if (in_stack_000000b8 <= iVar3) {
        iVar3 = 0;
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x14);
    if (iVar8 != 0) {
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = -1;
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar8 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff990);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff994,"Accept LOD settings.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff998,"Cancel LOD selection.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff99c,"Oops, go back to editing the LODs.");
      iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffff9a0,"Accept or Cancel?",-1,0);
      if (iVar8 == 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff9a4,0,(uint)in_stack_fffff9a4,(uint)in_stack_fffff9a8,
                   (uint)in_stack_fffff9ac,(uint)in_stack_fffff9b0,in_stack_fffff9b4);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)&local_5c.min.y);
        return in_stack_000000f4;
      }
      if (iVar8 == 1) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff9a4,0,(uint)in_stack_fffff9a4,(uint)in_stack_fffff9a8,
                   (uint)in_stack_fffff9ac,(uint)in_stack_fffff9b0,in_stack_fffff9b4);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)&local_5c.min.y);
        return -1;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff9a4,0,(uint)in_stack_fffff9a4,(uint)in_stack_fffff9a8,
                 (uint)in_stack_fffff9ac,(uint)in_stack_fffff9b0,in_stack_fffff9b4);
    }
    if (-1 < iVar3) {
      in_stack_00000084 = aiStack_2b0[iVar3];
    }
    in_stack_fffff9a4 = (CStrList_vtable *)0xf;
    shape_spotview_cpp_CSpotView_FUN_005b9670((CSpotView *)&stack0x00000058);
  } while( true );
}
