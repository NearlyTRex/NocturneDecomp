// Name: core_storm.cpp_CStorm_fire_FUN_00568b50
// Address: 00568b50
// Address Range: [[00568b50, 00568c0a]]
// Convention: __cdecl
// Signature: int __cdecl core_storm_cpp_CStorm_fire_FUN_00568b50(CStorm *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_storm_cpp_CStorm_fire_FUN_00568b50(CStorm *this_ptr)

{
  int iVar1;
  byte bVar2;
  uint auStackY_1014 [1012];
  uint uStack_2c;
  uint uStack_20;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  bVar2 = 0;
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_0057b880((CWeapon *)this_ptr);
  if (iVar1 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"wp_nomana.wav",
               (CVector3f *)&this_ptr->field_0x20);
    *(uint *)&this_ptr->field_0x300 = 0x3f800000;
    iVar1 = 0;
  }
  else {
    uStack_10 = 0xc1200000;
    uStack_c = 0x41200000;
    uStack_14 = 0;
    if (*(int *)&this_ptr->field_0x304 != 0) {
      core_actor_cpp_FUN_00408b00(*(uint *)&this_ptr->field_0x304,&stack0xffffffec);
      uStack_20 = uStack_2c;
      *(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8);
      *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      core_fire_cpp_FUN_004a3a00
                (0x01C73654,&this_ptr->field_0x20,*(int *)&this_ptr->field_0x304 + 0x30,
                 &stack0xffffffe0);
    }
    iVar1 = 1;
    *(uint *)&this_ptr->field_0x300 = 0x40a00000;
  }
  return iVar1;
}
