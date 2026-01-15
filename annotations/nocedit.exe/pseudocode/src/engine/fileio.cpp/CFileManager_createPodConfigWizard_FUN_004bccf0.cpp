// Name: engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
// Address: 004bccf0
// Address Range: [[004bccf0, 004bce95]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(CFileManager * this_ptr)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(CFileManager *this_ptr)

{
  FILE *file_ptr;
  int iVar1;
  uint in_stack_fffffb30;
  uint in_stack_fffffb34;
  char **in_stack_fffffb38;
  CStrList_vtable *in_stack_fffffb3c;
  uint in_stack_fffffb40;
  CFileFinder local_128;
  CStrList local_14;
  
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("pod.ini",(char *)0x0,"rt","..\\engine\\fileio.cpp",
                        0x1076);
  if (file_ptr != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\engine\\fileio.cpp",0x1078);
    return 1;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffb30);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffb30,"Create a POD.INI file now with all pods mounted.");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffb30,"Create a POD.INI file now with no pods mounted.");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffb30,"Oops - forget about it.");
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffb30,"You do not have a POD.INI file.\nThe file manager requires a POD.INI\nfile to operate properly.",-1,0);
  if ((-1 < iVar1) && (iVar1 < 2)) {
    shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_14);
    if (iVar1 == 0) {
      engine_dosio_c_CFileFinder_ctor_FUN_00481c30(&local_128);
      engine_dosio_c_CFileFinder_openSearch_FUN_00481c70(&local_128,"*.pod");
      while (local_128.filename[0] != '\0') {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_14,local_128.filename);
        engine_dosio_c_CFileFinder_findNext_FUN_00481cf0(&local_128);
      }
      engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&local_128,0);
    }
    engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620(this_ptr,&local_14);
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_14,0,in_stack_fffffb30);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffb30,0,in_stack_fffffb30,in_stack_fffffb34,
               (uint)in_stack_fffffb38,(uint)in_stack_fffffb3c,in_stack_fffffb40);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffb30,0,in_stack_fffffb30,in_stack_fffffb34,
             (uint)in_stack_fffffb38,(uint)in_stack_fffffb3c,in_stack_fffffb40);
  return 0;
}
