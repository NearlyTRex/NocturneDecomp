// Name: engine_pod.cpp_CPod_ctor_FUN_004f8810
// Address: 004f8810
// Address Range: [[004f8810, 004f883b]]
// Convention: __cdecl
// Signature: CPod * __cdecl engine_pod_cpp_CPod_ctor_FUN_004f8810(CPod *this_ptr)

#include "nocturne.h"

CPod * __cdecl engine_pod_cpp_CPod_ctor_FUN_004f8810(CPod *this_ptr)

{
  CPod *pCVar1;
  
  this_ptr->pod_file_count = 0;
  this_ptr->vtable = &g_CPodVTable;
  pCVar1 = this_ptr;
  do {
    pCVar1 = (CPod *)pCVar1->pod_files;
    *(CPodFile **)pCVar1 = (CPodFile *)0x0;
  } while (pCVar1 != (CPod *)(this_ptr->pod_files + 99));
  return this_ptr;
}
