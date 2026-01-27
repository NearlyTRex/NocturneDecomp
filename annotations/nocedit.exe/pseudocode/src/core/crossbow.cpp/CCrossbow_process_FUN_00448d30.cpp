// Name: core_crossbow.cpp_CCrossbow_process_FUN_00448d30
// Address: 00448d30
// Address Range: [[00448d30, 00448df3]]
// Convention: __cdecl
// Signature: void core_crossbow.cpp_CCrossbow_process_FUN_00448d30(CCrossbow * this_ptr, float delta_time)

#include "nocturne.h"

void __cdecl core_crossbow_cpp_CCrossbow_process_FUN_00448d30(CCrossbow *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CVector3f aCStack_1c [2];
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  pCVar1 = (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).cfunc3)();
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)this_ptr,aCStack_1c,pCVar1);
  *(float *)(this_ptr->unk + 0x24) = pCVar1->x;
  *(float *)(this_ptr->unk + 0x28) = pCVar1->y;
  *(float *)(this_ptr->unk + 0x2c) = pCVar1->z;
  if (((((this_ptr->base).weapon_state != 2) || ((this_ptr->base).ammo_count < 1)) ||
      ((this_ptr->base).ammo_type != 5)) || (0.0 < *(float *)((this_ptr->base).unk2 + 0xc))) {
    core_flame_cpp_FUN_004caa70();
    this_ptr->unk[0] = '\0';
    this_ptr->unk[1] = '\0';
    this_ptr->unk[2] = '\0';
    this_ptr->unk[3] = '\0';
  }
  else {
    this_ptr->unk[0] = '\x01';
    this_ptr->unk[1] = '\0';
    this_ptr->unk[2] = '\0';
    this_ptr->unk[3] = '\0';
  }
  core_flame_cpp_FUN_004c9c00();
  (this_ptr->base).base.is_transparent = *(int *)this_ptr->unk;
  return;
}
