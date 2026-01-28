// Name: core_fire.cpp_CFireEffect_FUN_004c91e0
// Address: 004c91e0
// Address Range: [[004c91e0, 004c923c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_FUN_004c91e0(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c91e0(CFireEffect *this_ptr)

{
  char *pcVar1;
  
  core_fire_cpp_FUN_004c6170();
  pcVar1 = g_TrailActiveListHead->unk;
  g_TrailActiveListHead = (CTrail *)(pcVar1 + 1);
  if ((int)(pcVar1 + 1) < 0x32) {
    return;
  }
  g_TrailActiveListHead = (CTrail *)0x0;
  return;
}
