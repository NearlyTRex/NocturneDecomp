// Name: core_heal.cpp_FUN_004d1c50
// Address: 004d1c50
// Address Range: [[004d1c50, 004d1c79]]
// Convention: unknown
// Signature: void core_heal_cpp_FUN_004d1c50(CWeapon *param_1,float param_2)

#include "nocturne.h"

void core_heal_cpp_FUN_004d1c50(CWeapon *param_1,float param_2)

{
  uint uVar1;
  
  core_weapon_cpp_FUN_0057b160(param_1,param_2);
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = 0;
  *(uint *)&param_1[1].field_0x4 = uVar1;
  return;
}
