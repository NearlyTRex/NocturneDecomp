// Name: core_ammo.cpp_FUN_0040eb40
// Address: 0040eb40
// Address Range: [[0040eb40, 0040eb5b]]
// Convention: unknown
// Signature: void core_ammo_cpp_FUN_0040eb40(void)

#include "nocturne.h"

void core_ammo_cpp_FUN_0040eb40(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0x314);
  if (iVar1 == 0) {
    return;
  }
  core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(iVar1);
  return;
}
