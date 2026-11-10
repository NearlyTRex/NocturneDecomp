// Name: core_trigger.cpp_CTrigger_dtor_FUN_0059c420
// Address: 0059c420
// Address Range: [[0059c420, 0059c46d]]
// Convention: __cdecl
// Signature: CTrigger * __cdecl core_trigger_cpp_CTrigger_dtor_FUN_0059c420(CTrigger *this_ptr,uint flags)

#include "nocturne.h"

CTrigger * __cdecl core_trigger_cpp_CTrigger_dtor_FUN_0059c420(CTrigger *this_ptr,uint flags)

{
  CTrigger *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CTriggerTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CTrigger *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
