// Name: core_course.cpp_CCourse_showEditorMenu_FUN_00443040
// Address: 00443040
// Address Range: [[00443040, 004436c8] [00605477, 006054e3]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_showEditorMenu_FUN_00443040(CCourse *this_ptr)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_showEditorMenu_FUN_00443040(CCourse *this_ptr)

{
  float *pfVar1;
  char cVar2;
  CCourseFrame *pCVar3;
  char *pcVar4;
  uint uVar5;
  CKeyFramedModel *model_ptr;
  CVector3f *point;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  char local_4fc [260];
  char local_3f8 [260];
  char local_2f4 [260];
  char local_1f0 [260];
  char local_ec [80];
  CBoundingBox3D local_9c;
  CQuaternion4f local_84;
  CQuaternion4f local_74;
  CQuaternion4f local_64;
  CQuaternion4f local_54;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  float local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  bVar10 = 0;
  pcVar4 = g_CourseLastPthPath;
  pcVar7 = local_1f0;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(uint *)pcVar7 = *(uint *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar7 = pcVar7 + 4;
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
    _sprintf(local_ec,"L. Loop flag is now %s",pcVar4);
    engine_2d_c_drawText_FUN_00401fd0(local_ec,0,0xa5);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    uVar5 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    local_1c = toupper(uVar5 & 0xff);
    if (local_1c < 0x35) {
      if (local_1c < 0x32) {
        if ((local_1c == 0x31) &&
           (iVar6 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                              (g_CEditorToolsPtr,"Load course","data",
                               "*.pth",local_1f0,0), iVar6 != 0)) {
          core_course_cpp_CCourse_load_FUN_00442580(this_ptr,local_1f0);
        }
      }
      else if (local_1c < 0x33) {
        if (this_ptr->len < 1) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"No course to save!");
        }
        else {
          iVar6 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                            (g_CEditorToolsPtr,"Save course","data","pth"
                             ,local_1f0,1);
          if (iVar6 != 0) {
            core_course_cpp_CCourse_save_FUN_00442a90(this_ptr,local_1f0);
          }
        }
      }
      else if (local_1c < 0x34) {
        pcVar4 = g_CourseLastCrsPath;
        pcVar7 = local_4fc;
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(uint *)pcVar7 = *(uint *)pcVar4;
          pcVar4 = pcVar4 + ((uint)bVar10 * -2 + 1) * 4;
          pcVar7 = (char *)((int)pcVar7 + ((uint)bVar10 * -2 + 1) * 4);
        }
        do {
          iVar6 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                            (g_CEditorToolsPtr,"Import .CRS file","*.crs",local_4fc,1
                            );
          if (iVar6 == 0) goto LAB_004431bd;
          iVar6 = core_course_cpp_CCourse_importCRS_FUN_00442d70(this_ptr,local_4fc);
        } while (iVar6 == 0);
        splitpath(local_4fc,(char *)0x0,(char *)0x0,local_1f0,(char *)0x0)
        ;
        pcVar7 = ".pth";
        iVar6 = -1;
        pcVar4 = local_1f0;
        do {
          pcVar9 = pcVar4;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar9 = pcVar4 + (uint)bVar10 * -2 + 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar9;
        } while (cVar2 != '\0');
        pcVar9 = pcVar9 + -1;
        do {
          cVar2 = *pcVar7;
          *pcVar9 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar9[1] = cVar2;
          pcVar9 = pcVar9 + 2;
        } while (cVar2 != '\0');
      }
      else {
        pcVar4 = g_CourseLastBonPath;
        pcVar7 = local_3f8;
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(uint *)pcVar7 = *(uint *)pcVar4;
          pcVar4 = pcVar4 + ((uint)bVar10 * -2 + 1) * 4;
          pcVar7 = pcVar7 + (uint)bVar10 * -8 + 4;
        }
        do {
          iVar6 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                            (g_CEditorToolsPtr,"Import .BON file","*.bon",local_3f8,1
                            );
          if (iVar6 == 0) goto LAB_004431bd;
          iVar6 = core_course_cpp_CCourse_importBON_FUN_00442bc0(this_ptr,local_3f8);
        } while (iVar6 == 0);
        splitpath(local_3f8,(char *)0x0,(char *)0x0,local_1f0,(char *)0x0)
        ;
        pcVar7 = ".pth";
        iVar6 = -1;
        pcVar4 = local_1f0;
        do {
          pcVar9 = pcVar4;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar9 = pcVar4 + (uint)bVar10 * -2 + 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar9;
        } while (cVar2 != '\0');
        pcVar9 = pcVar9 + -1;
        do {
          cVar2 = *pcVar7;
          *pcVar9 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar9[1] = cVar2;
          pcVar9 = pcVar9 + 2;
        } while (cVar2 != '\0');
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
                           "*.kfm",local_2f4,0);
        if (iVar6 != 0) {
          model_ptr = core_dmodel_cpp_loadModel_FUN_00478c00(local_2f4);
          core_course_cpp_CCourse_preview_FUN_00443bc0(this_ptr,model_ptr);
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
                          (g_CEditorToolsPtr,"Enter local P,B,H to apply:",&local_2c,0);
        if (iVar6 != 0) {
          local_44.x = local_2c.x;
          local_44.z = local_2c.y;
          local_44.y = local_2c.z;
          core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&local_44,&local_84);
          iVar6 = 0;
          for (local_14 = 0; local_14 < this_ptr->len; local_14 = local_14 + 1) {
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (&local_74,(CQuaternion4f *)((int)&(this_ptr->frames->orient).w + iVar6),
                       &local_54);
            pfVar1 = (float *)((int)&(this_ptr->frames->orient).w + iVar6);
            *pfVar1 = local_54.w;
            pfVar1[1] = local_54.x;
            pfVar1[2] = local_54.y;
            pfVar1[3] = local_54.z;
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
                          (g_CEditorToolsPtr,"Enter scale factor",&local_20,1,0.001,9999.0,
                           0);
        if (iVar6 != 0) {
          pCVar3 = this_ptr->frames;
          if ((CCourseFrame *)&local_9c != pCVar3) {
            local_9c.min.x = (pCVar3->pos).x;
            local_9c.min.y = (pCVar3->pos).y;
            local_9c.min.z = (pCVar3->pos).z;
          }
          if ((CCourseFrame *)&local_9c.max != pCVar3) {
            local_9c.max.x = (pCVar3->pos).x;
            local_9c.max.y = (pCVar3->pos).y;
            local_9c.max.z = (pCVar3->pos).z;
          }
          iVar6 = 0x1c;
          for (iVar8 = 1; iVar8 < this_ptr->len; iVar8 = iVar8 + 1) {
            point = (CVector3f *)((int)&(this_ptr->frames->pos).x + iVar6);
            iVar6 = iVar6 + 0x1c;
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_9c,point);
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
        iVar6 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Remove bank from course?");
        if ((iVar6 != 0) && (local_18 = 0, 0 < this_ptr->len)) {
          iVar6 = 0;
          do {
            core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                      ((CQuaternion4f *)&local_38,
                       (CVector3f *)((int)&(this_ptr->frames->orient).w + iVar6));
            local_38.z = 0.0;
            core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&local_38,&local_64);
            pfVar1 = (float *)((int)&(this_ptr->frames->orient).w + iVar6);
            iVar6 = iVar6 + 0x1c;
            *pfVar1 = local_64.w;
            pfVar1[1] = local_64.x;
            pfVar1[2] = local_64.y;
            pfVar1[3] = local_64.z;
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
