// Name: core_burncrss.cpp_CBurncross_renderOpaque_FUN_00425360
// Address: 00425360
// Address Range: [[00425360, 004253c7]]
// Convention: __cdecl
// Signature: int __cdecl core_burncrss_cpp_CBurncross_renderOpaque_FUN_00425360(CBurncross *this_ptr)

#include "nocturne.h"

int __cdecl core_burncrss_cpp_CBurncross_renderOpaque_FUN_00425360(CBurncross *this_ptr)

{
  int iVar1;
  CDemonActor *pCVar2;
  
  iVar1 = core_weapon_cpp_CWeapon_renderOpaque_FUN_0057af80(&this_ptr->base);
  if ((this_ptr->base).weapon_state != WEAPON_STATE_IN_HAND) {
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                       ((this_ptr->base).carried_by_actor,g_CEnemyClassInfo.name_hash);
    if (pCVar2 == (CDemonActor *)0x0) {
      return iVar1;
    }
  }
  pCVar2 = &this_ptr->flames[0].base;
  do {
    (*((UActorVTable *)(pCVar2->actor_name + 0x154))->_ub->renderTransparent)(pCVar2);
    pCVar2 = (CDemonActor *)&pCVar2[1].next_actor;
  } while (pCVar2 != (CDemonActor *)&this_ptr->flame_intensity);
  return iVar1;
}
