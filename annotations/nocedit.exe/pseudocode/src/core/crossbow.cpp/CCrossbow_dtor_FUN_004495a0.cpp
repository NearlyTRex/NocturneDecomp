// Name: core_crossbow.cpp_CCrossbow_dtor_FUN_004495a0
// Address: 004495a0
// Address Range: [[004495a0, 00449604]]
// Convention: __cdecl
// Signature: CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_004495a0(CCrossbow *this_ptr,uint flags)

#include "nocturne.h"

CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_004495a0(CCrossbow *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  CCrossbow *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CCrossbowTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&(this_ptr->bolt_flame).base,1);
  ptr = (CCrossbow *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80
                  ((CWeapon *)((int)&pCVar1[-5].previous_transform_state.orientation + 8),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
