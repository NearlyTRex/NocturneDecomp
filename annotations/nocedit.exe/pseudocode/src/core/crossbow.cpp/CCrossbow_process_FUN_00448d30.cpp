// Name: core_crossbow.cpp_CCrossbow_process_FUN_00448d30
// Address: 00448d30
// Address Range: [[00448d30, 00448df3]]
// Convention: __cdecl
// Signature: void __cdecl core_crossbow_cpp_CCrossbow_process_FUN_00448d30(CCrossbow *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_crossbow_cpp_CCrossbow_process_FUN_00448d30(CCrossbow *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CVector3f CStack_18;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  pCVar1 = (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr)
  ;
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)this_ptr,&CStack_18,pCVar1);
  (this_ptr->unk2).base.location.position.x = pCVar1->x;
  (this_ptr->unk2).base.location.position.y = pCVar1->y;
  (this_ptr->unk2).base.location.position.z = pCVar1->z;
  if (((((this_ptr->base).weapon_state != 2) || ((this_ptr->base).ammo_count < 1)) ||
      ((this_ptr->base).ammo_type != 5)) || (0.0 < *(float *)((this_ptr->base).unk2 + 0xc))) {
    core_flame_cpp_CFlame_FUN_004caa70(&this_ptr->unk2);
    this_ptr->unk1[0] = '\0';
    this_ptr->unk1[1] = '\0';
    this_ptr->unk1[2] = '\0';
    this_ptr->unk1[3] = '\0';
  }
  else {
    this_ptr->unk1[0] = '\x01';
    this_ptr->unk1[1] = '\0';
    this_ptr->unk1[2] = '\0';
    this_ptr->unk1[3] = '\0';
  }
  core_flame_cpp_CFlame_FUN_004c9c00(&this_ptr->unk2);
  (this_ptr->base).base.is_transparent = *(int *)this_ptr->unk1;
  return;
}
