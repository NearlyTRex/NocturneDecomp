// Name: core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
// Address: 0048af20
// Address Range: [[0048af20, 0048af69]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _DAT_01c4e954 * 0x5c;
  _DAT_01c4e954 = _DAT_01c4e954 + 1;
  if (0x13 < _DAT_01c4e954) {
    _DAT_01c4e954 = 0;
  }
  core_fire_cpp_CMuzzleFlash_init_FUN_00484e10(&DAT_01c4e958 + iVar1,param_2,param_3);
  return;
}
