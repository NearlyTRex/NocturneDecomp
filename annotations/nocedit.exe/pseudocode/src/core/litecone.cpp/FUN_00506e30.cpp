// Name: core_litecone.cpp_FUN_00506e30
// Address: 00506e30
// Address Range: [[00506e30, 00506e7d]]
// Convention: __cdecl
// Signature: CLightCone * core_litecone.cpp_FUN_00506e30(CLightCone * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_FUN_00506e30(CLightCone *this_ptr,uint d1,uint d2)

{
  CLightCone *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CLightConeTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CLightCone *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
