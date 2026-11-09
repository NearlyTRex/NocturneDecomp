// Name: engine_pod.cpp_CPod_ctor_FUN_0051b080
// Address: 0051b080
// Address Range: [[0051b080, 0051b0ab]]
// Convention: __cdecl
// Signature: CPod * __cdecl engine_pod_cpp_CPod_ctor_FUN_0051b080(CPod *this_ptr)

#include "nocturne.h"

CPod * __cdecl engine_pod_cpp_CPod_ctor_FUN_0051b080(CPod *this_ptr)

{
  CPod *pCVar1;
  
  *(uint *)this_ptr = 0;
  *(byte ***)&this_ptr->field_0x194 = &PTR_engine_pod_cpp_CPod_dtor_FUN_0051b0b0_005fad64;
  pCVar1 = this_ptr;
  do {
    pCVar1 = (CPod *)&pCVar1->field_0x4;
    *(uint *)pCVar1 = 0;
  } while (pCVar1 != (CPod *)&this_ptr->field_0x190);
  return this_ptr;
}
