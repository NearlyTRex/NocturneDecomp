// Name: core_patrpoin.cpp_CPatrolPoint_dtor_FUN_0059c610
// Address: 0059c610
// Address Range: [[0059c610, 0059c667]]
// Convention: unknown
// Signature: CPatrolPoint * core_patrpoin_cpp_CPatrolPoint_dtor_FUN_0059c610(CPatrolPoint *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CPatrolPoint * core_patrpoin_cpp_CPatrolPoint_dtor_FUN_0059c610(CPatrolPoint *this_ptr,uint flags)

{
  CPatrolPoint *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CPatrolPointTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  *(CDemonActor_vtable **)&this_ptr->field_0x2b0 = &g_CPatrolPointVTable;
  pCVar1 = (CPatrolPoint *)core_trigger_cpp_CTrigger_dtor_FUN_00577840((CTrigger *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
