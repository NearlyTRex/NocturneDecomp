// Name: core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0
// Address: 0057e7c0
// Address Range: [[0057e7c0, 0057fcf2]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0(CDemonSet * this_ptr)
// Cross-references:
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584b90 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0057e77c = 0057ea93
//   TerminatedCString s_d_006465a5
//   TerminatedCString s_Demented_Camera_Editor_006480b5
//   TerminatedCString s_s_006480cc
//   TerminatedCString s_s_1_Add_new_camera_006480cf
//   TerminatedCString s_s_2_Delete_existing_came_006480e2
//   TerminatedCString s_s_3_Edit_existing_camera_006480fd
//   TerminatedCString s_s_4_Save_set_00648116
//   TerminatedCString s_s_5_Rename_all_cameras_00648123
//   TerminatedCString s_s_6_Clone_a_camera_0064813a
//   TerminatedCString s_s_7_Merge_LC_file_0064814d
//   TerminatedCString s_s_8_Precompute_all_PVS_00648160
//   TerminatedCString s_s_9_Merge2_00648177
//   TerminatedCString s_A_Rename2_00648182
//   TerminatedCString s_Name_this_new_camera_0064818e
//   TerminatedCString s_Delete_which_camera_006481a6
//   TerminatedCString s_Move_which_camera_006481ba
//   TerminatedCString s_set_006481cc
//   undefined4 DAT_006481cd
//   undefined4 DAT_006481ce
//   undefined4 DAT_006481cf
//   TerminatedCString s_set_006481d1
//   TerminatedCString s_models_006481d5
//   TerminatedCString s_Save_set_006481dc
//   TerminatedCString s_Enter_new_base_name_006481e5
//   TerminatedCString s_s_d_006481fc
//   TerminatedCString s_Clone_which_camera_00648201
//   TerminatedCString s_s1_00648214
//   TerminatedCString s_Enter_name_of_clone_00648218
//   TerminatedCString s_lc_0064822c
//   TerminatedCString s_models_00648231
//   TerminatedCString s_Merge_LC_00648238
//   TerminatedCString s_rt_00648242
//   TerminatedCString s_models_00648245
//   TerminatedCString s_core_setedit_cpp_0064824c
//   TerminatedCString s_Can_t_open_LC_file_00648260
//   TerminatedCString s_d_00648273
//   TerminatedCString s_core_setedit_cpp_00648277
//   TerminatedCString s_Can_t_merge_version_d_LC_0064828b
//   TerminatedCString s_d_d_006482aa
//   TerminatedCString s_ncam_d_006482b1
//   TerminatedCString s_Import_this_camera_006482b8
//   TerminatedCString s_core_setedit_cpp_006482cc
//   TerminatedCString s_Recomputing_all_PVS_006482e0
//   TerminatedCString s_backdrop_s_pvs_006482f4
//   TerminatedCString s_core_setedit_cpp_00648304
//   TerminatedCString s_lc_00648318
//   TerminatedCString s_models_0064831d
//   TerminatedCString s_Merge2_LC_00648324
//   TerminatedCString s_rt_0064832f
//   TerminatedCString s_models_00648332
//   TerminatedCString s_core_setedit_cpp_00648339
//   TerminatedCString s_Can_t_open_LC_file_0064834d
//   TerminatedCString s_d_00648360
//   TerminatedCString s_core_setedit_cpp_00648364
//   TerminatedCString s_Can_t_merge_version_d_LC_00648378
//   TerminatedCString s_d_d_00648397
//   TerminatedCString s_s_raw_0064839e
//   TerminatedCString s_rb_006483a5
//   TerminatedCString s_backdrop_006483a8
//   TerminatedCString s_s_raw_006483b1
//   TerminatedCString s_wb_006483b8
//   TerminatedCString s_backdrop_006483bb
//   TerminatedCString s_core_setedit_cpp_006483c4
//   TerminatedCString s_core_setedit_cpp_006483d8
//   TerminatedCString s_s_act_006483ec
//   TerminatedCString s_rb_006483f3
//   TerminatedCString s_backdrop_006483f6
//   TerminatedCString s_s_act_006483ff
//   TerminatedCString s_wb_00648406
//   TerminatedCString s_backdrop_00648409
//   TerminatedCString s_core_setedit_cpp_00648412
//   TerminatedCString s_core_setedit_cpp_00648426
//   TerminatedCString s_core_setedit_cpp_0064843a
//   TerminatedCString s_Enter_new_unique_base_na_0064844e
//   TerminatedCString s_s_raw_0064846c
//   TerminatedCString s_s_d_raw_00648473
//   TerminatedCString s_rb_0064847c
//   TerminatedCString s_backdrop_0064847f
//   TerminatedCString s_wb_00648488
//   TerminatedCString s_backdrop_0064848b
//   TerminatedCString s_core_setedit_cpp_00648494
//   TerminatedCString s_core_setedit_cpp_006484a8
//   TerminatedCString s_s_act_006484bc
//   TerminatedCString s_s_d_act_006484c3
//   TerminatedCString s_rb_006484cc
//   TerminatedCString s_backdrop_006484cf
//   TerminatedCString s_wb_006484d8
//   TerminatedCString s_backdrop_006484db
//   TerminatedCString s_core_setedit_cpp_006484e4
//   TerminatedCString s_core_setedit_cpp_006484f8
//   TerminatedCString s_s_d_0064850c
//   double DOUBLE_00648515 = 0.100000000000000
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CEditorTools g_CEditorToolsPtr
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_FUN_0056d2d0
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   core_setedit.cpp_CallToFreeSomeMemory_FUN_00580560
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   core_setedit.cpp_CDemonSet_FUN_00577af0
//   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
//   core_setedit.cpp_FUN_0057d340
//   core_setedit.cpp_FUN_0057e430
//   core_setedit.cpp_UserInputCreate_FUN_0057d660
//   core_setutil.cpp_C3DSCamera_ctor_FUN_00585310
//   core_setutil.cpp_C3DSCamera_dtor_FUN_00585340
//   core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0
//   core_setutil.cpp_C3DSCamera_reset_FUN_005853b0
//   core_setutil.cpp_C3DSLight_ctor_FUN_005862f0
//   core_setutil.cpp_C3DSLight_importS3D_FUN_00587710
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fputc_FUN_006007a0
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdlib.c_atoi_FUN_005ffef0
//   crt_string.c_strcmp_FUN_005fef20
//   crt_string.c_strupr_FUN_00600770
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_splitPath_FUN_00481f20
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0
//   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00

#include "nocturne.h"

void __cdecl core_setedit_cpp_DementedCameraEditor_FUN_0057e7c0(CDemonSet *this_ptr)

{
  char cVar1;
  byte bVar2;
  int *ptr;
  CEditorTools *this_ptr_00;
  bool bVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte *pbVar4;
  FILE *pFVar5;
  FILE *pFVar6;
  uint uVar7;
  undefined4 *puVar8;
  float *pfVar9;
  FILE *unaff_EBX;
  int iVar10;
  C3DSCamera *string_data;
  undefined4 *puVar11;
  CDemonSet *pCVar12;
  BADSPACEBASE *in_ESP;
  FILE *unaff_EBP;
  FILE *unaff_ESI;
  int iVar13;
  char *pcVar14;
  undefined4 *puVar15;
  FILE *unaff_EDI;
  int y_pos;
  char *pcVar16;
  char *pcVar17;
  undefined4 *puVar18;
  FILE **ppFVar19;
  byte bVar20;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000014;
  FILE *in_stack_00000018;
  FILE *in_stack_00000020;
  int in_stack_00000024;
  FILE *in_stack_00000028;
  FILE *in_stack_00000030;
  FILE *in_stack_00000038;
  FILE *in_stack_00000040;
  FILE *pFVar21;
  char *in_stack_ffffb8cc;
  char *in_stack_ffffb8d0;
  uint in_stack_ffffb8d4;
  uint in_stack_ffffb8d8;
  uint in_stack_ffffb8dc;
  FILE *in_stack_ffffb8e0;
  FILE *in_stack_ffffb900;
  undefined1 auStack_2ea4 [6292];
  undefined1 auStack_1610 [12];
  undefined1 auStack_1604 [912];
  undefined1 auStack_1274 [24];
  undefined1 auStack_125c [924];
  undefined1 auStack_ec0 [12];
  undefined1 auStack_eb4 [936];
  undefined1 auStack_b0c [260];
  float fStack_a08;
  float fStack_a04;
  float fStack_a00;
  float fStack_9fc;
  float fStack_9f8;
  float fStack_9f4;
  char acStack_990 [36];
  undefined1 auStack_96c [216];
  char acStack_894 [16];
  char acStack_884 [8];
  char acStack_87c [20];
  char acStack_868 [248];
  char acStack_770 [268];
  char acStack_664 [4];
  char acStack_660 [28];
  char acStack_644 [4];
  char acStack_640 [228];
  char acStack_55c [4];
  char acStack_558 [28];
  char acStack_53c [4];
  char acStack_538 [132];
  char acStack_4b4 [4];
  char acStack_4b0 [40];
  char acStack_488 [10];
  byte abStack_47e [10];
  char acStack_474 [4];
  char acStack_470 [9];
  char acStack_467 [243];
  char acStack_374 [16];
  char acStack_364 [212];
  char acStack_290 [36];
  undefined1 auStack_26c [212];
  char acStack_198 [8];
  char acStack_190 [16];
  char acStack_180 [8];
  char acStack_178 [240];
  undefined1 local_88 [8];
  int local_80;
  C3DSCamera *local_7c;
  C3DSCamera *local_78;
  FILE *local_74;
  char *local_70;
  FILE *local_6c;
  char local_68 [12];
  FILE *local_5c;
  FILE *local_58 [5];
  float local_44;
  C3DSCamera *local_40;
  C3DSCamera *local_3c;
  C3DSCamera *local_38;
  FILE *local_34;
  C3DSCamera *local_30;
  FILE *local_28;
  FILE *local_24;
  undefined1 local_20 [4];
  char *local_1c;
  FILE *local_18;
  FILE *local_14;
  
  bVar20 = 0;
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
  local_7c = this_ptr->cameras;
  local_70 = this_ptr->geometry_filename;
  local_78 = local_7c;
  local_74 = (FILE *)local_7c;
  local_6c = (FILE *)local_7c;
  local_5c = (FILE *)local_7c;
  local_58[0] = (FILE *)local_7c;
  local_40 = local_7c;
  local_3c = local_7c;
  local_38 = local_7c;
  local_34 = (FILE *)local_7c;
  local_30 = local_7c;
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Demented Camera Editor",0,0);
    y_pos = 0x16;
    iVar13 = 0;
    iVar10 = 0;
    if (0 < this_ptr->camera_count) {
      local_24 = local_74;
      do {
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_4b0,"%s",acStack_4b0,"%s",local_24)
        ;
        engine_2d_c_drawText_FUN_00401fd0(acStack_4b4,iVar13,y_pos);
        y_pos = y_pos + 0xb;
        if (g_WindowHeight / 2 + -0xb < y_pos) {
          y_pos = 0x16;
          iVar13 = iVar13 + g_WindowWidth / 7;
        }
        local_24 = local_24 + 0xf;
        iVar10 = iVar10 + 1;
      } while (iVar10 < this_ptr->camera_count);
    }
    iVar13 = g_WindowHeight / 2;
    engine_2d_c_drawText_FUN_00401fd0("1.  Add new camera",0,iVar13);
    iVar10 = iVar13 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("2.  Delete existing camera",0,iVar10);
    engine_2d_c_drawText_FUN_00401fd0("3.  Edit existing camera",0,iVar13 + 0x16);
    this_ptr = (CDemonSet *)(iVar13 + 0x21);
    engine_2d_c_drawText_FUN_00401fd0("4.  Save set",0,(int)this_ptr);
    engine_2d_c_drawText_FUN_00401fd0("5.  Rename all cameras",g_WindowWidth / 3,iVar13);
    engine_2d_c_drawText_FUN_00401fd0("6.  Clone a camera",g_WindowWidth / 3,iVar10);
    engine_2d_c_drawText_FUN_00401fd0("7.  Merge .LC file",g_WindowWidth / 3,iVar13 + 0x16);
    engine_2d_c_drawText_FUN_00401fd0
              ("8.  Precompute all PVS",g_WindowWidth / 3,in_stack_00000014);
    engine_2d_c_drawText_FUN_00401fd0("9.  Merge2",(g_WindowWidth * 2) / 3,iVar13);
    engine_2d_c_drawText_FUN_00401fd0("A.  Rename2",(g_WindowWidth * 2) / 3,iVar10);
    iVar10 = core_setedit_cpp_CDemonSet_FUN_00577af0(this_ptr);
    if ((iVar10 != -1) && (iVar10 = core_setedit_cpp_UserInputCreate_FUN_0057d660(), iVar10 != 0)) {
      core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
    }
    wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    bVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    if (CONCAT31(extraout_var,bVar3) == 0) {
      local_38 = (C3DSCamera *)0xffffffff;
    }
    else {
      local_34 = (FILE *)engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    }
    switch(local_34) {
    case (FILE *)0x31:
      if (this_ptr->camera_count < 0xfa) {
        core_setutil_cpp_C3DSCamera_reset_FUN_005853b0
                  ((C3DSCamera *)(this_ptr->camera_count * 0x1a4 + in_stack_0000000c));
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (acStack_470,8,0,0,"Name this new camera : ");
        pcVar14 = acStack_470 + 4;
        pcVar17 = (char *)(this_ptr->camera_count * 0x1a4 + in_stack_0000000c);
        do {
          cVar1 = *pcVar14;
          *pcVar17 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar14[1];
          pcVar14 = pcVar14 + 2;
          pcVar17[1] = cVar1;
          pcVar17 = pcVar17 + 2;
        } while (cVar1 != '\0');
        iVar10 = -1;
        pcVar14 = acStack_470 + 4;
        do {
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar20 * -2 + 1;
        } while (cVar1 != '\0');
        if ((iVar10 != -2) &&
           (iVar10 = core_setedit_cpp_UserInputCreate_FUN_0057d660(), iVar10 != 0)) {
          this_ptr->camera_count = this_ptr->camera_count + 1;
          goto LAB_0057eb3b;
        }
      }
      break;
    case (FILE *)0x32:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_ec0 + 8));
      iVar10 = 0;
      pFVar5 = local_34;
      if (0 < this_ptr->camera_count) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_ec0,(char *)pFVar5);
          iVar10 = iVar10 + 1;
          pFVar5 = pFVar5 + 0xf;
        } while (iVar10 < this_ptr->camera_count);
      }
      iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         ((CPickList *)auStack_ec0,"Delete which camera",-1,0);
      if (-1 < iVar10) {
        core_setedit_cpp_FUN_0057e430();
        core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_eb4,0,(uint)in_stack_ffffb8cc,(uint)in_stack_ffffb8d0,
                 in_stack_ffffb8d4,in_stack_ffffb8d8,in_stack_ffffb8dc);
      break;
    case (FILE *)0x33:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_1610 + 8));
      iVar10 = 0;
      string_data = local_30;
      if (0 < this_ptr->camera_count) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_1610,string_data->name);
          iVar10 = iVar10 + 1;
          string_data = string_data + 1;
        } while (iVar10 < this_ptr->camera_count);
      }
      iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         ((CPickList *)auStack_1610,"Move which camera",-1,0);
      if ((-1 < iVar10) && (iVar10 = core_setedit_cpp_UserInputCreate_FUN_0057d660(), iVar10 != 0))
      {
        core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_1604,0,(uint)in_stack_ffffb8cc,(uint)in_stack_ffffb8d0,
                 in_stack_ffffb8d4,in_stack_ffffb8d8,in_stack_ffffb8dc);
      break;
    case (FILE *)0x34:
      if (*(char *)(iVar13 + 0x14d111) == '\0') {
        acStack_470[4] = 0;
      }
      else {
        engine_dosio_c_splitPath_FUN_00481f20
                  ((char *)local_24,(char *)0x0,(char *)0x0,acStack_470 + 4,(char *)0x0);
        pcVar17 = ".set";
        iVar10 = -1;
        pcVar14 = acStack_470;
        do {
          pcVar16 = pcVar14;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar16 = pcVar14 + (uint)bVar20 * -2 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar16;
        } while (cVar1 != '\0');
        pcVar16 = pcVar16 + -1;
        do {
          cVar1 = *pcVar17;
          *pcVar16 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar17[1];
          pcVar17 = pcVar17 + 2;
          pcVar16[1] = cVar1;
          pcVar16 = pcVar16 + 2;
        } while (cVar1 != '\0');
        crt_string_c_strupr_FUN_00600770(acStack_470);
      }
      bVar3 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                        (g_CEditorToolsPtr,"Save set","models",0x6481d1,
                         (bool)((char)acStack_470 + '\x04'));
      if (CONCAT31(extraout_var_00,bVar3) != 0) {
        core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(this_ptr,acStack_470 + 8);
      }
      break;
    case (FILE *)0x35:
      local_6c = (FILE *)((uint)local_6c & 0xffffff00);
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                ((char *)&local_6c,5,0,0,"Enter new base name : ");
      iVar10 = -1;
      pcVar14 = local_68;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar20 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar10 != -2) {
        iVar10 = 0;
        pcVar14 = local_1c;
        if (0 < this_ptr->camera_count) {
          do {
            crt_stdio_c_sprintf_FUN_005fdbd0(pcVar14,"%s%d");
            in_stack_ffffb8cc = pcVar14;
            core_setedit_cpp_FUN_0057d340();
            iVar10 = iVar10 + 1;
            pcVar14 = pcVar14 + 0x1a4;
          } while (iVar10 < this_ptr->camera_count);
        }
LAB_0057eb3b:
        core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
      }
      break;
    case (FILE *)0x36:
      if (this_ptr->camera_count < 0xfa) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_1274 + 0x14));
        iVar10 = 0;
        pFVar5 = unaff_ESI;
        if (0 < this_ptr->camera_count) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_1274,(char *)pFVar5);
            iVar10 = iVar10 + 1;
            pFVar5 = pFVar5 + 0xf;
          } while (iVar10 < this_ptr->camera_count);
        }
        in_stack_00000024 =
             shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                       ((CPickList *)auStack_1274,"Clone which camera",-1,0);
        if (-1 < in_stack_00000024) {
          pbVar4 = abStack_47e;
          pFVar5 = unaff_EBX + in_stack_00000024 * 0xf;
          do {
            pbVar4 = pbVar4 + 2;
            bVar2 = *(byte *)&pFVar5->_ptr;
            *pbVar4 = bVar2;
            if (bVar2 == 0) break;
            bVar2 = *(byte *)((int)&pFVar5->_ptr + 1);
            pFVar5 = (FILE *)((int)&pFVar5->_ptr + 2);
            pbVar4[1] = bVar2;
          } while (bVar2 != 0);
          uVar7 = 0xffffffff;
          pbVar4 = abStack_47e + 2;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            bVar2 = *pbVar4;
            pbVar4 = pbVar4 + (uint)bVar20 * -2 + 1;
          } while (bVar2 != 0);
          iVar10 = ~uVar7 - 2;
          if (0 < iVar10) {
            pbVar4 = abStack_47e + ~uVar7;
            do {
              if ((*pbVar4 < 0x30) || (0x39 < *pbVar4)) break;
              iVar10 = iVar10 + -1;
              pbVar4 = pbVar4 + -1;
            } while (0 < iVar10);
          }
          iVar13 = crt_stdlib_c_atoi_FUN_005ffef0(acStack_467 + iVar10);
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_467 + iVar10,"%d",iVar13 + 1);
          iVar10 = 0;
          if (0 < this_ptr->camera_count) {
            do {
              iVar13 = crt_string_c_strcmp_FUN_005fef20
                                 ((char *)&this_ptr->cameras[iVar10 + -1].field17_0x1a0,acStack_474)
              ;
              if (iVar13 == 0) {
                pcVar14 = acStack_470;
                pcVar17 = acStack_770;
                do {
                  cVar1 = *pcVar14;
                  *pcVar17 = cVar1;
                  if (cVar1 == '\0') break;
                  cVar1 = pcVar14[1];
                  pcVar14 = pcVar14 + 2;
                  pcVar17[1] = cVar1;
                  pcVar17 = pcVar17 + 2;
                } while (cVar1 != '\0');
                iVar10 = -1;
                crt_stdio_c_sprintf_FUN_005fdbd0(acStack_470,"%s1",acStack_770);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < this_ptr->camera_count);
          }
          iVar10 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                             (g_CEditorToolsPtr,"Enter name of clone",acStack_474,0x1f,1);
          if (iVar10 != 0) {
            puVar8 = (undefined4 *)(in_stack_00000008 + (int)in_stack_00000030 * 0x1a4);
            puVar11 = (undefined4 *)(this_ptr->camera_count * 0x1a4 + in_stack_00000008);
            puVar15 = puVar8;
            puVar18 = puVar11;
            for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar18 = *puVar15;
              puVar15 = puVar15 + (uint)bVar20 * -2 + 1;
              puVar18 = puVar18 + (uint)bVar20 * -2 + 1;
            }
            if (puVar11 + 0x40 != puVar8 + 0x40) {
              puVar11[0x40] = puVar8[0x40];
              puVar11[0x41] = puVar8[0x41];
              puVar11[0x42] = puVar8[0x42];
            }
            if (puVar11 + 0x43 != puVar8 + 0x43) {
              puVar11[0x43] = puVar8[0x43];
              puVar11[0x44] = puVar8[0x44];
              puVar11[0x45] = puVar8[0x45];
            }
            puVar11[0x46] = puVar8[0x46];
            puVar11[0x47] = puVar8[0x47];
            puVar11[0x48] = puVar8[0x48];
            puVar11[0x49] = puVar8[0x49];
            puVar11[0x4a] = puVar8[0x4a];
            puVar11[0x4b] = puVar8[0x4b];
            puVar11[0x4c] = puVar8[0x4c];
            puVar11[0x4d] = puVar8[0x4d];
            puVar11[0x4e] = puVar8[0x4e];
            puVar11[0x4f] = puVar8[0x4f];
            puVar11[0x50] = puVar8[0x50];
            puVar11[0x51] = puVar8[0x51];
            puVar11[0x52] = puVar8[0x52];
            puVar11[0x53] = puVar8[0x53];
            puVar11[0x54] = puVar8[0x54];
            puVar11[0x55] = puVar8[0x55];
            puVar11[0x56] = puVar8[0x56];
            puVar11[0x57] = puVar8[0x57];
            if (puVar11 + 0x58 != puVar8 + 0x58) {
              puVar11[0x58] = puVar8[0x58];
              puVar11[0x59] = puVar8[0x59];
              puVar11[0x5a] = puVar8[0x5a];
            }
            puVar11[0x5b] = puVar8[0x5b];
            puVar11[0x5c] = puVar8[0x5c];
            puVar11[0x5d] = puVar8[0x5d];
            puVar11[0x5e] = puVar8[0x5e];
            if (puVar11 + 0x5f != puVar8 + 0x5f) {
              puVar11[0x5f] = puVar8[0x5f];
              puVar11[0x60] = puVar8[0x60];
              puVar11[0x61] = puVar8[0x61];
            }
            if (puVar11 + 0x62 != puVar8 + 0x62) {
              puVar11[0x62] = puVar8[0x62];
              puVar11[99] = puVar8[99];
              puVar11[100] = puVar8[100];
            }
            puVar11[0x65] = puVar8[0x65];
            puVar11[0x66] = puVar8[0x66];
            puVar11[0x67] = puVar8[0x67];
            puVar11[0x68] = puVar8[0x68];
            this_ptr->cameras[this_ptr->camera_count].pvs_count = 0;
            this_ptr->cameras[this_ptr->camera_count].pvs_list = (int *)0x0;
            pcVar14 = acStack_470;
            pcVar17 = (char *)(this_ptr->camera_count * 0x1a4 + in_stack_00000008);
            do {
              cVar1 = *pcVar14;
              *pcVar17 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar14[1];
              pcVar14 = pcVar14 + 2;
              pcVar17[1] = cVar1;
              pcVar17 = pcVar17 + 2;
            } while (cVar1 != '\0');
            iVar10 = core_setedit_cpp_UserInputCreate_FUN_0057d660();
            if (iVar10 != 0) {
              this_ptr->camera_count = this_ptr->camera_count + 1;
              core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
            }
          }
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)auStack_125c,0,(uint)in_stack_ffffb8cc,(uint)in_stack_ffffb8d0,
                   in_stack_ffffb8d4,in_stack_ffffb8d8,in_stack_ffffb8dc);
      }
      break;
    case (FILE *)0x37:
      iVar10 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                         (g_CEditorToolsPtr,"Merge .LC","models","*.lc",
                          SUB41(auStack_96c,0));
      if (iVar10 != 0) {
        pFVar5 = engine_dosio_c_getFile_FUN_00481a50("models",acStack_990,"rt");
        if (pFVar5 == (FILE *)0x0) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xe68;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open LC file");
        }
        crt_stdio_c_fgets_FUN_005fefd0(acStack_488,0xff,pFVar5);
        local_34 = (FILE *)0xffffffff;
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar5,"%d\n",&local_34);
        if (local_30 != (C3DSCamera *)&DAT_00000001) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xe6c;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't merge version %d LC file",local_30)
          ;
        }
        crt_stdio_c_fgets_FUN_005fefd0((char *)(abStack_47e + 2),0xff,pFVar5);
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar5,"%d,%d\n",&local_24,local_20);
        crt_stdio_c_fgets_FUN_005fefd0(acStack_474,0xff,pFVar5);
        iVar10 = 0;
        if (0 < (int)local_1c) {
          do {
            core_setutil_cpp_C3DSLight_ctor_FUN_005862f0((C3DSLight *)auStack_2ea4);
            core_setutil_cpp_C3DSLight_importS3D_FUN_00587710
                      ((C3DSLight *)(auStack_2ea4 + 4),pFVar5);
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)local_1c);
        }
        crt_stdio_c_fgets_FUN_005fefd0(acStack_470,0xff,pFVar5);
        iVar10 = this_ptr->camera_count;
        for (; (iVar10 < 0xfa && (0 < (int)local_14)); local_14 = (FILE *)((int)local_14 + -1)) {
          core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0
                    ((C3DSCamera *)(unaff_EBP + this_ptr->camera_count * 0xf),pFVar5);
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (local_1c + this_ptr->camera_count * 0x1a4,"ncam%d",
                     this_ptr->camera_count);
          core_setedit_cpp_FUN_0057d340();
          iVar10 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                             (g_CEditorToolsPtr,"Import this camera?");
          if (iVar10 != 0) {
            this_ptr->camera_count = this_ptr->camera_count + 1;
          }
          iVar10 = this_ptr->camera_count;
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar5,"..\\core\\setedit.cpp",0xe7f);
        goto LAB_0057eb3b;
      }
      break;
    case (FILE *)0x38:
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
      *(undefined4 *)(iVar13 + 0x15acad) = 1;
      this_ptr_00 = g_CEditorToolsPtr;
      *(undefined4 *)(iVar13 + 0x15acb1) = 1;
      *(undefined4 *)(iVar13 + 0x15aca5) = 1;
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (this_ptr_00,"Recomputing all PVS");
      pFVar5 = (FILE *)0x0;
      pCVar12 = this_ptr;
      if (0 < this_ptr->camera_count) {
        do {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_364,"backdrop\\%s.pvs");
          crt_io_c_deleteFile_FUN_005ff9d0(acStack_374);
          ptr = pCVar12->cameras[0].pvs_list;
          pCVar12->cameras[0].pvs_count = 0;
          if (ptr != (int *)0x0) {
            shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\core\\setedit.cpp",0xe97);
            pCVar12->cameras[0].pvs_list = (int *)0x0;
          }
          core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,(int)pFVar5);
          pFVar5 = (FILE *)((int)&pFVar5->_ptr + 1);
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,(float)(int)pFVar5,(float)this_ptr->camera_count);
          pCVar12 = (CDemonSet *)&pCVar12->cameras[0].field17_0x1a0;
          in_stack_00000040 = pFVar5;
        } while ((int)pFVar5 < this_ptr->camera_count);
      }
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      *(undefined4 *)(iVar13 + 0x15aca5) = 0;
      *(undefined4 *)(iVar13 + 0x15acad) = 0;
      *(undefined4 *)(iVar13 + 0x15acb1) = 0;
      in_stack_ffffb8cc = (char *)0x57f5c6;
      in_stack_ffffb8d0 = (char *)this_ptr;
      core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
      break;
    case (FILE *)0x39:
      iVar10 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                         (g_CEditorToolsPtr,"Merge2 .LC","models","*.lc",
                          SUB41(auStack_26c,0));
      if (iVar10 != 0) {
        local_28 = engine_dosio_c_getFile_FUN_00481a50("models",acStack_290,"rt");
        if (local_28 == (FILE *)0x0) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xeae;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open LC file");
        }
        pFVar5 = local_24;
        crt_stdio_c_fgets_FUN_005fefd0(acStack_488,0xff,local_24);
        local_1c = (char *)0xffffffff;
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar5,"%d\n",&local_1c);
        if (local_18 != (FILE *)&DAT_00000001) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xeb2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't merge version %d LC file",local_18)
          ;
        }
        crt_stdio_c_fgets_FUN_005fefd0((char *)(abStack_47e + 2),0xff,local_18);
        crt_stdio_c_fscanf_FUN_005fe7c0(local_14,"%d,%d\n",&stack0xfffffff4,&stack0xfffffff8);
        crt_stdio_c_fgets_FUN_005fefd0(acStack_474,0xff,unaff_EBP);
        iVar10 = 0;
        if (0 < (int)unaff_EBX) {
          do {
            core_setutil_cpp_C3DSLight_ctor_FUN_005862f0((C3DSLight *)&stack0xffffb8c4);
            core_setutil_cpp_C3DSLight_importS3D_FUN_00587710
                      ((C3DSLight *)&stack0xffffb8c8,unaff_EDI);
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)unaff_EBX);
        }
        crt_stdio_c_fgets_FUN_005fefd0(acStack_470,0xff,unaff_EDI);
        while (0 < (int)this_ptr) {
          core_setutil_cpp_C3DSCamera_ctor_FUN_00585310((C3DSCamera *)(auStack_eb4 + 0x3a4));
          core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0((C3DSCamera *)auStack_b0c,unaff_EBX);
          iVar10 = 0;
          if (0 < this_ptr->camera_count) {
            pfVar9 = (float *)(in_stack_00000024 + 0x100);
LAB_0057f7c1:
            local_38 = (C3DSCamera *)(fStack_a08 - *pfVar9);
            local_34 = (FILE *)(fStack_a04 - pfVar9[1]);
            local_30 = (C3DSCamera *)(fStack_a00 - pfVar9[2]);
            iVar13 = iVar10 * 0x1a4 + in_stack_00000024;
            if ((float)DOUBLE_00648515 <=
                SQRT((float)local_30 * (float)local_30 +
                     (float)local_38 * (float)local_38 + (float)local_34 * (float)local_34))
            goto LAB_0057fa69;
            local_44 = fStack_9fc - *(float *)(iVar13 + 0x10c);
            local_40 = (C3DSCamera *)(fStack_9f8 - *(float *)(iVar13 + 0x110));
            local_3c = (C3DSCamera *)(fStack_9f4 - *(float *)(iVar13 + 0x114));
            if ((float)DOUBLE_00648515 <=
                SQRT((float)local_3c * (float)local_3c +
                     local_44 * local_44 + (float)local_40 * (float)local_40)) goto LAB_0057fa69;
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_664,"%s.raw");
            in_stack_00000018 =
                 engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_660,"rb");
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_55c,"%s.raw");
            in_stack_ffffb8d0 = "backdrop";
            iVar10 = 0;
            in_stack_ffffb8cc = (char *)0x57f900;
            pFVar6 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",acStack_558,"wb");
            pFVar5 = in_stack_ffffb900;
            do {
              in_stack_ffffb8d4 = 0x57f913;
              iVar13 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000020);
              iVar10 = iVar10 + 1;
              crt_stdio_c_fputc_FUN_006007a0(iVar13,in_stack_ffffb8e0);
            } while (iVar10 < 0x4b000);
            in_stack_ffffb8d8 = 0x57f945;
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      (in_stack_00000028,"..\\core\\setedit.cpp",0xecd);
            in_stack_ffffb8dc = 0x57f958;
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\core\\setedit.cpp",0xece);
            in_stack_ffffb8e0 = (FILE *)0x57f975;
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_644,"%s.act");
            in_stack_00000038 =
                 engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_640,"rb");
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_53c,"%s.act");
            iVar10 = 0;
            in_stack_ffffb900 =
                 engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_538,"wb");
            do {
              iVar13 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000040);
              iVar10 = iVar10 + 1;
              crt_stdio_c_fputc_FUN_006007a0(iVar13,pFVar5);
            } while (iVar10 < 0x300);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      (in_stack_00000040,"..\\core\\setedit.cpp",0xed6);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      (in_stack_ffffb900,"..\\core\\setedit.cpp",0xed7);
          }
LAB_0057fa1d:
          core_setutil_cpp_C3DSCamera_dtor_FUN_00585340((C3DSCamera *)(auStack_b0c + 0x44));
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(unaff_ESI,"..\\core\\setedit.cpp",0xede);
        goto LAB_0057eb3b;
      }
      break;
    case (FILE *)0x41:
      local_5c = (FILE *)((uint)local_5c & 0xffffff00);
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                ((char *)&local_5c,5,0,0,"Enter new unique base name : ");
      iVar10 = -1;
      ppFVar19 = local_58;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        cVar1 = *(char *)ppFVar19;
        ppFVar19 = (FILE **)((int)ppFVar19 + (uint)bVar20 * -2 + 1);
      } while (cVar1 != '\0');
      if (iVar10 != -2) {
        if (0 < this_ptr->camera_count) {
          in_stack_00000030 = in_stack_00000018;
          do {
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_868,"%s.raw");
            crt_stdio_c_sprintf_FUN_005fdbd0
                      (acStack_198,"%s%d.raw",local_88,in_stack_0000000c + 1);
            pFVar5 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",acStack_894,"rb");
            iVar10 = 0;
            pFVar6 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",acStack_190,"wb");
            do {
              pFVar21 = pFVar5;
              iVar13 = crt_stdio_c_fgetc_FUN_005fe840(pFVar5);
              iVar10 = iVar10 + 1;
              crt_stdio_c_fputc_FUN_006007a0(iVar13,pFVar21);
            } while (iVar10 < 0x4b000);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar5,"..\\core\\setedit.cpp",0xef5);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\core\\setedit.cpp",0xef6);
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_884,"%s.act",in_stack_00000014);
            crt_stdio_c_sprintf_FUN_005fdbd0
                      (acStack_180,"%s%d.act",&local_70,in_stack_00000024 + 1);
            pFVar5 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",acStack_87c,"rb");
            iVar10 = 0;
            pFVar6 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",acStack_178,"wb");
            do {
              pFVar21 = pFVar5;
              iVar13 = crt_stdio_c_fgetc_FUN_005fe840(pFVar5);
              iVar10 = iVar10 + 1;
              crt_stdio_c_fputc_FUN_006007a0(iVar13,pFVar21);
            } while (iVar10 < 0x300);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar5,"..\\core\\setedit.cpp",0xefe);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\core\\setedit.cpp",0xeff);
            crt_stdio_c_sprintf_FUN_005fdbd0((char *)in_stack_00000030,"%s%d",&local_5c);
            in_stack_00000030 = in_stack_00000030 + 0xf;
          } while ((int)((int)&in_stack_00000038->_ptr + 1) < this_ptr->camera_count);
        }
        goto LAB_0057eb3b;
      }
    }
    if (local_80 == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_setedit_cpp_CallToFreeSomeMemory_FUN_00580560(this_ptr);
      return;
    }
  } while( true );
LAB_0057fa69:
  iVar10 = iVar10 + 1;
  pfVar9 = pfVar9 + 0x69;
  if (this_ptr->camera_count <= iVar10) goto LAB_0057fa1d;
  goto LAB_0057f7c1;
}


// Assembly code:
// 0057e7c0: PUSH EBX
//   Label: core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0
// 0057e7c1: PUSH ESI
// 0057e7c2: PUSH EDI
// 0057e7c3: PUSH EBP
// 0057e7c4: MOV EBP,ESP
// 0057e7c6: SUB ESP,0x4778
// 0057e7cc: AND ESP,0xfffffff8
// 0057e7cf: PUSH 0x0
// 0057e7d1: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057e7d4: PUSH EDX
// 0057e7d5: CALL core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   XREF to: 00576da0 (UNCONDITIONAL_CALL)
// 0057e7da: ADD ESP,0x8
// 0057e7dd: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057e7e0: ADD EAX,0x4
// 0057e7e3: MOV dword ptr [ESP + 0x4744],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0057e7ea: MOV dword ptr [ESP + 0x4754],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0057e7f1: MOV dword ptr [ESP + 0x4750],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0057e7f8: MOV dword ptr [ESP + 0x474c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0057e7ff: MOV dword ptr [ESP + 0x4748],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0057e806: MOV dword ptr [ESP + 0x470c],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0057e80d: MOV dword ptr [ESP + 0x4710],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 0057e814: MOV dword ptr [ESP + 0x4718],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0057e81b: MOV dword ptr [ESP + 0x4728],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0057e822: MOV dword ptr [ESP + 0x472c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0057e829: MOV dword ptr [ESP + 0x4708],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0057e830: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057e833: ADD EAX,0x14d0f0
// 0057e838: MOV dword ptr [ESP + 0x4714],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0057e83f: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_0057e83f
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0057e844: PUSH 0x0
// 0057e846: PUSH 0x0
// 0057e848: PUSH 0x6480b5
//   XREF to: 006480b5 (DATA)
// 0057e84d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057e852: ADD ESP,0xc
// 0057e855: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057e858: MOV EDI,0x16
// 0057e85d: XOR ESI,ESI
// 0057e85f: MOV ECX,dword ptr [EAX]
// 0057e861: XOR EBX,EBX
// 0057e863: TEST ECX,ECX
// 0057e865: JLE 0x0057e8eb
//   XREF to: 0057e8eb (CONDITIONAL_JUMP)
// 0057e86b: MOV EAX,dword ptr [ESP + 0x4708]
//   XREF to: Stack[-0x80] (READ)
// 0057e872: MOV dword ptr [ESP + 0x4758],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0057e879: MOV ECX,dword ptr [ESP + 0x4758]
//   Label: LAB_0057e879
//   XREF to: Stack[-0x30] (READ)
// 0057e880: PUSH ECX
// 0057e881: PUSH 0x6480cc
//   XREF to: 006480cc (DATA)
// 0057e886: LEA EAX,[ESP + 0x42d4]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057e88d: PUSH EAX
// 0057e88e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057e893: ADD ESP,0xc
// 0057e896: PUSH EDI
// 0057e897: PUSH ESI
// 0057e898: LEA EAX,[ESP + 0x42d4]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057e89f: PUSH EAX
// 0057e8a0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057e8a5: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0057e8aa: MOV EDX,EAX
// 0057e8ac: SAR EDX,0x1f
// 0057e8af: SUB EAX,EDX
// 0057e8b1: SAR EAX,0x1
// 0057e8b3: ADD EDI,0xb
// 0057e8b6: SUB EAX,0xb
// 0057e8b9: ADD ESP,0xc
// 0057e8bc: CMP EDI,EAX
// 0057e8be: JLE 0x0057e8d8
//   XREF to: 0057e8d8 (CONDITIONAL_JUMP)
// 0057e8c0: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057e8c5: MOV EDX,EAX
// 0057e8c7: MOV ECX,0x7
// 0057e8cc: SAR EDX,0x1f
// 0057e8cf: IDIV ECX
// 0057e8d1: MOV EDI,0x16
// 0057e8d6: ADD ESI,EAX
// 0057e8d8: ADD dword ptr [ESP + 0x4758],0x1a4
//   Label: LAB_0057e8d8
//   XREF to: Stack[-0x30] (READ_WRITE)
// 0057e8e3: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057e8e6: INC EBX
// 0057e8e7: CMP EBX,dword ptr [EAX]
// 0057e8e9: JL 0x0057e879
//   XREF to: 0057e879 (CONDITIONAL_JUMP)
// 0057e8eb: MOV EAX,[0x00679398]
//   Label: LAB_0057e8eb
//   XREF to: 00679398 (READ)
// 0057e8f0: MOV EDX,EAX
// 0057e8f2: SAR EDX,0x1f
// 0057e8f5: SUB EAX,EDX
// 0057e8f7: SAR EAX,0x1
// 0057e8f9: PUSH EAX
// 0057e8fa: PUSH 0x0
// 0057e8fc: PUSH 0x6480cf
//   XREF to: 006480cf (DATA)
// 0057e901: MOV EBX,EAX
// 0057e903: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057e908: ADD ESP,0xc
// 0057e90b: LEA ESI,[EBX + 0xb]
// 0057e90e: PUSH ESI
// 0057e90f: PUSH 0x0
// 0057e911: PUSH 0x6480e2
//   XREF to: 006480e2 (DATA)
// 0057e916: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057e91b: ADD ESP,0xc
// 0057e91e: LEA EDI,[EBX + 0x16]
// 0057e921: PUSH EDI
// 0057e922: PUSH 0x0
// 0057e924: PUSH 0x6480fd
//   XREF to: 006480fd (DATA)
// 0057e929: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057e92e: MOV EAX,EBX
// 0057e930: ADD ESP,0xc
// 0057e933: ADD EAX,0x21
// 0057e936: PUSH EAX
// 0057e937: PUSH 0x0
// 0057e939: PUSH 0x648116
//   XREF to: 00648116 (DATA)
// 0057e93e: MOV dword ptr [ESP + 0x4780],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0057e945: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057e94a: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057e94f: MOV EDX,EAX
// 0057e951: MOV ECX,0x3
// 0057e956: SAR EDX,0x1f
// 0057e959: IDIV ECX
// 0057e95b: ADD ESP,0xc
// 0057e95e: PUSH EBX
// 0057e95f: PUSH EAX
// 0057e960: PUSH 0x648123
//   XREF to: 00648123 (DATA)
// 0057e965: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057e96a: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057e96f: MOV EDX,EAX
// 0057e971: MOV ECX,0x3
// 0057e976: SAR EDX,0x1f
// 0057e979: IDIV ECX
// 0057e97b: ADD ESP,0xc
// 0057e97e: PUSH ESI
// 0057e97f: PUSH EAX
// 0057e980: PUSH 0x64813a
//   XREF to: 0064813a (DATA)
// 0057e985: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057e98a: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057e98f: MOV EDX,EAX
// 0057e991: MOV ECX,0x3
// 0057e996: SAR EDX,0x1f
// 0057e999: IDIV ECX
// 0057e99b: ADD ESP,0xc
// 0057e99e: PUSH EDI
// 0057e99f: PUSH EAX
// 0057e9a0: PUSH 0x64814d
//   XREF to: 0064814d (DATA)
// 0057e9a5: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057e9aa: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057e9af: MOV EDX,EAX
// 0057e9b1: MOV ECX,0x3
// 0057e9b6: SAR EDX,0x1f
// 0057e9b9: IDIV ECX
// 0057e9bb: ADD ESP,0xc
// 0057e9be: MOV EDI,dword ptr [ESP + 0x4774]
//   XREF to: Stack[-0x14] (READ)
// 0057e9c5: PUSH EDI
// 0057e9c6: PUSH EAX
// 0057e9c7: PUSH 0x648160
//   XREF to: 00648160 (DATA)
// 0057e9cc: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057e9d1: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0057e9d7: ADD EDX,EDX
// 0057e9d9: MOV ECX,0x3
// 0057e9de: MOV EAX,EDX
// 0057e9e0: SAR EDX,0x1f
// 0057e9e3: IDIV ECX
// 0057e9e5: ADD ESP,0xc
// 0057e9e8: PUSH EBX
// 0057e9e9: PUSH EAX
// 0057e9ea: PUSH 0x648177
//   XREF to: 00648177 (DATA)
// 0057e9ef: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057e9f4: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0057e9fa: ADD EDX,EDX
// 0057e9fc: MOV ECX,0x3
// 0057ea01: MOV EAX,EDX
// 0057ea03: SAR EDX,0x1f
// 0057ea06: IDIV ECX
// 0057ea08: ADD ESP,0xc
// 0057ea0b: PUSH ESI
// 0057ea0c: PUSH EAX
// 0057ea0d: PUSH 0x648182
//   XREF to: 00648182 (DATA)
// 0057ea12: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057ea17: ADD ESP,0xc
// 0057ea1a: PUSH 0x0
// 0057ea1c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ea1f: PUSH EAX
// 0057ea20: CALL core_setedit.cpp_CDemonSet_FUN_00577af0
//   XREF to: 00577af0 (UNCONDITIONAL_CALL)
// 0057ea25: ADD ESP,0x8
// 0057ea28: CMP EAX,-0x1
// 0057ea2b: JZ 0x0057ea4c
//   XREF to: 0057ea4c (CONDITIONAL_JUMP)
// 0057ea2d: PUSH EAX
// 0057ea2e: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ea31: PUSH EDX
// 0057ea32: CALL core_setedit.cpp_UserInputCreate_FUN_0057d660
//   XREF to: 0057d660 (UNCONDITIONAL_CALL)
// 0057ea37: ADD ESP,0x8
// 0057ea3a: TEST EAX,EAX
// 0057ea3c: JZ 0x0057ea4c
//   XREF to: 0057ea4c (CONDITIONAL_JUMP)
// 0057ea3e: PUSH 0x1
// 0057ea40: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ea43: PUSH ECX
// 0057ea44: CALL core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   XREF to: 00576da0 (UNCONDITIONAL_CALL)
// 0057ea49: ADD ESP,0x8
// 0057ea4c: CALL wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0
//   Label: LAB_0057ea4c
//   XREF to: 005f2fd0 (UNCONDITIONAL_CALL)
// 0057ea51: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0057ea56: CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
// 0057ea5b: TEST EAX,EAX
// 0057ea5d: JZ 0x0057eb69
//   XREF to: 0057eb69 (CONDITIONAL_JUMP)
// 0057ea63: MOV ESI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0057ea69: PUSH ESI
//   XREF to: 02dcd7d4 (DATA)
// 0057ea6a: CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   XREF to: 00502470 (UNCONDITIONAL_CALL)
// 0057ea6f: ADD ESP,0x4
// 0057ea72: MOV dword ptr [ESP + 0x4704],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0057ea79: MOV EAX,dword ptr [ESP + 0x4704]
//   Label: LAB_0057ea79
//   XREF to: Stack[-0x84] (READ)
// 0057ea80: SUB EAX,0x31
// 0057ea83: CMP EAX,0x10
// 0057ea86: JA 0x0057eb43
//   XREF to: 0057eb43 (CONDITIONAL_JUMP)
// 0057ea8c: JMP dword ptr [EAX*0x4 + 0x57e77c]
//   Label: switchD
//   XREF to: 0057ea93 (COMPUTED_JUMP)
//   XREF to: 0057eb43 (COMPUTED_JUMP)
//   XREF to: 0057eb79 (COMPUTED_JUMP)
//   XREF to: 0057ec08 (COMPUTED_JUMP)
//   XREF to: 0057ec98 (COMPUTED_JUMP)
//   XREF to: 0057ed54 (COMPUTED_JUMP)
//   XREF to: 0057ede2 (COMPUTED_JUMP)
//   XREF to: 0057f234 (COMPUTED_JUMP)
//   XREF to: 0057f471 (COMPUTED_JUMP)
//   XREF to: 0057f5ce (COMPUTED_JUMP)
//   XREF to: 0057fa7f (COMPUTED_JUMP)
//   XREF to: 0057e6b4 (READ)
//   XREF to: 0057e77c (DATA)
// 0057ea93: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_31
//   XREF to: Stack[0x4] (READ)
// 0057ea96: MOV EBX,dword ptr [EAX]
// 0057ea98: CMP EBX,0xfa
// 0057ea9e: JGE 0x0057eb43
//   XREF to: 0057eb43 (CONDITIONAL_JUMP)
// 0057eaa4: IMUL EAX,EBX,0x1a4
// 0057eaaa: ADD EAX,dword ptr [ESP + 0x4744]
//   XREF to: Stack[-0x44] (READ)
// 0057eab1: PUSH EAX
// 0057eab2: CALL core_setutil.cpp_C3DSCamera_reset_FUN_005853b0
//   XREF to: 005853b0 (UNCONDITIONAL_CALL)
// 0057eab7: ADD ESP,0x4
// 0057eaba: PUSH 0x64818e
//   XREF to: 0064818e (DATA)
// 0057eabf: PUSH 0x0
// 0057eac1: PUSH 0x0
// 0057eac3: PUSH 0x8
// 0057eac5: LEA EAX,[ESP + 0x42dc]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057eacc: PUSH EAX
// 0057eacd: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0057ead2: ADD ESP,0x14
// 0057ead5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ead8: IMUL EDI,dword ptr [EAX],0x1a4
// 0057eade: MOV ECX,dword ptr [ESP + 0x4744]
//   XREF to: Stack[-0x44] (READ)
// 0057eae5: LEA ESI,[ESP + 0x42cc]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057eaec: ADD EDI,ECX
// 0057eaee: PUSH EDI
// 0057eaef: MOV AL,byte ptr [ESI]
//   Label: LAB_0057eaef
//   XREF to: Stack[-0x4bc] (DATA)
// 0057eaf1: MOV byte ptr [EDI],AL
// 0057eaf3: CMP AL,0x0
// 0057eaf5: JZ 0x0057eb07
//   XREF to: 0057eb07 (CONDITIONAL_JUMP)
// 0057eaf7: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x4bb] (READ)
// 0057eafa: ADD ESI,0x2
// 0057eafd: MOV byte ptr [EDI + 0x1],AL
// 0057eb00: ADD EDI,0x2
// 0057eb03: CMP AL,0x0
// 0057eb05: JNZ 0x0057eaef
//   XREF to: 0057eaef (CONDITIONAL_JUMP)
// 0057eb07: POP EDI
//   Label: LAB_0057eb07
// 0057eb08: LEA EDI,[ESP + 0x42cc]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057eb0f: SUB ECX,ECX
// 0057eb11: DEC ECX
// 0057eb12: XOR EAX,EAX
// 0057eb14: SCASB.REPNE ES:EDI
// 0057eb16: NOT ECX
// 0057eb18: DEC ECX
// 0057eb19: TEST ECX,ECX
// 0057eb1b: JZ 0x0057eb43
//   XREF to: 0057eb43 (CONDITIONAL_JUMP)
// 0057eb1d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057eb20: MOV EBX,dword ptr [EAX]
// 0057eb22: PUSH EBX
// 0057eb23: PUSH EAX
// 0057eb24: CALL core_setedit.cpp_UserInputCreate_FUN_0057d660
//   XREF to: 0057d660 (UNCONDITIONAL_CALL)
// 0057eb29: ADD ESP,0x8
// 0057eb2c: TEST EAX,EAX
// 0057eb2e: JZ 0x0057eb43
//   XREF to: 0057eb43 (CONDITIONAL_JUMP)
// 0057eb30: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057eb33: MOV EDX,dword ptr [EDI]
// 0057eb35: PUSH 0x1
// 0057eb37: INC EDX
// 0057eb38: PUSH EDI
// 0057eb39: MOV dword ptr [EDI],EDX
// 0057eb3b: CALL core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   Label: LAB_0057eb3b
//   XREF to: 00576da0 (UNCONDITIONAL_CALL)
// 0057eb40: ADD ESP,0x8
//   Label: LAB_0057eb40
// 0057eb43: CMP dword ptr [ESP + 0x4704],0x1b
//   Label: caseD_40
//   XREF to: Stack[-0x84] (READ)
// 0057eb4b: JNZ 0x0057e83f
//   XREF to: 0057e83f (CONDITIONAL_JUMP)
// 0057eb51: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0057eb56: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057eb59: PUSH ECX
// 0057eb5a: CALL core_setedit.cpp_CallToFreeSomeMemory_FUN_00580560
//   XREF to: 00580560 (UNCONDITIONAL_CALL)
// 0057eb5f: ADD ESP,0x4
// 0057eb62: MOV ESP,EBP
// 0057eb64: POP EBP
// 0057eb65: POP EDI
// 0057eb66: POP ESI
// 0057eb67: POP EBX
// 0057eb68: RET
// 0057eb69: MOV dword ptr [ESP + 0x4704],0xffffffff
//   Label: LAB_0057eb69
//   XREF to: Stack[-0x84] (WRITE)
// 0057eb74: JMP 0x0057ea79
//   XREF to: 0057ea79 (UNCONDITIONAL_JUMP)
// 0057eb79: LEA EAX,[ESP + 0x3880]
//   Label: caseD_32
//   XREF to: Stack[-0xf08] (DATA)
// 0057eb80: PUSH EAX
// 0057eb81: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0057eb86: ADD ESP,0x4
// 0057eb89: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057eb8c: MOV ECX,dword ptr [EAX]
// 0057eb8e: XOR EDI,EDI
// 0057eb90: TEST ECX,ECX
// 0057eb92: JLE 0x0057ebbc
//   XREF to: 0057ebbc (CONDITIONAL_JUMP)
// 0057eb94: MOV EBX,dword ptr [ESP + 0x470c]
//   XREF to: Stack[-0x7c] (READ)
// 0057eb9b: PUSH EBX
//   Label: LAB_0057eb9b
// 0057eb9c: LEA EAX,[ESP + 0x3884]
//   XREF to: Stack[-0xf08] (DATA)
// 0057eba3: PUSH EAX
// 0057eba4: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0057eba9: ADD ESP,0x8
// 0057ebac: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ebaf: INC EDI
// 0057ebb0: MOV EDX,dword ptr [EAX]
// 0057ebb2: ADD EBX,0x1a4
// 0057ebb8: CMP EDI,EDX
// 0057ebba: JL 0x0057eb9b
//   XREF to: 0057eb9b (CONDITIONAL_JUMP)
// 0057ebbc: PUSH 0x0
//   Label: LAB_0057ebbc
// 0057ebbe: PUSH -0x1
// 0057ebc0: PUSH 0x6481a6
//   XREF to: 006481a6 (DATA)
// 0057ebc5: LEA EAX,[ESP + 0x388c]
//   XREF to: Stack[-0xf08] (DATA)
// 0057ebcc: PUSH EAX
// 0057ebcd: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0057ebd2: ADD ESP,0x10
// 0057ebd5: TEST EAX,EAX
// 0057ebd7: JL 0x0057ebf4
//   XREF to: 0057ebf4 (CONDITIONAL_JUMP)
// 0057ebd9: PUSH EAX
// 0057ebda: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ebdd: PUSH ECX
// 0057ebde: CALL core_setedit.cpp_FUN_0057e430
//   XREF to: 0057e430 (UNCONDITIONAL_CALL)
// 0057ebe3: ADD ESP,0x8
// 0057ebe6: PUSH 0x1
// 0057ebe8: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ebeb: PUSH EBX
// 0057ebec: CALL core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   XREF to: 00576da0 (UNCONDITIONAL_CALL)
// 0057ebf1: ADD ESP,0x8
// 0057ebf4: PUSH 0x0
//   Label: LAB_0057ebf4
// 0057ebf6: LEA EAX,[ESP + 0x3884]
//   XREF to: Stack[-0xf08] (DATA)
// 0057ebfd: PUSH EAX
// 0057ebfe: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0057ec03: JMP 0x0057eb40
//   XREF to: 0057eb40 (UNCONDITIONAL_JUMP)
// 0057ec08: LEA EAX,[ESP + 0x3130]
//   Label: caseD_33
//   XREF to: Stack[-0x1658] (DATA)
// 0057ec0f: PUSH EAX
// 0057ec10: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0057ec15: ADD ESP,0x4
// 0057ec18: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ec1b: MOV EDX,dword ptr [EAX]
// 0057ec1d: XOR EDI,EDI
// 0057ec1f: TEST EDX,EDX
// 0057ec21: JLE 0x0057ec4b
//   XREF to: 0057ec4b (CONDITIONAL_JUMP)
// 0057ec23: MOV EBX,dword ptr [ESP + 0x4710]
//   XREF to: Stack[-0x78] (READ)
// 0057ec2a: PUSH EBX
//   Label: LAB_0057ec2a
// 0057ec2b: LEA EAX,[ESP + 0x3134]
//   XREF to: Stack[-0x1658] (DATA)
// 0057ec32: PUSH EAX
// 0057ec33: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0057ec38: ADD ESP,0x8
// 0057ec3b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ec3e: INC EDI
// 0057ec3f: MOV ESI,dword ptr [EAX]
// 0057ec41: ADD EBX,0x1a4
// 0057ec47: CMP EDI,ESI
// 0057ec49: JL 0x0057ec2a
//   XREF to: 0057ec2a (CONDITIONAL_JUMP)
// 0057ec4b: PUSH 0x0
//   Label: LAB_0057ec4b
// 0057ec4d: PUSH -0x1
// 0057ec4f: PUSH 0x6481ba
//   XREF to: 006481ba (DATA)
// 0057ec54: LEA EAX,[ESP + 0x313c]
//   XREF to: Stack[-0x1658] (DATA)
// 0057ec5b: PUSH EAX
// 0057ec5c: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0057ec61: ADD ESP,0x10
// 0057ec64: TEST EAX,EAX
// 0057ec66: JL 0x0057ec84
//   XREF to: 0057ec84 (CONDITIONAL_JUMP)
// 0057ec68: PUSH EAX
// 0057ec69: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ec6c: PUSH EDI
// 0057ec6d: CALL core_setedit.cpp_UserInputCreate_FUN_0057d660
//   XREF to: 0057d660 (UNCONDITIONAL_CALL)
// 0057ec72: ADD ESP,0x8
// 0057ec75: TEST EAX,EAX
// 0057ec77: JZ 0x0057ec84
//   XREF to: 0057ec84 (CONDITIONAL_JUMP)
// 0057ec79: PUSH 0x1
// 0057ec7b: PUSH EDI
// 0057ec7c: CALL core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   XREF to: 00576da0 (UNCONDITIONAL_CALL)
// 0057ec81: ADD ESP,0x8
// 0057ec84: PUSH 0x0
//   Label: LAB_0057ec84
// 0057ec86: LEA EAX,[ESP + 0x3134]
//   XREF to: Stack[-0x1658] (DATA)
// 0057ec8d: PUSH EAX
// 0057ec8e: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0057ec93: JMP 0x0057eb40
//   XREF to: 0057eb40 (UNCONDITIONAL_JUMP)
// 0057ec98: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_34
//   XREF to: Stack[0x4] (READ)
// 0057ec9b: MOV DH,byte ptr [EAX + 0x14d0f0]
// 0057eca1: TEST DH,DH
// 0057eca3: JZ 0x0057ed4b
//   XREF to: 0057ed4b (CONDITIONAL_JUMP)
// 0057eca9: PUSH 0x0
// 0057ecab: LEA EAX,[ESP + 0x42d0]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057ecb2: PUSH EAX
// 0057ecb3: PUSH 0x0
// 0057ecb5: PUSH 0x0
// 0057ecb7: MOV ESI,dword ptr [ESP + 0x4724]
//   XREF to: Stack[-0x74] (READ)
// 0057ecbe: PUSH ESI
// 0057ecbf: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 0057ecc4: ADD ESP,0x14
// 0057ecc7: LEA EDI,[ESP + 0x42cc]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057ecce: MOV ESI,0x6481cc
//   XREF to: 006481cc (DATA)
// 0057ecd3: PUSH EDI
// 0057ecd4: SUB ECX,ECX
// 0057ecd6: DEC ECX
// 0057ecd7: MOV AL,0x0
// 0057ecd9: SCASB.REPNE ES:EDI
// 0057ecdb: DEC EDI
// 0057ecdc: MOV AL,byte ptr [ESI]
//   Label: LAB_0057ecdc
//   XREF to: 006481cc (READ)
//   XREF to: 006481ce (READ)
// 0057ecde: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x4bc] (DATA)
// 0057ece0: CMP AL,0x0
// 0057ece2: JZ 0x0057ecf4
//   XREF to: 0057ecf4 (CONDITIONAL_JUMP)
// 0057ece4: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006481cd (READ)
//   XREF to: 006481cf (READ)
// 0057ece7: ADD ESI,0x2
// 0057ecea: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x4bb] (WRITE)
// 0057eced: ADD EDI,0x2
// 0057ecf0: CMP AL,0x0
// 0057ecf2: JNZ 0x0057ecdc
//   XREF to: 0057ecdc (CONDITIONAL_JUMP)
// 0057ecf4: POP EDI
//   Label: LAB_0057ecf4
// 0057ecf5: LEA EAX,[ESP + 0x42cc]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057ecfc: PUSH EAX
// 0057ecfd: CALL crt_string.c_strupr_FUN_00600770
//   XREF to: 00600770 (UNCONDITIONAL_CALL)
// 0057ed02: ADD ESP,0x4
// 0057ed05: PUSH 0x1
//   Label: LAB_0057ed05
// 0057ed07: LEA EAX,[ESP + 0x42d0]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057ed0e: PUSH EAX
// 0057ed0f: PUSH 0x6481d1
//   XREF to: 006481d1 (DATA)
// 0057ed14: PUSH 0x6481d5
//   XREF to: 006481d5 (DATA)
// 0057ed19: PUSH 0x6481dc
//   XREF to: 006481dc (DATA)
// 0057ed1e: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057ed24: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0057ed25: CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   XREF to: 0049fb70 (UNCONDITIONAL_CALL)
// 0057ed2a: ADD ESP,0x18
// 0057ed2d: TEST EAX,EAX
// 0057ed2f: JZ 0x0057eb43
//   XREF to: 0057eb43 (CONDITIONAL_JUMP)
// 0057ed35: LEA EAX,[ESP + 0x42cc]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057ed3c: PUSH EAX
// 0057ed3d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ed40: PUSH EAX
// 0057ed41: CALL core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
//   XREF to: 0057a2a0 (UNCONDITIONAL_CALL)
// 0057ed46: JMP 0x0057eb40
//   XREF to: 0057eb40 (UNCONDITIONAL_JUMP)
// 0057ed4b: MOV byte ptr [ESP + 0x42cc],DH
//   Label: LAB_0057ed4b
//   XREF to: Stack[-0x4bc] (WRITE)
// 0057ed52: JMP 0x0057ed05
//   XREF to: 0057ed05 (UNCONDITIONAL_JUMP)
// 0057ed54: PUSH 0x6481e5
//   Label: caseD_35
//   XREF to: 006481e5 (DATA)
// 0057ed59: PUSH 0x0
// 0057ed5b: PUSH 0x0
// 0057ed5d: PUSH 0x5
// 0057ed5f: LEA EAX,[ESP + 0x46dc]
//   XREF to: Stack[-0xbc] (DATA)
// 0057ed66: XOR DL,DL
// 0057ed68: PUSH EAX
// 0057ed69: MOV byte ptr [ESP + 0x46e0],DL
//   XREF to: Stack[-0xbc] (WRITE)
// 0057ed70: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0057ed75: ADD ESP,0x14
// 0057ed78: LEA EDI,[ESP + 0x46cc]
//   XREF to: Stack[-0xbc] (DATA)
// 0057ed7f: SUB ECX,ECX
// 0057ed81: DEC ECX
// 0057ed82: XOR EAX,EAX
// 0057ed84: SCASB.REPNE ES:EDI
// 0057ed86: NOT ECX
// 0057ed88: DEC ECX
// 0057ed89: TEST ECX,ECX
// 0057ed8b: JZ 0x0057eb43
//   XREF to: 0057eb43 (CONDITIONAL_JUMP)
// 0057ed91: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ed94: MOV EBX,dword ptr [EAX]
// 0057ed96: XOR EDI,EDI
// 0057ed98: TEST EBX,EBX
// 0057ed9a: JLE 0x0057edd7
//   XREF to: 0057edd7 (CONDITIONAL_JUMP)
// 0057ed9c: MOV EBX,dword ptr [ESP + 0x4718]
//   XREF to: Stack[-0x70] (READ)
// 0057eda3: PUSH EDI
//   Label: LAB_0057eda3
// 0057eda4: LEA EAX,[ESP + 0x46d0]
//   XREF to: Stack[-0xbc] (DATA)
// 0057edab: PUSH EAX
// 0057edac: PUSH 0x6481fc
//   XREF to: 006481fc (DATA)
// 0057edb1: PUSH EBX
// 0057edb2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057edb7: ADD ESP,0x10
// 0057edba: PUSH EBX
// 0057edbb: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057edbe: PUSH EAX
// 0057edbf: CALL core_setedit.cpp_FUN_0057d340
//   XREF to: 0057d340 (UNCONDITIONAL_CALL)
// 0057edc4: ADD ESP,0x8
// 0057edc7: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057edca: INC EDI
// 0057edcb: MOV EDX,dword ptr [EAX]
// 0057edcd: ADD EBX,0x1a4
// 0057edd3: CMP EDI,EDX
// 0057edd5: JL 0x0057eda3
//   XREF to: 0057eda3 (CONDITIONAL_JUMP)
// 0057edd7: PUSH 0x1
//   Label: LAB_0057edd7
// 0057edd9: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057eddc: PUSH ECX
// 0057eddd: JMP 0x0057eb3b
//   XREF to: 0057eb3b (UNCONDITIONAL_JUMP)
// 0057ede2: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_36
//   XREF to: Stack[0x4] (READ)
// 0057ede5: CMP dword ptr [EAX],0xfa
// 0057edeb: JGE 0x0057eb43
//   XREF to: 0057eb43 (CONDITIONAL_JUMP)
// 0057edf1: LEA EAX,[ESP + 0x34d8]
//   XREF to: Stack[-0x12b0] (DATA)
// 0057edf8: PUSH EAX
// 0057edf9: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0057edfe: ADD ESP,0x4
// 0057ee01: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ee04: XOR EDI,EDI
// 0057ee06: MOV ECX,dword ptr [EAX]
// 0057ee08: MOV ESI,dword ptr [ESP + 0x4744]
//   XREF to: Stack[-0x44] (READ)
// 0057ee0f: TEST ECX,ECX
// 0057ee11: JLE 0x0057ee34
//   XREF to: 0057ee34 (CONDITIONAL_JUMP)
// 0057ee13: PUSH ESI
//   Label: LAB_0057ee13
// 0057ee14: LEA EAX,[ESP + 0x34dc]
//   XREF to: Stack[-0x12b0] (DATA)
// 0057ee1b: PUSH EAX
// 0057ee1c: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0057ee21: ADD ESP,0x8
// 0057ee24: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ee27: INC EDI
// 0057ee28: MOV ECX,dword ptr [EAX]
// 0057ee2a: ADD ESI,0x1a4
// 0057ee30: CMP EDI,ECX
// 0057ee32: JL 0x0057ee13
//   XREF to: 0057ee13 (CONDITIONAL_JUMP)
// 0057ee34: PUSH 0x0
//   Label: LAB_0057ee34
// 0057ee36: PUSH -0x1
// 0057ee38: PUSH 0x648201
//   XREF to: 00648201 (DATA)
// 0057ee3d: LEA EAX,[ESP + 0x34e4]
//   XREF to: Stack[-0x12b0] (DATA)
// 0057ee44: PUSH EAX
// 0057ee45: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0057ee4a: ADD ESP,0x10
// 0057ee4d: MOV dword ptr [ESP + 0x476c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057ee54: TEST EAX,EAX
// 0057ee56: JL 0x0057f208
//   XREF to: 0057f208 (CONDITIONAL_JUMP)
// 0057ee5c: IMUL EAX,EAX,0x1a4
// 0057ee62: MOV ESI,dword ptr [ESP + 0x4744]
//   XREF to: Stack[-0x44] (READ)
// 0057ee69: LEA EDI,[ESP + 0x42cc]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057ee70: ADD ESI,EAX
// 0057ee72: PUSH EDI
// 0057ee73: MOV AL,byte ptr [ESI]
//   Label: LAB_0057ee73
// 0057ee75: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x4bc] (DATA)
// 0057ee77: CMP AL,0x0
// 0057ee79: JZ 0x0057ee8b
//   XREF to: 0057ee8b (CONDITIONAL_JUMP)
// 0057ee7b: MOV AL,byte ptr [ESI + 0x1]
// 0057ee7e: ADD ESI,0x2
// 0057ee81: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x4bb] (WRITE)
// 0057ee84: ADD EDI,0x2
// 0057ee87: CMP AL,0x0
// 0057ee89: JNZ 0x0057ee73
//   XREF to: 0057ee73 (CONDITIONAL_JUMP)
// 0057ee8b: POP EDI
//   Label: LAB_0057ee8b
// 0057ee8c: LEA EDI,[ESP + 0x42cc]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057ee93: SUB ECX,ECX
// 0057ee95: DEC ECX
// 0057ee96: XOR EAX,EAX
// 0057ee98: SCASB.REPNE ES:EDI
// 0057ee9a: NOT ECX
// 0057ee9c: DEC ECX
// 0057ee9d: LEA EDX,[ECX + -0x1]
// 0057eea0: LEA EBX,[ESP + 0x42cc]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057eea7: TEST EDX,EDX
// 0057eea9: JLE 0x0057eebf
//   XREF to: 0057eebf (CONDITIONAL_JUMP)
// 0057eeab: LEA EAX,[ESP + 0x42cc]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057eeb2: ADD EAX,EDX
// 0057eeb4: MOV CL,byte ptr [EAX]
//   Label: LAB_0057eeb4
//   XREF to: Stack[-0x4bd] (DATA)
// 0057eeb6: CMP CL,0x30
// 0057eeb9: JNC 0x0057f21c
//   XREF to: 0057f21c (CONDITIONAL_JUMP)
// 0057eebf: INC EDX
//   Label: LAB_0057eebf
// 0057eec0: ADD EBX,EDX
// 0057eec2: PUSH EBX
// 0057eec3: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 0057eec8: ADD ESP,0x4
// 0057eecb: INC EAX
// 0057eecc: PUSH EAX
// 0057eecd: PUSH 0x6465a5
//   XREF to: 006465a5 (DATA)
// 0057eed2: PUSH EBX
// 0057eed3: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057eed8: ADD ESP,0xc
// 0057eedb: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057eede: MOV EBX,dword ptr [EAX]
// 0057eee0: XOR ESI,ESI
// 0057eee2: TEST EBX,EBX
// 0057eee4: JLE 0x0057ef5a
//   XREF to: 0057ef5a (CONDITIONAL_JUMP)
// 0057eee6: LEA EAX,[ESP + 0x42cc]
//   Label: LAB_0057eee6
//   XREF to: Stack[-0x4bc] (DATA)
// 0057eeed: PUSH EAX
// 0057eeee: IMUL EAX,ESI,0x1a4
// 0057eef4: ADD EAX,dword ptr [ESP + 0x4748]
//   XREF to: Stack[-0x44] (READ)
// 0057eefb: PUSH EAX
// 0057eefc: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0057ef01: ADD ESP,0x8
// 0057ef04: TEST EAX,EAX
// 0057ef06: JNZ 0x0057ef52
//   XREF to: 0057ef52 (CONDITIONAL_JUMP)
// 0057ef08: LEA ESI,[ESP + 0x42cc]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057ef0f: LEA EDI,[ESP + 0x3fcc]
//   XREF to: Stack[-0x7bc] (DATA)
// 0057ef16: PUSH EDI
// 0057ef17: MOV AL,byte ptr [ESI]
//   Label: LAB_0057ef17
//   XREF to: Stack[-0x4bc] (DATA)
// 0057ef19: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x7bc] (DATA)
// 0057ef1b: CMP AL,0x0
// 0057ef1d: JZ 0x0057ef2f
//   XREF to: 0057ef2f (CONDITIONAL_JUMP)
// 0057ef1f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x4bb] (READ)
// 0057ef22: ADD ESI,0x2
// 0057ef25: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x7bb] (WRITE)
// 0057ef28: ADD EDI,0x2
// 0057ef2b: CMP AL,0x0
// 0057ef2d: JNZ 0x0057ef17
//   XREF to: 0057ef17 (CONDITIONAL_JUMP)
// 0057ef2f: POP EDI
//   Label: LAB_0057ef2f
// 0057ef30: LEA EAX,[ESP + 0x3fcc]
//   XREF to: Stack[-0x7bc] (DATA)
// 0057ef37: PUSH EAX
// 0057ef38: PUSH 0x648214
//   XREF to: 00648214 (DATA)
// 0057ef3d: LEA EAX,[ESP + 0x42d4]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057ef44: PUSH EAX
// 0057ef45: MOV ESI,0xffffffff
// 0057ef4a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057ef4f: ADD ESP,0xc
// 0057ef52: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0057ef52
//   XREF to: Stack[0x4] (READ)
// 0057ef55: INC ESI
// 0057ef56: CMP ESI,dword ptr [EAX]
// 0057ef58: JL 0x0057eee6
//   XREF to: 0057eee6 (CONDITIONAL_JUMP)
// 0057ef5a: PUSH 0x1
//   Label: LAB_0057ef5a
// 0057ef5c: PUSH 0x1f
// 0057ef5e: LEA EAX,[ESP + 0x42d4]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057ef65: PUSH EAX
// 0057ef66: PUSH 0x648218
//   XREF to: 00648218 (DATA)
// 0057ef6b: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057ef70: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0057ef71: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0057ef76: ADD ESP,0x14
// 0057ef79: TEST EAX,EAX
// 0057ef7b: JZ 0x0057f208
//   XREF to: 0057f208 (CONDITIONAL_JUMP)
// 0057ef81: IMUL EAX,dword ptr [ESP + 0x476c],0x1a4
//   XREF to: Stack[-0x1c] (READ)
// 0057ef8c: MOV EDX,dword ptr [ESP + 0x4744]
//   XREF to: Stack[-0x44] (READ)
// 0057ef93: ADD EDX,EAX
// 0057ef95: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ef98: IMUL EBX,dword ptr [EAX],0x1a4
// 0057ef9e: ADD EBX,dword ptr [ESP + 0x4744]
//   XREF to: Stack[-0x44] (READ)
// 0057efa5: MOV ECX,0x40
// 0057efaa: MOV EDI,EBX
// 0057efac: MOV ESI,EDX
// 0057efae: MOV EAX,EBX
// 0057efb0: MOVSD.REP ES:EDI,ESI
// 0057efb2: ADD EBX,0x100
// 0057efb8: LEA ESI,[EDX + 0x100]
// 0057efbe: CMP EBX,ESI
// 0057efc0: JZ 0x0057efd2
//   XREF to: 0057efd2 (CONDITIONAL_JUMP)
// 0057efc2: MOV ECX,dword ptr [ESI]
// 0057efc4: MOV dword ptr [EBX],ECX
// 0057efc6: MOV ECX,dword ptr [ESI + 0x4]
// 0057efc9: MOV dword ptr [EBX + 0x4],ECX
// 0057efcc: MOV ECX,dword ptr [ESI + 0x8]
// 0057efcf: MOV dword ptr [EBX + 0x8],ECX
// 0057efd2: LEA ESI,[EDX + 0x10c]
//   Label: LAB_0057efd2
// 0057efd8: LEA EBX,[EAX + 0x10c]
// 0057efde: CMP EBX,ESI
// 0057efe0: JZ 0x0057eff2
//   XREF to: 0057eff2 (CONDITIONAL_JUMP)
// 0057efe2: MOV ECX,dword ptr [ESI]
// 0057efe4: MOV dword ptr [EBX],ECX
// 0057efe6: MOV ECX,dword ptr [ESI + 0x4]
// 0057efe9: MOV dword ptr [EBX + 0x4],ECX
// 0057efec: MOV ECX,dword ptr [ESI + 0x8]
// 0057efef: MOV dword ptr [EBX + 0x8],ECX
// 0057eff2: MOV ECX,dword ptr [EDX + 0x118]
//   Label: LAB_0057eff2
// 0057eff8: MOV dword ptr [EAX + 0x118],ECX
// 0057effe: MOV ECX,dword ptr [EDX + 0x11c]
// 0057f004: MOV dword ptr [EAX + 0x11c],ECX
// 0057f00a: MOV ECX,dword ptr [EDX + 0x120]
// 0057f010: MOV dword ptr [EAX + 0x120],ECX
// 0057f016: MOV ECX,dword ptr [EDX + 0x124]
// 0057f01c: MOV dword ptr [EAX + 0x124],ECX
// 0057f022: MOV ECX,dword ptr [EDX + 0x128]
// 0057f028: MOV dword ptr [EAX + 0x128],ECX
// 0057f02e: MOV ECX,dword ptr [EDX + 0x12c]
// 0057f034: MOV dword ptr [EAX + 0x12c],ECX
// 0057f03a: MOV ECX,dword ptr [EDX + 0x130]
// 0057f040: MOV dword ptr [EAX + 0x130],ECX
// 0057f046: MOV ECX,dword ptr [EDX + 0x134]
// 0057f04c: MOV dword ptr [EAX + 0x134],ECX
// 0057f052: MOV ECX,dword ptr [EDX + 0x138]
// 0057f058: MOV dword ptr [EAX + 0x138],ECX
// 0057f05e: MOV ECX,dword ptr [EDX + 0x13c]
// 0057f064: MOV dword ptr [EAX + 0x13c],ECX
// 0057f06a: MOV ECX,dword ptr [EDX + 0x140]
// 0057f070: MOV dword ptr [EAX + 0x140],ECX
// 0057f076: MOV ECX,dword ptr [EDX + 0x144]
// 0057f07c: MOV dword ptr [EAX + 0x144],ECX
// 0057f082: MOV ECX,dword ptr [EDX + 0x148]
// 0057f088: MOV dword ptr [EAX + 0x148],ECX
// 0057f08e: MOV ECX,dword ptr [EDX + 0x14c]
// 0057f094: MOV dword ptr [EAX + 0x14c],ECX
// 0057f09a: MOV ECX,dword ptr [EDX + 0x150]
// 0057f0a0: MOV dword ptr [EAX + 0x150],ECX
// 0057f0a6: MOV ECX,dword ptr [EDX + 0x154]
// 0057f0ac: MOV dword ptr [EAX + 0x154],ECX
// 0057f0b2: MOV ECX,dword ptr [EDX + 0x158]
// 0057f0b8: MOV dword ptr [EAX + 0x158],ECX
// 0057f0be: LEA ESI,[EAX + 0x160]
// 0057f0c4: MOV ECX,dword ptr [EDX + 0x15c]
// 0057f0ca: LEA EBX,[EDX + 0x160]
// 0057f0d0: MOV dword ptr [EAX + 0x15c],ECX
// 0057f0d6: CMP ESI,EBX
// 0057f0d8: JZ 0x0057f0ea
//   XREF to: 0057f0ea (CONDITIONAL_JUMP)
// 0057f0da: MOV ECX,dword ptr [EBX]
// 0057f0dc: MOV dword ptr [ESI],ECX
// 0057f0de: MOV ECX,dword ptr [EBX + 0x4]
// 0057f0e1: MOV dword ptr [ESI + 0x4],ECX
// 0057f0e4: MOV ECX,dword ptr [EBX + 0x8]
// 0057f0e7: MOV dword ptr [ESI + 0x8],ECX
// 0057f0ea: FLD float ptr [EDX + 0x16c]
//   Label: LAB_0057f0ea
// 0057f0f0: LEA EBX,[EAX + 0x17c]
// 0057f0f6: FSTP float ptr [EAX + 0x16c]
// 0057f0fc: MOV ECX,dword ptr [EDX + 0x170]
// 0057f102: MOV dword ptr [EAX + 0x170],ECX
// 0057f108: MOV ECX,dword ptr [EDX + 0x174]
// 0057f10e: MOV dword ptr [EAX + 0x174],ECX
// 0057f114: MOV ECX,dword ptr [EDX + 0x178]
// 0057f11a: LEA ESI,[EDX + 0x17c]
// 0057f120: MOV dword ptr [EAX + 0x178],ECX
// 0057f126: CMP EBX,ESI
// 0057f128: JZ 0x0057f13a
//   XREF to: 0057f13a (CONDITIONAL_JUMP)
// 0057f12a: MOV ECX,dword ptr [ESI]
// 0057f12c: MOV dword ptr [EBX],ECX
// 0057f12e: MOV ECX,dword ptr [ESI + 0x4]
// 0057f131: MOV dword ptr [EBX + 0x4],ECX
// 0057f134: MOV ECX,dword ptr [ESI + 0x8]
// 0057f137: MOV dword ptr [EBX + 0x8],ECX
// 0057f13a: LEA ESI,[EDX + 0x188]
//   Label: LAB_0057f13a
// 0057f140: LEA EBX,[EAX + 0x188]
// 0057f146: CMP EBX,ESI
// 0057f148: JZ 0x0057f15a
//   XREF to: 0057f15a (CONDITIONAL_JUMP)
// 0057f14a: MOV ECX,dword ptr [ESI]
// 0057f14c: MOV dword ptr [EBX],ECX
// 0057f14e: MOV ECX,dword ptr [ESI + 0x4]
// 0057f151: MOV dword ptr [EBX + 0x4],ECX
// 0057f154: MOV ECX,dword ptr [ESI + 0x8]
// 0057f157: MOV dword ptr [EBX + 0x8],ECX
// 0057f15a: MOV ECX,dword ptr [EDX + 0x194]
//   Label: LAB_0057f15a
// 0057f160: MOV dword ptr [EAX + 0x194],ECX
// 0057f166: MOV ECX,dword ptr [EDX + 0x198]
// 0057f16c: MOV dword ptr [EAX + 0x198],ECX
// 0057f172: MOV ECX,dword ptr [EDX + 0x19c]
// 0057f178: MOV dword ptr [EAX + 0x19c],ECX
// 0057f17e: MOV EDX,dword ptr [EDX + 0x1a0]
// 0057f184: MOV dword ptr [EAX + 0x1a0],EDX
// 0057f18a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057f18d: IMUL EAX,dword ptr [EAX],0x1a4
// 0057f193: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057f196: ADD EAX,EDX
// 0057f198: MOV dword ptr [EAX + 0x198],0x0
// 0057f1a2: IMUL EAX,dword ptr [EDX],0x1a4
// 0057f1a8: ADD EAX,EDX
// 0057f1aa: MOV dword ptr [EAX + 0x19c],0x0
// 0057f1b4: IMUL EDI,dword ptr [EDX],0x1a4
// 0057f1ba: MOV EAX,dword ptr [ESP + 0x4744]
//   XREF to: Stack[-0x44] (READ)
// 0057f1c1: LEA ESI,[ESP + 0x42cc]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057f1c8: ADD EDI,EAX
// 0057f1ca: MOV EBX,EDX
// 0057f1cc: PUSH EDI
// 0057f1cd: MOV AL,byte ptr [ESI]
//   Label: LAB_0057f1cd
//   XREF to: Stack[-0x4bc] (DATA)
// 0057f1cf: MOV byte ptr [EDI],AL
// 0057f1d1: CMP AL,0x0
// 0057f1d3: JZ 0x0057f1e5
//   XREF to: 0057f1e5 (CONDITIONAL_JUMP)
// 0057f1d5: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x4bb] (READ)
// 0057f1d8: ADD ESI,0x2
// 0057f1db: MOV byte ptr [EDI + 0x1],AL
// 0057f1de: ADD EDI,0x2
// 0057f1e1: CMP AL,0x0
// 0057f1e3: JNZ 0x0057f1cd
//   XREF to: 0057f1cd (CONDITIONAL_JUMP)
// 0057f1e5: POP EDI
//   Label: LAB_0057f1e5
// 0057f1e6: MOV EDX,dword ptr [EDX]
// 0057f1e8: PUSH EDX
// 0057f1e9: PUSH EBX
// 0057f1ea: CALL core_setedit.cpp_UserInputCreate_FUN_0057d660
//   XREF to: 0057d660 (UNCONDITIONAL_CALL)
// 0057f1ef: ADD ESP,0x8
// 0057f1f2: TEST EAX,EAX
// 0057f1f4: JZ 0x0057f208
//   XREF to: 0057f208 (CONDITIONAL_JUMP)
// 0057f1f6: MOV EAX,EBX
// 0057f1f8: MOV ESI,dword ptr [EAX]
// 0057f1fa: PUSH 0x1
// 0057f1fc: INC ESI
// 0057f1fd: PUSH EBX
// 0057f1fe: MOV dword ptr [EAX],ESI
// 0057f200: CALL core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   XREF to: 00576da0 (UNCONDITIONAL_CALL)
// 0057f205: ADD ESP,0x8
// 0057f208: PUSH 0x0
//   Label: LAB_0057f208
// 0057f20a: LEA EAX,[ESP + 0x34dc]
//   XREF to: Stack[-0x12b0] (DATA)
// 0057f211: PUSH EAX
// 0057f212: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0057f217: JMP 0x0057eb40
//   XREF to: 0057eb40 (UNCONDITIONAL_JUMP)
// 0057f21c: CMP CL,0x39
//   Label: LAB_0057f21c
// 0057f21f: JA 0x0057eebf
//   XREF to: 0057eebf (CONDITIONAL_JUMP)
// 0057f225: DEC EDX
// 0057f226: DEC EAX
// 0057f227: TEST EDX,EDX
// 0057f229: JG 0x0057eeb4
//   XREF to: 0057eeb4 (CONDITIONAL_JUMP)
// 0057f22f: JMP 0x0057eebf
//   XREF to: 0057eebf (UNCONDITIONAL_JUMP)
// 0057f234: PUSH 0x0
//   Label: caseD_37
// 0057f236: LEA EAX,[ESP + 0x3dd0]
//   XREF to: Stack[-0x9bc] (DATA)
// 0057f23d: PUSH EAX
// 0057f23e: PUSH 0x64822c
//   XREF to: 0064822c (DATA)
// 0057f243: PUSH 0x648231
//   XREF to: 00648231 (DATA)
// 0057f248: PUSH 0x648238
//   XREF to: 00648238 (DATA)
// 0057f24d: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057f253: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0057f254: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 0057f259: ADD ESP,0x18
// 0057f25c: TEST EAX,EAX
// 0057f25e: JZ 0x0057eb43
//   XREF to: 0057eb43 (CONDITIONAL_JUMP)
// 0057f264: PUSH 0x648242
//   XREF to: 00648242 (DATA)
// 0057f269: LEA EAX,[ESP + 0x3dd0]
//   XREF to: Stack[-0x9bc] (DATA)
// 0057f270: PUSH EAX
// 0057f271: PUSH 0x648245
//   XREF to: 00648245 (DATA)
// 0057f276: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0057f27b: ADD ESP,0xc
// 0057f27e: MOV ESI,EAX
// 0057f280: TEST EAX,EAX
// 0057f282: JNZ 0x0057f2a7
//   XREF to: 0057f2a7 (CONDITIONAL_JUMP)
// 0057f284: MOV EBX,0x64824c
//   XREF to: 0064824c (PARAM)
// 0057f289: MOV EDI,0xe68
// 0057f28e: PUSH 0x648260
//   XREF to: 00648260 (DATA)
// 0057f293: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0057f299: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0057f29f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057f2a4: ADD ESP,0x4
// 0057f2a7: PUSH ESI
//   Label: LAB_0057f2a7
// 0057f2a8: PUSH 0xff
// 0057f2ad: LEA EAX,[ESP + 0x42d4]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057f2b4: PUSH EAX
// 0057f2b5: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0057f2ba: MOV EAX,0xffffffff
// 0057f2bf: ADD ESP,0xc
// 0057f2c2: MOV dword ptr [ESP + 0x471c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0057f2c9: LEA EAX,[ESP + 0x471c]
//   XREF to: Stack[-0x6c] (DATA)
// 0057f2d0: PUSH EAX
// 0057f2d1: PUSH 0x648273
//   XREF to: 00648273 (DATA)
// 0057f2d6: PUSH ESI
// 0057f2d7: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0057f2dc: ADD ESP,0xc
// 0057f2df: MOV EDX,dword ptr [ESP + 0x471c]
//   XREF to: Stack[-0x6c] (READ)
// 0057f2e6: CMP EDX,0x1
// 0057f2e9: JZ 0x0057f30f
//   XREF to: 0057f30f (CONDITIONAL_JUMP)
// 0057f2eb: PUSH EDX
// 0057f2ec: MOV ECX,0x648277
//   XREF to: 00648277 (PARAM)
// 0057f2f1: MOV EBX,0xe6c
// 0057f2f6: PUSH 0x64828b
//   XREF to: 0064828b (DATA)
// 0057f2fb: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0057f301: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0057f307: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057f30c: ADD ESP,0x8
// 0057f30f: PUSH ESI
//   Label: LAB_0057f30f
// 0057f310: PUSH 0xff
// 0057f315: LEA EAX,[ESP + 0x42d4]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057f31c: PUSH EAX
// 0057f31d: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0057f322: ADD ESP,0xc
// 0057f325: LEA EAX,[ESP + 0x4724]
//   XREF to: Stack[-0x64] (DATA)
// 0057f32c: PUSH EAX
// 0057f32d: LEA EAX,[ESP + 0x4724]
//   XREF to: Stack[-0x68] (DATA)
// 0057f334: PUSH EAX
// 0057f335: PUSH 0x6482aa
//   XREF to: 006482aa (DATA)
// 0057f33a: PUSH ESI
// 0057f33b: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0057f340: ADD ESP,0x10
// 0057f343: PUSH ESI
// 0057f344: PUSH 0xff
// 0057f349: LEA EAX,[ESP + 0x42d4]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057f350: PUSH EAX
// 0057f351: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0057f356: ADD ESP,0xc
// 0057f359: MOV EAX,dword ptr [ESP + 0x4720]
//   XREF to: Stack[-0x68] (READ)
// 0057f360: XOR EDI,EDI
// 0057f362: TEST EAX,EAX
// 0057f364: JLE 0x0057f391
//   XREF to: 0057f391 (CONDITIONAL_JUMP)
// 0057f366: LEA EAX,[ESP + 0x1898]
//   Label: LAB_0057f366
//   XREF to: Stack[-0x2ef0] (DATA)
// 0057f36d: PUSH EAX
// 0057f36e: CALL core_setutil.cpp_C3DSLight_ctor_FUN_005862f0
//   XREF to: 005862f0 (UNCONDITIONAL_CALL)
// 0057f373: ADD ESP,0x4
// 0057f376: PUSH ESI
// 0057f377: LEA EAX,[ESP + 0x189c]
//   XREF to: Stack[-0x2ef0] (DATA)
// 0057f37e: PUSH EAX
// 0057f37f: CALL core_setutil.cpp_C3DSLight_importS3D_FUN_00587710
//   XREF to: 00587710 (UNCONDITIONAL_CALL)
// 0057f384: ADD ESP,0x8
// 0057f387: INC EDI
// 0057f388: CMP EDI,dword ptr [ESP + 0x4720]
//   XREF to: Stack[-0x68] (READ)
// 0057f38f: JL 0x0057f366
//   XREF to: 0057f366 (CONDITIONAL_JUMP)
// 0057f391: PUSH ESI
//   Label: LAB_0057f391
// 0057f392: PUSH 0xff
// 0057f397: LEA EAX,[ESP + 0x42d4]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057f39e: PUSH EAX
// 0057f39f: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0057f3a4: ADD ESP,0xc
// 0057f3a7: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057f3aa: CMP dword ptr [EAX],0xfa
// 0057f3b0: JGE 0x0057f453
//   XREF to: 0057f453 (CONDITIONAL_JUMP)
// 0057f3b6: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057f3b9: CMP dword ptr [ESP + 0x4724],0x0
//   Label: LAB_0057f3b9
//   XREF to: Stack[-0x64] (READ)
// 0057f3c1: JLE 0x0057f453
//   XREF to: 0057f453 (CONDITIONAL_JUMP)
// 0057f3c7: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057f3ca: IMUL EAX,dword ptr [EAX],0x1a4
// 0057f3d0: MOV EDX,dword ptr [ESP + 0x4728]
//   XREF to: Stack[-0x60] (READ)
// 0057f3d7: PUSH ESI
// 0057f3d8: ADD EAX,EDX
// 0057f3da: PUSH EAX
// 0057f3db: CALL core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0
//   XREF to: 00585ff0 (UNCONDITIONAL_CALL)
// 0057f3e0: ADD ESP,0x8
// 0057f3e3: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057f3e6: MOV ECX,dword ptr [EAX]
// 0057f3e8: PUSH ECX
// 0057f3e9: IMUL EAX,ECX,0x1a4
// 0057f3ef: MOV EDI,dword ptr [ESP + 0x472c]
//   XREF to: Stack[-0x60] (READ)
// 0057f3f6: PUSH 0x6482b1
//   XREF to: 006482b1 (DATA)
// 0057f3fb: ADD EAX,EDI
// 0057f3fd: PUSH EAX
// 0057f3fe: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057f403: ADD ESP,0xc
// 0057f406: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057f409: IMUL EAX,dword ptr [EAX],0x1a4
// 0057f40f: ADD EAX,EDI
// 0057f411: PUSH EAX
// 0057f412: PUSH EBX
// 0057f413: CALL core_setedit.cpp_FUN_0057d340
//   XREF to: 0057d340 (UNCONDITIONAL_CALL)
// 0057f418: ADD ESP,0x8
// 0057f41b: PUSH 0x6482b8
//   XREF to: 006482b8 (DATA)
// 0057f420: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057f426: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0057f427: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 0057f42c: ADD ESP,0x8
// 0057f42f: TEST EAX,EAX
// 0057f431: JZ 0x0057f435
//   XREF to: 0057f435 (CONDITIONAL_JUMP)
// 0057f433: INC dword ptr [EBX]
// 0057f435: MOV EDI,dword ptr [ESP + 0x4724]
//   Label: LAB_0057f435
//   XREF to: Stack[-0x64] (READ)
// 0057f43c: DEC EDI
// 0057f43d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057f440: MOV dword ptr [ESP + 0x4724],EDI
//   XREF to: Stack[-0x64] (WRITE)
// 0057f447: CMP dword ptr [EAX],0xfa
// 0057f44d: JL 0x0057f3b9
//   XREF to: 0057f3b9 (CONDITIONAL_JUMP)
// 0057f453: PUSH 0xe7f
//   Label: LAB_0057f453
// 0057f458: PUSH 0x6482cc
//   XREF to: 006482cc (DATA)
// 0057f45d: PUSH ESI
// 0057f45e: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057f463: ADD ESP,0xc
// 0057f466: PUSH 0x1
// 0057f468: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057f46b: PUSH EBX
// 0057f46c: JMP 0x0057eb3b
//   XREF to: 0057eb3b (UNCONDITIONAL_JUMP)
// 0057f471: MOV ESI,dword ptr [EBP + 0x14]
//   Label: caseD_38
//   XREF to: Stack[0x4] (READ)
// 0057f474: PUSH ESI
// 0057f475: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 0057f47a: ADD ESP,0x4
// 0057f47d: MOV dword ptr [ESI + 0x15ac8c],0x1
// 0057f487: PUSH 0x6482e0
//   XREF to: 006482e0 (DATA)
// 0057f48c: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057f492: MOV dword ptr [ESI + 0x15ac90],0x1
// 0057f49c: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0057f49d: MOV dword ptr [ESI + 0x15ac84],0x1
// 0057f4a7: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 0057f4ac: ADD ESP,0x8
// 0057f4af: MOV EDX,dword ptr [ESI]
// 0057f4b1: XOR EDI,EDI
// 0057f4b3: TEST EDX,EDX
// 0057f4b5: JLE 0x0057f590
//   XREF to: 0057f590 (CONDITIONAL_JUMP)
// 0057f4bb: MOV EAX,dword ptr [ESP + 0x472c]
//   XREF to: Stack[-0x5c] (READ)
// 0057f4c2: MOV EBX,ESI
// 0057f4c4: MOV dword ptr [ESP + 0x475c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0057f4cb: MOV ESI,dword ptr [ESP + 0x475c]
//   Label: LAB_0057f4cb
//   XREF to: Stack[-0x2c] (READ)
// 0057f4d2: PUSH ESI
// 0057f4d3: PUSH 0x6482f4
//   XREF to: 006482f4 (DATA)
// 0057f4d8: LEA EAX,[ESP + 0x43d4]
//   XREF to: Stack[-0x3bc] (DATA)
// 0057f4df: PUSH EAX
// 0057f4e0: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057f4e5: ADD ESP,0xc
// 0057f4e8: LEA EAX,[ESP + 0x43cc]
//   XREF to: Stack[-0x3bc] (DATA)
// 0057f4ef: PUSH EAX
// 0057f4f0: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 0057f4f5: ADD ESP,0x4
// 0057f4f8: MOV EAX,dword ptr [EBX + 0x19c]
// 0057f4fe: MOV dword ptr [EBX + 0x198],0x0
// 0057f508: TEST EAX,EAX
// 0057f50a: JZ 0x0057f529
//   XREF to: 0057f529 (CONDITIONAL_JUMP)
// 0057f50c: PUSH 0xe97
// 0057f511: PUSH 0x648304
//   XREF to: 00648304 (DATA)
// 0057f516: PUSH EAX
// 0057f517: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0057f51c: ADD ESP,0xc
// 0057f51f: MOV dword ptr [EBX + 0x19c],0x0
// 0057f529: PUSH EDI
//   Label: LAB_0057f529
// 0057f52a: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057f52d: PUSH EDX
// 0057f52e: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 0057f533: ADD ESP,0x8
// 0057f536: LEA ESI,[EDI + 0x1]
// 0057f539: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057f53c: SUB ESP,0x4
// 0057f53f: FILD dword ptr [EAX]
// 0057f541: MOV dword ptr [ESP + 0x4778],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0057f548: FSTP float ptr [ESP]
//   XREF to: Stack[-0x478c] (DATA)
// 0057f54b: FILD dword ptr [ESP + 0x4778]
//   XREF to: Stack[-0x14] (READ)
// 0057f552: SUB ESP,0x4
// 0057f555: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057f55b: FSTP float ptr [ESP]
//   XREF to: Stack[-0x4790] (DATA)
// 0057f55e: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0057f55f: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 0057f564: ADD ESP,0xc
// 0057f567: MOV EDI,dword ptr [ESP + 0x475c]
//   XREF to: Stack[-0x2c] (READ)
// 0057f56e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057f571: ADD EBX,0x1a4
// 0057f577: ADD EDI,0x1a4
// 0057f57d: MOV EDX,dword ptr [EAX]
// 0057f57f: MOV dword ptr [ESP + 0x475c],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 0057f586: MOV EDI,ESI
// 0057f588: CMP ESI,EDX
// 0057f58a: JL 0x0057f4cb
//   XREF to: 0057f4cb (CONDITIONAL_JUMP)
// 0057f590: MOV ECX,dword ptr [0x00678a60]
//   Label: LAB_0057f590
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057f596: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0057f597: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 0057f59c: ADD ESP,0x4
// 0057f59f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057f5a2: MOV dword ptr [EAX + 0x15ac84],0x0
// 0057f5ac: MOV dword ptr [EAX + 0x15ac8c],0x0
// 0057f5b6: PUSH EAX
// 0057f5b7: MOV dword ptr [EAX + 0x15ac90],0x0
// 0057f5c1: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 0057f5c6: ADD ESP,0x4
// 0057f5c9: JMP 0x0057eb43
//   XREF to: 0057eb43 (UNCONDITIONAL_JUMP)
// 0057f5ce: PUSH 0x0
//   Label: caseD_39
// 0057f5d0: LEA EAX,[ESP + 0x44d0]
//   XREF to: Stack[-0x2bc] (DATA)
// 0057f5d7: PUSH EAX
// 0057f5d8: PUSH 0x648318
//   XREF to: 00648318 (DATA)
// 0057f5dd: PUSH 0x64831d
//   XREF to: 0064831d (DATA)
// 0057f5e2: PUSH 0x648324
//   XREF to: 00648324 (DATA)
// 0057f5e7: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057f5ed: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0057f5ee: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 0057f5f3: ADD ESP,0x18
// 0057f5f6: TEST EAX,EAX
// 0057f5f8: JZ 0x0057eb43
//   XREF to: 0057eb43 (CONDITIONAL_JUMP)
// 0057f5fe: PUSH 0x64832f
//   XREF to: 0064832f (DATA)
// 0057f603: LEA EAX,[ESP + 0x44d0]
//   XREF to: Stack[-0x2bc] (DATA)
// 0057f60a: PUSH EAX
// 0057f60b: PUSH 0x648332
//   XREF to: 00648332 (DATA)
// 0057f610: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0057f615: ADD ESP,0xc
// 0057f618: MOV dword ptr [ESP + 0x4730],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0057f61f: TEST EAX,EAX
// 0057f621: JNZ 0x0057f646
//   XREF to: 0057f646 (CONDITIONAL_JUMP)
// 0057f623: MOV EBX,0x648339
//   XREF to: 00648339 (PARAM)
// 0057f628: MOV ESI,0xeae
// 0057f62d: PUSH 0x64834d
//   XREF to: 0064834d (DATA)
// 0057f632: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0057f638: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0057f63e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057f643: ADD ESP,0x4
// 0057f646: MOV EDI,dword ptr [ESP + 0x4730]
//   Label: LAB_0057f646
//   XREF to: Stack[-0x58] (READ)
// 0057f64d: PUSH EDI
// 0057f64e: PUSH 0xff
// 0057f653: LEA EAX,[ESP + 0x42d4]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057f65a: PUSH EAX
// 0057f65b: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0057f660: MOV EAX,0xffffffff
// 0057f665: ADD ESP,0xc
// 0057f668: MOV dword ptr [ESP + 0x4734],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0057f66f: LEA EAX,[ESP + 0x4734]
//   XREF to: Stack[-0x54] (DATA)
// 0057f676: PUSH EAX
// 0057f677: PUSH 0x648360
//   XREF to: 00648360 (DATA)
// 0057f67c: PUSH EDI
// 0057f67d: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0057f682: ADD ESP,0xc
// 0057f685: MOV ECX,dword ptr [ESP + 0x4734]
//   XREF to: Stack[-0x54] (READ)
// 0057f68c: CMP ECX,0x1
// 0057f68f: JZ 0x0057f6b5
//   XREF to: 0057f6b5 (CONDITIONAL_JUMP)
// 0057f691: PUSH ECX
// 0057f692: MOV EBX,0x648364
//   XREF to: 00648364 (PARAM)
// 0057f697: MOV ESI,0xeb2
// 0057f69c: PUSH 0x648378
//   XREF to: 00648378 (DATA)
// 0057f6a1: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0057f6a7: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0057f6ad: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057f6b2: ADD ESP,0x8
// 0057f6b5: MOV EAX,dword ptr [ESP + 0x4730]
//   Label: LAB_0057f6b5
//   XREF to: Stack[-0x58] (READ)
// 0057f6bc: PUSH EAX
// 0057f6bd: PUSH 0xff
// 0057f6c2: LEA EAX,[ESP + 0x42d4]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057f6c9: PUSH EAX
// 0057f6ca: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0057f6cf: ADD ESP,0xc
// 0057f6d2: LEA EAX,[ESP + 0x473c]
//   XREF to: Stack[-0x4c] (DATA)
// 0057f6d9: PUSH EAX
// 0057f6da: LEA EAX,[ESP + 0x473c]
//   XREF to: Stack[-0x50] (DATA)
// 0057f6e1: PUSH EAX
// 0057f6e2: PUSH 0x648397
//   XREF to: 00648397 (DATA)
// 0057f6e7: MOV EDX,dword ptr [ESP + 0x473c]
//   XREF to: Stack[-0x58] (READ)
// 0057f6ee: PUSH EDX
// 0057f6ef: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0057f6f4: ADD ESP,0x10
// 0057f6f7: MOV ECX,dword ptr [ESP + 0x4730]
//   XREF to: Stack[-0x58] (READ)
// 0057f6fe: PUSH ECX
// 0057f6ff: PUSH 0xff
// 0057f704: LEA EAX,[ESP + 0x42d4]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057f70b: PUSH EAX
// 0057f70c: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0057f711: ADD ESP,0xc
// 0057f714: MOV EBX,dword ptr [ESP + 0x4738]
//   XREF to: Stack[-0x50] (READ)
// 0057f71b: XOR EDI,EDI
// 0057f71d: TEST EBX,EBX
// 0057f71f: JLE 0x0057f74b
//   XREF to: 0057f74b (CONDITIONAL_JUMP)
// 0057f721: MOV EBX,dword ptr [ESP + 0x4730]
//   XREF to: Stack[-0x58] (READ)
// 0057f728: MOV EAX,ESP
//   Label: LAB_0057f728
// 0057f72a: PUSH EAX
// 0057f72b: CALL core_setutil.cpp_C3DSLight_ctor_FUN_005862f0
//   XREF to: 005862f0 (UNCONDITIONAL_CALL)
// 0057f730: ADD ESP,0x4
// 0057f733: PUSH EBX
// 0057f734: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4788] (DATA)
// 0057f738: PUSH EAX
// 0057f739: CALL core_setutil.cpp_C3DSLight_importS3D_FUN_00587710
//   XREF to: 00587710 (UNCONDITIONAL_CALL)
// 0057f73e: ADD ESP,0x8
// 0057f741: INC EDI
// 0057f742: CMP EDI,dword ptr [ESP + 0x4738]
//   XREF to: Stack[-0x50] (READ)
// 0057f749: JL 0x0057f728
//   XREF to: 0057f728 (CONDITIONAL_JUMP)
// 0057f74b: MOV EDI,dword ptr [ESP + 0x4730]
//   Label: LAB_0057f74b
//   XREF to: Stack[-0x58] (READ)
// 0057f752: PUSH EDI
// 0057f753: PUSH 0xff
// 0057f758: LEA EAX,[ESP + 0x42d4]
//   XREF to: Stack[-0x4bc] (DATA)
// 0057f75f: PUSH EAX
// 0057f760: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0057f765: ADD ESP,0xc
// 0057f768: CMP dword ptr [ESP + 0x473c],0x0
//   XREF to: Stack[-0x4c] (READ)
// 0057f770: JLE 0x0057fa44
//   XREF to: 0057fa44 (CONDITIONAL_JUMP)
// 0057f776: LEA EAX,[ESP + 0x3c28]
//   Label: LAB_0057f776
//   XREF to: Stack[-0xb60] (DATA)
// 0057f77d: PUSH EAX
// 0057f77e: CALL core_setutil.cpp_C3DSCamera_ctor_FUN_00585310
//   XREF to: 00585310 (UNCONDITIONAL_CALL)
// 0057f783: ADD ESP,0x4
// 0057f786: MOV ESI,dword ptr [ESP + 0x4730]
//   XREF to: Stack[-0x58] (READ)
// 0057f78d: PUSH ESI
// 0057f78e: LEA EAX,[ESP + 0x3c2c]
//   XREF to: Stack[-0xb60] (DATA)
// 0057f795: PUSH EAX
// 0057f796: CALL core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0
//   XREF to: 00585ff0 (UNCONDITIONAL_CALL)
// 0057f79b: ADD ESP,0x8
// 0057f79e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057f7a1: MOV EDI,dword ptr [EAX]
// 0057f7a3: XOR EBX,EBX
// 0057f7a5: TEST EDI,EDI
// 0057f7a7: JLE 0x0057fa1d
//   XREF to: 0057fa1d (CONDITIONAL_JUMP)
// 0057f7ad: MOV EDX,dword ptr [ESP + 0x4754]
//   XREF to: Stack[-0x34] (READ)
// 0057f7b4: MOV EDI,dword ptr [ESP + 0x4754]
//   XREF to: Stack[-0x34] (READ)
// 0057f7bb: ADD EDX,0x100
// 0057f7c1: FLD float ptr [ESP + 0x3d28]
//   Label: LAB_0057f7c1
//   XREF to: Stack[-0xa60] (READ)
// 0057f7c8: FSUB float ptr [EDX]
// 0057f7ca: FLD float ptr [ESP + 0x3d2c]
//   XREF to: Stack[-0xa5c] (READ)
// 0057f7d1: FXCH
// 0057f7d3: FSTP float ptr [ESP + 0x46f8]
//   XREF to: Stack[-0x90] (WRITE)
// 0057f7da: FSUB float ptr [EDX + 0x4]
// 0057f7dd: FST float ptr [ESP + 0x46fc]
//   XREF to: Stack[-0x8c] (WRITE)
// 0057f7e4: FMUL float ptr [ESP + 0x46fc]
//   XREF to: Stack[-0x8c] (READ)
// 0057f7eb: FLD float ptr [ESP + 0x46f8]
//   XREF to: Stack[-0x90] (READ)
// 0057f7f2: FMUL ST0
// 0057f7f4: FLD float ptr [ESP + 0x3d30]
//   XREF to: Stack[-0xa58] (READ)
// 0057f7fb: FSUB float ptr [EDX + 0x8]
// 0057f7fe: FXCH
// 0057f800: FADDP ST2,ST0
// 0057f802: FST float ptr [ESP + 0x4700]
//   XREF to: Stack[-0x88] (WRITE)
// 0057f809: FMUL float ptr [ESP + 0x4700]
//   XREF to: Stack[-0x88] (READ)
// 0057f810: FADDP
// 0057f812: FSQRT
// 0057f814: IMUL ESI,EBX,0x1a4
// 0057f81a: ADD ESI,EDI
// 0057f81c: FCOMP double ptr [0x00648515]
//   XREF to: 00648515 (READ)
// 0057f822: FNSTSW AX
// 0057f824: SAHF
// 0057f825: JNC 0x0057fa69
//   XREF to: 0057fa69 (CONDITIONAL_JUMP)
// 0057f82b: LEA EAX,[ESI + 0x10c]
// 0057f831: FLD float ptr [ESP + 0x3d34]
//   XREF to: Stack[-0xa54] (READ)
// 0057f838: FSUB float ptr [EAX]
// 0057f83a: FLD float ptr [ESP + 0x3d38]
//   XREF to: Stack[-0xa50] (READ)
// 0057f841: FXCH
// 0057f843: FSTP float ptr [ESP + 0x46ec]
//   XREF to: Stack[-0x9c] (WRITE)
// 0057f84a: FSUB float ptr [EAX + 0x4]
// 0057f84d: FST float ptr [ESP + 0x46f0]
//   XREF to: Stack[-0x98] (WRITE)
// 0057f854: FMUL float ptr [ESP + 0x46f0]
//   XREF to: Stack[-0x98] (READ)
// 0057f85b: FLD float ptr [ESP + 0x46ec]
//   XREF to: Stack[-0x9c] (READ)
// 0057f862: FMUL ST0
// 0057f864: FLD float ptr [ESP + 0x3d3c]
//   XREF to: Stack[-0xa4c] (READ)
// 0057f86b: FSUB float ptr [EAX + 0x8]
// 0057f86e: FXCH
// 0057f870: FADDP ST2,ST0
// 0057f872: FST float ptr [ESP + 0x46f4]
//   XREF to: Stack[-0x94] (WRITE)
// 0057f879: FMUL float ptr [ESP + 0x46f4]
//   XREF to: Stack[-0x94] (READ)
// 0057f880: FADDP
// 0057f882: FSQRT
// 0057f884: FCOMP double ptr [0x00648515]
//   XREF to: 00648515 (READ)
// 0057f88a: FNSTSW AX
// 0057f88c: SAHF
// 0057f88d: JNC 0x0057fa69
//   XREF to: 0057fa69 (CONDITIONAL_JUMP)
// 0057f893: LEA EAX,[ESP + 0x3c28]
//   XREF to: Stack[-0xb60] (DATA)
// 0057f89a: PUSH EAX
// 0057f89b: PUSH 0x64839e
//   XREF to: 0064839e (DATA)
// 0057f8a0: LEA EAX,[ESP + 0x40d4]
//   XREF to: Stack[-0x6bc] (DATA)
// 0057f8a7: PUSH EAX
// 0057f8a8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057f8ad: ADD ESP,0xc
// 0057f8b0: PUSH 0x6483a5
//   XREF to: 006483a5 (DATA)
// 0057f8b5: LEA EAX,[ESP + 0x40d0]
//   XREF to: Stack[-0x6bc] (DATA)
// 0057f8bc: PUSH EAX
// 0057f8bd: PUSH 0x6483a8
//   XREF to: 006483a8 (DATA)
// 0057f8c2: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0057f8c7: ADD ESP,0xc
// 0057f8ca: PUSH ESI
// 0057f8cb: PUSH 0x6483b1
//   XREF to: 006483b1 (DATA)
// 0057f8d0: MOV dword ptr [ESP + 0x4748],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0057f8d7: LEA EAX,[ESP + 0x41d4]
//   XREF to: Stack[-0x5bc] (DATA)
// 0057f8de: PUSH EAX
// 0057f8df: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057f8e4: ADD ESP,0xc
// 0057f8e7: PUSH 0x6483b8
//   XREF to: 006483b8 (DATA)
// 0057f8ec: LEA EAX,[ESP + 0x41d0]
//   XREF to: Stack[-0x5bc] (DATA)
// 0057f8f3: PUSH EAX
// 0057f8f4: PUSH 0x6483bb
//   XREF to: 006483bb (DATA)
// 0057f8f9: XOR ESI,ESI
// 0057f8fb: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0057f900: ADD ESP,0xc
// 0057f903: MOV EDI,EAX
// 0057f905: PUSH EDI
//   Label: LAB_0057f905
// 0057f906: MOV EAX,dword ptr [ESP + 0x4744]
//   XREF to: Stack[-0x48] (READ)
// 0057f90d: PUSH EAX
// 0057f90e: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0057f913: ADD ESP,0x4
// 0057f916: PUSH EAX
// 0057f917: INC ESI
// 0057f918: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 0057f91d: ADD ESP,0x8
// 0057f920: CMP ESI,0x4b000
// 0057f926: JL 0x0057f905
//   XREF to: 0057f905 (CONDITIONAL_JUMP)
// 0057f928: IMUL EBX,EBX,0x1a4
// 0057f92e: PUSH 0xecd
// 0057f933: PUSH 0x6483c4
//   XREF to: 006483c4 (DATA)
// 0057f938: MOV EDX,dword ptr [ESP + 0x4748]
//   XREF to: Stack[-0x48] (READ)
// 0057f93f: PUSH EDX
// 0057f940: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057f945: ADD ESP,0xc
// 0057f948: PUSH 0xece
// 0057f94d: PUSH 0x6483d8
//   XREF to: 006483d8 (DATA)
// 0057f952: PUSH EDI
// 0057f953: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057f958: ADD ESP,0xc
// 0057f95b: LEA EAX,[ESP + 0x3c28]
//   XREF to: Stack[-0xb60] (DATA)
// 0057f962: PUSH EAX
// 0057f963: PUSH 0x6483ec
//   XREF to: 006483ec (DATA)
// 0057f968: LEA EAX,[ESP + 0x40d4]
//   XREF to: Stack[-0x6bc] (DATA)
// 0057f96f: PUSH EAX
// 0057f970: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057f975: ADD ESP,0xc
// 0057f978: PUSH 0x6483f3
//   XREF to: 006483f3 (DATA)
// 0057f97d: LEA EAX,[ESP + 0x40d0]
//   XREF to: Stack[-0x6bc] (DATA)
// 0057f984: PUSH EAX
// 0057f985: PUSH 0x6483f6
//   XREF to: 006483f6 (DATA)
// 0057f98a: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0057f98f: ADD ESP,0xc
// 0057f992: ADD EBX,dword ptr [ESP + 0x4744]
//   XREF to: Stack[-0x44] (READ)
// 0057f999: PUSH EBX
// 0057f99a: PUSH 0x6483ff
//   XREF to: 006483ff (DATA)
// 0057f99f: MOV dword ptr [ESP + 0x4748],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0057f9a6: LEA EAX,[ESP + 0x41d4]
//   XREF to: Stack[-0x5bc] (DATA)
// 0057f9ad: PUSH EAX
// 0057f9ae: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057f9b3: ADD ESP,0xc
// 0057f9b6: PUSH 0x648406
//   XREF to: 00648406 (DATA)
// 0057f9bb: LEA EAX,[ESP + 0x41d0]
//   XREF to: Stack[-0x5bc] (DATA)
// 0057f9c2: PUSH EAX
// 0057f9c3: PUSH 0x648409
//   XREF to: 00648409 (DATA)
// 0057f9c8: XOR EBX,EBX
// 0057f9ca: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0057f9cf: ADD ESP,0xc
// 0057f9d2: MOV EDI,EAX
// 0057f9d4: MOV ESI,dword ptr [ESP + 0x4740]
//   XREF to: Stack[-0x48] (READ)
// 0057f9db: PUSH EDI
//   Label: LAB_0057f9db
// 0057f9dc: PUSH ESI
// 0057f9dd: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0057f9e2: ADD ESP,0x4
// 0057f9e5: PUSH EAX
// 0057f9e6: INC EBX
// 0057f9e7: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 0057f9ec: ADD ESP,0x8
// 0057f9ef: CMP EBX,0x300
// 0057f9f5: JL 0x0057f9db
//   XREF to: 0057f9db (CONDITIONAL_JUMP)
// 0057f9f7: PUSH 0xed6
// 0057f9fc: PUSH 0x648412
//   XREF to: 00648412 (DATA)
// 0057fa01: PUSH ESI
// 0057fa02: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057fa07: ADD ESP,0xc
// 0057fa0a: PUSH 0xed7
// 0057fa0f: PUSH 0x648426
//   XREF to: 00648426 (DATA)
// 0057fa14: PUSH EDI
// 0057fa15: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057fa1a: ADD ESP,0xc
// 0057fa1d: PUSH 0x0
//   Label: LAB_0057fa1d
// 0057fa1f: LEA EAX,[ESP + 0x3c2c]
//   XREF to: Stack[-0xb60] (DATA)
// 0057fa26: PUSH EAX
// 0057fa27: DEC dword ptr [ESP + 0x4744]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 0057fa2e: CALL core_setutil.cpp_C3DSCamera_dtor_FUN_00585340
//   XREF to: 00585340 (UNCONDITIONAL_CALL)
// 0057fa33: ADD ESP,0x8
// 0057fa36: CMP dword ptr [ESP + 0x473c],0x0
//   XREF to: Stack[-0x4c] (READ)
// 0057fa3e: JG 0x0057f776
//   XREF to: 0057f776 (CONDITIONAL_JUMP)
// 0057fa44: PUSH 0xede
//   Label: LAB_0057fa44
// 0057fa49: PUSH 0x64843a
//   XREF to: 0064843a (DATA)
// 0057fa4e: MOV ECX,dword ptr [ESP + 0x4738]
//   XREF to: Stack[-0x58] (READ)
// 0057fa55: PUSH ECX
// 0057fa56: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057fa5b: ADD ESP,0xc
// 0057fa5e: PUSH 0x1
// 0057fa60: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057fa63: PUSH EBX
// 0057fa64: JMP 0x0057eb3b
//   XREF to: 0057eb3b (UNCONDITIONAL_JUMP)
// 0057fa69: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0057fa69
//   XREF to: Stack[0x4] (READ)
// 0057fa6c: INC EBX
// 0057fa6d: MOV ECX,dword ptr [EAX]
// 0057fa6f: ADD EDX,0x1a4
// 0057fa75: CMP EBX,ECX
// 0057fa77: JL 0x0057f7c1
//   XREF to: 0057f7c1 (CONDITIONAL_JUMP)
// 0057fa7d: JMP 0x0057fa1d
//   XREF to: 0057fa1d (UNCONDITIONAL_JUMP)
// 0057fa7f: PUSH 0x64844e
//   Label: caseD_41
//   XREF to: 0064844e (DATA)
// 0057fa84: PUSH 0x0
// 0057fa86: PUSH 0x0
// 0057fa88: XOR AH,AH
// 0057fa8a: PUSH 0x5
// 0057fa8c: MOV byte ptr [ESP + 0x46ec],AH
//   XREF to: Stack[-0xac] (WRITE)
// 0057fa93: LEA EAX,[ESP + 0x46ec]
//   XREF to: Stack[-0xac] (DATA)
// 0057fa9a: PUSH EAX
// 0057fa9b: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0057faa0: ADD ESP,0x14
// 0057faa3: LEA EDI,[ESP + 0x46dc]
//   XREF to: Stack[-0xac] (DATA)
// 0057faaa: SUB ECX,ECX
// 0057faac: DEC ECX
// 0057faad: XOR EAX,EAX
// 0057faaf: SCASB.REPNE ES:EDI
// 0057fab1: NOT ECX
// 0057fab3: DEC ECX
// 0057fab4: TEST ECX,ECX
// 0057fab6: JZ 0x0057eb43
//   XREF to: 0057eb43 (CONDITIONAL_JUMP)
// 0057fabc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057fabf: XOR EDI,EDI
// 0057fac1: MOV EDX,dword ptr [EAX]
// 0057fac3: MOV dword ptr [ESP + 0x4770],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0057faca: TEST EDX,EDX
// 0057facc: JLE 0x0057fce8
//   XREF to: 0057fce8 (CONDITIONAL_JUMP)
// 0057fad2: MOV EAX,dword ptr [ESP + 0x4748]
//   XREF to: Stack[-0x40] (READ)
// 0057fad9: MOV dword ptr [ESP + 0x4760],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0057fae0: MOV EAX,dword ptr [ESP + 0x474c]
//   XREF to: Stack[-0x3c] (READ)
// 0057fae7: MOV dword ptr [ESP + 0x4764],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0057faee: MOV EAX,dword ptr [ESP + 0x4750]
//   XREF to: Stack[-0x38] (READ)
// 0057faf5: MOV dword ptr [ESP + 0x4768],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0057fafc: MOV ESI,dword ptr [ESP + 0x4760]
//   Label: LAB_0057fafc
//   XREF to: Stack[-0x28] (READ)
// 0057fb03: PUSH ESI
// 0057fb04: PUSH 0x64846c
//   XREF to: 0064846c (DATA)
// 0057fb09: LEA EAX,[ESP + 0x3ed4]
//   XREF to: Stack[-0x8bc] (DATA)
// 0057fb10: PUSH EAX
// 0057fb11: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057fb16: ADD ESP,0xc
// 0057fb19: MOV EAX,dword ptr [ESP + 0x4770]
//   XREF to: Stack[-0x18] (READ)
// 0057fb20: INC EAX
// 0057fb21: PUSH EAX
// 0057fb22: LEA EAX,[ESP + 0x46e0]
//   XREF to: Stack[-0xac] (DATA)
// 0057fb29: PUSH EAX
// 0057fb2a: PUSH 0x648473
//   XREF to: 00648473 (DATA)
// 0057fb2f: LEA EAX,[ESP + 0x45d8]
//   XREF to: Stack[-0x1bc] (DATA)
// 0057fb36: PUSH EAX
// 0057fb37: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057fb3c: ADD ESP,0x10
// 0057fb3f: PUSH 0x64847c
//   XREF to: 0064847c (DATA)
// 0057fb44: LEA EAX,[ESP + 0x3ed0]
//   XREF to: Stack[-0x8bc] (DATA)
// 0057fb4b: PUSH EAX
// 0057fb4c: PUSH 0x64847f
//   XREF to: 0064847f (DATA)
// 0057fb51: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0057fb56: ADD ESP,0xc
// 0057fb59: PUSH 0x648488
//   XREF to: 00648488 (DATA)
// 0057fb5e: MOV EDI,EAX
// 0057fb60: LEA EAX,[ESP + 0x45d0]
//   XREF to: Stack[-0x1bc] (DATA)
// 0057fb67: PUSH EAX
// 0057fb68: PUSH 0x64848b
//   XREF to: 0064848b (DATA)
// 0057fb6d: XOR EBX,EBX
// 0057fb6f: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0057fb74: ADD ESP,0xc
// 0057fb77: MOV ESI,EAX
// 0057fb79: PUSH ESI
//   Label: LAB_0057fb79
// 0057fb7a: PUSH EDI
// 0057fb7b: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0057fb80: ADD ESP,0x4
// 0057fb83: PUSH EAX
// 0057fb84: INC EBX
// 0057fb85: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 0057fb8a: ADD ESP,0x8
// 0057fb8d: CMP EBX,0x4b000
// 0057fb93: JL 0x0057fb79
//   XREF to: 0057fb79 (CONDITIONAL_JUMP)
// 0057fb95: PUSH 0xef5
// 0057fb9a: PUSH 0x648494
//   XREF to: 00648494 (DATA)
// 0057fb9f: PUSH EDI
// 0057fba0: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057fba5: ADD ESP,0xc
// 0057fba8: PUSH 0xef6
// 0057fbad: PUSH 0x6484a8
//   XREF to: 006484a8 (DATA)
// 0057fbb2: PUSH ESI
// 0057fbb3: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057fbb8: ADD ESP,0xc
// 0057fbbb: MOV EDI,dword ptr [ESP + 0x4764]
//   XREF to: Stack[-0x24] (READ)
// 0057fbc2: PUSH EDI
// 0057fbc3: PUSH 0x6484bc
//   XREF to: 006484bc (DATA)
// 0057fbc8: LEA EAX,[ESP + 0x3ed4]
//   XREF to: Stack[-0x8bc] (DATA)
// 0057fbcf: PUSH EAX
// 0057fbd0: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057fbd5: ADD ESP,0xc
// 0057fbd8: MOV EAX,dword ptr [ESP + 0x4770]
//   XREF to: Stack[-0x18] (READ)
// 0057fbdf: INC EAX
// 0057fbe0: PUSH EAX
// 0057fbe1: LEA EAX,[ESP + 0x46e0]
//   XREF to: Stack[-0xac] (DATA)
// 0057fbe8: PUSH EAX
// 0057fbe9: PUSH 0x6484c3
//   XREF to: 006484c3 (DATA)
// 0057fbee: LEA EAX,[ESP + 0x45d8]
//   XREF to: Stack[-0x1bc] (DATA)
// 0057fbf5: PUSH EAX
// 0057fbf6: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057fbfb: ADD ESP,0x10
// 0057fbfe: PUSH 0x6484cc
//   XREF to: 006484cc (DATA)
// 0057fc03: LEA EAX,[ESP + 0x3ed0]
//   XREF to: Stack[-0x8bc] (DATA)
// 0057fc0a: PUSH EAX
// 0057fc0b: PUSH 0x6484cf
//   XREF to: 006484cf (DATA)
// 0057fc10: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0057fc15: ADD ESP,0xc
// 0057fc18: PUSH 0x6484d8
//   XREF to: 006484d8 (DATA)
// 0057fc1d: MOV EDI,EAX
// 0057fc1f: LEA EAX,[ESP + 0x45d0]
//   XREF to: Stack[-0x1bc] (DATA)
// 0057fc26: PUSH EAX
// 0057fc27: PUSH 0x6484db
//   XREF to: 006484db (DATA)
// 0057fc2c: XOR EBX,EBX
// 0057fc2e: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0057fc33: ADD ESP,0xc
// 0057fc36: MOV ESI,EAX
// 0057fc38: PUSH ESI
//   Label: LAB_0057fc38
// 0057fc39: PUSH EDI
// 0057fc3a: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0057fc3f: ADD ESP,0x4
// 0057fc42: PUSH EAX
// 0057fc43: INC EBX
// 0057fc44: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 0057fc49: ADD ESP,0x8
// 0057fc4c: CMP EBX,0x300
// 0057fc52: JL 0x0057fc38
//   XREF to: 0057fc38 (CONDITIONAL_JUMP)
// 0057fc54: PUSH 0xefe
// 0057fc59: PUSH 0x6484e4
//   XREF to: 006484e4 (DATA)
// 0057fc5e: PUSH EDI
// 0057fc5f: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057fc64: ADD ESP,0xc
// 0057fc67: PUSH 0xeff
// 0057fc6c: PUSH 0x6484f8
//   XREF to: 006484f8 (DATA)
// 0057fc71: PUSH ESI
// 0057fc72: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057fc77: ADD ESP,0xc
// 0057fc7a: MOV EBX,dword ptr [ESP + 0x4770]
//   XREF to: Stack[-0x18] (READ)
// 0057fc81: INC EBX
// 0057fc82: PUSH EBX
// 0057fc83: LEA EAX,[ESP + 0x46e0]
//   XREF to: Stack[-0xac] (DATA)
// 0057fc8a: PUSH EAX
// 0057fc8b: PUSH 0x64850c
//   XREF to: 0064850c (DATA)
// 0057fc90: MOV ESI,dword ptr [ESP + 0x4774]
//   XREF to: Stack[-0x20] (READ)
// 0057fc97: PUSH ESI
// 0057fc98: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057fc9d: ADD ESP,0x10
// 0057fca0: LEA EDX,[ESI + 0x1a4]
// 0057fca6: MOV EAX,dword ptr [ESP + 0x4764]
//   XREF to: Stack[-0x24] (READ)
// 0057fcad: MOV EDI,dword ptr [ESP + 0x4760]
//   XREF to: Stack[-0x28] (READ)
// 0057fcb4: ADD EAX,0x1a4
// 0057fcb9: MOV dword ptr [ESP + 0x4768],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0057fcc0: MOV dword ptr [ESP + 0x4764],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0057fcc7: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057fcca: MOV dword ptr [ESP + 0x4770],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0057fcd1: ADD EDI,0x1a4
// 0057fcd7: MOV ECX,dword ptr [EAX]
// 0057fcd9: MOV dword ptr [ESP + 0x4760],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0057fce0: CMP EBX,ECX
// 0057fce2: JL 0x0057fafc
//   XREF to: 0057fafc (CONDITIONAL_JUMP)
// 0057fce8: PUSH 0x1
//   Label: LAB_0057fce8
// 0057fcea: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057fced: PUSH EBX
// 0057fcee: JMP 0x0057eb3b
//   XREF to: 0057eb3b (UNCONDITIONAL_JUMP)
