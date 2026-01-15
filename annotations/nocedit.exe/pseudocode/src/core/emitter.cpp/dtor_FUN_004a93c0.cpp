// Name: core_emitter.cpp_dtor_FUN_004a93c0
// Address: 004a93c0
// Address Range: [[004a93c0, 004a940d]]
// Convention: __cdecl
// Signature: CEmitter * core_emitter.cpp_dtor_FUN_004a93c0(CEmitter * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CEmitter * __cdecl core_emitter_cpp_dtor_FUN_004a93c0(CEmitter *this_ptr,uint d1,uint d2)

{
  CEmitter *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CEmitterTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CEmitter *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
