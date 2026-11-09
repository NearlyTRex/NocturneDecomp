// Name: engine_pod.cpp_CPod_cleanup_FUN_00514650
// Address: 00514650
// Address Range: [[00514650, 00514698]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_cleanup_FUN_00514650(CPod *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_cleanup_FUN_00514650(CPod *this_ptr)

{
  CPodFile *pCVar1;
  CPod *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      if (*(CPodFile **)&pCVar2->field_0x4 != (CPodFile *)0x0) {
        pCVar1 = engine_pod_cpp_CPodFile_dtor_FUN_00512f70(*(CPodFile **)&pCVar2->field_0x4,0);
        FUN_005a30c4(pCVar1);
      }
      *(uint *)&pCVar2->field_0x4 = 0;
      iVar3 = iVar3 + 1;
      pCVar2 = (CPod *)&pCVar2->field_0x4;
    } while (iVar3 < *(int *)this_ptr);
  }
  *(uint *)this_ptr = 0;
  return;
}
