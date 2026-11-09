// Name: engine_pod.cpp_CPod_getPodIndexByFilename_FUN_0051be70
// Address: 0051be70
// Address Range: [[0051be70, 0051bf00]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_getPodIndexByFilename_FUN_0051be70(CPod *this_ptr,char *target_filename)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_getPodIndexByFilename_FUN_0051be70(CPod *this_ptr,char *target_filename)

{
  int iVar1;
  int iVar2;
  CPod *pCVar3;
  char acStack_210 [256];
  char acStack_110 [256];
  
  iVar2 = 0;
  engine_dosio_cpp_FUN_00461070(target_filename,(char *)0x0,(char *)0x0,acStack_110,(char *)0x0);
  pCVar3 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      engine_dosio_cpp_FUN_00461070
                ((char *)(*(int *)&pCVar3->field_0x4 + 4),(char *)0x0,(char *)0x0,acStack_210,
                 (char *)0x0);
      iVar1 = _stricmp(acStack_110,acStack_210);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CPod *)&pCVar3->field_0x4;
    } while (iVar2 < *(int *)this_ptr);
  }
  return -1;
}
