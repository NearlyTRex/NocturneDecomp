// Name: core_fire.cpp_CFireEffect_FUN_004c93d0
// Address: 004c93d0
// Address Range: [[004c93d0, 004c93f9]]
// Convention: __cdecl
// Signature: int core_fire.cpp_CFireEffect_FUN_004c93d0(CFireEffect * this_ptr)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_FUN_004c93d0(CFireEffect *this_ptr)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  if (g_MuzzleFlashPool[0].field0_0x0._0_4_ != 1) {
    do {
      if (0x72f < iVar2 + 0x5c) {
        return 0;
      }
      pcVar1 = g_MuzzleFlashPool[1].field0_0x0 + iVar2;
      iVar2 = iVar2 + 0x5c;
    } while (*(int *)pcVar1 != 1);
  }
  return 1;
}
