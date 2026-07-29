// Name: core_drip.cpp_CDrip_dtor_FUN_00462890
// Address: 00462890
// Address Range: [[00462890, 004628dd]]
// Convention: __cdecl
// Signature: CDrip * __cdecl core_drip_cpp_CDrip_dtor_FUN_00462890(CDrip *this_ptr,uint flags)

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_CDrip_dtor_FUN_00462890(CDrip *this_ptr,uint flags)

{
  CDrip *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CDripTypeInfo_0059c6c0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CDrip *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
