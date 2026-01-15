// Name: core_course.cpp_OpeningCourseFile2_FUN_00442d70
// Address: 00442d70
// Address Range: [[00442d70, 00442e9f]]
// Convention: unknown
// Signature: undefined core_course.cpp_OpeningCourseFile2_FUN_00442d70()

#include "nocturne.h"

/* Signature: byte core_course.cpp_OpeningCourseFile2(uint param_1, uint param_2)
    */

uint
core_course_cpp_OpeningCourseFile2_FUN_00442d70
          (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
          CCourse *param_5,char *param_6)

{
  FILE *file;
  int iVar1;
  char local_17c [360];
  byte local_14 [4];
  byte local_10 [4];
  
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (param_6,(char *)0x0,"rt","..\\core\\course.cpp",0x184);
  if (file == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",param_6);
    return 0;
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",local_14,unaff_EBX);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",local_10);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_sprintf_FUN_005fdbd0(local_17c,"Importing %s",param_6);
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,local_17c);
  core_course_cpp_CCourse_importMatrices_FUN_00442ea0(param_5);
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\course.cpp",0x1a7);
  return 1;
}
