// Name: engine_pod.cpp_CPod_findFile_FUN_004f9200
// Address: 004f9200
// Address Range: [[004f9200, 004f924f]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_findFile_FUN_004f9200(CPod *this_ptr,SFoundFileInfo *found_file_info)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_findFile_FUN_004f9200(CPod *this_ptr,SFoundFileInfo *found_file_info)

{
  int iVar1;
  CPod *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      iVar1 = engine_pod_cpp_CPodFile_findFileIndex_FUN_004f8150
                        (pCVar2->pod_files[0],found_file_info->found_path);
      if (-1 < iVar1) {
        engine_pod_cpp_CPodFile_populateFileInfo_FUN_004f81c0
                  (pCVar2->pod_files[0],iVar1,found_file_info);
        return 1;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CPod *)pCVar2->pod_files;
    } while (iVar3 < this_ptr->pod_file_count);
  }
  return 0;
}
