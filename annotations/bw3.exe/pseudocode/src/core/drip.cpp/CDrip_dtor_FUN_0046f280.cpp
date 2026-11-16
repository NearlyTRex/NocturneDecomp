// Name: core_drip.cpp_CDrip_dtor_FUN_0046f280
// Address: 0046f280
// Address Range: [[0046f280, 0046f2cd]]
// Convention: __cdecl
// Signature: CDrip * __cdecl core_drip_cpp_CDrip_dtor_FUN_0046f280(CDrip *this_ptr,uint flags)

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_CDrip_dtor_FUN_0046f280(CDrip *this_ptr,uint flags)

{
  CDrip *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDripTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CDrip *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
