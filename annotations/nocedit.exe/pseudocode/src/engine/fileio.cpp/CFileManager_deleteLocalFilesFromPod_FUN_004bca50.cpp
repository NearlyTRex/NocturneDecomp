// Name: engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
// Address: 004bca50
// Address Range: [[004bca50, 004bcb64]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50(CFileManager * this_ptr, char * pod_filename)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
          (CFileManager *this_ptr,char *pod_filename)

{
  int iVar1;
  int iVar2;
  CPodFile local_438;
  int local_c;
  
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&local_438);
  iVar1 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(&local_438,pod_filename);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to delete local files.",pod_filename);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_438);
    return 0;
  }
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Deleting local files");
  iVar1 = 0;
  if (0 < local_438.file_count) {
    iVar2 = 0;
    do {
      crt_io_c_deleteFile_FUN_005ff9d0
                (*(char **)((int)&(local_438.directory_entries)->name_or_offset + iVar2));
      iVar1 = iVar1 + 1;
      local_c = iVar1;
      shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                (g_CEditorToolsPtr,(float)iVar1,(float)local_438.file_count);
      iVar2 = iVar2 + 0x14;
    } while (iVar1 < local_438.file_count);
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_438);
  return 1;
}
