// Name: engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00515150
// Address: 00515150
// Address Range: [[00515150, 005151e0]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00515150(CPod *this_ptr,char *target_filename)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00515150(CPod *this_ptr,char *target_filename)

{
  int iVar1;
  int iVar2;
  CPod *pCVar3;
  char acStack_210 [256];
  char acStack_110 [256];
  
  iVar2 = 0;
  engine_dosio_cpp_splitPath_FUN_00465e50
            (target_filename,(char *)0x0,(char *)0x0,acStack_110,(char *)0x0);
  pCVar3 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      engine_dosio_cpp_splitPath_FUN_00465e50
                (pCVar3->pod_files[0]->filename,(char *)0x0,(char *)0x0,acStack_210,(char *)0x0);
      iVar1 = _stricmp(acStack_110,acStack_210);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CPod *)pCVar3->pod_files;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  return -1;
}
