// Name: core_tommygun.cpp_FUN_00576370
// Address: 00576370
// Address Range: [[00576370, 00576397]]
// Convention: unknown
// Signature: void core_tommygun_cpp_FUN_00576370(CWeapon *param_1,int param_2)

#include "nocturne.h"

void core_tommygun_cpp_FUN_00576370(CWeapon *param_1,int param_2)

{
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[1].field_0x4);
  core_weapon_cpp_FUN_0058a200(param_1,param_2);
  return;
}
