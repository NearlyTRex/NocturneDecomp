// Name: core_drip.cpp_CDrip_dtor_FUN_0046d6a0
// Address: 0046d6a0
// Address Range: [[0046d6a0, 0046d6ed]]
// Convention: __cdecl
// Signature: CDrip * __cdecl core_drip_cpp_CDrip_dtor_FUN_0046d6a0(CDrip *this_ptr,uint flags)

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_CDrip_dtor_FUN_0046d6a0(CDrip *this_ptr,uint flags)

{
  CDrip *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CDripTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CDrip *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
