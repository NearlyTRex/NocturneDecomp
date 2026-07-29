// Name: core_trigger.cpp_CTrigger_dtor_FUN_00548a50
// Address: 00548a50
// Address Range: [[00548a50, 00548a9d]]
// Convention: __cdecl
// Signature: CTrigger * __cdecl core_trigger_cpp_CTrigger_dtor_FUN_00548a50(CTrigger *this_ptr,uint flags)

#include "nocturne.h"

CTrigger * __cdecl core_trigger_cpp_CTrigger_dtor_FUN_00548a50(CTrigger *this_ptr,uint flags)

{
  CTrigger *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CTriggerTypeInfo_005a3740);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CTrigger *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
