// Name: core_wateract.cpp_CWaterActor_dtor_FUN_005522d0
// Address: 005522d0
// Address Range: [[005522d0, 00552334]]
// Convention: __cdecl
// Signature: CWaterActor * __cdecl core_wateract_cpp_CWaterActor_dtor_FUN_005522d0(CWaterActor *this_ptr,uint flags)

#include "nocturne.h"

CWaterActor * __cdecl core_wateract_cpp_CWaterActor_dtor_FUN_005522d0(CWaterActor *this_ptr,uint flags)

{
  SWaterVertex *pSVar1;
  CWaterActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CWaterActorTypeInfo_005a3ff0);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pSVar1 = core_wateract_cpp_SWaterVertex_arrdtor_FUN_00552360(this_ptr->vertices,0);
  ptr = (CWaterActor *)
        core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)&pSVar1[-0x15].world_position,1)
  ;
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
