// Name: core_storm.cpp_CStorm_fire_FUN_00568b50
// Address: 00568b50
// Address Range: [[00568b50, 00568c0a]]
// Convention: __cdecl
// Signature: int __cdecl core_storm_cpp_CStorm_fire_FUN_00568b50(CStorm *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_storm_cpp_CStorm_fire_FUN_00568b50(CStorm *this_ptr)

{
  CLocation *position;
  int iVar1;
  byte bVar2;
  uint auStackY_1014 [1012];
  uint uStack_2c;
  uint uStack_20;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  bVar2 = 0;
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(&this_ptr->base);
  position = &(this_ptr->base).base.location;
  if (iVar1 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"wp_nomana.wav",&position->position);
    (this_ptr->base).fire_cooldown_timer = 1.0;
    iVar1 = 0;
  }
  else {
    uStack_10 = 0xc1200000;
    uStack_c = 0x41200000;
    uStack_14 = 0;
    if ((this_ptr->base).carried_by_actor != (CDemonActor *)0x0) {
      core_actor_cpp_FUN_00408b00((this_ptr->base).carried_by_actor,&stack0xffffffec);
      uStack_20 = uStack_2c;
      *(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8);
      *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      core_fire_cpp_FUN_004a3a00
                (0x01C73654,position,&((this_ptr->base).carried_by_actor)->orient,&stack0xffffffe0
                );
    }
    iVar1 = 1;
    (this_ptr->base).fire_cooldown_timer = 5.0;
  }
  return iVar1;
}
