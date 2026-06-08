// Name: engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460
// Address: 004b7460
// MANUAL RECONSTRUCTION
// Address Range: [[004b7460, 004b76c3]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_catalogPodFile_FUN_004b7460(CFileManager *this_ptr,char *pod_filename)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_catalogPodFile_FUN_004b7460(CFileManager *this_ptr,char *pod_filename)

{
  int iVar2;
  int iVar3;
  _tm *time_ptr;
  CPodFile local_d00;
  CPickList local_8d4;
  char local_52c [512];
  char local_32c [256];
  char local_22c [256];
  char local_12c [256];
  char local_2c [32];

  if (pod_filename == (char *)0x0) {
    iVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to catalog","*.pod",
                       local_52c,0);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    strcpy(local_52c,pod_filename);
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&local_d00);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(&local_d00,local_52c);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to catalog files!",local_52c);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_d00,0);
    return;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_8d4);
  shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(&local_8d4,1);
  iVar3 = 0;
  if (0 < local_d00.file_count) {
    do {
      time_ptr = _localtime
                           ((time_t *)&local_d00.directory_entries[iVar3].timestamp);
      _strftime(local_2c,0x1e,"%m/%d/%y %I:%M:%S %p",time_ptr);
      engine_dosio_cpp_splitPath_FUN_00481f20
                (local_d00.directory_entries[iVar3].name,(char *)0x0,local_22c
                 ,local_12c,local_32c);
      if (local_32c[0] == '.') {
        memmove(local_32c,local_32c + 1,strlen(local_32c));
      }
      _sprintf(local_52c,"%s\t%s\t%s\t%d\t%s",local_22c,local_12c,local_32c,
                 local_d00.directory_entries[iVar3].size,local_2c);
      strupr(local_52c);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8d4.base,local_52c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_d00.file_count);
  }
  _sprintf(local_52c,"Contents of pod file:\n%s",local_d00.filename);
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(&local_8d4,local_52c,-1,0)
  ;
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_8d4,0);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_d00,0);
  return;
}
