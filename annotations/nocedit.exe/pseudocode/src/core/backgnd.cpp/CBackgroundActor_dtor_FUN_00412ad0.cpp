// Name: core_backgnd.cpp_CBackgroundActor_dtor_FUN_00412ad0
// Address: 00412ad0
// Address Range: [[00412ad0, 00412b1d]]
// Convention: __cdecl
// Signature: CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_dtor_FUN_00412ad0(CBackgroundActor *this_ptr,uint d1,uint d2)

#include "nocturne.h"

CBackgroundActor * __cdecl
core_backgnd_cpp_CBackgroundActor_dtor_FUN_00412ad0(CBackgroundActor *this_ptr,uint d1,uint d2)

{
  CBackgroundActor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBackgroundActorTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CBackgroundActor *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
