// Name: core_drip.cpp_dtor_FUN_0048ea90
// Address: 0048ea90
// Address Range: [[0048ea90, 0048eadd]]
// Convention: __cdecl
// Signature: CDrip * __cdecl core_drip_cpp_dtor_FUN_0048ea90(CDrip *this_ptr,uint d1,uint d2)

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_dtor_FUN_0048ea90(CDrip *this_ptr,uint d1,uint d2)

{
  CDrip *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDripTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CDrip *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
