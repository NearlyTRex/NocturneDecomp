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
  BADSPACEBASE *in_ESP;
  int iVar2;
  char *pcStack_1c;
  CPodDirectoryEntry *pCStack_18;
  char *pcStack_14;
  
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xfffffbc8);
  iVar1 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    ((CPodFile *)&stack0xfffffbcc,pod_filename);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to delete local files.");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffffbd4);
    return 0;
  }
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Deleting local files");
  iVar1 = 0;
  if (0 < (int)pcStack_1c) {
    iVar2 = 0;
    do {
      crt_io_c_deleteFile_FUN_005ff9d0(*(char **)((int)&pCStack_18->name_or_offset + iVar2));
      iVar1 = iVar1 + 1;
      shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                (g_CEditorToolsPtr,(float)iVar1,(float)(int)pCStack_18);
      iVar2 = iVar2 + 0x14;
    } while (iVar1 < (int)pcStack_14);
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffffbe0);
  return 1;
}
