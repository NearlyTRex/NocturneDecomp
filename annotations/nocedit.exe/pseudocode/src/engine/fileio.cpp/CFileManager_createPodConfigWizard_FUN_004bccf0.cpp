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
  BADSPACEBASE *in_ESP;
  CFileManager *in_stack_0000002c;
  CStrList_vtable *in_stack_fffffb48;
  CStrList_vtable *in_stack_fffffb4c;
  CStrList_vtable *in_stack_fffffb50;
  CStrList_vtable *in_stack_fffffb54;
  uint in_stack_fffffb58;
  uint in_stack_fffffb5c;
  uint in_stack_fffffb60;
  uint in_stack_fffffb64;
  char **in_stack_fffffb68;
  CStrList_vtable *in_stack_fffffb6c;
  uint in_stack_fffffb70;
  char acStack_104 [256];
  
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("pod.ini",(char *)0x0,"rt","..\\engine\\fileio.cpp",
                        0x1076);
  if (file_ptr != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\engine\\fileio.cpp",0x1078);
    return 1;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffb34);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffb38,"Create a POD.INI file now with all pods mounted.");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffb3c,"Create a POD.INI file now with no pods mounted.");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffb40,"Oops - forget about it.");
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffb44,"You do not have a POD.INI file.\nThe file manager requires a POD.INI\nfile to operate properly.",-1,0);
  if ((-1 < iVar1) && (iVar1 < 2)) {
    shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&this_ptr);
    if (iVar1 == 0) {
      engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)&stack0xfffffef4);
      engine_dosio_c_CFileFinder_openSearch_FUN_00481c70
                ((CFileFinder *)&stack0xfffffef8,"*.pod");
      while (acStack_104[0] != '\0') {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0x00000010,acStack_104);
        engine_dosio_c_CFileFinder_findNext_FUN_00481cf0((CFileFinder *)&stack0xfffffef8);
      }
      engine_dosio_c_CFileFinder_dtor_FUN_00481c50((CFileFinder *)acStack_104,0);
    }
    engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
              (in_stack_0000002c,(CStrList *)&stack0x00000014);
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0x00000018,0,in_stack_fffffb5c);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffb60,0,in_stack_fffffb60,in_stack_fffffb64,
               (uint)in_stack_fffffb68,(uint)in_stack_fffffb6c,in_stack_fffffb70);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffb48,0,(uint)in_stack_fffffb48,(uint)in_stack_fffffb4c,
             (uint)in_stack_fffffb50,(uint)in_stack_fffffb54,in_stack_fffffb58);
  return 0;
}
