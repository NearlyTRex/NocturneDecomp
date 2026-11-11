// Name: core_crossbow.cpp_CCrossbow_dtor_FUN_0043ae70
// Address: 0043ae70
// Address Range: [[0043ae70, 0043aed4]]
// Convention: __cdecl
// Signature: CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_0043ae70(CCrossbow *this_ptr,uint flags)

#include "nocturne.h"

CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_0043ae70(CCrossbow *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  CCrossbow *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CCrossbowTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408930(&(this_ptr->bolt_flame).base,1);
  pCVar2 = (CCrossbow *)
           core_weapon_cpp_CWeapon_dtor_FUN_00589ae0
                     ((CWeapon *)&pCVar1[-3].previous_transform_state.dirty_flags,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
