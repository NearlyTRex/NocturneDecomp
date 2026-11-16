// Name: core_curtain.cpp_CCurtain_dtor_FUN_00448650
// Address: 00448650
// Address Range: [[00448650, 0044869d]]
// Convention: __cdecl
// Signature: CCurtain * __cdecl core_curtain_cpp_CCurtain_dtor_FUN_00448650(CCurtain *this_ptr,uint flags)

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_CCurtain_dtor_FUN_00448650(CCurtain *this_ptr,uint flags)

{
  CCurtain *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CCurtainTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CCurtain *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
