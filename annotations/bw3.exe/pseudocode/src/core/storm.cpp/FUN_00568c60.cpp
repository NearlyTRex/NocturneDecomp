// Name: core_storm.cpp_FUN_00568c60
// Address: 00568c60
// Address Range: [[00568c60, 00568c7c]]
// Convention: unknown
// Signature: int core_storm_cpp_FUN_00568c60(CWeapon *param_1)

#include "nocturne.h"

int core_storm_cpp_FUN_00568c60(CWeapon *param_1)

{
  int iVar1;
  
  if ((*(uint *)&param_1->field_0x300 & 0x7fffffff) != 0) {
    return 0;
  }
  iVar1 = core_weapon_cpp_FUN_0057af80(param_1);
  return iVar1;
}
