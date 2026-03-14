// Name: core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0
// Address: 0058a3d0
// Address Range: [[0058a3d0, 0058a49f]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_importBON_FUN_0058a3d0(CBoneStructure *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_importBON_FUN_0058a3d0(CBoneStructure *this_ptr,char *filename)

{
  CBoneStructure *this_ptr_00;
  int iVar1;
  int iVar2;
  byte auStack_18 [4];
  int local_14;
  
  this_ptr_00 = (CBoneStructure *)
                shape_memdbg_cpp_openFile_FUN_0050f7a0
                          (filename,(char *)0x0,"rt","..\\core\\skeledit.cpp",0x27c);
  if (this_ptr_00 == (CBoneStructure *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x27d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::importBON can't open %s",filename);
  }
  iVar2 = 1;
  do {
    iVar1 = _fgetc((_FILE *)this_ptr_00);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  _fscanf((_FILE *)this_ptr_00,"%d\n",auStack_18);
  core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0
            (this_ptr,(_FILE *)this_ptr_00,&local_14);
  core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10(this_ptr,(_FILE *)this_ptr_00,0);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0((_FILE *)this_ptr_00,"..\\core\\skeledit.cpp",0x290);
  core_skeledit_cpp_CBoneStructure_fixupMatrices_FUN_0058adb0(this_ptr);
  return;
}
