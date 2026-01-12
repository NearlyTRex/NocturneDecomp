// Name: shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990
// Address: 0051d990
// Address Range: [[0051d990, 0051e6aa]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh * this_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(CLodMesh *this_ptr)

{
  int iVar1;
  uint uVar2;
  uchar uVar3;
  int iVar4;
  CVector3f *pCVar5;
  float fVar6;
  CSpotView *this_ptr_00;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar7;
  int *piVar8;
  int iVar9;
  BADSPACEBASE *in_ESP;
  int iVar10;
  SIZE_T n;
  bool bVar11;
  double dVar12;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  char *text;
  CGame *in_stack_fffff880;
  CSpotView *this_ptr_01;
  CGame *d2;
  uint in_stack_fffff884;
  char **in_stack_fffff888;
  CStrList_vtable *in_stack_fffff88c;
  uint in_stack_fffff890;
  float local_3d8;
  char acStack_3d4 [4];
  uint auStack_3d0 [98];
  char local_248 [200];
  byte local_180 [8];
  int local_178;
  byte local_10c [8];
  char local_104 [4];
  char local_100 [4];
  char local_fc [4];
  char local_f8 [4];
  float local_f4;
  float local_f0;
  float local_ec;
  char local_e8 [8];
  char local_e0 [4];
  char local_dc [12];
  byte local_d0 [24];
  float local_b8;
  float local_b4;
  float local_b0;
  char local_a8 [4];
  char local_a4 [4];
  char acStack_a0 [8];
  char local_98 [4];
  byte local_94 [20];
  float local_80;
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
  iVar4 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(this_ptr->next_lod);
  *in_stack_0000000c = iVar4;
  shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
            (this_ptr,(CBoundingBox3D *)local_94);
  shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0((CSpotView *)local_d0);
  shape_spotview_cpp_CSpotView_FUN_005b9620((CSpotView *)local_d0);
  pCVar5 = shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                     (this_ptr,&local_70,(CVector3f *)local_94);
  if ((CVector3f *)(local_94 + 4) != pCVar5) {
    local_94._0_4_ = pCVar5->x;
    local_94._4_4_ = pCVar5->y;
    local_94._8_4_ = pCVar5->z;
  }
  pCVar5 = shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
                     (this_ptr,&local_58,(CVector3f *)(local_94 + 0xc));
  if ((CVector3f *)(local_94 + 0x10) != pCVar5) {
    local_94._12_4_ = pCVar5->x;
    local_94._16_4_ = pCVar5->y;
    local_80 = pCVar5->z;
  }
  local_4c = (float)local_94._0_4_ + (float)local_94._12_4_;
  local_7c = local_4c * 0.5f;
  local_48 = (float)local_94._4_4_ + (float)local_94._16_4_;
  local_44 = (float)local_94._8_4_ + local_80;
  local_78 = local_48 * 0.5f;
  local_74 = local_44 * 0.5f;
  if (&local_b8 != &local_7c) {
    local_b8 = local_7c;
    local_b4 = local_78;
    local_b0 = local_74;
  }
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff880);
  shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840((CLodMesh *)local_180);
  local_60 = (float)local_94._16_4_ - (float)local_94._4_4_;
  local_3d8 = local_60 * (float)0.75;
  iVar4 = -1;
  local_64 = (float)local_94._12_4_ - (float)local_94._0_4_;
  local_5c = local_80 - (float)local_94._8_4_;
  do {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xfc);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (iVar4 == 0) {
      acStack_a0[0] = acStack_3d4[0];
      acStack_a0[1] = acStack_3d4[1];
      acStack_a0[2] = acStack_3d4[2];
      acStack_a0[3] = acStack_3d4[3];
    }
    this_ptr_01 = (CSpotView *)(local_10c + 4);
    shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0(this_ptr_01);
    local_10c._0_4_ = local_d0._0_4_;
    local_10c._4_4_ = local_d0._4_4_;
    local_104[0] = local_d0[8];
    local_104[1] = local_d0[9];
    local_104[2] = local_d0[10];
    local_104[3] = local_d0[0xb];
    local_100[0] = local_d0[0xc];
    local_100[1] = local_d0[0xd];
    local_100[2] = local_d0[0xe];
    local_100[3] = local_d0[0xf];
    local_fc[0] = local_d0[0x10];
    local_fc[1] = local_d0[0x11];
    local_fc[2] = local_d0[0x12];
    local_fc[3] = local_d0[0x13];
    local_f8[0] = local_d0[0x14];
    local_f8[1] = local_d0[0x15];
    local_f8[2] = local_d0[0x16];
    local_f8[3] = local_d0[0x17];
    if (&local_f4 != &local_b8) {
      local_f4 = local_b8;
      local_f0 = local_b4;
      local_ec = local_b0;
    }
    local_e8[4] = local_a8[0];
    local_e8[5] = local_a8[1];
    local_e8[6] = local_a8[2];
    local_e8[7] = local_a8[3];
    local_e0[0] = local_a4[0];
    local_e0[1] = local_a4[1];
    local_e0[2] = local_a4[2];
    local_e0[3] = local_a4[3];
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
              (g_CDemonRendererPtr,&g_ZeroVector);
    fVar6 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
                      ((CBoundingBox3D *)local_94);
    dVar12 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
    local_38 = (int)ROUND(dVar12);
    shape_spotview_cpp_CSpotView_FUN_005b9a20(this_ptr_00);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&g_ZeroVector);
    if (iVar4 < 0) {
      iVar9 = local_30 + -1;
      if (iVar9 < 1) {
LAB_0051e453:
        iVar9 = in_stack_0000000c[iVar9];
      }
      else {
        piVar7 = in_stack_00000008 + iVar9;
        do {
          if (local_34 < *piVar7) goto LAB_0051e453;
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
    if (((local_178 < iVar9 + -1) || (iVar9 < local_178)) &&
       (shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(this_ptr), iVar9 = INT_0067d39c,
       INT_0067d39c = iVar9, in_stack_00000014 == 2)) {
      INT_0067d39c = 0;
      shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0((CLodMesh *)local_180);
      INT_0067d39c = iVar9;
    }
    if (0 < iVar4) {
      in_stack_0000000c[iVar4] = local_178;
      in_stack_00000008[iVar4] = local_34;
      *(char (*) [4])(acStack_3d4 + iVar4 * 4 + -4) = local_a4;
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
      crt_stdio_c_sprintf_FUN_005fdbd0(local_248,"Editing LOD %d of %d.",iVar4,local_30);
      engine_2d_c_drawText_FUN_00401fd0(local_248,0,0);
      engine_2d_c_drawText_FUN_00401fd0("Use LEFT/RIGHT to adjust face count.",0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Press T to go to test mode.",0,0x16);
      iVar9 = 0x21;
      text = "Press TAB/SHIFT-TAB for prev/next LOD.";
    }
    engine_2d_c_drawText_FUN_00401fd0(text,0,iVar9);
    local_2c = (int *)(g_WindowHeight + -0x18);
    g_ActiveRenderColor = 1;
    engine_2d_c_drawLine_FUN_004011b0(0,0x2b,10,0x2b);
    engine_2d_c_drawLine_FUN_004011b0(0,iStack_28 + 0xb,10,iStack_28 + 0xb);
    iVar9 = 0;
    if (0 < local_30) {
      local_38 = local_24 + -0x2c;
      local_2c = in_stack_00000008;
      local_20 = in_stack_0000000c;
      do {
        if (iVar9 < 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0(local_248,"LOD%d: F=%d",iVar9,*local_20);
        }
        else {
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (local_248,"LOD%d: P=%d F=%d",iVar9,in_stack_00000008[iVar9],*local_20);
        }
        iVar10 = local_24 - (*local_2c * local_38) / 0x1e0;
        if (iVar10 < 0x2c) {
          iVar10 = 0x2c;
        }
        if (local_24 < iVar10) {
          iVar10 = local_24;
        }
        if ((iVar4 == 0) && (iVar9 == 0)) {
          uVar3 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var,uVar3);
        }
        else if (local_178 == *local_20) {
          g_ActiveRenderColor = 0xfa;
        }
        else {
          g_ActiveRenderColor = 0xff;
        }
        engine_2d_c_drawLine_FUN_004011b0(0,iVar10,10,iVar10);
        engine_2d_c_drawText_FUN_00401fd0(local_248,10,iVar10);
        iVar9 = iVar9 + 1;
        local_2c = local_2c + 1;
        local_20 = local_20 + 1;
      } while (iVar9 < local_30);
    }
    if (iVar4 != 0) {
      iVar9 = local_24 - ((local_24 + -0x2c) * local_34) / 0x1e0;
      if (iVar9 < 0x2c) {
        iVar9 = 0x2c;
      }
      if (local_24 < iVar9) {
        iVar9 = local_24;
      }
      uVar3 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var_00,uVar3);
      engine_2d_c_drawLine_FUN_004011b0(0,iVar9,10,iVar9);
    }
    shape_meshlod_cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0((CLodMesh *)local_180);
    if (in_stack_00000014 == 0) {
      shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990((CLodMesh *)local_180,0);
    }
    else if ((in_stack_00000014 < 2) || (in_stack_00000014 == 2)) {
      shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
                ((CLodMesh *)local_180,0,(int)this_ptr_01);
    }
    iVar9 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0
                      ((CLodMesh *)(local_180 + 4));
    crt_stdio_c_sprintf_FUN_005fdbd0(local_248,"Current: %d pixelHeight, %d faces",local_34,iVar9);
    engine_2d_c_drawText_FUN_00401fd0(local_248,0,g_WindowHeight + -0xb);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    d2 = g_CGamePtr;
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x31);
    iVar9 = local_30;
    if (iVar10 != 0) {
      if (local_30 < in_stack_00000010) {
        in_stack_0000000c[local_30] = local_178;
        in_stack_00000008[local_30] = local_34;
        iVar4 = local_30 * 4;
        local_30 = local_30 + 1;
        *(char (*) [4])(acStack_3d4 + iVar4 + -4) = local_a4;
        iVar4 = iVar9;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't have more than %d LODs.",in_stack_00000010);
      }
    }
    if (0 < iVar4) {
      iVar9 = in_stack_0000000c[iVar4] / 0x14;
      iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar10 != 0) {
        iVar9 = iVar9 * 3;
      }
      iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
      if ((iVar10 != 0) || (iVar9 < 2)) {
        iVar9 = 2;
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4b);
      if (iVar10 != 0) {
        in_stack_0000000c[iVar4] = in_stack_0000000c[iVar4] - iVar9;
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4d);
      if (iVar10 != 0) {
        in_stack_0000000c[iVar4] = in_stack_0000000c[iVar4] + iVar9;
      }
      iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x21);
      if (iVar9 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                  (g_CEditorToolsPtr,"Enter face count",in_stack_0000000c + iVar4,false,0,0
                   ,true);
      }
    }
    iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
    if ((iVar9 != 0) && (0 < iVar4)) {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_248,"Delete LOD %d?",iVar4);
      iVar9 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,local_248);
      if (iVar9 != 0) {
        local_30 = local_30 + -1;
        local_14 = (int *)(iVar4 * 4 + 4);
        n = (local_30 - iVar4) * 4;
        crt_string_c_memmove_FUN_005fe5e0(in_stack_00000008 + iVar4,in_stack_00000008 + iVar4 + 1,n)
        ;
        crt_string_c_memmove_FUN_005fe5e0
                  (in_stack_0000000c + iVar4,(void *)((int)in_stack_0000000c + (int)local_14),n);
        crt_string_c_memmove_FUN_005fe5e0
                  (acStack_3d4 + iVar4 * 4 + -4,(void *)((int)&local_3d8 + (int)local_14),n);
      }
    }
    iStack_28 = 0;
    if (0 < local_30) {
      iStack_1c = local_30 + -1;
      do {
        iVar10 = 1;
        iVar9 = iVar4;
        piVar7 = in_stack_00000008;
        if (1 < iStack_1c) {
          do {
            piVar8 = piVar7 + 1;
            iVar1 = iVar10 * 4;
            iStack_18 = iVar1;
            iVar4 = iVar9;
            if (*piVar8 < piVar7[2]) {
              iStack_40 = *piVar8;
              *piVar8 = in_stack_00000008[iVar10 + 1];
              in_stack_00000008[iVar10 + 1] = iStack_40;
              local_14 = in_stack_0000000c + iVar10 + 1;
              iStack_3c = in_stack_0000000c[iVar10];
              in_stack_0000000c[iVar10] = *local_14;
              *local_14 = iStack_3c;
              uVar2 = *(uint *)(acStack_3d4 + iVar1 + -4);
              *(uint *)(acStack_3d4 + iVar1 + -4) = *(uint *)(acStack_3d4 + iVar1);
              iVar4 = iVar10 + 1;
              *(uint *)(acStack_3d4 + iVar1) = uVar2;
              if ((iVar9 != iVar10) && (bVar11 = iVar9 == iVar4, iVar4 = iVar9, bVar11)) {
                iVar4 = iVar10;
              }
            }
            iVar10 = iVar10 + 1;
            iVar9 = iVar4;
            piVar7 = piVar8;
          } while (iVar10 < iStack_1c);
        }
        iStack_28 = iStack_28 + 1;
      } while (iStack_28 < local_30);
    }
    iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
    if (iVar9 != 0) {
      iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar9 == 0) {
        iVar4 = iVar4 + 1;
      }
      else {
        iVar4 = iVar4 + -1;
      }
      if (iVar4 < 0) {
        iVar4 = local_30 + -1;
      }
      if (local_30 <= iVar4) {
        iVar4 = 0;
      }
    }
    iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x14);
    if (iVar9 != 0) {
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = -1;
      }
    }
    iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar9 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff880);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff880,"Accept LOD settings.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff880,"Cancel LOD selection.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff880,"Oops, go back to editing the LODs.");
      iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         ((CPickList *)&stack0xfffff880,"Accept or Cancel?",-1,0);
      iVar9 = local_30;
      if (iVar10 == 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff880,0,(uint)d2,in_stack_fffff884,
                   (uint)in_stack_fffff888,(uint)in_stack_fffff88c,in_stack_fffff890);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)local_180);
        return iVar9;
      }
      if (iVar10 == 1) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff880,0,(uint)d2,in_stack_fffff884,
                   (uint)in_stack_fffff888,(uint)in_stack_fffff88c,in_stack_fffff890);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)local_180);
        return -1;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff880,0,(uint)d2,in_stack_fffff884,(uint)in_stack_fffff888,
                 (uint)in_stack_fffff88c,in_stack_fffff890);
    }
    if (-1 < iVar4) {
      local_a4 = *(char (*) [4])(acStack_3d4 + iVar4 * 4 + -4);
    }
    shape_spotview_cpp_CSpotView_FUN_005b9670((CSpotView *)local_d0);
  } while( true );
}
