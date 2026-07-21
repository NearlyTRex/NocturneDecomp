// Name: core_fire.cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0048c8a0
// Address: 0048c8a0
// Address Range: [[0048c8a0, 0048c8c9]]
// Convention: unknown
// Signature: undefined4 core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0048c8a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0048c8a0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = _DAT_01c4e958;
  while( true ) {
    if (iVar1 == 1) {
      return 1;
    }
    if (0x72f < iVar2 + 0x5c) break;
    iVar1 = *(int *)(&DAT_01c4e9b4 + iVar2);
    iVar2 = iVar2 + 0x5c;
  }
  return 0;
}
