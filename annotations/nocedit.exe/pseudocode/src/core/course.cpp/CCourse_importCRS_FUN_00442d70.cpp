// Name: core_course.cpp_CCourse_importCRS_FUN_00442d70
// Address: 00442d70
// Address Range: [[00442d70, 00442e9f]]
// Convention: __cdecl
// Signature: int __cdecl core_course_cpp_CCourse_importCRS_FUN_00442d70(CCourse *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl core_course_cpp_CCourse_importCRS_FUN_00442d70(CCourse *this_ptr,char *filename)

{
  _FILE *file;
  int iVar1;
  char local_17c [360];
  byte local_14 [4];
  int local_10;
  
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (filename,(char *)0x0,"rt","..\\core\\course.cpp",0x184);
  if (file == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",filename);
    return 0;
  }
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file,"%d\n",local_14);
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file,"%d\n",&local_10);
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _sprintf(local_17c,"Importing %s",filename);
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,local_17c);
  core_course_cpp_CCourse_importMatrices_FUN_00442ea0(this_ptr,file,local_10);
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\course.cpp",0x1a7);
  return 1;
}
