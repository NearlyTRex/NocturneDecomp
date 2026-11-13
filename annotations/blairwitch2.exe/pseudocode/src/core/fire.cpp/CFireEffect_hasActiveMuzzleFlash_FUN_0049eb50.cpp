// Name: core_fire.cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0049eb50
// Address: 0049eb50
// Address Range: [[0049eb50, 0049eb8a]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0049eb50(CFireEffect *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0049eb50(CFireEffect *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = _DAT_01c85ffc;
  while( true ) {
    if (iVar1 == 1) {
      return 1;
    }
    if (*(int *)(&DAT_01c86730 + iVar2) == 1) break;
    if (0x72f < iVar2 + 0x5c) {
      return 0;
    }
    iVar1 = *(int *)(&DAT_01c86058 + iVar2);
    iVar2 = iVar2 + 0x5c;
  }
  return 1;
}
