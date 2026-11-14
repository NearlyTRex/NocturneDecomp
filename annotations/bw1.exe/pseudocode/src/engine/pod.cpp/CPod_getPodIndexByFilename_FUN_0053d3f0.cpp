// Name: engine_pod.cpp_CPod_getPodIndexByFilename_FUN_0053d3f0
// Address: 0053d3f0
// Address Range: [[0053d3f0, 0053d480]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_getPodIndexByFilename_FUN_0053d3f0(CPod *this_ptr,char *target_filename)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_getPodIndexByFilename_FUN_0053d3f0(CPod *this_ptr,char *target_filename)

{
  int iVar1;
  int iVar2;
  CPod *pCVar3;
  char acStack_210 [256];
  char acStack_110 [256];
  
  iVar2 = 0;
  engine_dosio_cpp_splitPath_FUN_00479580
            (target_filename,(char *)0x0,(char *)0x0,acStack_110,(char *)0x0);
  pCVar3 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      engine_dosio_cpp_splitPath_FUN_00479580
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
