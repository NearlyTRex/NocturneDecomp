// Name: engine_pod.cpp_CPod_ctor_FUN_0051b080
// Address: 0051b080
// Address Range: [[0051b080, 0051b0ab]]
// Convention: __cdecl
// Signature: CPod * __cdecl engine_pod_cpp_CPod_ctor_FUN_0051b080(CPod *this_ptr)

#include "nocturne.h"

CPod * __cdecl engine_pod_cpp_CPod_ctor_FUN_0051b080(CPod *this_ptr)

{
  CPod *pCVar1;
  
  this_ptr->pod_file_count = 0;
  this_ptr->vtable = (CPod_vtable *)&PTR_engine_pod_cpp_CPod_dtor_FUN_0051b0b0_005fad64;
  pCVar1 = this_ptr;
  do {
    pCVar1 = (CPod *)pCVar1->pod_files;
    *(CPodFile **)pCVar1 = (CPodFile *)0x0;
  } while (pCVar1 != (CPod *)(this_ptr->pod_files + 99));
  return this_ptr;
}
