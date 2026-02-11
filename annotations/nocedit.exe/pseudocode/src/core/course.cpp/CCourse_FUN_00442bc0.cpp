// Name: core_course.cpp_CCourse_FUN_00442bc0
// Address: 00442bc0
// Address Range: [[00442bc0, 00442d64]]
// Convention: __cdecl
// Signature: int __cdecl core_course_cpp_CCourse_FUN_00442bc0(CCourse *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl core_course_cpp_CCourse_FUN_00442bc0(CCourse *this_ptr,char *filename)

{
  _FILE *file;
  int iVar1;
  char local_184 [360];
  byte local_1c [4];
  int local_18;
  byte local_14 [4];
  
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (filename,(char *)0x0,"rt","..\\core\\course.cpp",0x14b);
  if (file == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",filename);
    return 0;
  }
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file,"%d\n",local_1c);
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file,"%d,%d\n",&local_18,local_14);
  if (local_18 != 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"%s contains %d nodes - must only contain 1!",filename,local_18);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\course.cpp",0x161);
    return 0;
  }
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _sprintf(local_184,"Importing %s",filename);
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,local_184);
  core_course_cpp_CCourse_importMatrices_FUN_00442ea0(this_ptr);
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\course.cpp",0x178);
  return 1;
}
