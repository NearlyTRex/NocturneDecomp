// Name: core_litecone.cpp_CLightCone_dtor_FUN_00503020
// Address: 00503020
// Address Range: [[00503020, 0050306d]]
// Convention: __cdecl
// Signature: CLightCone * __cdecl core_litecone_cpp_CLightCone_dtor_FUN_00503020(CLightCone *this_ptr,uint flags)

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_CLightCone_dtor_FUN_00503020(CLightCone *this_ptr,uint flags)

{
  CLightCone *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CLightConeTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CLightCone *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
