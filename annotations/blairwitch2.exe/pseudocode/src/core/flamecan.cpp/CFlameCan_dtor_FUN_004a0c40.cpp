// Name: core_flamecan.cpp_CFlameCan_dtor_FUN_004a0c40
// Address: 004a0c40
// Address Range: [[004a0c40, 004a0ca4]]
// Convention: __cdecl
// Signature: CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_dtor_FUN_004a0c40(CFlameCan *this_ptr,uint flags)

#include "nocturne.h"

CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_dtor_FUN_004a0c40(CFlameCan *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  CFlameCan *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CFlameCanTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408930(&(this_ptr->flame).base,1);
  pCVar2 = (CFlameCan *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)&pCVar1[-2].field_0xcc,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
