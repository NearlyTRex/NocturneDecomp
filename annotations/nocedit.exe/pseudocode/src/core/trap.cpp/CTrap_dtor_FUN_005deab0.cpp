// Name: core_trap.cpp_CTrap_dtor_FUN_005deab0
// Address: 005deab0
// Address Range: [[005deab0, 005deafd]]
// Convention: __cdecl
// Signature: CTrap * core_trap.cpp_CTrap_dtor_FUN_005deab0(CTrap * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_005deab0(CTrap *this_ptr,uint d1,uint d2)

{
  CTrap *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CTrapTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CTrap *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
