// Name: core_drip.cpp_CDrip_dtor_FUN_0046f280
// Address: 0046f280
// Address Range: [[0046f280, 0046f2cd]]
// Convention: __cdecl
// Signature: CDrip * __cdecl core_drip_cpp_CDrip_dtor_FUN_0046f280(CDrip *this_ptr,uint flags)

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_CDrip_dtor_FUN_0046f280(CDrip *this_ptr,uint flags)

{
  CDrip *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CDripTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CDrip *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
