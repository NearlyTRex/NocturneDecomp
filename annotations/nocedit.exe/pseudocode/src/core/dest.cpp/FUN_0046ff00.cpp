// Name: core_dest.cpp_FUN_0046ff00
// Address: 0046ff00
// Address Range: [[0046ff00, 0046ff4d]]
// Convention: __cdecl
// Signature: CActorDestination * core_dest.cpp_FUN_0046ff00(CActorDestination * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_FUN_0046ff00(CActorDestination *this_ptr,uint d1,uint d2)

{
  CActorDestination *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CActorDestination);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CActorDestination *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
