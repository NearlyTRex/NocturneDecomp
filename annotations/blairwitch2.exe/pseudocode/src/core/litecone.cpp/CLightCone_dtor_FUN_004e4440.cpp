// Name: core_litecone.cpp_CLightCone_dtor_FUN_004e4440
// Address: 004e4440
// Address Range: [[004e4440, 004e448d]]
// Convention: __cdecl
// Signature: CLightCone * __cdecl core_litecone_cpp_CLightCone_dtor_FUN_004e4440(CLightCone *this_ptr,uint flags)

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_CLightCone_dtor_FUN_004e4440(CLightCone *this_ptr,uint flags)

{
  CLightCone *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CLightConeTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CLightCone *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
