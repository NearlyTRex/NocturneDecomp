// Name: engine_pod.cpp_CPod_cleanup_FUN_004f8b40
// Address: 004f8b40
// Address Range: [[004f8b40, 004f8b88]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_cleanup_FUN_004f8b40(CPod *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_cleanup_FUN_004f8b40(CPod *this_ptr)

{
  CPodFile *ptr;
  CPod *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      if (pCVar1->pod_files[0] != (CPodFile *)0x0) {
        ptr = engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0(pCVar1->pod_files[0],0);
        operator_delete(ptr);
      }
      pCVar1->pod_files[0] = (CPodFile *)0x0;
      iVar2 = iVar2 + 1;
      pCVar1 = (CPod *)pCVar1->pod_files;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  this_ptr->pod_file_count = 0;
  return;
}
