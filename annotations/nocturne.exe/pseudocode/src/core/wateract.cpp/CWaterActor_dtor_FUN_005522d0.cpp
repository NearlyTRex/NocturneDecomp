// Name: core_wateract.cpp_CWaterActor_dtor_FUN_005522d0
// Address: 005522d0
// Address Range: [[005522d0, 00552334]]
// Convention: __cdecl
// Signature: CWaterActor * __cdecl core_wateract_cpp_CWaterActor_dtor_FUN_005522d0(CWaterActor *this_ptr,uint flags)

#include "nocturne.h"

CWaterActor * __cdecl core_wateract_cpp_CWaterActor_dtor_FUN_005522d0(CWaterActor *this_ptr,uint flags)

{
  int iVar1;
  CWaterActor *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CWaterActorTypeInfo_005a3ff0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  iVar1 = core_wateract_cpp_FUN_00552360(this_ptr->vertices,0);
  pCVar2 = (CWaterActor *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)(iVar1 + -0x294),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
