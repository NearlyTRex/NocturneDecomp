// Name: core_fire.cpp_CFireEffect_FUN_004c8ea0
// Address: 004c8ea0
// Address Range: [[004c8ea0, 004c8ee3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_FUN_004c8ea0(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c8ea0(CFireEffect *this_ptr)

{
  core_fire_cpp_CCrater_FUN_004c4200(g_CraterPool + INT_02d6c6a0);
  INT_02d6c6a0 = INT_02d6c6a0 + 1;
  if (INT_02d6c6a0 < 0x14) {
    return;
  }
  INT_02d6c6a0 = 0;
  return;
}
