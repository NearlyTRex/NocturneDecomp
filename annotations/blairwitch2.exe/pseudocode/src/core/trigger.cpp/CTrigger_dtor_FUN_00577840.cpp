// Name: core_trigger.cpp_CTrigger_dtor_FUN_00577840
// Address: 00577840
// Address Range: [[00577840, 00577897]]
// Convention: __cdecl
// Signature: CTrigger * __cdecl core_trigger_cpp_CTrigger_dtor_FUN_00577840(CTrigger *this_ptr,uint flags)

#include "nocturne.h"

CTrigger * __cdecl core_trigger_cpp_CTrigger_dtor_FUN_00577840(CTrigger *this_ptr,uint flags)

{
  CTrigger *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CTriggerTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CTriggerVTable;
  pCVar1 = (CTrigger *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
