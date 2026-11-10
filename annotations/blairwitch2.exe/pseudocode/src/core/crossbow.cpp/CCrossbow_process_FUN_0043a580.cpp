// Name: core_crossbow.cpp_CCrossbow_process_FUN_0043a580
// Address: 0043a580
// Address Range: [[0043a580, 0043a660]]
// Convention: __cdecl
// Signature: void __cdecl core_crossbow_cpp_CCrossbow_process_FUN_0043a580(CCrossbow *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_crossbow_cpp_CCrossbow_process_FUN_0043a580(CCrossbow *this_ptr,float delta_time)

{
  byte bVar1;
  float in_stack_00000014;
  uint auStackY_101c [1014];
  uint *puVar2;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_1c;
  uint uStack_10;
  
  bVar1 = 0;
  core_weapon_cpp_CWeapon_process_FUN_00589c80(&this_ptr->base,delta_time);
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  puVar2 = &stack0xffffffe4;
  uStack_1c = uStack_28;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar1 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  core_actor_cpp_FUN_00408d70(this_ptr,puVar2);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  *(uint *)&this_ptr->field_0x6f8 = uStack_10;
  *(uint *)&this_ptr->field_0x6fc = uStack_30;
  *(uint *)&this_ptr->field_0x700 = uStack_2c;
  if (((((this_ptr->base).weapon_state != WEAPON_STATE_IN_HAND) || ((this_ptr->base).ammo_count < 1)
       ) || ((this_ptr->base).ammo_type != AMMO_TYPE_FLAMING)) ||
     (0.0 < (this_ptr->base).fire_cooldown_timer)) {
    core_flame_cpp_CFlame_hide_FUN_004a0200((CFlame *)&this_ptr->field_0x6d8);
    this_ptr->flame_active = 0;
  }
  else {
    this_ptr->flame_active = 1;
  }
  core_flame_cpp_CFlame_process_FUN_0049f2e0((CFlame *)&this_ptr->field_0x6d8,in_stack_00000014);
  *(int *)&(this_ptr->base).base.field_0xfc = this_ptr->flame_active;
  return;
}
