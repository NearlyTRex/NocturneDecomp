// Name: core_drip.cpp_CDrip_dtor_FUN_00485ba0
// Address: 00485ba0
// Address Range: [[00485ba0, 00485bed]]
// Convention: __cdecl
// Signature: CDrip * __cdecl core_drip_cpp_CDrip_dtor_FUN_00485ba0(CDrip *this_ptr,uint flags)

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_CDrip_dtor_FUN_00485ba0(CDrip *this_ptr,uint flags)

{
  CDrip *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDripTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CDrip *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
