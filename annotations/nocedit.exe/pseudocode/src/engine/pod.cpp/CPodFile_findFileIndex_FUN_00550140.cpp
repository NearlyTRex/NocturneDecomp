// Name: engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
// Address: 00550140
// Address Range: [[00550140, 005501ab]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(CPodFile *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(CPodFile *this_ptr,char *filename)

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
        iVar2 = crt_string_c_stricmp_FUN_005fe7f0
                          (filename,(char *)this_ptr->directory_entries[iVar1].name_or_offset);
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
