// Name: core_rifle.cpp_FUN_00540060
// Address: 00540060
// Address Range: [[00540060, 0054007b]]
// Convention: unknown
// Signature: void core_rifle_cpp_FUN_00540060(CWeapon *param_1,float param_2)

#include "nocturne.h"

void core_rifle_cpp_FUN_00540060(CWeapon *param_1,float param_2)

{
  *(uint *)&param_1[1].field_0x4 = 1;
  core_weapon_cpp_CWeapon_process_FUN_005ad770(param_1,param_2);
  return;
}
