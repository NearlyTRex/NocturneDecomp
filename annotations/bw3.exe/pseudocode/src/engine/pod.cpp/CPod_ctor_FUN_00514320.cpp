// Name: engine_pod.cpp_CPod_ctor_FUN_00514320
// Address: 00514320
// Address Range: [[00514320, 0051434b]]
// Convention: __cdecl
// Signature: CPod * __cdecl engine_pod_cpp_CPod_ctor_FUN_00514320(CPod *this_ptr)

#include "nocturne.h"

CPod * __cdecl engine_pod_cpp_CPod_ctor_FUN_00514320(CPod *this_ptr)

{
  CPod *pCVar1;
  
  *(uint *)this_ptr = 0;
  *(byte ***)&this_ptr->field_0x194 = &PTR_engine_pod_cpp_CPod_dtor_FUN_00514350_005e3424;
  pCVar1 = this_ptr;
  do {
    pCVar1 = (CPod *)&pCVar1->field_0x4;
    *(uint *)pCVar1 = 0;
  } while (pCVar1 != (CPod *)&this_ptr->field_0x190);
  return this_ptr;
}
