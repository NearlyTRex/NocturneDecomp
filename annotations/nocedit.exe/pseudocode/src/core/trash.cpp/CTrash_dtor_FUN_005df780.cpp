// Name: core_trash.cpp_CTrash_dtor_FUN_005df780
// Address: 005df780
// Address Range: [[005df780, 005df7cd]]
// Convention: __cdecl
// Signature: CTrash * core_trash.cpp_CTrash_dtor_FUN_005df780(CTrash * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_CTrash_dtor_FUN_005df780(CTrash *this_ptr,uint d1,uint d2)

{
  CTrash *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CTrashTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CTrash *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
