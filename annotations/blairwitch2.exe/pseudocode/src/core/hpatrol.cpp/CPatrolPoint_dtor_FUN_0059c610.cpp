// Name: core_hpatrol.cpp_CPatrolPoint_dtor_FUN_0059c610
// Address: 0059c610
// Address Range: [[0059c610, 0059c667]]
// Convention: __cdecl
// Signature: CPatrolPoint * __cdecl core_hpatrol_cpp_CPatrolPoint_dtor_FUN_0059c610(CPatrolPoint *this_ptr,uint flags)

#include "nocturne.h"

CPatrolPoint * __cdecl core_hpatrol_cpp_CPatrolPoint_dtor_FUN_0059c610(CPatrolPoint *this_ptr,uint flags)

{
  CTrigger *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CPatrolPointTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).base.base.vtable._ub = &g_CPatrolPointVTable;
  ptr = core_trigger_cpp_CTrigger_dtor_FUN_00577840((CTrigger *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CPatrolPoint *)ptr;
  }
  debugFreeChecked(ptr);
  return (CPatrolPoint *)ptr;
}
