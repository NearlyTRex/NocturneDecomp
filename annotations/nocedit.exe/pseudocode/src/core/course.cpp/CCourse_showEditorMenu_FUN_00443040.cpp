// Name: core_course.cpp_CCourse_showEditorMenu_FUN_00443040
// Address: 00443040
// Address Range: [[00443040, 004436c8]]
// Convention: __cdecl
// Signature: void core_course.cpp_CCourse_showEditorMenu_FUN_00443040(CCourse * this_ptr)

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
  uint *puVar7;
  char *pcVar8;
  uint *puVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  char *pcVar13;
  byte bVar14;
  float afStackY_1860 [1234];
  CQuaternion4f *in_stack_fffffb04;
  char local_3f8 [260];
  char local_2f4 [260];
  char local_1f0 [260];
  char local_ec [80];
  byte local_9c [16];
  float local_8c;
  float local_88;
  float local_84;
  float afStack_80 [3];
  CQuaternion4f local_74;
  float local_64;
  float afStack_60 [4];
  float afStack_50 [3];
  byte local_44 [12];
  byte local_38 [16];
  float local_28;
  float local_24;
  float local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  bVar14 = 0;
  puVar7 = &DAT_0066e940;
  pcVar4 = local_1f0;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(uint *)pcVar4 = *puVar7;
    puVar7 = puVar7 + 1;
    pcVar4 = pcVar4 + 4;
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
    crt_stdio_c_sprintf_FUN_005fdbd0(local_ec,"L. Loop flag is now %s",pcVar4);
    engine_2d_c_drawText_FUN_00401fd0(local_ec,0,0xa5);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    uVar5 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    local_1c = crt_ctype_c_toupper_FUN_005ff9e0(uVar5 & 0xff);
    if (local_1c < 0x35) {
      if (local_1c < 0x32) {
        if ((local_1c == 0x31) &&
           (iVar6 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                              (g_CEditorToolsPtr,"Load course","data",
                               "*.pth",SUB41 /* extract 2-byte value */(local_1f0,0)), iVar6 != 0)) {
          core_course_cpp_CCourse_load_FUN_00442580(this_ptr,local_1f0);
        }
      }
      else if (local_1c < 0x33) {
        if (this_ptr->len < 1) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"No course to save!");
        }
        else {
          bVar3 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                            (g_CEditorToolsPtr,"Save course","data",0x6192df,
                             SUB41 /* extract 2-byte value */(local_1f0,0));
          if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar3) != 0) {
            core_course_cpp_CCourse_save_FUN_00442a90(this_ptr);
          }
        }
      }
      else if (local_1c < 0x34) {
        puVar7 = &DAT_0066ea48;
        puVar9 = (uint *)&stack0xfffffb04;
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + (uint)bVar14 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar14 * -2 + 1;
        }
        do {
          bVar3 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                            (g_CEditorToolsPtr,"Import .CRS file",true,&stack0xfffffb04);
          if (CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar3) == 0) goto LAB_004431bd;
          iVar6 = core_course_cpp_OpeningCourseFile2_FUN_00442d70();
        } while (iVar6 == 0);
        crt_string_c_splitpath_FUN_005ff178
                  (&stack0xfffffb04,(char *)0x0,(char *)0x0,local_1f0,(char *)0x0);
        pcVar8 = ".pth";
        iVar6 = -1;
        pcVar4 = local_1f0;
        do {
          pcVar13 = pcVar4;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar13 = pcVar4 + (uint)bVar14 * -2 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        pcVar13 = pcVar13 + -1;
        do {
          cVar1 = *pcVar8;
          *pcVar13 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar13[1] = cVar1;
          pcVar13 = pcVar13 + 2;
        } while (cVar1 != '\0');
      }
      else {
        puVar7 = &DAT_0066eb50;
        pcVar4 = local_3f8;
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(uint *)pcVar4 = *puVar7;
          puVar7 = puVar7 + (uint)bVar14 * -2 + 1;
          pcVar4 = pcVar4 + ((uint)bVar14 * -2 + 1) * 4;
        }
        do {
          bVar3 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                            (g_CEditorToolsPtr,"Import .BON file",true,local_3f8);
          if (CONCAT31 /* combine 2-byte values */(extraout_var_01,bVar3) == 0) goto LAB_004431bd;
          iVar6 = core_course_cpp_OpeningCourseFileMaybe_FUN_00442bc0();
        } while (iVar6 == 0);
        crt_string_c_splitpath_FUN_005ff178(local_3f8,(char *)0x0,(char *)0x0,local_1f0,(char *)0x0)
        ;
        pcVar8 = ".pth";
        iVar6 = -1;
        pcVar4 = local_1f0;
        do {
          pcVar13 = pcVar4;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar13 = pcVar4 + (uint)bVar14 * -2 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        pcVar13 = pcVar13 + -1;
        do {
          cVar1 = *pcVar8;
          *pcVar13 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar13[1] = cVar1;
          pcVar13 = pcVar13 + 2;
        } while (cVar1 != '\0');
      }
    }
    else if (local_1c < 0x36) {
      if (this_ptr->len < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No course to view!");
      }
      else {
        iVar6 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                          (g_CEditorToolsPtr,"Select model to fly around","models",
                           "*.kfm",SUB41 /* extract 2-byte value */(local_2f4,0));
        if (iVar6 != 0) {
          core_dmodel_cpp_loadModel_FUN_00478c00(local_2f4);
          core_course_cpp_FUN_00443bc0();
        }
      }
    }
    else if (local_1c < 0x37) {
      if (this_ptr->len < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No course to rotate!");
      }
      else {
        iVar6 = shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                          (g_CEditorToolsPtr,"Enter local P,B,H to apply:",
                           (CVector3f *)(local_38 + 0xc),false);
        if (iVar6 != 0) {
          local_44._0_4_ = local_38._12_4_;
          local_44._8_4_ = local_28;
          local_44._4_4_ = local_24;
          core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                    ((CQuaternion4f *)local_44,(CVector3f *)in_stack_fffffb04);
          local_74.w = local_84;
          pfVar10 = (float *)((int)&local_74 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
          *(float *)((int)&local_74 + (uint)bVar14 * -8 + 4) = afStack_80[(uint)bVar14 * -2];
          *pfVar10 = afStack_80[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
          pfVar10[(uint)bVar14 * -2 + 1] =
               (afStack_80 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
          iVar6 = 0;
          for (local_14 = 0; local_14 < this_ptr->len; local_14 = local_14 + 1) {
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (&local_74,
                       (CQuaternion4f *)((int)&(this_ptr->frame_list->frame1).orient.w + iVar6),
                       in_stack_fffffb04);
            pfVar10 = (float *)((int)&(this_ptr->frame_list->frame1).orient.w + iVar6);
            pfVar11 = pfVar10 + (uint)bVar14 * -2 + 1;
            *pfVar10 = afStack_60[3];
            *pfVar11 = *(float *)(local_44 + (uint)bVar14 * -8 + -0xc);
            pfVar11[(uint)bVar14 * -2 + 1] =
                 *(float *)(local_44 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + -8);
            (pfVar11 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
                 *(float *)((int)(local_44 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + -8) +
                           ((uint)bVar14 * -2 + 1) * 4);
            iVar6 = iVar6 + 0x1c;
          }
        }
      }
    }
    else if (local_1c < 0x38) {
      if (this_ptr->len < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No course to scale!");
      }
      else {
        iVar6 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                          (g_CEditorToolsPtr,"Enter scale factor",&local_20,true,0.001,
                           9999.0,false);
        if (iVar6 != 0) {
          pCVar2 = this_ptr->frame_list;
          if ((CCourseFrameList *)local_9c != pCVar2) {
            local_9c._0_4_ = (pCVar2->frame1).pos.x;
            local_9c._4_4_ = (pCVar2->frame1).pos.y;
            local_9c._8_4_ = (pCVar2->frame1).pos.z;
          }
          if ((CCourseFrameList *)(local_9c + 0xc) != pCVar2) {
            local_9c._12_4_ = (pCVar2->frame1).pos.x;
            local_8c = (pCVar2->frame1).pos.y;
            local_88 = (pCVar2->frame1).pos.z;
          }
          iVar6 = 0x1c;
          for (iVar12 = 1; iVar12 < this_ptr->len; iVar12 = iVar12 + 1) {
            point = (CVector3f *)((int)&(this_ptr->frame_list->frame1).pos.x + iVar6);
            iVar6 = iVar6 + 0x1c;
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)local_9c,point);
          }
        }
      }
    }
    else if (local_1c < 0x39) {
      if (this_ptr->len < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No course in memory!");
      }
      else {
        iVar6 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Remove bank from course?");
        if ((iVar6 != 0) && (local_18 = 0, 0 < this_ptr->len)) {
          iVar6 = 0;
          do {
            core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                      ((CVector3f *)local_38,
                       (CQuaternion4f *)((int)&(this_ptr->frame_list->frame1).orient.w + iVar6));
            local_38._8_4_ = 0.0;
            core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                      ((CQuaternion4f *)local_38,(CVector3f *)in_stack_fffffb04);
            pfVar10 = (float *)((int)&(this_ptr->frame_list->frame1).orient.w + iVar6);
            iVar6 = iVar6 + 0x1c;
            pfVar11 = pfVar10 + (uint)bVar14 * -2 + 1;
            *pfVar10 = local_64;
            *pfVar11 = afStack_60[(uint)bVar14 * -2];
            pfVar11[(uint)bVar14 * -2 + 1] = afStack_60[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
            (pfVar11 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
                 (afStack_60 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
            local_18 = local_18 + 1;
          } while (local_18 < this_ptr->len);
        }
      }
    }
    else if (local_1c == 0x4c) {
      if (this_ptr->len < 1) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No course in memory!");
      }
      else {
        this_ptr->loop = (uint)(this_ptr->loop == 0);
      }
    }
LAB_004431bd:
    if (local_1c == 0x1b) {
      return;
    }
  } while( true );
}
