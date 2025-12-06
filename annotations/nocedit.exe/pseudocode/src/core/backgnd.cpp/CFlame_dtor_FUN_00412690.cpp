// Name: core_backgnd.cpp_CFlame_dtor_FUN_00412690
// Address: 00412690
// Address Range: [[00412690, 004126dd]]
// Convention: __cdecl
// Signature: CFlame * core_backgnd.cpp_CFlame_dtor_FUN_00412690(CFlame * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CFlame * __cdecl core_backgnd_cpp_CFlame_dtor_FUN_00412690(CFlame *this_ptr,uint d1,uint d2)

{
  CFlame *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CFlameTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CFlame *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
