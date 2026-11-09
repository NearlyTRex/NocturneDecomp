// Name: engine_pod.cpp_CPod_findFile_FUN_0051b9d0
// Address: 0051b9d0
// Address Range: [[0051b9d0, 0051ba1f]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_findFile_FUN_0051b9d0(CPod *this_ptr,SFoundFileInfo *found_file_info)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_findFile_FUN_0051b9d0(CPod *this_ptr,SFoundFileInfo *found_file_info)

{
  int file_index;
  CPod *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      file_index = engine_pod_cpp_CPodFile_findFileIndex_FUN_0051a990
                             (*(CPodFile **)&pCVar1->field_0x4,(char *)found_file_info);
      if (-1 < file_index) {
        engine_pod_cpp_CPodFile_populateFileInfo_FUN_0051aa00
                  (*(CPodFile **)&pCVar1->field_0x4,file_index,found_file_info);
        return 1;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = (CPod *)&pCVar1->field_0x4;
    } while (iVar2 < *(int *)this_ptr);
  }
  return 0;
}
