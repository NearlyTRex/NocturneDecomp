// Name: core_fire.cpp_CFireEffect_FUN_004c8ea0
// Address: 004c8ea0
// Address Range: [[004c8ea0, 004c8ee3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_FUN_004c8ea0(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c8ea0(CFireEffect *this_ptr)

{
  core_fire_cpp_CCrater_FUN_004c4200(g_CraterPool + (int)g_TossActiveListHead);
  g_TossActiveListHead = (CToss *)((int)&g_TossActiveListHead->unk1 + 1);
  if ((int)g_TossActiveListHead < 0x14) {
    return;
  }
  g_TossActiveListHead = (CToss *)0x0;
  return;
}
