// Name: core_fire.cpp_CFireEffect_FUN_004c9060
// Address: 004c9060
// Address Range: [[004c9060, 004c90b6]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c9060(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c9060(CFireEffect *this_ptr)

{
  char *pcVar1;
  
  core_fire_cpp_CTrail_FUN_004c5df0(g_TrailPool + (int)g_LightningBoltActiveListHead);
  pcVar1 = g_LightningBoltActiveListHead->unk;
  g_LightningBoltActiveListHead = (CLightningBolt *)(pcVar1 + 1);
  if ((int)(pcVar1 + 1) < 100) {
    return;
  }
  g_LightningBoltActiveListHead = (CLightningBolt *)0x0;
  return;
}
