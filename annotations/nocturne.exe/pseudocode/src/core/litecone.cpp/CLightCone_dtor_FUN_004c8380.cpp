// Name: core_litecone.cpp_CLightCone_dtor_FUN_004c8380
// Address: 004c8380
// Address Range: [[004c8380, 004c83cd]]
// Convention: __cdecl
// Signature: CLightCone * __cdecl core_litecone_cpp_CLightCone_dtor_FUN_004c8380(CLightCone *this_ptr,uint flags)

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_CLightCone_dtor_FUN_004c8380(CLightCone *this_ptr,uint flags)

{
  CLightCone *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CLightConeTypeInfo_0059ffb0);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CLightCone *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
