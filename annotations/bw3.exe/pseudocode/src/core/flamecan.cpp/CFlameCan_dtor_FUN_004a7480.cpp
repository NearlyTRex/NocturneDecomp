// Name: core_flamecan.cpp_CFlameCan_dtor_FUN_004a7480
// Address: 004a7480
// Address Range: [[004a7480, 004a74e4]]
// Convention: __cdecl
// Signature: CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_dtor_FUN_004a7480(CFlameCan *this_ptr,uint flags)

#include "nocturne.h"

CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_dtor_FUN_004a7480(CFlameCan *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  CFlameCan *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFlameCanTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408770(&(this_ptr->flame).base,1);
  pCVar2 = (CFlameCan *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770
                     ((CDemonActor *)(pCVar1[-3].create_event + 0x50),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005a30c4(pCVar2);
  return pCVar2;
}
