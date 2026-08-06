// Name: core_drip.cpp_CDrip_dtor_FUN_00462890
// Address: 00462890
// Address Range: [[00462890, 004628dd]]
// Convention: __cdecl
// Signature: CDrip * __cdecl core_drip_cpp_CDrip_dtor_FUN_00462890(CDrip *this_ptr,uint flags)

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_CDrip_dtor_FUN_00462890(CDrip *this_ptr,uint flags)

{
  CDrip *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDripTypeInfo_0059c6c0);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CDrip *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
