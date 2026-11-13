// Name: core_hpatrol.cpp_CPatrolPoint_dtor_FUN_0059c610
// Address: 0059c610
// Address Range: [[0059c610, 0059c667]]
// Convention: __cdecl
// Signature: CPatrolPoint * __cdecl core_hpatrol_cpp_CPatrolPoint_dtor_FUN_0059c610(CPatrolPoint *this_ptr,uint flags)

#include "nocturne.h"

CPatrolPoint * __cdecl core_hpatrol_cpp_CPatrolPoint_dtor_FUN_0059c610(CPatrolPoint *this_ptr,uint flags)

{
  CTrigger *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CPatrolPointTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).base.base.vtable._ub = &g_CPatrolPointVTable;
  pCVar1 = core_trigger_cpp_CTrigger_dtor_FUN_00577840((CTrigger *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CPatrolPoint *)pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return (CPatrolPoint *)pCVar1;
}
