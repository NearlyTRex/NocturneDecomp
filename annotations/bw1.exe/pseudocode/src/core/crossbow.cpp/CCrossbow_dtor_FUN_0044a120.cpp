// Name: core_crossbow.cpp_CCrossbow_dtor_FUN_0044a120
// Address: 0044a120
// Address Range: [[0044a120, 0044a184]]
// Convention: __cdecl
// Signature: CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_0044a120(CCrossbow *this_ptr,uint flags)

#include "nocturne.h"

CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_0044a120(CCrossbow *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  CCrossbow *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CCrossbowTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)&this_ptr->field_0x57c,1);
  pCVar2 = (CCrossbow *)
           core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0((CWeapon *)&pCVar1[-5].field_0x13c,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005c0344(pCVar2);
  return pCVar2;
}
