// Name: core_course.cpp_CCourse_showEditorMenu_FUN_00443040
// Address: 00443040
// Address Range: [[00443040, 004436c8]]
// Convention: __cdecl
// Signature: void core_course.cpp_CCourse_showEditorMenu_FUN_00443040(CCourse * this_ptr)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 0050784a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Demon_Course_system_menu_00619195
//   TerminatedCString s_s_1_Load_course_from_PTH_006191ae
//   TerminatedCString s_s_2_Save_course_to_PTH_f_006191cc
//   TerminatedCString s_s_3_Import_course_from_C_006191e8
//   TerminatedCString s_s_4_Import_course_from_B_00619208
//   TerminatedCString s_s_5_View_course_00619228
//   TerminatedCString s_s_6_Rotate_all_course_or_00619237
//   TerminatedCString s_s_7_Scale_course_about_i_00619267
//   TerminatedCString s_s_8_Remove_bank_00619288
//   TerminatedCString s_ON_00619297
//   TerminatedCString s_OFF_0061929a
//   TerminatedCString s_pth_006192b5
//   TerminatedCString s_data_006192bb
//   TerminatedCString s_Load_course_006192c0
//   TerminatedCString s_No_course_to_save_006192cc
//   TerminatedCString s_pth_006192df
//   TerminatedCString s_data_006192e3
//   TerminatedCString s_Save_course_006192e8
//   TerminatedCString s_crs_006192f4
//   TerminatedCString s_Import_CRS_file_006192fa
//   TerminatedCString s_pth_0061930b
//   undefined4 DAT_0061930c
//   undefined4 DAT_0061930d
//   undefined4 DAT_0061930e
//   TerminatedCString s_bon_00619310
//   TerminatedCString s_Import_BON_file_00619316
//   TerminatedCString s_pth_00619327
//   undefined4 DAT_00619328
//   undefined4 DAT_00619329
//   undefined4 DAT_0061932a
//   TerminatedCString s_No_course_to_view_0061932c
//   TerminatedCString s_kfm_0061933f
//   TerminatedCString s_models_00619345
//   TerminatedCString s_Select_model_to_fly_arou_0061934c
//   TerminatedCString s_No_course_to_rotate_00619367
//   TerminatedCString s_Enter_local_P_B_H_to_app_0061937c
//   TerminatedCString s_No_course_to_scale_00619398
//   TerminatedCString s_Enter_scale_factor_006193ac
//   TerminatedCString s_No_course_in_memory_006193bf
//   TerminatedCString s_Remove_bank_from_course_006193d4
//   TerminatedCString s_No_course_in_memory_006193ed
//   undefined4 DAT_0066e940
//   undefined4 DAT_0066e944
//   undefined4 DAT_0066ea48
//   undefined4 DAT_0066ea4c
//   undefined4 DAT_0066eb50
//   undefined4 DAT_0066eb54
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   core_course.cpp_CCourse_load_FUN_00442580
//   core_course.cpp_CCourse_save_FUN_00442a90
//   core_course.cpp_FUN_00443bc0
//   core_course.cpp_OpeningCourseFile2_FUN_00442d70
//   core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0
//   core_dmodel.cpp_loadModel_FUN_00478c00
//   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_splitpath_FUN_005ff178
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_showEditorMenu_FUN_00443040(CCourse *this_ptr)

{
  char cVar1;
  CCourseFrameList *pCVar2;
  bool bVar3;
  char *pcVar4;
  uint uVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  CVector3f *point;
  undefined3 extraout_var_01;
  int iVar6;
  BADSPACEBASE *in_ESP;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  CQuaternion4f *pCVar12;
  char *pcVar14;
  byte bVar15;
  float in_stack_00000018;
  uint in_stack_00000024;
  undefined4 in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_00000038;
  float afStackY_1818 [1221];
  CQuaternion4f *in_stack_fffffb48;
  CQuaternion4f *in_stack_fffffb4c;
  char acStack_3b8 [8];
  char acStack_3b0 [248];
  char acStack_2b8 [4];
  undefined1 auStack_2b4 [196];
  undefined4 local_1f0 [16];
  char acStack_1b0 [8];
  char acStack_1a8 [4];
  CQuaternion4f aCStack_1a4 [14];
  char acStack_c4 [4];
  char acStack_c0 [104];
  CBoundingBox3D CStack_58;
  float local_3c;
  float local_38 [3];
  CQuaternion4f local_2c;
  float local_1c;
  float local_18;
  float local_14;
  CQuaternion4f *pCVar13;
  
  bVar15 = 0;
  puVar7 = &DAT_0066e940;
  puVar8 = local_1f0;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Demon Course system menu",0,0);
    engine_2d_c_drawText_FUN_00401fd0("1. Load course from .PTH file",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("2. Save course to .PTH file",0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("3. Import course from .CRS file",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("4. Import course from .BON file",0,0x42);
    engine_2d_c_drawText_FUN_00401fd0("5. View course",0,0x58);
    engine_2d_c_drawText_FUN_00401fd0("6. Rotate all course orientations on local axis",0,0x6e);
    engine_2d_c_drawText_FUN_00401fd0("7. Scale course about its center",0,0x79);
    engine_2d_c_drawText_FUN_00401fd0("8. Remove bank",0,0x8f);
    if (this_ptr->loop == 0) {
      pcVar4 = "OFF";
    }
    else {
      pcVar4 = "ON";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_c4,"L. Loop flag is now %s",pcVar4);
    engine_2d_c_drawText_FUN_00401fd0(acStack_c0,0,0xa5);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    uVar5 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    in_stack_00000024 = crt_ctype_c_toupper_FUN_005ff9e0(uVar5 & 0xff);
    if (in_stack_00000024 < 0x35) {
      if (in_stack_00000024 < 0x32) {
        if ((in_stack_00000024 == 0x31) &&
           (iVar6 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                              (g_CEditorToolsPtr,"Load course","data",
                               "*.pth",SUB41(acStack_1b0,0)), iVar6 != 0)) {
          core_course_cpp_CCourse_load_FUN_00442580(this_ptr,acStack_1b0);
        }
      }
      else if (in_stack_00000024 < 0x33) {
        if (this_ptr->len < 1) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"No course to save!");
        }
        else {
          bVar3 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                            (g_CEditorToolsPtr,"Save course","data",0x6192df,
                             SUB41(acStack_1b0,0));
          if (CONCAT31(extraout_var,bVar3) != 0) {
            core_course_cpp_CCourse_save_FUN_00442a90(this_ptr);
          }
        }
      }
      else if (in_stack_00000024 < 0x34) {
        puVar7 = &DAT_0066ea48;
        puVar8 = (undefined4 *)&stack0xfffffb44;
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar15 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar15 * -2 + 1;
        }
        do {
          bVar3 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                            (g_CEditorToolsPtr,"Import .CRS file",true,&stack0xfffffb44);
          if (CONCAT31(extraout_var_00,bVar3) == 0) goto LAB_004431bd;
          iVar6 = core_course_cpp_OpeningCourseFile2_FUN_00442d70();
        } while (iVar6 == 0);
        in_stack_fffffb48 = (CQuaternion4f *)0x0;
        crt_string_c_splitpath_FUN_005ff178
                  (&stack0xfffffb4c,(char *)0x0,(char *)0x0,acStack_1a8,(char *)0x0);
        pcVar4 = ".pth";
        in_stack_fffffb4c = aCStack_1a4;
        iVar6 = -1;
        pCVar13 = in_stack_fffffb4c;
        do {
          pCVar12 = pCVar13;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pCVar12 = (CQuaternion4f *)((int)pCVar13 + (uint)bVar15 * -2 + 1);
          pfVar9 = &pCVar13->w;
          pCVar13 = pCVar12;
        } while (*(char *)pfVar9 != '\0');
        pcVar14 = (char *)((int)&pCVar12[-1].z + 3);
        do {
          cVar1 = *pcVar4;
          *pcVar14 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar14[1] = cVar1;
          pcVar14 = pcVar14 + 2;
        } while (cVar1 != '\0');
      }
      else {
        puVar7 = &DAT_0066eb50;
        pcVar4 = acStack_3b8;
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pcVar4 = *puVar7;
          puVar7 = puVar7 + (uint)bVar15 * -2 + 1;
          pcVar4 = pcVar4 + ((uint)bVar15 * -2 + 1) * 4;
        }
        do {
          bVar3 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                            (g_CEditorToolsPtr,"Import .BON file",true,acStack_3b8);
          if (CONCAT31(extraout_var_01,bVar3) == 0) goto LAB_004431bd;
          iVar6 = core_course_cpp_OpeningCourseFileMaybe_FUN_00442bc0();
        } while (iVar6 == 0);
        in_stack_fffffb48 = (CQuaternion4f *)0x0;
        crt_string_c_splitpath_FUN_005ff178
                  (acStack_3b0,(char *)0x0,(char *)0x0,acStack_1a8,(char *)0x0);
        pcVar4 = ".pth";
        in_stack_fffffb4c = aCStack_1a4;
        iVar6 = -1;
        pCVar13 = in_stack_fffffb4c;
        do {
          pCVar12 = pCVar13;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pCVar12 = (CQuaternion4f *)((int)pCVar13 + (uint)bVar15 * -2 + 1);
          pfVar9 = &pCVar13->w;
          pCVar13 = pCVar12;
        } while (*(char *)pfVar9 != '\0');
        pcVar14 = (char *)((int)&pCVar12[-1].z + 3);
        do {
          cVar1 = *pcVar4;
          *pcVar14 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar14[1] = cVar1;
          pcVar14 = pcVar14 + 2;
        } while (cVar1 != '\0');
      }
    }
    else if (in_stack_00000024 < 0x36) {
      if (this_ptr->len < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No course to view!");
      }
      else {
        iVar6 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                          (g_CEditorToolsPtr,"Select model to fly around","models",
                           "*.kfm",SUB41(auStack_2b4,0));
        if (iVar6 != 0) {
          core_dmodel_cpp_loadModel_FUN_00478c00(acStack_2b8);
          core_course_cpp_FUN_00443bc0();
        }
      }
    }
    else if (in_stack_00000024 < 0x37) {
      if (this_ptr->len < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No course to rotate!");
      }
      else {
        iVar6 = shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                          (g_CEditorToolsPtr,"Enter local P,B,H to apply:",
                           (CVector3f *)&stack0x00000014,false);
        if (iVar6 != 0) {
          core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                    ((CQuaternion4f *)&stack0x00000000,(CVector3f *)in_stack_fffffb48);
          local_38[2] = local_3c;
          pfVar9 = (float *)((int)&local_2c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 4);
          *(float *)((int)&local_2c + (uint)bVar15 * -8) = local_38[(uint)bVar15 * -2];
          *pfVar9 = local_38[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          pfVar9[(uint)bVar15 * -2 + 1] =
               (local_38 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
          iVar6 = 0;
          in_stack_00000034 = 0;
          while (in_stack_00000034 < this_ptr->len) {
            in_stack_fffffb48 =
                 (CQuaternion4f *)((int)&(this_ptr->frame_list->frame1).orient.w + iVar6);
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (&local_2c,in_stack_fffffb48,in_stack_fffffb4c);
            puVar7 = (undefined4 *)((int)&(this_ptr->frame_list->frame1).orient.w + iVar6);
            puVar8 = puVar7 + (uint)bVar15 * -2 + 1;
            *puVar7 = unaff_ESI;
            *puVar8 = *(undefined4 *)(&stack0xfffffffc + (uint)bVar15 * -8);
            puVar8[(uint)bVar15 * -2 + 1] =
                 *(undefined4 *)(&stack0x00000000 + (uint)bVar15 * -8 + (uint)bVar15 * -8);
            (puVar8 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
                 *(undefined4 *)
                  ((int)(&stack0x00000000 + (uint)bVar15 * -8 + (uint)bVar15 * -8) +
                  ((uint)bVar15 * -2 + 1) * 4);
            iVar6 = iVar6 + 0x1c;
            in_stack_00000034 = in_stack_00000038 + 1;
          }
        }
      }
    }
    else if (in_stack_00000024 < 0x38) {
      if (this_ptr->len < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No course to scale!");
      }
      else {
        iVar6 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                          (g_CEditorToolsPtr,"Enter scale factor",(float *)&stack0x00000020
                           ,true,0.001,9999.0,false);
        if (iVar6 != 0) {
          pCVar2 = this_ptr->frame_list;
          if ((CCourseFrameList *)&CStack_58 != pCVar2) {
            CStack_58.min.x = (pCVar2->frame1).pos.x;
            CStack_58.min.y = (pCVar2->frame1).pos.y;
            CStack_58.min.z = (pCVar2->frame1).pos.z;
          }
          if ((CCourseFrameList *)&CStack_58.max != pCVar2) {
            CStack_58.max.x = (pCVar2->frame1).pos.x;
            CStack_58.max.y = (pCVar2->frame1).pos.y;
            CStack_58.max.z = (pCVar2->frame1).pos.z;
          }
          iVar6 = 0x1c;
          for (iVar10 = 1; iVar10 < this_ptr->len; iVar10 = iVar10 + 1) {
            point = (CVector3f *)((int)&(this_ptr->frame_list->frame1).pos.x + iVar6);
            iVar6 = iVar6 + 0x1c;
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&CStack_58,point);
          }
        }
      }
    }
    else if (in_stack_00000024 < 0x39) {
      if (this_ptr->len < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No course in memory!");
      }
      else {
        iVar6 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Remove bank from course?");
        if ((iVar6 != 0) && (in_stack_0000002c = 0, 0 < this_ptr->len)) {
          iVar6 = 0;
          do {
            core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                      ((CVector3f *)&stack0x0000000c,
                       (CQuaternion4f *)((int)&(this_ptr->frame_list->frame1).orient.w + iVar6));
            in_stack_00000018 = 0.0;
            in_stack_fffffb48 = (CQuaternion4f *)&stack0x00000010;
            core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                      (in_stack_fffffb48,(CVector3f *)in_stack_fffffb4c);
            pfVar9 = (float *)((int)&(this_ptr->frame_list->frame1).orient.w + iVar6);
            iVar6 = iVar6 + 0x1c;
            pfVar11 = pfVar9 + (uint)bVar15 * -2 + 1;
            *pfVar9 = local_18;
            *pfVar11 = (&local_14)[(uint)bVar15 * -2];
            pfVar11[(uint)bVar15 * -2 + 1] =
                 *(float *)(&stack0xfffffff0 + (uint)bVar15 * -8 + (uint)bVar15 * -8);
            (pfVar11 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
                 *(float *)((int)(&stack0xfffffff0 + (uint)bVar15 * -8 + (uint)bVar15 * -8) +
                           ((uint)bVar15 * -2 + 1) * 4);
            in_stack_00000034 = in_stack_00000034 + 1;
          } while (in_stack_00000034 < this_ptr->len);
        }
      }
    }
    else if (in_stack_00000024 == 0x4c) {
      if (this_ptr->len < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No course in memory!");
      }
      else {
        this_ptr->loop = (uint)(this_ptr->loop == 0);
      }
    }
LAB_004431bd:
    if (local_1c == 3.78351e-44) {
      return;
    }
  } while( true );
}


// Assembly code:
// 00443040: PUSH EBX
//   Label: core_course.cpp_CCourse_showEditorMenu_FUN_00443040
// 00443041: PUSH ESI
// 00443042: PUSH EDI
// 00443043: PUSH EBP
// 00443044: SUB ESP,0x4ec
// 0044304a: MOV EBP,dword ptr [ESP + 0x500]
//   XREF to: Stack[0x4] (READ)
// 00443051: MOV ECX,0x41
// 00443056: LEA EDI,[ESP + 0x30c]
//   XREF to: Stack[-0x1f0] (DATA)
// 0044305d: MOV ESI,0x66e940
//   XREF to: 0066e940 (DATA)
// 00443062: MOVSD.REP ES:EDI,ESI
//   XREF to: 0066e940 (READ)
//   XREF to: 0066e944 (READ)
// 00443064: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00443064
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00443069: PUSH 0x0
// 0044306b: PUSH 0x0
// 0044306d: PUSH 0x619195
//   XREF to: 00619195 (DATA)
// 00443072: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00443077: ADD ESP,0xc
// 0044307a: PUSH 0x16
// 0044307c: PUSH 0x0
// 0044307e: PUSH 0x6191ae
//   XREF to: 006191ae (DATA)
// 00443083: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00443088: ADD ESP,0xc
// 0044308b: PUSH 0x21
// 0044308d: PUSH 0x0
// 0044308f: PUSH 0x6191cc
//   XREF to: 006191cc (DATA)
// 00443094: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00443099: ADD ESP,0xc
// 0044309c: PUSH 0x37
// 0044309e: PUSH 0x0
// 004430a0: PUSH 0x6191e8
//   XREF to: 006191e8 (DATA)
// 004430a5: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004430aa: ADD ESP,0xc
// 004430ad: PUSH 0x42
// 004430af: PUSH 0x0
// 004430b1: PUSH 0x619208
//   XREF to: 00619208 (DATA)
// 004430b6: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004430bb: ADD ESP,0xc
// 004430be: PUSH 0x58
// 004430c0: PUSH 0x0
// 004430c2: PUSH 0x619228
//   XREF to: 00619228 (DATA)
// 004430c7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004430cc: ADD ESP,0xc
// 004430cf: PUSH 0x6e
// 004430d1: PUSH 0x0
// 004430d3: PUSH 0x619237
//   XREF to: 00619237 (DATA)
// 004430d8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004430dd: ADD ESP,0xc
// 004430e0: PUSH 0x79
// 004430e2: PUSH 0x0
// 004430e4: PUSH 0x619267
//   XREF to: 00619267 (DATA)
// 004430e9: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004430ee: ADD ESP,0xc
// 004430f1: PUSH 0x8f
// 004430f6: PUSH 0x0
// 004430f8: PUSH 0x619288
//   XREF to: 00619288 (DATA)
// 004430fd: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00443102: MOV EDX,dword ptr [EBP + 0x8]
// 00443105: ADD ESP,0xc
// 00443108: TEST EDX,EDX
// 0044310a: JZ 0x004431d6
//   XREF to: 004431d6 (CONDITIONAL_JUMP)
// 00443110: MOV EAX,0x619297
//   XREF to: 00619297 (DATA)
// 00443115: PUSH EAX
//   Label: LAB_00443115
//   XREF to: 00619297 (DATA)
//   XREF to: 0061929a (DATA)
// 00443116: PUSH 0x61929e
//   XREF to: 0061929e (DATA)
// 0044311b: LEA EAX,[ESP + 0x418]
//   XREF to: Stack[-0xec] (DATA)
// 00443122: PUSH EAX
// 00443123: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00443128: ADD ESP,0xc
// 0044312b: PUSH 0xa5
// 00443130: PUSH 0x0
// 00443132: LEA EAX,[ESP + 0x418]
//   XREF to: Stack[-0xec] (DATA)
// 00443139: PUSH EAX
// 0044313a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0044313f: ADD ESP,0xc
// 00443142: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00443147: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0044314c: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00443151: AND EAX,0xff
// 00443156: PUSH EAX
// 00443157: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0044315c: ADD ESP,0x4
// 0044315f: MOV dword ptr [ESP + 0x4e0],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00443166: CMP EAX,0x35
// 00443169: JNC 0x004435ef
//   XREF to: 004435ef (CONDITIONAL_JUMP)
// 0044316f: CMP EAX,0x32
// 00443172: JNC 0x00443617
//   XREF to: 00443617 (CONDITIONAL_JUMP)
// 00443178: CMP EAX,0x31
// 0044317b: JNZ 0x004431bd
//   XREF to: 004431bd (CONDITIONAL_JUMP)
// 0044317d: PUSH 0x0
// 0044317f: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x1f0] (DATA)
// 00443186: PUSH EAX
// 00443187: MOV EAX,0x6192b5
//   XREF to: 006192b5 (DATA)
// 0044318c: PUSH EAX
//   XREF to: 006192b5 (DATA)
// 0044318d: MOV EAX,0x6192bb
//   XREF to: 006192bb (DATA)
// 00443192: PUSH EAX
//   XREF to: 006192bb (DATA)
// 00443193: MOV EAX,0x6192c0
//   XREF to: 006192c0 (PARAM)
// 00443198: PUSH EAX
//   XREF to: 006192c0 (DATA)
// 00443199: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0044319f: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004431a0: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 004431a5: ADD ESP,0x18
// 004431a8: TEST EAX,EAX
// 004431aa: JZ 0x004431bd
//   XREF to: 004431bd (CONDITIONAL_JUMP)
// 004431ac: LEA EAX,[ESP + 0x30c]
//   XREF to: Stack[-0x1f0] (DATA)
// 004431b3: PUSH EAX
// 004431b4: PUSH EBP
// 004431b5: CALL core_course.cpp_CCourse_load_FUN_00442580
//   XREF to: 00442580 (UNCONDITIONAL_CALL)
// 004431ba: ADD ESP,0x8
//   Label: LAB_004431ba
// 004431bd: CMP dword ptr [ESP + 0x4e0],0x1b
//   Label: LAB_004431bd
//   XREF to: Stack[-0x1c] (READ)
// 004431c5: JNZ 0x00443064
//   XREF to: 00443064 (CONDITIONAL_JUMP)
// 004431cb: ADD ESP,0x4ec
// 004431d1: POP EBP
// 004431d2: POP EDI
// 004431d3: POP ESI
// 004431d4: POP EBX
// 004431d5: RET
// 004431d6: MOV EAX,0x61929a
//   Label: LAB_004431d6
//   XREF to: 0061929a (DATA)
// 004431db: JMP 0x00443115
//   XREF to: 00443115 (UNCONDITIONAL_JUMP)
// 004431e0: MOV EAX,dword ptr [EBP]
//   Label: LAB_004431e0
// 004431e3: CMP EAX,0x1
// 004431e6: JGE 0x004431fc
//   XREF to: 004431fc (CONDITIONAL_JUMP)
// 004431e8: MOV EAX,0x6192cc
//   XREF to: 006192cc (PARAM)
// 004431ed: PUSH EAX
//   XREF to: 006192cc (DATA)
// 004431ee: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004431f4: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004431f5: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004431fa: JMP 0x004431ba
//   XREF to: 004431ba (UNCONDITIONAL_JUMP)
// 004431fc: PUSH 0x1
//   Label: LAB_004431fc
// 004431fe: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x1f0] (DATA)
// 00443205: PUSH EAX
// 00443206: MOV EAX,0x6192df
//   XREF to: 006192df (DATA)
// 0044320b: PUSH EAX
//   XREF to: 006192df (DATA)
// 0044320c: MOV EAX,0x6192e3
//   XREF to: 006192e3 (DATA)
// 00443211: PUSH EAX
//   XREF to: 006192e3 (DATA)
// 00443212: MOV EAX,0x6192e8
//   XREF to: 006192e8 (PARAM)
// 00443217: PUSH EAX
//   XREF to: 006192e8 (DATA)
// 00443218: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0044321e: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0044321f: CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   XREF to: 0049fb70 (UNCONDITIONAL_CALL)
// 00443224: ADD ESP,0x18
// 00443227: TEST EAX,EAX
// 00443229: JZ 0x004431bd
//   XREF to: 004431bd (CONDITIONAL_JUMP)
// 0044322b: LEA EAX,[ESP + 0x30c]
//   XREF to: Stack[-0x1f0] (DATA)
// 00443232: PUSH EAX
// 00443233: PUSH EBP
// 00443234: CALL core_course.cpp_CCourse_save_FUN_00442a90
//   XREF to: 00442a90 (UNCONDITIONAL_CALL)
// 00443239: JMP 0x004431ba
//   XREF to: 004431ba (UNCONDITIONAL_JUMP)
// 0044323e: MOV ECX,0x41
//   Label: LAB_0044323e
// 00443243: MOV EDI,ESP
// 00443245: MOV ESI,0x66ea48
//   XREF to: 0066ea48 (DATA)
// 0044324a: MOVSD.REP ES:EDI,ESI
//   XREF to: 0066ea48 (READ)
//   XREF to: 0066ea4c (READ)
// 0044324c: PUSH 0x1
//   Label: LAB_0044324c
// 0044324e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4fc] (DATA)
// 00443252: PUSH EAX
// 00443253: PUSH 0x6192f4
//   XREF to: 006192f4 (DATA)
// 00443258: PUSH 0x6192fa
//   XREF to: 006192fa (DATA)
// 0044325d: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00443263: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00443264: CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   XREF to: 0049f420 (UNCONDITIONAL_CALL)
// 00443269: ADD ESP,0x14
// 0044326c: TEST EAX,EAX
// 0044326e: JZ 0x004431bd
//   XREF to: 004431bd (CONDITIONAL_JUMP)
// 00443274: MOV EAX,ESP
// 00443276: PUSH EAX
// 00443277: PUSH EBP
// 00443278: CALL core_course.cpp_OpeningCourseFile2_FUN_00442d70
//   XREF to: 00442d70 (UNCONDITIONAL_CALL)
// 0044327d: ADD ESP,0x8
// 00443280: TEST EAX,EAX
// 00443282: JZ 0x0044324c
//   XREF to: 0044324c (CONDITIONAL_JUMP)
// 00443284: PUSH 0x0
// 00443286: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x1f0] (DATA)
// 0044328d: PUSH EAX
// 0044328e: PUSH 0x0
// 00443290: PUSH 0x0
// 00443292: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x4fc] (DATA)
// 00443296: PUSH EAX
// 00443297: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0044329c: ADD ESP,0x14
// 0044329f: MOV ESI,0x61930b
//   XREF to: 0061930b (DATA)
// 004432a4: LEA EDI,[ESP + 0x30c]
//   XREF to: Stack[-0x1f0] (DATA)
// 004432ab: PUSH EDI
// 004432ac: SUB ECX,ECX
// 004432ae: DEC ECX
// 004432af: MOV AL,0x0
// 004432b1: SCASB.REPNE ES:EDI
// 004432b3: DEC EDI
// 004432b4: MOV AL,byte ptr [ESI]
//   Label: LAB_004432b4
//   XREF to: 0061930b (READ)
//   XREF to: 0061930d (READ)
// 004432b6: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x1f0] (DATA)
// 004432b8: CMP AL,0x0
// 004432ba: JZ 0x004432cc
//   XREF to: 004432cc (CONDITIONAL_JUMP)
// 004432bc: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061930c (READ)
//   XREF to: 0061930e (READ)
// 004432bf: ADD ESI,0x2
// 004432c2: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x1ef] (WRITE)
// 004432c5: ADD EDI,0x2
// 004432c8: CMP AL,0x0
// 004432ca: JNZ 0x004432b4
//   XREF to: 004432b4 (CONDITIONAL_JUMP)
// 004432cc: POP EDI
//   Label: LAB_004432cc
// 004432cd: JMP 0x004431bd
//   XREF to: 004431bd (UNCONDITIONAL_JUMP)
// 004432d2: MOV EAX,dword ptr [EBP]
//   Label: LAB_004432d2
// 004432d5: CMP EAX,0x1
// 004432d8: JGE 0x004432f0
//   XREF to: 004432f0 (CONDITIONAL_JUMP)
// 004432da: PUSH 0x61932c
//   XREF to: 0061932c (DATA)
// 004432df: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004432e5: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004432e6: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004432eb: JMP 0x004431ba
//   XREF to: 004431ba (UNCONDITIONAL_JUMP)
// 004432f0: PUSH 0x0
//   Label: LAB_004432f0
// 004432f2: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x2f4] (DATA)
// 004432f9: PUSH EAX
// 004432fa: PUSH 0x61933f
//   XREF to: 0061933f (DATA)
// 004432ff: PUSH 0x619345
//   XREF to: 00619345 (DATA)
// 00443304: PUSH 0x61934c
//   XREF to: 0061934c (DATA)
// 00443309: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0044330f: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00443310: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 00443315: ADD ESP,0x18
// 00443318: TEST EAX,EAX
// 0044331a: JZ 0x004431bd
//   XREF to: 004431bd (CONDITIONAL_JUMP)
// 00443320: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x2f4] (DATA)
// 00443327: PUSH EAX
// 00443328: CALL core_dmodel.cpp_loadModel_FUN_00478c00
//   XREF to: 00478c00 (UNCONDITIONAL_CALL)
// 0044332d: ADD ESP,0x4
// 00443330: PUSH EAX
// 00443331: PUSH EBP
// 00443332: CALL core_course.cpp_FUN_00443bc0
//   XREF to: 00443bc0 (UNCONDITIONAL_CALL)
// 00443337: JMP 0x004431ba
//   XREF to: 004431ba (UNCONDITIONAL_JUMP)
// 0044333c: MOV EAX,dword ptr [EBP]
//   Label: LAB_0044333c
// 0044333f: CMP EAX,0x1
// 00443342: JGE 0x00443359
//   XREF to: 00443359 (CONDITIONAL_JUMP)
// 00443344: PUSH 0x619367
//   XREF to: 00619367 (DATA)
// 00443349: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (DATA)
//   XREF to: 00678a60 (READ)
// 0044334e: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0044334f: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00443354: JMP 0x004431ba
//   XREF to: 004431ba (UNCONDITIONAL_JUMP)
// 00443359: PUSH 0x0
//   Label: LAB_00443359
// 0044335b: LEA EAX,[ESP + 0x4d4]
//   XREF to: Stack[-0x2c] (DATA)
// 00443362: PUSH EAX
// 00443363: PUSH 0x61937c
//   XREF to: 0061937c (DATA)
// 00443368: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0044336e: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0044336f: CALL shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300
//   XREF to: 004a0300 (UNCONDITIONAL_CALL)
// 00443374: ADD ESP,0x10
// 00443377: TEST EAX,EAX
// 00443379: JZ 0x004431bd
//   XREF to: 004431bd (CONDITIONAL_JUMP)
// 0044337f: MOV EAX,dword ptr [ESP + 0x4d0]
//   XREF to: Stack[-0x2c] (READ)
// 00443386: MOV dword ptr [ESP + 0x4b8],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0044338d: MOV EAX,dword ptr [ESP + 0x4d4]
//   XREF to: Stack[-0x28] (READ)
// 00443394: MOV dword ptr [ESP + 0x4c0],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0044339b: MOV EAX,dword ptr [ESP + 0x4d8]
//   XREF to: Stack[-0x24] (READ)
// 004433a2: MOV dword ptr [ESP + 0x4bc],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004433a9: LEA EAX,[ESP + 0x4b8]
//   XREF to: Stack[-0x44] (DATA)
// 004433b0: PUSH EAX
// 004433b1: LEA ESI,[ESP + 0x47c]
//   XREF to: Stack[-0x84] (DATA)
// 004433b8: LEA EDI,[ESP + 0x48c]
//   XREF to: Stack[-0x74] (DATA)
// 004433bf: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 004433c4: LEA ESI,[ESP + 0x47c]
//   XREF to: Stack[-0x84] (DATA)
// 004433cb: ADD ESP,0x4
// 004433ce: MOVSD ES:EDI,ESI
// 004433cf: MOVSD ES:EDI,ESI
// 004433d0: MOVSD ES:EDI,ESI
// 004433d1: MOVSD ES:EDI,ESI
// 004433d2: XOR EDI,EDI
// 004433d4: XOR EBX,EBX
// 004433d6: MOV dword ptr [ESP + 0x4e8],EDI
//   Label: LAB_004433d6
//   XREF to: Stack[-0x14] (WRITE)
// 004433dd: MOV ESI,dword ptr [ESP + 0x4e8]
//   XREF to: Stack[-0x14] (READ)
// 004433e4: CMP ESI,dword ptr [EBP]
// 004433e7: JGE 0x004431bd
//   XREF to: 004431bd (CONDITIONAL_JUMP)
// 004433ed: MOV EAX,dword ptr [EBP + 0x4]
// 004433f0: ADD EAX,EBX
// 004433f2: ADD EAX,0xc
// 004433f5: PUSH EAX
// 004433f6: LEA EAX,[ESP + 0x48c]
//   XREF to: Stack[-0x74] (DATA)
// 004433fd: PUSH EAX
// 004433fe: LEA ESI,[ESP + 0x4b0]
//   XREF to: Stack[-0x54] (DATA)
// 00443405: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 0044340a: MOV EAX,dword ptr [EBP + 0x4]
// 0044340d: LEA ESI,[ESP + 0x4b0]
//   XREF to: Stack[-0x54] (DATA)
// 00443414: LEA EDI,[EBX + EAX*0x1 + 0xc]
// 00443418: ADD ESP,0x8
// 0044341b: MOVSD ES:EDI,ESI
// 0044341c: MOVSD ES:EDI,ESI
// 0044341d: MOVSD ES:EDI,ESI
// 0044341e: MOVSD ES:EDI,ESI
// 0044341f: MOV EDI,dword ptr [ESP + 0x4e8]
//   XREF to: Stack[-0x14] (READ)
// 00443426: INC EDI
// 00443427: ADD EBX,0x1c
// 0044342a: JMP 0x004433d6
//   XREF to: 004433d6 (UNCONDITIONAL_JUMP)
// 0044342c: MOV EAX,dword ptr [EBP]
//   Label: LAB_0044342c
// 0044342f: CMP EAX,0x1
// 00443432: JGE 0x0044344a
//   XREF to: 0044344a (CONDITIONAL_JUMP)
// 00443434: PUSH 0x619398
//   XREF to: 00619398 (DATA)
// 00443439: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0044343f: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00443440: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00443445: JMP 0x004431ba
//   XREF to: 004431ba (UNCONDITIONAL_JUMP)
// 0044344a: PUSH 0x0
//   Label: LAB_0044344a
// 0044344c: PUSH 0x461c3c00
// 00443451: PUSH 0x3a83126f
// 00443456: PUSH 0x1
// 00443458: LEA EAX,[ESP + 0x4ec]
//   XREF to: Stack[-0x20] (DATA)
// 0044345f: PUSH EAX
// 00443460: PUSH 0x6193ac
//   XREF to: 006193ac (DATA)
// 00443465: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0044346b: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0044346c: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 00443471: ADD ESP,0x1c
// 00443474: TEST EAX,EAX
// 00443476: JZ 0x004431bd
//   XREF to: 004431bd (CONDITIONAL_JUMP)
// 0044347c: LEA EAX,[ESP + 0x460]
//   XREF to: Stack[-0x9c] (DATA)
// 00443483: MOV EBX,dword ptr [EBP + 0x4]
// 00443486: CMP EAX,EBX
// 00443488: JNZ 0x004434c6
//   XREF to: 004434c6 (CONDITIONAL_JUMP)
// 0044348a: LEA EAX,[ESP + 0x46c]
//   Label: LAB_0044348a
//   XREF to: Stack[-0x90] (DATA)
// 00443491: CMP EAX,EBX
// 00443493: JNZ 0x004434e5
//   XREF to: 004434e5 (CONDITIONAL_JUMP)
// 00443495: MOV ESI,0x1c
//   Label: LAB_00443495
// 0044349a: MOV EDI,0x1
// 0044349f: MOV EAX,dword ptr [EBP]
//   Label: LAB_0044349f
// 004434a2: CMP EDI,EAX
// 004434a4: JGE 0x004431bd
//   XREF to: 004431bd (CONDITIONAL_JUMP)
// 004434aa: MOV EAX,dword ptr [EBP + 0x4]
// 004434ad: ADD EAX,ESI
// 004434af: PUSH EAX
// 004434b0: LEA EAX,[ESP + 0x464]
//   XREF to: Stack[-0x9c] (DATA)
// 004434b7: PUSH EAX
// 004434b8: INC EDI
// 004434b9: ADD ESI,0x1c
// 004434bc: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 004434c1: ADD ESP,0x8
// 004434c4: JMP 0x0044349f
//   XREF to: 0044349f (UNCONDITIONAL_JUMP)
// 004434c6: MOV EAX,dword ptr [EBX]
//   Label: LAB_004434c6
// 004434c8: MOV dword ptr [ESP + 0x460],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 004434cf: MOV EAX,dword ptr [EBX + 0x4]
// 004434d2: MOV dword ptr [ESP + 0x464],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 004434d9: MOV EAX,dword ptr [EBX + 0x8]
// 004434dc: MOV dword ptr [ESP + 0x468],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 004434e3: JMP 0x0044348a
//   XREF to: 0044348a (UNCONDITIONAL_JUMP)
// 004434e5: MOV EAX,dword ptr [EBX]
//   Label: LAB_004434e5
// 004434e7: MOV dword ptr [ESP + 0x46c],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 004434ee: MOV EAX,dword ptr [EBX + 0x4]
// 004434f1: MOV dword ptr [ESP + 0x470],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 004434f8: MOV EAX,dword ptr [EBX + 0x8]
// 004434fb: MOV dword ptr [ESP + 0x474],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 00443502: JMP 0x00443495
//   XREF to: 00443495 (UNCONDITIONAL_JUMP)
// 00443504: MOV EAX,dword ptr [EBP]
//   Label: LAB_00443504
// 00443507: CMP EAX,0x1
// 0044350a: JGE 0x00443522
//   XREF to: 00443522 (CONDITIONAL_JUMP)
// 0044350c: PUSH 0x6193bf
//   XREF to: 006193bf (DATA)
// 00443511: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00443517: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00443518: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0044351d: JMP 0x004431ba
//   XREF to: 004431ba (UNCONDITIONAL_JUMP)
// 00443522: PUSH 0x6193d4
//   Label: LAB_00443522
//   XREF to: 006193d4 (DATA)
// 00443527: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0044352d: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0044352e: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 00443533: ADD ESP,0x8
// 00443536: TEST EAX,EAX
// 00443538: JZ 0x004431bd
//   XREF to: 004431bd (CONDITIONAL_JUMP)
// 0044353e: XOR EDI,EDI
// 00443540: MOV EAX,dword ptr [EBP]
// 00443543: MOV dword ptr [ESP + 0x4e4],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0044354a: TEST EAX,EAX
// 0044354c: JLE 0x004431bd
//   XREF to: 004431bd (CONDITIONAL_JUMP)
// 00443552: XOR EBX,EBX
// 00443554: MOV EAX,dword ptr [EBP + 0x4]
//   Label: LAB_00443554
// 00443557: ADD EAX,EBX
// 00443559: ADD EAX,0xc
// 0044355c: PUSH EAX
// 0044355d: LEA EAX,[ESP + 0x4c8]
//   XREF to: Stack[-0x38] (DATA)
// 00443564: PUSH EAX
// 00443565: CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
//   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)
// 0044356a: ADD ESP,0x8
// 0044356d: XOR EAX,EAX
// 0044356f: MOV dword ptr [ESP + 0x4cc],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00443576: LEA EAX,[ESP + 0x4c4]
//   XREF to: Stack[-0x38] (DATA)
// 0044357d: PUSH EAX
// 0044357e: LEA ESI,[ESP + 0x49c]
//   XREF to: Stack[-0x64] (DATA)
// 00443585: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 0044358a: MOV EAX,dword ptr [EBP + 0x4]
// 0044358d: LEA ESI,[ESP + 0x49c]
//   XREF to: Stack[-0x64] (DATA)
// 00443594: ADD ESP,0x4
// 00443597: LEA EDI,[EBX + EAX*0x1 + 0xc]
// 0044359b: ADD EBX,0x1c
// 0044359e: MOV EDX,dword ptr [ESP + 0x4e4]
//   XREF to: Stack[-0x18] (READ)
// 004435a5: MOVSD ES:EDI,ESI
// 004435a6: MOVSD ES:EDI,ESI
// 004435a7: MOVSD ES:EDI,ESI
// 004435a8: MOVSD ES:EDI,ESI
// 004435a9: INC EDX
// 004435aa: MOV ECX,dword ptr [EBP]
// 004435ad: MOV dword ptr [ESP + 0x4e4],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004435b4: CMP EDX,ECX
// 004435b6: JL 0x00443554
//   XREF to: 00443554 (CONDITIONAL_JUMP)
// 004435b8: JMP 0x004431bd
//   XREF to: 004431bd (UNCONDITIONAL_JUMP)
// 004435bd: MOV EAX,dword ptr [EBP]
//   Label: LAB_004435bd
// 004435c0: CMP EAX,0x1
// 004435c3: JL 0x004435d9
//   XREF to: 004435d9 (CONDITIONAL_JUMP)
// 004435c5: CMP dword ptr [EBP + 0x8],0x0
// 004435c9: SETZ AL
// 004435cc: AND EAX,0xff
// 004435d1: MOV dword ptr [EBP + 0x8],EAX
// 004435d4: JMP 0x004431bd
//   XREF to: 004431bd (UNCONDITIONAL_JUMP)
// 004435d9: PUSH 0x6193ed
//   Label: LAB_004435d9
//   XREF to: 006193ed (DATA)
// 004435de: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004435e4: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004435e5: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004435ea: JMP 0x004431ba
//   XREF to: 004431ba (UNCONDITIONAL_JUMP)
// 004435ef: JBE 0x004432d2
//   Label: LAB_004435ef
//   XREF to: 004432d2 (CONDITIONAL_JUMP)
// 004435f5: CMP EAX,0x37
// 004435f8: JC 0x0044333c
//   XREF to: 0044333c (CONDITIONAL_JUMP)
// 004435fe: JBE 0x0044342c
//   XREF to: 0044342c (CONDITIONAL_JUMP)
// 00443604: CMP EAX,0x38
// 00443607: JBE 0x00443504
//   XREF to: 00443504 (CONDITIONAL_JUMP)
// 0044360d: CMP EAX,0x4c
// 00443610: JZ 0x004435bd
//   XREF to: 004435bd (CONDITIONAL_JUMP)
// 00443612: JMP 0x004431bd
//   XREF to: 004431bd (UNCONDITIONAL_JUMP)
// 00443617: JBE 0x004431e0
//   Label: LAB_00443617
//   XREF to: 004431e0 (CONDITIONAL_JUMP)
// 0044361d: CMP EAX,0x33
// 00443620: JBE 0x0044323e
//   XREF to: 0044323e (CONDITIONAL_JUMP)
// 00443626: MOV ECX,0x41
// 0044362b: LEA EDI,[ESP + 0x104]
//   XREF to: Stack[-0x3f8] (DATA)
// 00443632: MOV ESI,0x66eb50
//   XREF to: 0066eb50 (DATA)
// 00443637: MOVSD.REP ES:EDI,ESI
//   XREF to: 0066eb50 (READ)
//   XREF to: 0066eb54 (READ)
// 00443639: PUSH 0x1
//   Label: LAB_00443639
// 0044363b: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x3f8] (DATA)
// 00443642: PUSH EAX
// 00443643: PUSH 0x619310
//   XREF to: 00619310 (DATA)
// 00443648: PUSH 0x619316
//   XREF to: 00619316 (DATA)
// 0044364d: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00443652: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00443653: CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   XREF to: 0049f420 (UNCONDITIONAL_CALL)
// 00443658: ADD ESP,0x14
// 0044365b: TEST EAX,EAX
// 0044365d: JZ 0x004431bd
//   XREF to: 004431bd (CONDITIONAL_JUMP)
// 00443663: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x3f8] (DATA)
// 0044366a: PUSH EAX
// 0044366b: PUSH EBP
// 0044366c: CALL core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0
//   XREF to: 00442bc0 (UNCONDITIONAL_CALL)
// 00443671: ADD ESP,0x8
// 00443674: TEST EAX,EAX
// 00443676: JZ 0x00443639
//   XREF to: 00443639 (CONDITIONAL_JUMP)
// 00443678: PUSH 0x0
// 0044367a: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x1f0] (DATA)
// 00443681: PUSH EAX
// 00443682: PUSH 0x0
// 00443684: PUSH 0x0
// 00443686: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0x3f8] (DATA)
// 0044368d: PUSH EAX
// 0044368e: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 00443693: ADD ESP,0x14
// 00443696: MOV ESI,0x619327
//   XREF to: 00619327 (DATA)
// 0044369b: LEA EDI,[ESP + 0x30c]
//   XREF to: Stack[-0x1f0] (DATA)
// 004436a2: PUSH EDI
// 004436a3: SUB ECX,ECX
// 004436a5: DEC ECX
// 004436a6: MOV AL,0x0
// 004436a8: SCASB.REPNE ES:EDI
// 004436aa: DEC EDI
// 004436ab: MOV AL,byte ptr [ESI]
//   Label: LAB_004436ab
//   XREF to: 00619327 (READ)
//   XREF to: 00619329 (READ)
// 004436ad: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x1f0] (DATA)
// 004436af: CMP AL,0x0
// 004436b1: JZ 0x004436c3
//   XREF to: 004436c3 (CONDITIONAL_JUMP)
// 004436b3: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00619328 (READ)
//   XREF to: 0061932a (READ)
// 004436b6: ADD ESI,0x2
// 004436b9: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x1ef] (WRITE)
// 004436bc: ADD EDI,0x2
// 004436bf: CMP AL,0x0
// 004436c1: JNZ 0x004436ab
//   XREF to: 004436ab (CONDITIONAL_JUMP)
// 004436c3: POP EDI
//   Label: LAB_004436c3
// 004436c4: JMP 0x004431bd
//   XREF to: 004431bd (UNCONDITIONAL_JUMP)
