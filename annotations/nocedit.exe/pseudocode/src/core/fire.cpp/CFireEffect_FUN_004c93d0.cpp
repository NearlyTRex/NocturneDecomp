// Name: core_fire.cpp_CFireEffect_FUN_004c93d0
// Address: 004c93d0
// Address Range: [[004c93d0, 004c93f9]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CFireEffect_FUN_004c93d0(CFireEffect *this_ptr)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_FUN_004c93d0(CFireEffect *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = g_MuzzleFlashPool[0].unk._0_4_;
  while( true ) {
    if (iVar1 == 1) {
      return 1;
    }
    if (0x72f < iVar2 + 0x5c) break;
    iVar1 = *(int *)(g_MuzzleFlashPool[1].unk + iVar2);
    iVar2 = iVar2 + 0x5c;
  }
  return 0;
}
