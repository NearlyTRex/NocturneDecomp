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
  BADSPACEBASE *in_ESP;
  uint unaff_ESI;
  uint *puVar7;
  uint *puVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  CQuaternion4f *pCVar12;
  char *pcVar14;
  byte bVar15;
  float in_stack_00000018;
  uint in_stack_00000024;
  uint in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_00000038;
  float afStackY_1818 [1221];
  CQuaternion4f *in_stack_fffffb48;
  CQuaternion4f *in_stack_fffffb4c;
  char acStack_3b8 [8];
  char acStack_3b0 [248];
  char acStack_2b8 [4];
  byte auStack_2b4 [196];
  uint local_1f0 [16];
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
                               "*.pth",SUB41 /* extract 2-byte value */(acStack_1b0,0)), iVar6 != 0)) {
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
                             SUB41 /* extract 2-byte value */(acStack_1b0,0));
          if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar3) != 0) {
            core_course_cpp_CCourse_save_FUN_00442a90(this_ptr);
          }
        }
      }
      else if (in_stack_00000024 < 0x34) {
        puVar7 = &DAT_0066ea48;
        puVar8 = (uint *)&stack0xfffffb44;
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar15 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar15 * -2 + 1;
        }
        do {
          bVar3 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                            (g_CEditorToolsPtr,"Import .CRS file",true,&stack0xfffffb44);
          if (CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar3) == 0) goto LAB_004431bd;
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
          *(uint *)pcVar4 = *puVar7;
          puVar7 = puVar7 + (uint)bVar15 * -2 + 1;
          pcVar4 = pcVar4 + ((uint)bVar15 * -2 + 1) * 4;
        }
        do {
          bVar3 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                            (g_CEditorToolsPtr,"Import .BON file",true,acStack_3b8);
          if (CONCAT31 /* combine 2-byte values */(extraout_var_01,bVar3) == 0) goto LAB_004431bd;
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
                           "*.kfm",SUB41 /* extract 2-byte value */(auStack_2b4,0));
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
            puVar7 = (uint *)((int)&(this_ptr->frame_list->frame1).orient.w + iVar6);
            puVar8 = puVar7 + (uint)bVar15 * -2 + 1;
            *puVar7 = unaff_ESI;
            *puVar8 = *(uint *)(&stack0xfffffffc + (uint)bVar15 * -8);
            puVar8[(uint)bVar15 * -2 + 1] =
                 *(uint *)(&stack0x00000000 + (uint)bVar15 * -8 + (uint)bVar15 * -8);
            (puVar8 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
                 *(uint *)
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
