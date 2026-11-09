// Name: core_rifle.cpp_FUN_00527d50
// Address: 00527d50
// Address Range: [[00527d50, 00527d6b]]
// Convention: unknown
// Signature: void core_rifle_cpp_FUN_00527d50(CWeapon *param_1,float param_2)

#include "nocturne.h"

void core_rifle_cpp_FUN_00527d50(CWeapon *param_1,float param_2)

{
  *(uint *)&param_1[1].field_0x4 = 1;
  core_weapon_cpp_FUN_0057b160(param_1,param_2);
  return;
}
