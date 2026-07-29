// Name: core_flamecan.cpp_CFlameCan_dtor_FUN_0048e8f0
// Address: 0048e8f0
// Address Range: [[0048e8f0, 0048e954]]
// Convention: __cdecl
// Signature: CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_dtor_FUN_0048e8f0(CFlameCan *this_ptr,uint flags)

#include "nocturne.h"

CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_dtor_FUN_0048e8f0(CFlameCan *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  CFlameCan *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFlameCanTypeInfo_0059d760);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&(this_ptr->flame).base,1);
  pCVar2 = (CFlameCan *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)(pCVar1[-3].create_event + 0x40),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
