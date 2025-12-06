// Name: core_trigger.cpp_CTrigger_dtor_FUN_005e1660
// Address: 005e1660
// Address Range: [[005e1660, 005e16ad]]
// Convention: __cdecl
// Signature: CTrigger * core_trigger.cpp_CTrigger_dtor_FUN_005e1660(CTrigger * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CTrigger * __cdecl core_trigger_cpp_CTrigger_dtor_FUN_005e1660(CTrigger *this_ptr,uint d1,uint d2)

{
  CTrigger *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CTriggerTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CTrigger *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
