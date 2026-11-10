// Name: core_disease.cpp_CDisease_fire_FUN_0045c040
// Address: 0045c040
// Address Range: [[0045c040, 0045c0c7]]
// Convention: __cdecl
// Signature: int __cdecl core_disease_cpp_CDisease_fire_FUN_0045c040(CDisease *this_ptr)

#include "nocturne.h"

int __cdecl core_disease_cpp_CDisease_fire_FUN_0045c040(CDisease *this_ptr)

{
  byte *position;
  int iVar1;
  
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_0057b880((CWeapon *)this_ptr);
  position = &this_ptr->field_0x20;
  if (iVar1 != 0) {
    core_fire_cpp_FUN_004a39d0(0x01C73654,position,&this_ptr->field_0x30,&this_ptr->field_0x598);
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"wp_disease_throw.wav",
               (CVector3f *)position);
    *(uint *)&this_ptr->field_0x5a0 = 0;
    *(uint *)&this_ptr->field_0x59c = *(uint *)&this_ptr->field_0x5a0;
    *(uint *)&this_ptr->field_0x598 = *(uint *)&this_ptr->field_0x59c;
    *(uint *)&this_ptr->field_0x300 = 0x40000000;
    return 1;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,(CDemonActor *)this_ptr,"wp_nomana.wav",(CVector3f *)position);
  return 0;
}
