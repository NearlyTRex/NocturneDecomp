// Name: core_bindevil.cpp_CBindEvil_fire_FUN_0040f840
// Address: 0040f840
// Address Range: [[0040f840, 0040f8c7]]
// Convention: __cdecl
// Signature: int __cdecl core_bindevil_cpp_CBindEvil_fire_FUN_0040f840(CBindEvil *this_ptr)

#include "nocturne.h"

int __cdecl core_bindevil_cpp_CBindEvil_fire_FUN_0040f840(CBindEvil *this_ptr)

{
  byte *position;
  int iVar1;
  
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_0057b880((CWeapon *)this_ptr);
  position = &this_ptr->field_0x20;
  if (iVar1 != 0) {
    core_fire_cpp_FUN_004a39a0(0x01C73654,position,&this_ptr->field_0x30,&this_ptr->field_0x594);
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"wp_bindevil_throw.wav",
               (CVector3f *)position);
    *(uint *)&this_ptr->field_0x59c = 0;
    *(uint *)&this_ptr->field_0x598 = *(uint *)&this_ptr->field_0x59c;
    *(uint *)&this_ptr->field_0x594 = *(uint *)&this_ptr->field_0x598;
    *(uint *)&this_ptr->field_0x300 = 0x40400000;
    return 1;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,(CDemonActor *)this_ptr,"wp_nomana.wav",(CVector3f *)position);
  return 0;
}
