// Name: core_flamecan.cpp_CFlameCan_dtor_FUN_004cb7a0
// Address: 004cb7a0
// Address Range: [[004cb7a0, 004cb804]]
// Convention: __cdecl
// Signature: CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_dtor_FUN_004cb7a0(CFlameCan *this_ptr,uint flags)

#include "nocturne.h"

CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_dtor_FUN_004cb7a0(CFlameCan *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  CFlameCan *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFlameCanTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&(this_ptr->flame).base,1);
  ptr = (CFlameCan *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar1[-3].create_event + 0x50),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
