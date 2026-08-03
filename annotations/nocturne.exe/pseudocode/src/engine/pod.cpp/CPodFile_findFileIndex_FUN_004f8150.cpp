// Name: engine_pod.cpp_CPodFile_findFileIndex_FUN_004f8150
// Address: 004f8150
// Address Range: [[004f8150, 004f81bb]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPodFile_findFileIndex_FUN_004f8150(CPodFile *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPodFile_findFileIndex_FUN_004f8150(CPodFile *this_ptr,char *filename)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = this_ptr->file_count + -1;
  iVar4 = 0;
  if (-1 < iVar3) {
    do {
      while( true ) {
        iVar1 = (iVar4 + iVar3) / 2;
        iVar2 = _stricmp(filename,this_ptr->directory_entries[iVar1].name)
        ;
        if (iVar2 == 0) {
          return iVar1;
        }
        if (-1 < iVar2) break;
        iVar3 = iVar1 + -1;
        if (iVar3 < iVar4) {
          return -1;
        }
      }
      iVar4 = iVar1 + 1;
    } while (iVar4 <= iVar3);
  }
  return -1;
}
