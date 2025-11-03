// Name: shape_meshlod.cpp_FUN_0051d990
// Address: 0051d990
// Address Range: [[0051d990, 0051e6aa]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051d990()
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d63c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_006382e0
//   TerminatedCString s_Can_t_call_LodMesh_choos_006382f5
//   TerminatedCString s_TEST_MODE_Adjust_view_to_0063833d
//   TerminatedCString s_Press_N_to_create_a_new__00638362
//   TerminatedCString s_Viewing_LOD_0_This_LOD_c_0063838f
//   TerminatedCString s_Editing_LOD_d_of_d_006383ba
//   TerminatedCString s_Use_LEFT_RIGHT_to_adjust_006383d0
//   TerminatedCString s_Press_T_to_go_to_test_mo_006383f5
//   TerminatedCString s_Press_TAB_SHIFT_TAB_for__00638411
//   TerminatedCString s_LOD_d_P_d_F_d_00638438
//   TerminatedCString s_LOD_d_F_d_00638449
//   TerminatedCString s_Current_d_pixelHeight_d__00638455
//   TerminatedCString s_Can_t_have_more_than_d_L_00638477
//   TerminatedCString s_Enter_face_count_00638495
//   TerminatedCString s_Delete_LOD_d_006384a6
//   TerminatedCString s_Accept_LOD_settings_006384b5
//   TerminatedCString s_Cancel_LOD_selection_006384ca
//   TerminatedCString s_Oops_go_back_to_editing__006384e0
//   TerminatedCString s_Accept_or_Cancel_00638503
//   float FLOAT_00638515 = 0.5
//   double DOUBLE_0063851d = 0.75
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 DAT_0067d39c
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   int g_ActiveRenderColor
//   CGame g_CGameInstance
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CVector3f g_ZeroVector
// Function calls:
//   core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_stairs.cpp_FUN_005b95c0
//   core_stairs.cpp_FUN_005b9620
//   core_stairs.cpp_FUN_005b9670
//   core_stairs.cpp_FUN_005b9a20
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_memmove_FUN_005fe5e0
//   engine_2d.c_drawLine_FUN_004011b0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_meshlod.cpp_FUN_005164d0
//   shape_meshlod.cpp_FUN_00516500
//   shape_meshlod.cpp_FUN_0051b2e0
//   shape_meshlod.cpp_FUN_0051bac0
//   shape_meshlod.cpp_FUN_0051e6b0
//   shape_meshlod.cpp_FUN_0051e990
//   shape_meshlod.cpp_FUN_0051ead0
//   shape_meshlod.cpp_LodMesh_ctor_FUN_00515840
//   shape_meshlod.cpp_LodMesh_dtor_FUN_00515950
//   shape_meshlod.cpp_LodMesh_getLOD_FUN_0051b920
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4

#include "nocturne.h"

undefined4 shape_meshlod_cpp_FUN_0051d990(void)

{
  uchar uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float fVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar6;
  int iVar7;
  undefined4 extraout_EDX;
  int *piVar8;
  int iVar9;
  BADSPACEBASE *in_ESP;
  undefined4 unaff_ESI;
  int iVar10;
  int *piVar11;
  SIZE_T n;
  bool bVar12;
  float10 fVar13;
  double dVar14;
  int in_stack_00000004;
  int *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_0000002c;
  int *in_stack_00000038;
  int in_stack_0000003c;
  int *piStack00000040;
  int *in_stack_00000044;
  char *in_stack_00000048;
  int in_stack_00000068;
  int in_stack_0000006c;
  int in_stack_0000008c;
  int in_stack_00000098;
  int iStack000000a0;
  int in_stack_000000ac;
  int in_stack_000000b0;
  int in_stack_000000c0;
  undefined4 in_stack_000000fc;
  CGame *in_stack_fffff89c;
  char *in_stack_fffff8d4;
  CKeys *in_stack_fffff8d8;
  char *in_stack_fffff8dc;
  CStrList_vtable *in_stack_fffff9ac;
  CStrList_vtable *in_stack_fffff9b0;
  CStrList_vtable *in_stack_fffff9b4;
  CStrList_vtable *in_stack_fffff9b8;
  uint in_stack_fffff9bc;
  float fStack_3ac;
  float afStack_388 [19];
  undefined4 auStack_33c [10];
  undefined1 auStack_314 [4];
  undefined4 auStack_310 [26];
  int aiStack_2a8 [44];
  char acStack_1f8 [4];
  char acStack_1f4 [20];
  char acStack_1e0 [4];
  char acStack_1dc [12];
  char acStack_1d0 [4];
  char acStack_1cc [56];
  char acStack_194 [4];
  char acStack_190 [48];
  SLodMesh SStack_160;
  undefined1 local_e0 [12];
  float local_d4;
  float local_d0;
  char local_cc [4];
  char local_c8 [4];
  undefined1 local_c4 [20];
  float local_b0;
  char acStack_ac [8];
  float local_a4;
  char acStack_a0 [4];
  float fStack_9c;
  float local_98;
  float local_94;
  char local_90 [4];
  char local_8c [4];
  char local_88 [4];
  char local_84 [4];
  char local_80 [4];
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float local_64;
  float local_60;
  CBoundingBox3D local_5c;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_30;
  float local_2c;
  float fStack_28;
  
  if (*(int *)(in_stack_00000004 + 0x34) == 0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x155a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::chooseLodsInteractive until LODs have been created!");
  }
  *in_stack_00000008 = 999999;
  local_2c = 1.4013e-45;
  uVar2 = shape_meshlod_cpp_FUN_005164d0();
  *in_stack_0000000c = uVar2;
  shape_meshlod_cpp_FUN_00516500();
  core_stairs_cpp_FUN_005b95c0((CSpotView *)local_c4);
  core_stairs_cpp_FUN_005b9620();
  puVar3 = (undefined4 *)shape_meshlod_cpp_FUN_0051b2e0();
  if (&local_7c != puVar3) {
    local_7c = *puVar3;
    local_78 = (float)puVar3[1];
    local_74 = (float)puVar3[2];
  }
  pfVar4 = (float *)shape_meshlod_cpp_FUN_0051b2e0();
  if (&fStack_6c != pfVar4) {
    fStack_6c = *pfVar4;
    fStack_68 = pfVar4[1];
    local_64 = pfVar4[2];
  }
  local_30 = local_78 + fStack_6c;
  local_60 = local_30 * FLOAT_00638515;
  local_2c = local_74 + fStack_68;
  fStack_28 = local_70 + local_64;
  local_5c.min.x = local_2c * FLOAT_00638515;
  local_5c.min.y = fStack_28 * FLOAT_00638515;
  if (&fStack_9c != &local_60) {
    fStack_9c = local_60;
    local_98 = local_5c.min.x;
    local_94 = local_5c.min.y;
  }
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff89c);
  shape_meshlod_cpp_LodMesh_ctor_FUN_00515840(&SStack_160);
  fStack_3c = local_60 - fStack_6c;
  iVar10 = -1;
  fStack_40 = local_64 - local_70;
  local_38 = local_5c.min.x - fStack_68;
  do {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xfc);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (iVar10 == 0) {
      local_78 = fStack_3ac;
    }
    core_stairs_cpp_FUN_005b95c0((CSpotView *)local_e0);
    local_e0[4] = acStack_a0[0];
    local_e0[5] = acStack_a0[1];
    local_e0[6] = acStack_a0[2];
    local_e0[7] = acStack_a0[3];
    local_e0._8_4_ = fStack_9c;
    local_d4 = local_98;
    local_d0 = local_94;
    local_cc[0] = local_90[0];
    local_cc[1] = local_90[1];
    local_cc[2] = local_90[2];
    local_cc[3] = local_90[3];
    local_c8[0] = local_8c[0];
    local_c8[1] = local_8c[1];
    local_c8[2] = local_8c[2];
    local_c8[3] = local_8c[3];
    if (local_c4 != local_88) {
      local_c4[0] = local_88[0];
      local_c4[1] = local_88[1];
      local_c4[2] = local_88[2];
      local_c4[3] = local_88[3];
      local_c4[4] = local_84[0];
      local_c4[5] = local_84[1];
      local_c4[6] = local_84[2];
      local_c4[7] = local_84[3];
      local_c4[8] = local_80[0];
      local_c4[9] = local_80[1];
      local_c4[10] = local_80[2];
      local_c4[0xb] = local_80[3];
    }
    local_c4._16_4_ = local_78;
    local_b0 = local_74;
    local_a4 = fStack_68;
    local_c4[0xc] = '\0';
    local_c4[0xd] = '\0';
    local_c4[0xe] = '\0';
    local_c4[0xf] = '\0';
    acStack_ac[0] = '\0';
    acStack_ac[1] = '\0';
    acStack_ac[2] = '\0';
    acStack_ac[3] = '\0';
    acStack_ac[4] = '\0';
    acStack_ac[5] = '\0';
    acStack_ac[6] = '\0';
    acStack_ac[7] = '\0';
    core_stairs_cpp_FUN_005b9a20();
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&g_ZeroVector);
    fVar5 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(&local_5c);
    fVar13 = (float10)fVar5;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,&local_94));
    iVar7 = (int)ROUND(fVar13);
    core_stairs_cpp_FUN_005b9a20(SUB84(dVar14,0),(int)((ulonglong)dVar14 >> 0x20));
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&g_ZeroVector);
    if (iVar10 < 0) {
      iVar9 = in_stack_00000018 + -1;
      if (iVar9 < 1) {
LAB_0051e453:
        iVar9 = *(int *)(iVar7 + iVar9 * 4);
      }
      else {
        piVar11 = in_stack_00000008 + iVar9;
        do {
          if ((int)in_stack_00000014 < *piVar11) goto LAB_0051e453;
          iVar9 = iVar9 + -1;
          piVar11 = piVar11 + -1;
        } while (0 < iVar9);
        iVar9 = *(int *)(iVar7 + iVar9 * 4);
      }
    }
    else if (iVar10 == 0) {
      iVar9 = *(int *)(*(int *)(in_stack_00000004 + 0x34) + 8);
    }
    else {
      iVar9 = *(int *)(iVar10 * 4 + iVar7);
    }
    if ((((int)SStack_160.field0_0x0._48_4_ < iVar9 + -1) ||
        (iVar9 < (int)SStack_160.field0_0x0._48_4_)) &&
       (shape_meshlod_cpp_LodMesh_getLOD_FUN_0051b920(), uVar2 = DAT_0067d39c, DAT_0067d39c = uVar2,
       in_stack_00000014 == 2)) {
      DAT_0067d39c = 0;
      shape_meshlod_cpp_FUN_0051bac0();
      DAT_0067d39c = uVar2;
    }
    if (0 < iVar10) {
      *(undefined4 *)(iVar7 + iVar10 * 4) = SStack_160.field0_0x0._56_4_;
      in_stack_00000008[iVar10] = in_stack_0000001c;
      afStack_388[iVar10] = local_5c.min.z;
    }
    if (iVar10 < 0) {
      engine_2d_c_drawText_FUN_00401fd0("TEST MODE: Adjust view to test LODs.",0,0);
      in_stack_fffff8dc = (char *)0xb;
      in_stack_fffff8d8 = (CKeys *)0x0;
      in_stack_fffff8d4 = "Press N to create a new LOD at this distance";
    }
    else if (iVar10 != 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_1f8,"Editing LOD %d of %d.",iVar10,in_stack_00000020);
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
        piVar11 = (int *)((int)piStack00000040 - (*in_stack_00000038 * in_stack_0000002c) / 0x1e0);
        if ((int)piVar11 < 0x2c) {
          piVar11 = (int *)0x2c;
        }
        if ((int)piStack00000040 < (int)piVar11) {
          piVar11 = piStack00000040;
        }
        if ((iVar10 == 0) && (iVar9 == 0)) {
          uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          g_ActiveRenderColor = CONCAT31(extraout_var,uVar1);
        }
        else if (SStack_160.field0_0x0._76_4_ == *in_stack_00000044) {
          g_ActiveRenderColor = 0xfa;
        }
        else {
          g_ActiveRenderColor = 0xff;
        }
        in_stack_fffff8d4 = (char *)0x0;
        engine_2d_c_drawLine_FUN_004011b0(0,(int)piVar11,10,(int)piVar11);
        in_stack_fffff8dc = acStack_1e0;
        in_stack_fffff8d8 = (CKeys *)0x51def1;
        engine_2d_c_drawText_FUN_00401fd0(in_stack_fffff8dc,10,(int)piVar11);
        iVar9 = iVar9 + 1;
        piStack00000040 = piStack00000040 + 1;
      } while (iVar9 < in_stack_0000003c);
    }
    if (iVar10 != 0) {
      in_stack_fffff8dc =
           in_stack_00000048 +
           -(((int)(in_stack_00000048 + -0x2c) * (int)in_stack_00000038) / 0x1e0);
      if ((int)in_stack_fffff8dc < 0x2c) {
        in_stack_fffff8dc = (char *)0x2c;
      }
      if ((int)in_stack_00000048 < (int)in_stack_fffff8dc) {
        in_stack_fffff8dc = in_stack_00000048;
      }
      uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31(extraout_var_00,uVar1);
      in_stack_fffff8d8 = (CKeys *)0x0;
      in_stack_fffff8d4 = (char *)0x51df88;
      engine_2d_c_drawLine_FUN_004011b0(0,(int)in_stack_fffff8dc,10,(int)in_stack_fffff8dc);
    }
    shape_meshlod_cpp_FUN_0051e6b0();
    if (in_stack_00000014 == 0) {
      shape_meshlod_cpp_FUN_0051e990();
    }
    else if ((in_stack_00000014 < 2) || (in_stack_00000014 == 2)) {
      shape_meshlod_cpp_FUN_0051ead0();
    }
    uVar2 = shape_meshlod_cpp_FUN_005164d0();
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_1d0,"Current: %d pixelHeight, %d faces",in_stack_00000044,uVar2);
    engine_2d_c_drawText_FUN_00401fd0(acStack_1cc,0,g_WindowHeight + -0xb);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar9 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x31);
    if (iVar9 != 0) {
      if (in_stack_0000006c < in_stack_00000010) {
        *(undefined4 *)(in_stack_0000006c * 4 + iVar7) = local_e0._4_4_;
        in_stack_00000008[in_stack_0000006c] = in_stack_00000068;
        auStack_33c[in_stack_0000006c] = unaff_ESI;
        iVar10 = in_stack_0000006c;
        in_stack_0000006c = in_stack_0000006c + 1;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't have more than %d LODs.",in_stack_00000010);
      }
    }
    if (0 < iVar10) {
      iVar9 = *(int *)(iVar10 * 4 + iVar7) / 0x14;
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
        piVar11 = (int *)(iVar10 * 4 + iVar7);
        *piVar11 = *piVar11 - iVar9;
      }
      iVar6 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4d);
      if (iVar6 != 0) {
        piVar11 = (int *)(iVar10 * 4 + iVar7);
        *piVar11 = *piVar11 + iVar9;
      }
      iVar9 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x21);
      if (iVar9 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                  (g_CEditorToolsPtr,"Enter face count",(int *)(iVar10 * 4 + iVar7),false,0
                   ,0,true);
      }
    }
    iVar9 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x20);
    if ((iVar9 != 0) && (0 < iVar10)) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_194,"Delete LOD %d?",iVar10);
      iVar9 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,acStack_190);
      if (iVar9 != 0) {
        in_stack_0000008c = in_stack_0000008c + -1;
        n = (in_stack_0000008c - iVar10) * 4;
        crt_string_c_memmove_FUN_005fe5e0
                  (in_stack_00000008 + iVar10,in_stack_00000008 + iVar10 + 1,n);
        crt_string_c_memmove_FUN_005fe5e0
                  ((void *)(iVar7 + iVar10 * 4),(void *)(iVar7 + in_stack_000000ac),n);
        crt_string_c_memmove_FUN_005fe5e0
                  (auStack_314 + iVar10 * 4,auStack_314 + in_stack_000000b0,n);
      }
    }
    iStack000000a0 = 0;
    if (0 < in_stack_00000098) {
      in_stack_000000ac = in_stack_00000098 + -1;
      do {
        iVar6 = 1;
        iVar9 = iVar10;
        piVar11 = in_stack_00000008;
        if (1 < in_stack_000000ac) {
          do {
            piVar8 = piVar11 + 1;
            in_stack_000000b0 = iVar6 * 4;
            iVar10 = iVar9;
            if (*piVar8 < piVar11[2]) {
              iVar10 = *piVar8;
              *piVar8 = in_stack_00000008[iVar6 + 1];
              in_stack_00000008[iVar6 + 1] = iVar10;
              piVar11 = (int *)(iVar7 + in_stack_000000b0 + 4);
              in_stack_0000008c = *(int *)(iVar7 + in_stack_000000b0);
              *(int *)(iVar7 + in_stack_000000b0) = *piVar11;
              *piVar11 = in_stack_0000008c;
              uVar2 = auStack_310[iVar6];
              auStack_310[iVar6] = auStack_310[iVar6 + 1];
              iVar10 = iVar6 + 1;
              auStack_310[iVar6 + 1] = uVar2;
              if ((iVar9 != iVar6) && (bVar12 = iVar9 == iVar10, iVar10 = iVar9, bVar12)) {
                iVar10 = iVar6;
              }
            }
            iVar6 = iVar6 + 1;
            iVar9 = iVar10;
            piVar11 = piVar8;
          } while (iVar6 < in_stack_000000ac);
        }
        iStack000000a0 = iStack000000a0 + 1;
      } while (iStack000000a0 < in_stack_00000098);
    }
    iVar7 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf);
    if (iVar7 != 0) {
      iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
      if (iVar7 == 0) {
        iVar10 = iVar10 + 1;
      }
      else {
        iVar10 = iVar10 + -1;
      }
      if (iVar10 < 0) {
        iVar10 = in_stack_000000c0 + -1;
      }
      if (in_stack_000000c0 <= iVar10) {
        iVar10 = 0;
      }
    }
    iVar7 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x14);
    if (iVar7 != 0) {
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = -1;
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
        shape_meshlod_cpp_LodMesh_dtor_FUN_00515950((SLodMesh *)&local_5c.max);
        return in_stack_000000fc;
      }
      if (iVar7 == 1) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff9ac,0,(uint)in_stack_fffff9ac,(uint)in_stack_fffff9b0,
                   (uint)in_stack_fffff9b4,(uint)in_stack_fffff9b8,in_stack_fffff9bc);
        shape_meshlod_cpp_LodMesh_dtor_FUN_00515950((SLodMesh *)&local_5c.max);
        return 0xffffffff;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff9ac,0,(uint)in_stack_fffff9ac,(uint)in_stack_fffff9b0,
                 (uint)in_stack_fffff9b4,(uint)in_stack_fffff9b8,in_stack_fffff9bc);
    }
    if (-1 < iVar10) {
      in_stack_0000008c = aiStack_2a8[iVar10];
    }
    in_stack_fffff9ac = (CStrList_vtable *)0xf;
    core_stairs_cpp_FUN_005b9670();
  } while( true );
}


// Assembly code:
// 0051d990: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051d990
// 0051d991: PUSH ESI
// 0051d992: PUSH EDI
// 0051d993: PUSH EBP
// 0051d994: MOV EBP,ESP
// 0051d996: SUB ESP,0x770
// 0051d99c: AND ESP,0xfffffff8
// 0051d99f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051d9a2: CMP dword ptr [EAX + 0x34],0x0
// 0051d9a6: JZ 0x0051e3d9
//   XREF to: 0051e3d9 (CONDITIONAL_JUMP)
// 0051d9ac: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0051d9ac
//   XREF to: Stack[0x8] (READ)
// 0051d9af: MOV dword ptr [EAX],0xf423f
// 0051d9b5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051d9b8: MOV EDI,dword ptr [EAX + 0x34]
// 0051d9bb: MOV ESI,0x1
// 0051d9c0: PUSH EDI
// 0051d9c1: MOV dword ptr [ESP + 0x754],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 0051d9c8: CALL shape_meshlod.cpp_FUN_005164d0
//   XREF to: 005164d0 (UNCONDITIONAL_CALL)
// 0051d9cd: ADD ESP,0x4
// 0051d9d0: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051d9d3: MOV dword ptr [EDX],EAX
// 0051d9d5: LEA EAX,[ESP + 0x6ec]
//   XREF to: Stack[-0x94] (DATA)
// 0051d9dc: PUSH EAX
// 0051d9dd: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051d9e0: PUSH EAX
// 0051d9e1: CALL shape_meshlod.cpp_FUN_00516500
//   XREF to: 00516500 (UNCONDITIONAL_CALL)
// 0051d9e6: ADD ESP,0x8
// 0051d9e9: LEA EAX,[ESP + 0x6b0]
//   XREF to: Stack[-0xd0] (DATA)
// 0051d9f0: PUSH EAX
// 0051d9f1: CALL core_stairs.cpp_FUN_005b95c0
//   XREF to: 005b95c0 (UNCONDITIONAL_CALL)
// 0051d9f6: ADD ESP,0x4
// 0051d9f9: PUSH 0x1f
// 0051d9fb: LEA EAX,[ESP + 0x6b4]
//   XREF to: Stack[-0xd0] (DATA)
// 0051da02: PUSH EAX
// 0051da03: CALL core_stairs.cpp_FUN_005b9620
//   XREF to: 005b9620 (UNCONDITIONAL_CALL)
// 0051da08: ADD ESP,0x8
// 0051da0b: LEA EAX,[ESP + 0x6ec]
//   XREF to: Stack[-0x94] (DATA)
// 0051da12: PUSH EAX
// 0051da13: LEA EAX,[ESP + 0x714]
//   XREF to: Stack[-0x70] (DATA)
// 0051da1a: PUSH EAX
// 0051da1b: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051da1e: PUSH EDX
// 0051da1f: CALL shape_meshlod.cpp_FUN_0051b2e0
//   XREF to: 0051b2e0 (UNCONDITIONAL_CALL)
// 0051da24: MOV EDX,EAX
// 0051da26: LEA EAX,[ESP + 0x6f8]
//   XREF to: Stack[-0x94] (DATA)
// 0051da2d: ADD ESP,0xc
// 0051da30: CMP EAX,EDX
// 0051da32: JZ 0x0051da51
//   XREF to: 0051da51 (CONDITIONAL_JUMP)
// 0051da34: MOV EAX,dword ptr [EDX]
// 0051da36: MOV dword ptr [ESP + 0x6ec],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 0051da3d: MOV EAX,dword ptr [EDX + 0x4]
// 0051da40: MOV dword ptr [ESP + 0x6f0],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 0051da47: MOV EAX,dword ptr [EDX + 0x8]
// 0051da4a: MOV dword ptr [ESP + 0x6f4],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 0051da51: LEA EAX,[ESP + 0x6f8]
//   Label: LAB_0051da51
//   XREF to: Stack[-0x88] (DATA)
// 0051da58: PUSH EAX
// 0051da59: LEA EAX,[ESP + 0x72c]
//   XREF to: Stack[-0x58] (DATA)
// 0051da60: PUSH EAX
// 0051da61: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051da64: PUSH ECX
// 0051da65: CALL shape_meshlod.cpp_FUN_0051b2e0
//   XREF to: 0051b2e0 (UNCONDITIONAL_CALL)
// 0051da6a: MOV EDX,EAX
// 0051da6c: LEA EAX,[ESP + 0x704]
//   XREF to: Stack[-0x88] (DATA)
// 0051da73: ADD ESP,0xc
// 0051da76: CMP EAX,EDX
// 0051da78: JZ 0x0051da97
//   XREF to: 0051da97 (CONDITIONAL_JUMP)
// 0051da7a: MOV EAX,dword ptr [EDX]
// 0051da7c: MOV dword ptr [ESP + 0x6f8],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0051da83: MOV EAX,dword ptr [EDX + 0x4]
// 0051da86: MOV dword ptr [ESP + 0x6fc],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0051da8d: MOV EAX,dword ptr [EDX + 0x8]
// 0051da90: MOV dword ptr [ESP + 0x700],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0051da97: FLD float ptr [ESP + 0x6ec]
//   Label: LAB_0051da97
//   XREF to: Stack[-0x94] (READ)
// 0051da9e: FADD float ptr [ESP + 0x6f8]
//   XREF to: Stack[-0x88] (READ)
// 0051daa5: FST float ptr [ESP + 0x734]
//   XREF to: Stack[-0x4c] (WRITE)
// 0051daac: FLD float ptr [0x00638515]
//   XREF to: 00638515 (READ)
// 0051dab2: FXCH
// 0051dab4: FMUL ST1
// 0051dab6: FLD float ptr [ESP + 0x6f4]
//   XREF to: Stack[-0x8c] (READ)
// 0051dabd: FLD float ptr [ESP + 0x6f0]
//   XREF to: Stack[-0x90] (READ)
// 0051dac4: FADD float ptr [ESP + 0x6fc]
//   XREF to: Stack[-0x84] (READ)
// 0051dacb: FXCH
// 0051dacd: FADD float ptr [ESP + 0x700]
//   XREF to: Stack[-0x80] (READ)
// 0051dad4: FXCH
// 0051dad6: FST float ptr [ESP + 0x738]
//   XREF to: Stack[-0x48] (WRITE)
// 0051dadd: FMUL ST3
// 0051dadf: FXCH
// 0051dae1: FST float ptr [ESP + 0x73c]
//   XREF to: Stack[-0x44] (WRITE)
// 0051dae8: FMULP ST3
// 0051daea: LEA EAX,[ESP + 0x704]
//   XREF to: Stack[-0x7c] (DATA)
// 0051daf1: LEA EDX,[ESP + 0x6c8]
//   XREF to: Stack[-0xb8] (DATA)
// 0051daf8: FXCH
// 0051dafa: FSTP float ptr [ESP + 0x704]
//   XREF to: Stack[-0x7c] (WRITE)
// 0051db01: FSTP float ptr [ESP + 0x708]
//   XREF to: Stack[-0x78] (WRITE)
// 0051db08: FSTP float ptr [ESP + 0x70c]
//   XREF to: Stack[-0x74] (WRITE)
// 0051db0f: CMP EDX,EAX
// 0051db11: JNZ 0x0051e401
//   XREF to: 0051e401 (CONDITIONAL_JUMP)
// 0051db17: MOV EBX,dword ptr [0x0067b654]
//   Label: LAB_0051db17
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (PARAM)
// 0051db1d: PUSH EBX
//   XREF to: 02d81a9c (DATA)
// 0051db1e: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 0051db23: ADD ESP,0x4
// 0051db26: LEA EAX,[ESP + 0x600]
//   XREF to: Stack[-0x180] (DATA)
// 0051db2d: PUSH EAX
// 0051db2e: CALL shape_meshlod.cpp_LodMesh_ctor_FUN_00515840
//   XREF to: 00515840 (UNCONDITIONAL_CALL)
// 0051db33: ADD ESP,0x4
// 0051db36: FLD float ptr [ESP + 0x6fc]
//   XREF to: Stack[-0x84] (READ)
// 0051db3d: FSUB float ptr [ESP + 0x6f0]
//   XREF to: Stack[-0x90] (READ)
// 0051db44: FST float ptr [ESP + 0x720]
//   XREF to: Stack[-0x60] (WRITE)
// 0051db4b: FMUL double ptr [0x0063851d]
//   XREF to: 0063851d (READ)
// 0051db51: MOV ESI,0xffffffff
// 0051db56: FLD float ptr [ESP + 0x700]
//   XREF to: Stack[-0x80] (READ)
// 0051db5d: FLD float ptr [ESP + 0x6f8]
//   XREF to: Stack[-0x88] (READ)
// 0051db64: FSUB float ptr [ESP + 0x6ec]
//   XREF to: Stack[-0x94] (READ)
// 0051db6b: FXCH
// 0051db6d: FSUB float ptr [ESP + 0x6f4]
//   XREF to: Stack[-0x8c] (READ)
// 0051db74: FXCH
// 0051db76: FSTP float ptr [ESP + 0x71c]
//   XREF to: Stack[-0x64] (WRITE)
// 0051db7d: FSTP float ptr [ESP + 0x724]
//   XREF to: Stack[-0x5c] (WRITE)
// 0051db84: FSTP float ptr [ESP + 0x3a8]
//   XREF to: Stack[-0x3d8] (WRITE)
// 0051db8b: MOV EAX,[0x00679398]
//   Label: LAB_0051db8b
//   XREF to: 00679398 (READ)
// 0051db90: PUSH 0xfc
// 0051db95: DEC EAX
// 0051db96: PUSH EAX
// 0051db97: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0051db9c: DEC EAX
// 0051db9d: PUSH EAX
// 0051db9e: PUSH 0x0
// 0051dba0: PUSH 0x0
// 0051dba2: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 0051dba7: ADD ESP,0x14
// 0051dbaa: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 0051dbaf: TEST ESI,ESI
// 0051dbb1: JNZ 0x0051dbc1
//   XREF to: 0051dbc1 (CONDITIONAL_JUMP)
// 0051dbb3: MOV EAX,dword ptr [ESP + 0x3a8]
//   XREF to: Stack[-0x3d8] (READ)
// 0051dbba: MOV dword ptr [ESP + 0x6dc],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 0051dbc1: LEA EAX,[ESP + 0x674]
//   Label: LAB_0051dbc1
//   XREF to: Stack[-0x10c] (DATA)
// 0051dbc8: PUSH EAX
// 0051dbc9: CALL core_stairs.cpp_FUN_005b95c0
//   XREF to: 005b95c0 (UNCONDITIONAL_CALL)
// 0051dbce: ADD ESP,0x4
// 0051dbd1: MOV EAX,dword ptr [ESP + 0x6b0]
//   XREF to: Stack[-0xd0] (READ)
// 0051dbd8: MOV dword ptr [ESP + 0x674],EAX
//   XREF to: Stack[-0x10c] (WRITE)
// 0051dbdf: MOV EAX,dword ptr [ESP + 0x6b4]
//   XREF to: Stack[-0xcc] (READ)
// 0051dbe6: MOV dword ptr [ESP + 0x678],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 0051dbed: MOV EAX,dword ptr [ESP + 0x6b8]
//   XREF to: Stack[-0xc8] (READ)
// 0051dbf4: MOV dword ptr [ESP + 0x67c],EAX
//   XREF to: Stack[-0x104] (WRITE)
// 0051dbfb: MOV EAX,dword ptr [ESP + 0x6bc]
//   XREF to: Stack[-0xc4] (READ)
// 0051dc02: MOV dword ptr [ESP + 0x680],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 0051dc09: MOV EAX,dword ptr [ESP + 0x6c0]
//   XREF to: Stack[-0xc0] (READ)
// 0051dc10: MOV dword ptr [ESP + 0x684],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 0051dc17: MOV EAX,dword ptr [ESP + 0x6c4]
//   XREF to: Stack[-0xbc] (READ)
// 0051dc1e: LEA EDX,[ESP + 0x68c]
//   XREF to: Stack[-0xf4] (DATA)
// 0051dc25: MOV dword ptr [ESP + 0x688],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 0051dc2c: LEA EAX,[ESP + 0x6c8]
//   XREF to: Stack[-0xb8] (DATA)
// 0051dc33: CMP EDX,EAX
// 0051dc35: JZ 0x0051dc61
//   XREF to: 0051dc61 (CONDITIONAL_JUMP)
// 0051dc37: MOV EAX,dword ptr [ESP + 0x6c8]
//   XREF to: Stack[-0xb8] (DATA)
// 0051dc3e: MOV dword ptr [ESP + 0x68c],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 0051dc45: MOV EAX,dword ptr [ESP + 0x6cc]
//   XREF to: Stack[-0xb4] (READ)
// 0051dc4c: MOV dword ptr [ESP + 0x690],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 0051dc53: MOV EAX,dword ptr [ESP + 0x6d0]
//   XREF to: Stack[-0xb0] (READ)
// 0051dc5a: MOV dword ptr [ESP + 0x694],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 0051dc61: MOV EAX,dword ptr [ESP + 0x6d8]
//   Label: LAB_0051dc61
//   XREF to: Stack[-0xa8] (READ)
// 0051dc68: MOV dword ptr [ESP + 0x69c],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 0051dc6f: MOV EAX,dword ptr [ESP + 0x6dc]
//   XREF to: Stack[-0xa4] (READ)
// 0051dc76: MOV dword ptr [ESP + 0x6a0],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 0051dc7d: MOV EAX,dword ptr [ESP + 0x6e8]
//   XREF to: Stack[-0x98] (READ)
// 0051dc84: XOR EDI,EDI
// 0051dc86: MOV dword ptr [ESP + 0x6ac],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 0051dc8d: LEA EAX,[ESP + 0x674]
//   XREF to: Stack[-0x10c] (DATA)
// 0051dc94: MOV dword ptr [ESP + 0x698],EDI
//   XREF to: Stack[-0xe8] (WRITE)
// 0051dc9b: PUSH EAX
// 0051dc9c: MOV dword ptr [ESP + 0x6a8],EDI
//   XREF to: Stack[-0xdc] (WRITE)
// 0051dca3: MOV dword ptr [ESP + 0x6ac],EDI
//   XREF to: Stack[-0xd8] (WRITE)
// 0051dcaa: CALL core_stairs.cpp_FUN_005b9a20
//   XREF to: 005b9a20 (UNCONDITIONAL_CALL)
// 0051dcaf: ADD ESP,0x4
// 0051dcb2: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0051dcb7: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0051dcbd: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0051dcbe: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0051dcc3: ADD ESP,0x8
// 0051dcc6: LEA EAX,[ESP + 0x6ec]
//   XREF to: Stack[-0x94] (DATA)
// 0051dccd: PUSH EAX
// 0051dcce: CALL core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
//   XREF to: 00420840 (UNCONDITIONAL_CALL)
// 0051dcd3: MOV dword ptr [ESP + 0x770],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0051dcda: FLD float ptr [ESP + 0x770]
//   XREF to: Stack[-0x14] (READ)
// 0051dce1: LEA EAX,[ESP + 0x6b4]
//   XREF to: Stack[-0xd0] (DATA)
// 0051dce8: ADD ESP,0x4
// 0051dceb: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0051dcf0: PUSH EAX
// 0051dcf1: FISTP dword ptr [ESP + 0x750]
//   XREF to: Stack[-0x34] (WRITE)
// 0051dcf8: CALL core_stairs.cpp_FUN_005b9a20
//   XREF to: 005b9a20 (UNCONDITIONAL_CALL)
// 0051dcfd: ADD ESP,0x4
// 0051dd00: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0051dd05: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
//   XREF to: 02c6d578 (PARAM)
// 0051dd0b: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0051dd0c: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0051dd11: ADD ESP,0x8
// 0051dd14: TEST ESI,ESI
// 0051dd16: JL 0x0051e430
//   XREF to: 0051e430 (CONDITIONAL_JUMP)
// 0051dd1c: JNZ 0x0051e471
//   XREF to: 0051e471 (CONDITIONAL_JUMP)
// 0051dd22: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051dd25: MOV EAX,dword ptr [EAX + 0x34]
// 0051dd28: MOV EAX,dword ptr [EAX + 0x8]
// 0051dd2b: MOV EDI,dword ptr [ESP + 0x608]
//   Label: LAB_0051dd2b
//   XREF to: Stack[-0x178] (READ)
// 0051dd32: LEA EDX,[EAX + -0x1]
// 0051dd35: CMP EDX,EDI
// 0051dd37: JLE 0x0051e484
//   XREF to: 0051e484 (CONDITIONAL_JUMP)
// 0051dd3d: LEA EDX,[ESP + 0x600]
//   Label: LAB_0051dd3d
//   XREF to: Stack[-0x180] (DATA)
// 0051dd44: PUSH EDX
// 0051dd45: PUSH EAX
// 0051dd46: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051dd49: PUSH ECX
// 0051dd4a: CALL shape_meshlod.cpp_LodMesh_getLOD_FUN_0051b920
//   XREF to: 0051b920 (UNCONDITIONAL_CALL)
// 0051dd4f: ADD ESP,0xc
// 0051dd52: CMP dword ptr [EBP + 0x24],0x2
//   XREF to: Stack[0x14] (READ)
// 0051dd56: JNZ 0x0051dd7c
//   XREF to: 0051dd7c (CONDITIONAL_JUMP)
// 0051dd58: LEA EAX,[ESP + 0x600]
//   XREF to: Stack[-0x180] (DATA)
// 0051dd5f: XOR EDI,EDI
// 0051dd61: PUSH EAX
// 0051dd62: MOV EBX,dword ptr [0x0067d39c]
//   XREF to: 0067d39c (READ)
// 0051dd68: MOV dword ptr [0x0067d39c],EDI
//   XREF to: 0067d39c (WRITE)
// 0051dd6e: CALL shape_meshlod.cpp_FUN_0051bac0
//   XREF to: 0051bac0 (UNCONDITIONAL_CALL)
// 0051dd73: ADD ESP,0x4
// 0051dd76: MOV dword ptr [0x0067d39c],EBX
//   XREF to: 0067d39c (WRITE)
// 0051dd7c: TEST ESI,ESI
//   Label: LAB_0051dd7c
// 0051dd7e: JLE 0x0051dda8
//   XREF to: 0051dda8 (CONDITIONAL_JUMP)
// 0051dd80: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051dd83: MOV EAX,dword ptr [ESP + 0x608]
//   XREF to: Stack[-0x178] (READ)
// 0051dd8a: MOV dword ptr [ECX + ESI*0x4],EAX
// 0051dd8d: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051dd90: MOV EAX,dword ptr [ESP + 0x74c]
//   XREF to: Stack[-0x34] (READ)
// 0051dd97: MOV dword ptr [ECX + ESI*0x4],EAX
// 0051dd9a: MOV EAX,dword ptr [ESP + 0x6dc]
//   XREF to: Stack[-0xa4] (READ)
// 0051dda1: MOV dword ptr [ESP + ESI*0x4 + 0x3a8],EAX
// 0051dda8: JL 0x0051e491
//   Label: LAB_0051dda8
//   XREF to: 0051e491 (CONDITIONAL_JUMP)
// 0051ddae: JNZ 0x0051e4b0
//   XREF to: 0051e4b0 (CONDITIONAL_JUMP)
// 0051ddb4: PUSH ESI
// 0051ddb5: PUSH ESI
// 0051ddb6: PUSH 0x63838f
//   XREF to: 0063838f (DATA)
// 0051ddbb: CALL engine_2d.c_drawText_FUN_00401fd0
//   Label: LAB_0051ddbb
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0051ddc0: ADD ESP,0xc
// 0051ddc3: PUSH 0x2b
// 0051ddc5: PUSH 0xa
// 0051ddc7: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0051ddcc: PUSH 0x2b
// 0051ddce: MOV EDX,0x1
// 0051ddd3: SUB EAX,0x18
// 0051ddd6: PUSH 0x0
// 0051ddd8: MOV dword ptr [0x02d02570],EDX
//   XREF to: 02d02570 (WRITE)
// 0051ddde: MOV dword ptr [ESP + 0x76c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0051dde5: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0051ddea: ADD ESP,0x10
// 0051dded: MOV EAX,dword ptr [ESP + 0x75c]
//   XREF to: Stack[-0x24] (READ)
// 0051ddf4: ADD EAX,0xb
// 0051ddf7: PUSH EAX
// 0051ddf8: PUSH 0xa
// 0051ddfa: PUSH EAX
// 0051ddfb: PUSH 0x0
// 0051ddfd: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0051de02: ADD ESP,0x10
// 0051de05: MOV ECX,dword ptr [ESP + 0x750]
//   XREF to: Stack[-0x30] (READ)
// 0051de0c: XOR EBX,EBX
// 0051de0e: TEST ECX,ECX
// 0051de10: JLE 0x0051df26
//   XREF to: 0051df26 (CONDITIONAL_JUMP)
// 0051de16: MOV EAX,dword ptr [ESP + 0x75c]
//   XREF to: Stack[-0x24] (READ)
// 0051de1d: SUB EAX,0x2c
// 0051de20: MOV dword ptr [ESP + 0x748],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0051de27: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051de2a: MOV dword ptr [ESP + 0x754],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0051de31: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051de34: MOV dword ptr [ESP + 0x760],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0051de3b: LEA EAX,[EBX*0x4 + 0x0]
//   Label: LAB_0051de3b
// 0051de42: TEST EBX,EBX
// 0051de44: JLE 0x0051e512
//   XREF to: 0051e512 (CONDITIONAL_JUMP)
// 0051de4a: MOV EDX,dword ptr [ESP + 0x760]
//   XREF to: Stack[-0x20] (READ)
// 0051de51: MOV EDI,dword ptr [EDX]
// 0051de53: ADD EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051de56: PUSH EDI
// 0051de57: MOV ECX,dword ptr [EAX]
// 0051de59: PUSH ECX
// 0051de5a: PUSH EBX
// 0051de5b: PUSH 0x638438
//   XREF to: 00638438 (DATA)
// 0051de60: LEA EAX,[ESP + 0x548]
//   XREF to: Stack[-0x248] (DATA)
// 0051de67: PUSH EAX
// 0051de68: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0051de6d: ADD ESP,0x14
// 0051de70: MOV EDX,dword ptr [ESP + 0x754]
//   Label: LAB_0051de70
//   XREF to: Stack[-0x2c] (READ)
// 0051de77: MOV EDI,dword ptr [ESP + 0x748]
//   XREF to: Stack[-0x38] (READ)
// 0051de7e: MOV EDX,dword ptr [EDX]
// 0051de80: IMUL EDX,EDI
// 0051de83: MOV ECX,0x1e0
// 0051de88: MOV EAX,EDX
// 0051de8a: SAR EDX,0x1f
// 0051de8d: IDIV ECX
// 0051de8f: MOV EDI,dword ptr [ESP + 0x75c]
//   XREF to: Stack[-0x24] (READ)
// 0051de96: SUB EDI,EAX
// 0051de98: CMP EDI,0x2c
// 0051de9b: JGE 0x0051dea2
//   XREF to: 0051dea2 (CONDITIONAL_JUMP)
// 0051de9d: MOV EDI,0x2c
// 0051dea2: MOV EAX,dword ptr [ESP + 0x75c]
//   Label: LAB_0051dea2
//   XREF to: Stack[-0x24] (READ)
// 0051dea9: CMP EDI,EAX
// 0051deab: JLE 0x0051deaf
//   XREF to: 0051deaf (CONDITIONAL_JUMP)
// 0051dead: MOV EDI,EAX
// 0051deaf: TEST ESI,ESI
//   Label: LAB_0051deaf
// 0051deb1: JNZ 0x0051e537
//   XREF to: 0051e537 (CONDITIONAL_JUMP)
// 0051deb7: TEST EBX,EBX
// 0051deb9: JNZ 0x0051e537
//   XREF to: 0051e537 (CONDITIONAL_JUMP)
// 0051debf: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0051dec5: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0051dec6: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 0051decb: ADD ESP,0x4
// 0051dece: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 0051ded3: PUSH EDI
//   Label: LAB_0051ded3
// 0051ded4: PUSH 0xa
// 0051ded6: PUSH EDI
// 0051ded7: PUSH 0x0
// 0051ded9: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0051dede: ADD ESP,0x10
// 0051dee1: PUSH EDI
// 0051dee2: PUSH 0xa
// 0051dee4: LEA EAX,[ESP + 0x540]
//   XREF to: Stack[-0x248] (DATA)
// 0051deeb: PUSH EAX
// 0051deec: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0051def1: ADD ESP,0xc
// 0051def4: INC EBX
// 0051def5: MOV EDI,dword ptr [ESP + 0x754]
//   XREF to: Stack[-0x2c] (READ)
// 0051defc: MOV EAX,dword ptr [ESP + 0x760]
//   XREF to: Stack[-0x20] (READ)
// 0051df03: MOV EDX,dword ptr [ESP + 0x750]
//   XREF to: Stack[-0x30] (READ)
// 0051df0a: ADD EDI,0x4
// 0051df0d: ADD EAX,0x4
// 0051df10: MOV dword ptr [ESP + 0x754],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 0051df17: MOV dword ptr [ESP + 0x760],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0051df1e: CMP EBX,EDX
// 0051df20: JL 0x0051de3b
//   XREF to: 0051de3b (CONDITIONAL_JUMP)
// 0051df26: TEST ESI,ESI
//   Label: LAB_0051df26
// 0051df28: JZ 0x0051df8b
//   XREF to: 0051df8b (CONDITIONAL_JUMP)
// 0051df2a: MOV EDX,dword ptr [ESP + 0x75c]
//   XREF to: Stack[-0x24] (READ)
// 0051df31: MOV ECX,dword ptr [ESP + 0x74c]
//   XREF to: Stack[-0x34] (READ)
// 0051df38: SUB EDX,0x2c
// 0051df3b: IMUL EDX,ECX
// 0051df3e: MOV ECX,0x1e0
// 0051df43: MOV EAX,EDX
// 0051df45: SAR EDX,0x1f
// 0051df48: IDIV ECX
// 0051df4a: MOV EBX,dword ptr [ESP + 0x75c]
//   XREF to: Stack[-0x24] (READ)
// 0051df51: SUB EBX,EAX
// 0051df53: CMP EBX,0x2c
// 0051df56: JGE 0x0051df5d
//   XREF to: 0051df5d (CONDITIONAL_JUMP)
// 0051df58: MOV EBX,0x2c
// 0051df5d: MOV EDI,dword ptr [ESP + 0x75c]
//   Label: LAB_0051df5d
//   XREF to: Stack[-0x24] (READ)
// 0051df64: CMP EBX,EDI
// 0051df66: JLE 0x0051df6a
//   XREF to: 0051df6a (CONDITIONAL_JUMP)
// 0051df68: MOV EBX,EDI
// 0051df6a: MOV EAX,[0x00678a60]
//   Label: LAB_0051df6a
//   XREF to: 00678a60 (READ)
// 0051df6f: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0051df70: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 0051df75: ADD ESP,0x4
// 0051df78: PUSH EBX
// 0051df79: PUSH 0xa
// 0051df7b: PUSH EBX
// 0051df7c: PUSH 0x0
// 0051df7e: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 0051df83: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0051df88: ADD ESP,0x10
// 0051df8b: LEA EAX,[ESP + 0x600]
//   Label: LAB_0051df8b
//   XREF to: Stack[-0x180] (DATA)
// 0051df92: PUSH EAX
// 0051df93: CALL shape_meshlod.cpp_FUN_0051e6b0
//   XREF to: 0051e6b0 (UNCONDITIONAL_CALL)
// 0051df98: ADD ESP,0x4
// 0051df9b: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0051df9e: CMP EDX,0x1
// 0051dfa1: JNC 0x0051e57b
//   XREF to: 0051e57b (CONDITIONAL_JUMP)
// 0051dfa7: TEST EDX,EDX
// 0051dfa9: JNZ 0x0051dfbc
//   XREF to: 0051dfbc (CONDITIONAL_JUMP)
// 0051dfab: PUSH EDX
// 0051dfac: LEA EAX,[ESP + 0x604]
//   XREF to: Stack[-0x180] (DATA)
// 0051dfb3: PUSH EAX
// 0051dfb4: CALL shape_meshlod.cpp_FUN_0051e990
//   XREF to: 0051e990 (UNCONDITIONAL_CALL)
// 0051dfb9: ADD ESP,0x8
//   Label: LAB_0051dfb9
// 0051dfbc: LEA EAX,[ESP + 0x600]
//   Label: LAB_0051dfbc
//   XREF to: Stack[-0x180] (DATA)
// 0051dfc3: PUSH EAX
// 0051dfc4: CALL shape_meshlod.cpp_FUN_005164d0
//   XREF to: 005164d0 (UNCONDITIONAL_CALL)
// 0051dfc9: ADD ESP,0x4
// 0051dfcc: PUSH EAX
// 0051dfcd: MOV EAX,dword ptr [ESP + 0x750]
//   XREF to: Stack[-0x34] (READ)
// 0051dfd4: PUSH EAX
// 0051dfd5: PUSH 0x638455
//   XREF to: 00638455 (DATA)
// 0051dfda: LEA EAX,[ESP + 0x544]
//   XREF to: Stack[-0x248] (DATA)
// 0051dfe1: PUSH EAX
// 0051dfe2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0051dfe7: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0051dfec: ADD ESP,0x10
// 0051dfef: SUB EAX,0xb
// 0051dff2: PUSH EAX
// 0051dff3: PUSH 0x0
// 0051dff5: LEA EAX,[ESP + 0x540]
//   XREF to: Stack[-0x248] (DATA)
// 0051dffc: PUSH EAX
// 0051dffd: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0051e002: ADD ESP,0xc
// 0051e005: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0051e00a: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 0051e010: PUSH EDX
//   XREF to: 02d81a9c (DATA)
// 0051e011: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 0051e016: ADD ESP,0x4
// 0051e019: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051e01e: PUSH 0x31
// 0051e020: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051e022: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051e023: CALL dword ptr [EDX + 0x4]
// 0051e026: ADD ESP,0x8
// 0051e029: TEST EAX,EAX
// 0051e02b: JZ 0x0051e079
//   XREF to: 0051e079 (CONDITIONAL_JUMP)
// 0051e02d: MOV EAX,dword ptr [ESP + 0x750]
// 0051e034: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0051e037: CMP EAX,ECX
// 0051e039: JGE 0x0051e587
//   XREF to: 0051e587 (CONDITIONAL_JUMP)
// 0051e03f: MOV ESI,EAX
// 0051e041: LEA EDX,[EAX*0x4 + 0x0]
// 0051e048: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051e04b: INC EAX
// 0051e04c: ADD EDX,ECX
// 0051e04e: MOV dword ptr [ESP + 0x750],EAX
// 0051e055: MOV EAX,dword ptr [ESP + 0x608]
// 0051e05c: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051e05f: MOV dword ptr [EDX],EAX
// 0051e061: MOV EAX,dword ptr [ESP + 0x74c]
// 0051e068: MOV dword ptr [ECX + ESI*0x4],EAX
// 0051e06b: MOV EAX,dword ptr [ESP + 0x6dc]
// 0051e072: MOV dword ptr [ESP + ESI*0x4 + 0x3a8],EAX
// 0051e079: TEST ESI,ESI
//   Label: LAB_0051e079
// 0051e07b: JLE 0x0051e150
//   XREF to: 0051e150 (CONDITIONAL_JUMP)
// 0051e081: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051e084: LEA EDX,[ESI*0x4 + 0x0]
// 0051e08b: ADD EDX,EBX
// 0051e08d: MOV EAX,dword ptr [EDX]
// 0051e08f: MOV EDX,EAX
// 0051e091: MOV ECX,0x14
// 0051e096: SAR EDX,0x1f
// 0051e099: IDIV ECX
// 0051e09b: PUSH 0x2a
// 0051e09d: MOV EBX,EAX
// 0051e09f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051e0a4: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051e0a5: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051e0a7: CALL dword ptr [EDX]
// 0051e0a9: ADD ESP,0x8
// 0051e0ac: TEST EAX,EAX
// 0051e0ae: JZ 0x0051e0b3
//   XREF to: 0051e0b3 (CONDITIONAL_JUMP)
// 0051e0b0: LEA EBX,[EBX + EBX*0x2]
// 0051e0b3: PUSH 0x38
//   Label: LAB_0051e0b3
// 0051e0b5: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051e0ba: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051e0bb: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051e0bd: CALL dword ptr [EDX]
// 0051e0bf: ADD ESP,0x8
// 0051e0c2: TEST EAX,EAX
// 0051e0c4: JZ 0x0051e5a1
//   XREF to: 0051e5a1 (CONDITIONAL_JUMP)
// 0051e0ca: MOV EBX,0x2
//   Label: LAB_0051e0ca
// 0051e0cf: PUSH 0x4b
//   Label: LAB_0051e0cf
// 0051e0d1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051e0d6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051e0d7: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051e0d9: CALL dword ptr [EDX + 0x4]
// 0051e0dc: ADD ESP,0x8
// 0051e0df: TEST EAX,EAX
// 0051e0e1: JZ 0x0051e0f1
//   XREF to: 0051e0f1 (CONDITIONAL_JUMP)
// 0051e0e3: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051e0e6: LEA EAX,[ESI*0x4 + 0x0]
// 0051e0ed: ADD EAX,EDI
// 0051e0ef: SUB dword ptr [EAX],EBX
// 0051e0f1: PUSH 0x4d
//   Label: LAB_0051e0f1
// 0051e0f3: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051e0f8: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051e0f9: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051e0fb: CALL dword ptr [EDX + 0x4]
// 0051e0fe: ADD ESP,0x8
// 0051e101: TEST EAX,EAX
// 0051e103: JZ 0x0051e113
//   XREF to: 0051e113 (CONDITIONAL_JUMP)
// 0051e105: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051e108: LEA EAX,[ESI*0x4 + 0x0]
// 0051e10f: ADD EAX,ECX
// 0051e111: ADD dword ptr [EAX],EBX
// 0051e113: PUSH 0x21
//   Label: LAB_0051e113
// 0051e115: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051e11a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051e11b: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051e11d: CALL dword ptr [EDX + 0x4]
// 0051e120: ADD ESP,0x8
// 0051e123: TEST EAX,EAX
// 0051e125: JZ 0x0051e150
//   XREF to: 0051e150 (CONDITIONAL_JUMP)
// 0051e127: PUSH 0x1
// 0051e129: PUSH 0x0
// 0051e12b: PUSH 0x0
// 0051e12d: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051e130: LEA EAX,[ESI*0x4 + 0x0]
// 0051e137: PUSH 0x0
// 0051e139: ADD EAX,EDX
// 0051e13b: PUSH EAX
// 0051e13c: PUSH 0x638495
//   XREF to: 00638495 (DATA)
// 0051e141: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0051e147: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0051e148: CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   XREF to: 004a0020 (UNCONDITIONAL_CALL)
// 0051e14d: ADD ESP,0x1c
// 0051e150: PUSH 0x20
//   Label: LAB_0051e150
// 0051e152: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051e157: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051e158: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051e15a: CALL dword ptr [EDX + 0x4]
// 0051e15d: ADD ESP,0x8
// 0051e160: TEST EAX,EAX
// 0051e162: JZ 0x0051e224
//   XREF to: 0051e224 (CONDITIONAL_JUMP)
// 0051e168: TEST ESI,ESI
// 0051e16a: JLE 0x0051e224
//   XREF to: 0051e224 (CONDITIONAL_JUMP)
// 0051e170: PUSH ESI
// 0051e171: PUSH 0x6384a6
//   XREF to: 006384a6 (DATA)
// 0051e176: LEA EAX,[ESP + 0x540]
// 0051e17d: PUSH EAX
// 0051e17e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0051e183: ADD ESP,0xc
// 0051e186: LEA EAX,[ESP + 0x538]
// 0051e18d: PUSH EAX
// 0051e18e: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0051e194: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0051e195: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 0051e19a: ADD ESP,0x8
// 0051e19d: TEST EAX,EAX
// 0051e19f: JZ 0x0051e224
//   XREF to: 0051e224 (CONDITIONAL_JUMP)
// 0051e1a5: MOV EDI,dword ptr [ESP + 0x750]
// 0051e1ac: DEC EDI
// 0051e1ad: MOV dword ptr [ESP + 0x750],EDI
// 0051e1b4: SUB EDI,ESI
// 0051e1b6: LEA EBX,[ESI*0x4 + 0x0]
// 0051e1bd: LEA EAX,[EBX + 0x4]
// 0051e1c0: SHL EDI,0x2
// 0051e1c3: MOV dword ptr [ESP + 0x76c],EAX
// 0051e1ca: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051e1cd: MOV EDX,dword ptr [ESP + 0x76c]
// 0051e1d4: PUSH EDI
// 0051e1d5: ADD EAX,EDX
// 0051e1d7: PUSH EAX
// 0051e1d8: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051e1db: ADD EAX,EBX
// 0051e1dd: PUSH EAX
// 0051e1de: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0051e1e3: ADD ESP,0xc
// 0051e1e6: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051e1e9: MOV ECX,dword ptr [ESP + 0x76c]
// 0051e1f0: PUSH EDI
// 0051e1f1: ADD EAX,ECX
// 0051e1f3: PUSH EAX
// 0051e1f4: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051e1f7: ADD EAX,EBX
// 0051e1f9: PUSH EAX
// 0051e1fa: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0051e1ff: ADD ESP,0xc
// 0051e202: LEA EAX,[ESP + 0x3a8]
// 0051e209: PUSH EDI
// 0051e20a: ADD EAX,dword ptr [ESP + 0x770]
// 0051e211: PUSH EAX
// 0051e212: LEA EAX,[ESP + 0x3b0]
// 0051e219: ADD EAX,EBX
// 0051e21b: PUSH EAX
// 0051e21c: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0051e221: ADD ESP,0xc
// 0051e224: XOR EAX,EAX
//   Label: LAB_0051e224
// 0051e226: MOV EDX,dword ptr [ESP + 0x750]
// 0051e22d: MOV dword ptr [ESP + 0x758],EAX
// 0051e234: TEST EDX,EDX
// 0051e236: JLE 0x0051e338
//   XREF to: 0051e338 (CONDITIONAL_JUMP)
// 0051e23c: LEA EAX,[EDX + -0x1]
// 0051e23f: MOV dword ptr [ESP + 0x764],EAX
// 0051e246: MOV EDX,dword ptr [ESP + 0x764]
//   Label: LAB_0051e246
// 0051e24d: MOV EAX,0x1
// 0051e252: CMP EDX,EAX
// 0051e254: JLE 0x0051e31a
//   XREF to: 0051e31a (CONDITIONAL_JUMP)
// 0051e25a: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051e25d: ADD EDX,0x4
// 0051e260: LEA ECX,[EAX*0x4 + 0x0]
//   Label: LAB_0051e260
// 0051e267: MOV EBX,dword ptr [EDX + 0x4]
// 0051e26a: MOV dword ptr [ESP + 0x768],ECX
// 0051e271: CMP EBX,dword ptr [EDX]
// 0051e273: JLE 0x0051e307
//   XREF to: 0051e307 (CONDITIONAL_JUMP)
// 0051e279: MOV ECX,dword ptr [ESP + 0x768]
// 0051e280: MOV EDI,dword ptr [EDX]
// 0051e282: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051e285: MOV dword ptr [ESP + 0x740],EDI
// 0051e28c: MOV EDI,dword ptr [ECX + EBX*0x1 + 0x4]
// 0051e290: ADD ECX,0x4
// 0051e293: MOV dword ptr [EDX],EDI
// 0051e295: MOV EDI,dword ptr [ESP + 0x740]
// 0051e29c: MOV dword ptr [ECX + EBX*0x1],EDI
// 0051e29f: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051e2a2: ADD EBX,ECX
// 0051e2a4: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051e2a7: MOV dword ptr [ESP + 0x76c],EBX
// 0051e2ae: ADD EDI,dword ptr [ESP + 0x768]
// 0051e2b5: MOV EBX,dword ptr [EDI]
// 0051e2b7: MOV dword ptr [ESP + 0x744],EBX
// 0051e2be: MOV EBX,dword ptr [ESP + 0x76c]
// 0051e2c5: MOV EBX,dword ptr [EBX]
// 0051e2c7: MOV dword ptr [EDI],EBX
// 0051e2c9: MOV EDI,dword ptr [ESP + 0x76c]
// 0051e2d0: MOV EBX,dword ptr [ESP + 0x744]
// 0051e2d7: MOV dword ptr [EDI],EBX
// 0051e2d9: LEA EBX,[ESP + 0x3a8]
// 0051e2e0: MOV EDI,dword ptr [ESP + 0x768]
// 0051e2e7: ADD EBX,ECX
// 0051e2e9: LEA ECX,[ESP + 0x3a8]
// 0051e2f0: ADD ECX,EDI
// 0051e2f2: FLD float ptr [EBX]
// 0051e2f4: MOV EDI,dword ptr [ECX]
// 0051e2f6: FSTP float ptr [ECX]
// 0051e2f8: LEA ECX,[EAX + 0x1]
// 0051e2fb: MOV dword ptr [EBX],EDI
// 0051e2fd: CMP ESI,EAX
// 0051e2ff: JNZ 0x0051e5af
//   XREF to: 0051e5af (CONDITIONAL_JUMP)
// 0051e305: MOV ESI,ECX
// 0051e307: MOV ECX,dword ptr [ESP + 0x764]
//   Label: LAB_0051e307
// 0051e30e: INC EAX
// 0051e30f: ADD EDX,0x4
// 0051e312: CMP EAX,ECX
// 0051e314: JL 0x0051e260
//   XREF to: 0051e260 (CONDITIONAL_JUMP)
// 0051e31a: MOV ECX,dword ptr [ESP + 0x758]
//   Label: LAB_0051e31a
// 0051e321: INC ECX
// 0051e322: MOV EBX,dword ptr [ESP + 0x750]
// 0051e329: MOV dword ptr [ESP + 0x758],ECX
// 0051e330: CMP ECX,EBX
// 0051e332: JL 0x0051e246
//   XREF to: 0051e246 (CONDITIONAL_JUMP)
// 0051e338: PUSH 0xf
//   Label: LAB_0051e338
// 0051e33a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051e33f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051e340: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051e342: CALL dword ptr [EDX + 0x4]
// 0051e345: ADD ESP,0x8
// 0051e348: TEST EAX,EAX
// 0051e34a: JZ 0x0051e377
//   XREF to: 0051e377 (CONDITIONAL_JUMP)
// 0051e34c: PUSH 0x2a
// 0051e34e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051e353: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051e354: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051e356: CALL dword ptr [EDX]
// 0051e358: ADD ESP,0x8
// 0051e35b: TEST EAX,EAX
// 0051e35d: JZ 0x0051e5be
//   XREF to: 0051e5be (CONDITIONAL_JUMP)
// 0051e363: DEC ESI
// 0051e364: TEST ESI,ESI
//   Label: LAB_0051e364
// 0051e366: JL 0x0051e5c4
//   XREF to: 0051e5c4 (CONDITIONAL_JUMP)
// 0051e36c: CMP ESI,dword ptr [ESP + 0x750]
//   Label: LAB_0051e36c
// 0051e373: JL 0x0051e377
//   XREF to: 0051e377 (CONDITIONAL_JUMP)
// 0051e375: XOR ESI,ESI
// 0051e377: PUSH 0x14
//   Label: LAB_0051e377
// 0051e379: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051e37e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051e37f: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051e381: CALL dword ptr [EDX + 0x4]
// 0051e384: ADD ESP,0x8
// 0051e387: TEST EAX,EAX
// 0051e389: JZ 0x0051e398
//   XREF to: 0051e398 (CONDITIONAL_JUMP)
// 0051e38b: TEST ESI,ESI
// 0051e38d: JL 0x0051e5d1
//   XREF to: 0051e5d1 (CONDITIONAL_JUMP)
// 0051e393: MOV ESI,0xffffffff
// 0051e398: PUSH 0x1
//   Label: LAB_0051e398
// 0051e39a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051e39f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051e3a0: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051e3a2: CALL dword ptr [EDX + 0x4]
// 0051e3a5: ADD ESP,0x8
// 0051e3a8: TEST EAX,EAX
// 0051e3aa: JNZ 0x0051e5d8
//   XREF to: 0051e5d8 (CONDITIONAL_JUMP)
// 0051e3b0: TEST ESI,ESI
//   Label: LAB_0051e3b0
// 0051e3b2: JL 0x0051e3c2
//   XREF to: 0051e3c2 (CONDITIONAL_JUMP)
// 0051e3b4: MOV EAX,dword ptr [ESP + ESI*0x4 + 0x3a8]
// 0051e3bb: MOV dword ptr [ESP + 0x6dc],EAX
// 0051e3c2: PUSH 0xf
//   Label: LAB_0051e3c2
// 0051e3c4: LEA EAX,[ESP + 0x6b4]
// 0051e3cb: PUSH EAX
// 0051e3cc: CALL core_stairs.cpp_FUN_005b9670
//   XREF to: 005b9670 (UNCONDITIONAL_CALL)
// 0051e3d1: ADD ESP,0x8
// 0051e3d4: JMP 0x0051db8b
//   XREF to: 0051db8b (UNCONDITIONAL_JUMP)
// 0051e3d9: MOV ECX,0x6382e0
//   Label: LAB_0051e3d9
//   XREF to: 006382e0 (DATA)
// 0051e3de: MOV EBX,0x155a
// 0051e3e3: PUSH 0x6382f5
//   XREF to: 006382f5 (DATA)
// 0051e3e8: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0051e3ee: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0051e3f4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051e3f9: ADD ESP,0x4
// 0051e3fc: JMP 0x0051d9ac
//   XREF to: 0051d9ac (UNCONDITIONAL_JUMP)
// 0051e401: MOV EAX,dword ptr [ESP + 0x704]
//   Label: LAB_0051e401
//   XREF to: Stack[-0x7c] (DATA)
// 0051e408: MOV dword ptr [ESP + 0x6c8],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 0051e40f: MOV EAX,dword ptr [ESP + 0x708]
//   XREF to: Stack[-0x78] (READ)
// 0051e416: MOV dword ptr [ESP + 0x6cc],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 0051e41d: MOV EAX,dword ptr [ESP + 0x70c]
//   XREF to: Stack[-0x74] (READ)
// 0051e424: MOV dword ptr [ESP + 0x6d0],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 0051e42b: JMP 0x0051db17
//   XREF to: 0051db17 (UNCONDITIONAL_JUMP)
// 0051e430: MOV EDX,dword ptr [ESP + 0x750]
//   Label: LAB_0051e430
//   XREF to: Stack[-0x30] (READ)
// 0051e437: DEC EDX
// 0051e438: TEST EDX,EDX
// 0051e43a: JLE 0x0051e453
//   XREF to: 0051e453 (CONDITIONAL_JUMP)
// 0051e43c: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051e43f: LEA ECX,[EDX*0x4 + 0x0]
// 0051e446: MOV EBX,dword ptr [ESP + 0x74c]
//   XREF to: Stack[-0x34] (READ)
// 0051e44d: ADD ECX,EAX
// 0051e44f: CMP EBX,dword ptr [ECX]
//   Label: LAB_0051e44f
// 0051e451: JGE 0x0051e45e
//   XREF to: 0051e45e (CONDITIONAL_JUMP)
// 0051e453: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_0051e453
//   XREF to: Stack[0xc] (READ)
// 0051e456: MOV EAX,dword ptr [EAX + EDX*0x4]
// 0051e459: JMP 0x0051dd2b
//   XREF to: 0051dd2b (UNCONDITIONAL_JUMP)
// 0051e45e: DEC EDX
//   Label: LAB_0051e45e
// 0051e45f: SUB ECX,0x4
// 0051e462: TEST EDX,EDX
// 0051e464: JG 0x0051e44f
//   XREF to: 0051e44f (CONDITIONAL_JUMP)
// 0051e466: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051e469: MOV EAX,dword ptr [EAX + EDX*0x4]
// 0051e46c: JMP 0x0051dd2b
//   XREF to: 0051dd2b (UNCONDITIONAL_JUMP)
// 0051e471: MOV EDI,dword ptr [EBP + 0x1c]
//   Label: LAB_0051e471
//   XREF to: Stack[0xc] (READ)
// 0051e474: LEA EAX,[ESI*0x4 + 0x0]
// 0051e47b: ADD EAX,EDI
// 0051e47d: MOV EAX,dword ptr [EAX]
// 0051e47f: JMP 0x0051dd2b
//   XREF to: 0051dd2b (UNCONDITIONAL_JUMP)
// 0051e484: CMP EAX,EDI
//   Label: LAB_0051e484
// 0051e486: JL 0x0051dd3d
//   XREF to: 0051dd3d (CONDITIONAL_JUMP)
// 0051e48c: JMP 0x0051dd7c
//   XREF to: 0051dd7c (UNCONDITIONAL_JUMP)
// 0051e491: PUSH 0x0
//   Label: LAB_0051e491
// 0051e493: PUSH 0x0
// 0051e495: PUSH 0x63833d
//   XREF to: 0063833d (DATA)
// 0051e49a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0051e49f: ADD ESP,0xc
// 0051e4a2: PUSH 0xb
// 0051e4a4: PUSH 0x0
// 0051e4a6: PUSH 0x638362
//   XREF to: 00638362 (DATA)
// 0051e4ab: JMP 0x0051ddbb
//   XREF to: 0051ddbb (UNCONDITIONAL_JUMP)
// 0051e4b0: MOV EAX,dword ptr [ESP + 0x750]
//   Label: LAB_0051e4b0
//   XREF to: Stack[-0x30] (READ)
// 0051e4b7: PUSH EAX
// 0051e4b8: PUSH ESI
// 0051e4b9: PUSH 0x6383ba
//   XREF to: 006383ba (DATA)
// 0051e4be: LEA EAX,[ESP + 0x544]
//   XREF to: Stack[-0x248] (DATA)
// 0051e4c5: PUSH EAX
// 0051e4c6: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0051e4cb: ADD ESP,0x10
// 0051e4ce: PUSH 0x0
// 0051e4d0: PUSH 0x0
// 0051e4d2: LEA EAX,[ESP + 0x540]
//   XREF to: Stack[-0x248] (DATA)
// 0051e4d9: PUSH EAX
// 0051e4da: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0051e4df: ADD ESP,0xc
// 0051e4e2: PUSH 0xb
// 0051e4e4: PUSH 0x0
// 0051e4e6: PUSH 0x6383d0
//   XREF to: 006383d0 (DATA)
// 0051e4eb: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0051e4f0: ADD ESP,0xc
// 0051e4f3: PUSH 0x16
// 0051e4f5: PUSH 0x0
// 0051e4f7: PUSH 0x6383f5
//   XREF to: 006383f5 (DATA)
// 0051e4fc: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0051e501: ADD ESP,0xc
// 0051e504: PUSH 0x21
// 0051e506: PUSH 0x0
// 0051e508: PUSH 0x638411
//   XREF to: 00638411 (DATA)
// 0051e50d: JMP 0x0051ddbb
//   XREF to: 0051ddbb (UNCONDITIONAL_JUMP)
// 0051e512: MOV EAX,dword ptr [ESP + 0x760]
//   Label: LAB_0051e512
//   XREF to: Stack[-0x20] (READ)
// 0051e519: MOV ECX,dword ptr [EAX]
// 0051e51b: PUSH ECX
// 0051e51c: PUSH EBX
// 0051e51d: PUSH 0x638449
//   XREF to: 00638449 (DATA)
// 0051e522: LEA EAX,[ESP + 0x544]
//   XREF to: Stack[-0x248] (DATA)
// 0051e529: PUSH EAX
// 0051e52a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0051e52f: ADD ESP,0x10
// 0051e532: JMP 0x0051de70
//   XREF to: 0051de70 (UNCONDITIONAL_JUMP)
// 0051e537: MOV EAX,dword ptr [ESP + 0x760]
//   Label: LAB_0051e537
//   XREF to: Stack[-0x20] (READ)
// 0051e53e: MOV EDX,dword ptr [ESP + 0x608]
//   XREF to: Stack[-0x178] (READ)
// 0051e545: CMP EDX,dword ptr [EAX]
// 0051e547: JNZ 0x0051e558
//   XREF to: 0051e558 (CONDITIONAL_JUMP)
// 0051e549: MOV dword ptr [0x02d02570],0xfa
//   XREF to: 02d02570 (WRITE)
// 0051e553: JMP 0x0051ded3
//   XREF to: 0051ded3 (UNCONDITIONAL_JUMP)
// 0051e558: MOV dword ptr [0x02d02570],0xff
//   Label: LAB_0051e558
//   XREF to: 02d02570 (WRITE)
// 0051e562: JMP 0x0051ded3
//   XREF to: 0051ded3 (UNCONDITIONAL_JUMP)
// 0051e567: PUSH 0x0
//   Label: LAB_0051e567
// 0051e569: LEA EAX,[ESP + 0x604]
//   XREF to: Stack[-0x180] (DATA)
// 0051e570: PUSH EAX
// 0051e571: CALL shape_meshlod.cpp_FUN_0051ead0
//   XREF to: 0051ead0 (UNCONDITIONAL_CALL)
// 0051e576: JMP 0x0051dfb9
//   XREF to: 0051dfb9 (UNCONDITIONAL_JUMP)
// 0051e57b: JBE 0x0051e567
//   Label: LAB_0051e57b
//   XREF to: 0051e567 (CONDITIONAL_JUMP)
// 0051e57d: CMP EDX,0x2
// 0051e580: JZ 0x0051e567
//   XREF to: 0051e567 (CONDITIONAL_JUMP)
// 0051e582: JMP 0x0051dfbc
//   XREF to: 0051dfbc (UNCONDITIONAL_JUMP)
// 0051e587: PUSH ECX
//   Label: LAB_0051e587
// 0051e588: PUSH 0x638477
//   XREF to: 00638477 (DATA)
// 0051e58d: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0051e593: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0051e594: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0051e599: ADD ESP,0xc
// 0051e59c: JMP 0x0051e079
//   XREF to: 0051e079 (UNCONDITIONAL_JUMP)
// 0051e5a1: CMP EBX,0x2
//   Label: LAB_0051e5a1
// 0051e5a4: JL 0x0051e0ca
//   XREF to: 0051e0ca (CONDITIONAL_JUMP)
// 0051e5aa: JMP 0x0051e0cf
//   XREF to: 0051e0cf (UNCONDITIONAL_JUMP)
// 0051e5af: CMP ESI,ECX
//   Label: LAB_0051e5af
// 0051e5b1: JNZ 0x0051e307
//   XREF to: 0051e307 (CONDITIONAL_JUMP)
// 0051e5b7: MOV ESI,EAX
// 0051e5b9: JMP 0x0051e307
//   XREF to: 0051e307 (UNCONDITIONAL_JUMP)
// 0051e5be: INC ESI
//   Label: LAB_0051e5be
// 0051e5bf: JMP 0x0051e364
//   XREF to: 0051e364 (UNCONDITIONAL_JUMP)
// 0051e5c4: MOV ESI,dword ptr [ESP + 0x750]
//   Label: LAB_0051e5c4
// 0051e5cb: DEC ESI
// 0051e5cc: JMP 0x0051e36c
//   XREF to: 0051e36c (UNCONDITIONAL_JUMP)
// 0051e5d1: XOR ESI,ESI
//   Label: LAB_0051e5d1
// 0051e5d3: JMP 0x0051e398
//   XREF to: 0051e398 (UNCONDITIONAL_JUMP)
// 0051e5d8: MOV EAX,ESP
//   Label: LAB_0051e5d8
// 0051e5da: PUSH EAX
// 0051e5db: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0051e5e0: ADD ESP,0x4
// 0051e5e3: PUSH 0x6384b5
//   XREF to: 006384b5 (DATA)
// 0051e5e8: LEA EAX,[ESP + 0x4]
// 0051e5ec: PUSH EAX
// 0051e5ed: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0051e5f2: ADD ESP,0x8
// 0051e5f5: PUSH 0x6384ca
//   XREF to: 006384ca (DATA)
// 0051e5fa: LEA EAX,[ESP + 0x4]
// 0051e5fe: PUSH EAX
// 0051e5ff: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0051e604: ADD ESP,0x8
// 0051e607: PUSH 0x6384e0
//   XREF to: 006384e0 (DATA)
// 0051e60c: LEA EAX,[ESP + 0x4]
// 0051e610: PUSH EAX
// 0051e611: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0051e616: ADD ESP,0x8
// 0051e619: PUSH 0x0
// 0051e61b: PUSH -0x1
// 0051e61d: PUSH 0x638503
//   XREF to: 00638503 (DATA)
// 0051e622: LEA EAX,[ESP + 0xc]
// 0051e626: PUSH EAX
// 0051e627: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0051e62c: ADD ESP,0x10
// 0051e62f: TEST EAX,EAX
// 0051e631: JZ 0x0051e64c
//   XREF to: 0051e64c (CONDITIONAL_JUMP)
// 0051e633: CMP EAX,0x1
// 0051e636: JZ 0x0051e67c
//   XREF to: 0051e67c (CONDITIONAL_JUMP)
// 0051e638: PUSH 0x0
// 0051e63a: LEA EAX,[ESP + 0x4]
// 0051e63e: PUSH EAX
// 0051e63f: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0051e644: ADD ESP,0x8
// 0051e647: JMP 0x0051e3b0
//   XREF to: 0051e3b0 (UNCONDITIONAL_JUMP)
// 0051e64c: PUSH EAX
//   Label: LAB_0051e64c
// 0051e64d: LEA EAX,[ESP + 0x4]
// 0051e651: PUSH EAX
// 0051e652: MOV ESI,dword ptr [ESP + 0x758]
// 0051e659: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0051e65e: ADD ESP,0x8
// 0051e661: PUSH 0x0
// 0051e663: LEA EAX,[ESP + 0x604]
// 0051e66a: PUSH EAX
// 0051e66b: CALL shape_meshlod.cpp_LodMesh_dtor_FUN_00515950
//   XREF to: 00515950 (UNCONDITIONAL_CALL)
// 0051e670: ADD ESP,0x8
// 0051e673: MOV EAX,ESI
// 0051e675: MOV ESP,EBP
// 0051e677: POP EBP
// 0051e678: POP EDI
// 0051e679: POP ESI
// 0051e67a: POP EBX
// 0051e67b: RET
// 0051e67c: PUSH 0x0
//   Label: LAB_0051e67c
// 0051e67e: LEA EAX,[ESP + 0x4]
// 0051e682: PUSH EAX
// 0051e683: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0051e688: ADD ESP,0x8
// 0051e68b: PUSH 0x0
// 0051e68d: LEA EAX,[ESP + 0x604]
// 0051e694: PUSH EAX
// 0051e695: MOV ESI,0xffffffff
// 0051e69a: CALL shape_meshlod.cpp_LodMesh_dtor_FUN_00515950
//   XREF to: 00515950 (UNCONDITIONAL_CALL)
// 0051e69f: ADD ESP,0x8
// 0051e6a2: MOV EAX,ESI
// 0051e6a4: MOV ESP,EBP
// 0051e6a6: POP EBP
// 0051e6a7: POP EDI
// 0051e6a8: POP ESI
// 0051e6a9: POP EBX
// 0051e6aa: RET
