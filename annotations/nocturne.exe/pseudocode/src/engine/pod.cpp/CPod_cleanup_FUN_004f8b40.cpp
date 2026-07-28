// Name: engine_pod.cpp_CPod_cleanup_FUN_004f8b40
// Address: 004f8b40
// Address Range: [[004f8b40, 004f8b88]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_cleanup_FUN_004f8b40(CPod *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_cleanup_FUN_004f8b40(CPod *this_ptr)

{
  CPodFile *pCVar1;
  CPod *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      if (pCVar2->pod_files[0] != (CPodFile *)0x0) {
        pCVar1 = engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0(pCVar2->pod_files[0],0);
        FUN_00564494(pCVar1);
      }
      pCVar2->pod_files[0] = (CPodFile *)0x0;
      iVar3 = iVar3 + 1;
      pCVar2 = (CPod *)pCVar2->pod_files;
    } while (iVar3 < this_ptr->pod_file_count);
  }
  this_ptr->pod_file_count = 0;
  return;
}
