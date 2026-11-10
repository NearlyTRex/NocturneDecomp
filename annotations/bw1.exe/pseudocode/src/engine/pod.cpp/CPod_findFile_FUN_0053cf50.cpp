// Name: engine_pod.cpp_CPod_findFile_FUN_0053cf50
// Address: 0053cf50
// Address Range: [[0053cf50, 0053cf9f]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_findFile_FUN_0053cf50(CPod *this_ptr,SFoundFileInfo *found_file_info)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_findFile_FUN_0053cf50(CPod *this_ptr,SFoundFileInfo *found_file_info)

{
  int file_index;
  CPod *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      file_index = engine_pod_cpp_CPodFile_findFileIndex_FUN_0053bed0
                             (pCVar1->pod_files[0],(char *)found_file_info);
      if (-1 < file_index) {
        engine_pod_cpp_CPodFile_populateFileInfo_FUN_0053bf40
                  (pCVar1->pod_files[0],file_index,found_file_info);
        return 1;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = (CPod *)pCVar1->pod_files;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  return 0;
}
