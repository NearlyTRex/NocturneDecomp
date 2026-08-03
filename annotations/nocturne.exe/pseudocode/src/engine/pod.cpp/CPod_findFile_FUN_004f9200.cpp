// Name: engine_pod.cpp_CPod_findFile_FUN_004f9200
// Address: 004f9200
// Address Range: [[004f9200, 004f924f]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_findFile_FUN_004f9200(CPod *this_ptr,SFoundFileInfo *found_file_info)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_findFile_FUN_004f9200(CPod *this_ptr,SFoundFileInfo *found_file_info)

{
  int file_index;
  CPod *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      file_index = engine_pod_cpp_CPodFile_findFileIndex_FUN_004f8150
                             (pCVar1->pod_files[0],found_file_info->found_path);
      if (-1 < file_index) {
        engine_pod_cpp_CPodFile_populateFileInfo_FUN_004f81c0
                  (pCVar1->pod_files[0],file_index,found_file_info);
        return 1;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = (CPod *)pCVar1->pod_files;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  return 0;
}
