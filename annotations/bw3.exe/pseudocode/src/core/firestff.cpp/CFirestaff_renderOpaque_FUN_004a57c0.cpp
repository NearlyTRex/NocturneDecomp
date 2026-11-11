// Name: core_firestff.cpp_CFirestaff_renderOpaque_FUN_004a57c0
// Address: 004a57c0
// Address Range: [[004a57c0, 004a5865]]
// Convention: __cdecl
// Signature: int __cdecl core_firestff_cpp_CFirestaff_renderOpaque_FUN_004a57c0(CFirestaff *this_ptr)

#include "nocturne.h"

int __cdecl core_firestff_cpp_CFirestaff_renderOpaque_FUN_004a57c0(CFirestaff *this_ptr)

{
  int iVar1;
  int iVar2;
  CDemonActor *this_ptr_00;
  
  iVar1 = core_weapon_cpp_CWeapon_renderOpaque_FUN_0057af80(&this_ptr->base);
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                    ((this_ptr->base).carried_by_actor,g_CHeroClassInfo.name_hash);
  if ((((iVar2 == 0) || ((this_ptr->base).ammo_per_shot <= *(int *)(iVar2 + 0x20b80))) &&
      (iVar1 != 0)) && ((this_ptr->base).render_alpha == 0x10000)) {
    if (((this_ptr->base).weapon_state != WEAPON_STATE_IN_HAND) &&
       (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                          ((this_ptr->base).carried_by_actor,g_CEnemyClassInfo.name_hash),
       iVar2 == 0)) {
      return iVar1;
    }
    this_ptr_00 = &this_ptr->flames[0].base;
    do {
      (*((UActorVTable *)(this_ptr_00->actor_name + 0x154))->_ub->renderTransparent)(this_ptr_00);
      this_ptr_00 = (CDemonActor *)&this_ptr_00[1].next_actor;
    } while (this_ptr_00 != (CDemonActor *)&this_ptr->sfx_handle);
  }
  return iVar1;
}
