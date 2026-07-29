// Name: core_crossbow.cpp_CCrossbow_dtor_FUN_0043d870
// Address: 0043d870
// Address Range: [[0043d870, 0043d8d4]]
// Convention: __cdecl
// Signature: CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_0043d870(CCrossbow *this_ptr,uint flags)

#include "nocturne.h"

CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_0043d870(CCrossbow *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  CCrossbow *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CCrossbowTypeInfo_0059bc50);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&(this_ptr->bolt_flame).base,1);
  pCVar2 = (CCrossbow *)
           core_weapon_cpp_CWeapon_dtor_FUN_00553ea0((CWeapon *)pCVar1[-5].footstep_sound_code,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
