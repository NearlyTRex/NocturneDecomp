// Name: core_storm.cpp_CStorm_fire_FUN_00568b50
// Address: 00568b50
// Address Range: [[00568b50, 00568c0a]]
// Convention: __cdecl
// Signature: int __cdecl core_storm_cpp_CStorm_fire_FUN_00568b50(CStorm *this_ptr)

#include "nocturne.h"

int __cdecl core_storm_cpp_CStorm_fire_FUN_00568b50(CStorm *this_ptr)

{
  CLocation *position;
  int iVar1;
  byte bVar2;
  float afStackY_1014 [1012];
  CVector3f CStack_2c;
  CVector3f CStack_20;
  CVector3f CStack_14;
  
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
    CStack_14.y = -10.0;
    CStack_14.z = 10.0;
    CStack_14.x = 0.0;
    if ((this_ptr->base).carried_by_actor != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                ((this_ptr->base).carried_by_actor,&CStack_14,&CStack_2c);
      CStack_20.x = CStack_2c.x;
      *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + 4) =
           *(uint *)((int)&CStack_2c + (uint)bVar2 * -8 + 4);
      *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)((int)&CStack_2c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      core_fire_cpp_CFireEffect_createStormToss_FUN_004a3a00
                (0x01C73654,&position->position,&((this_ptr->base).carried_by_actor)->orient,
                 &CStack_20);
    }
    iVar1 = 1;
    (this_ptr->base).fire_cooldown_timer = 5.0;
  }
  return iVar1;
}
