// Name: engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
// Address: 004bccf0
// Address Range: [[004bccf0, 004bce95]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(CFileManager *this_ptr)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(CFileManager *this_ptr)

{
  _FILE *file_ptr;
  int iVar1;
  CPickList local_4d0;
  CFileFinder local_128;
  CStrList local_14;
  
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("pod.ini",(char *)0x0,"rt","..\\engine\\fileio.cpp",
                        4214);
  if (file_ptr != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\engine\\fileio.cpp",4216);
    return 1;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_4d0);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_4d0.base,"Create a POD.INI file now with all pods mounted.");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_4d0.base,"Create a POD.INI file now with no pods mounted.");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_4d0.base,"Oops - forget about it.");
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_4d0,"You do not have a POD.INI file.\nThe file manager requires a POD.INI\nfile to operate properly.",-1,0);
  if ((-1 < iVar1) && (iVar1 < 2)) {
    shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_14);
    if (iVar1 == 0) {
      engine_dosio_cpp_CFileFinder_ctor_FUN_00481c30(&local_128);
      engine_dosio_cpp_CFileFinder_openSearch_FUN_00481c70(&local_128,"*.pod");
      while (local_128.filename[0] != '\0') {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_14,local_128.filename);
        engine_dosio_cpp_CFileFinder_findNext_FUN_00481cf0(&local_128);
      }
      engine_dosio_cpp_CFileFinder_dtor_FUN_00481c50(&local_128,0);
    }
    engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620(this_ptr,&local_14);
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_14,0);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_4d0,0);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_4d0,0);
  return 0;
}
