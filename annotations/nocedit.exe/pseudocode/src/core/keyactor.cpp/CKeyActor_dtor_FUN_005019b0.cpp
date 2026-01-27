// Name: core_keyactor.cpp_CKeyActor_dtor_FUN_005019b0
// Address: 005019b0
// Address Range: [[005019b0, 005019fd]]
// Convention: __cdecl
// Signature: CKeyActor * core_keyactor.cpp_CKeyActor_dtor_FUN_005019b0(CKeyActor * this_ptr, uint d1)

#include "nocturne.h"

CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_dtor_FUN_005019b0(CKeyActor *this_ptr,uint d1)

{
  CKeyActor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CKeyActorTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CKeyActor *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
