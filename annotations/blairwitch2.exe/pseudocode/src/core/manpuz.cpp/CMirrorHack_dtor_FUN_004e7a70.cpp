// Name: core_manpuz.cpp_CMirrorHack_dtor_FUN_004e7a70
// Address: 004e7a70
// Address Range: [[004e7a70, 004e7abd]]
// Convention: __cdecl
// Signature: CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_dtor_FUN_004e7a70(CMirrorHack *this_ptr,uint flags)

#include "nocturne.h"

CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_dtor_FUN_004e7a70(CMirrorHack *this_ptr,uint flags)

{
  CMirrorHack *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CMirrorHackTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CMirrorHack *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
