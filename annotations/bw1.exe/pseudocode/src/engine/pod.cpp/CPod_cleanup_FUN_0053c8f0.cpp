// Name: engine_pod.cpp_CPod_cleanup_FUN_0053c8f0
// Address: 0053c8f0
// Address Range: [[0053c8f0, 0053c938]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_cleanup_FUN_0053c8f0(CPod *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_cleanup_FUN_0053c8f0(CPod *this_ptr)

{
  CPodFile *ptr;
  CPod *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      if (pCVar1->pod_files[0] != (CPodFile *)0x0) {
        ptr = engine_pod_cpp_CPodFile_dtor_FUN_0053b210(pCVar1->pod_files[0],0);
        debugFreeChecked(ptr);
      }
      pCVar1->pod_files[0] = (CPodFile *)0x0;
      iVar2 = iVar2 + 1;
      pCVar1 = (CPod *)pCVar1->pod_files;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  this_ptr->pod_file_count = 0;
  return;
}
