// Name: core_fire.cpp_CExplosion_process_FUN_004b1820
// Address: 004b1820
// Address Range: [[004b1820, 004b1864]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_process_FUN_004b1820(CExplosion *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_process_FUN_004b1820(CExplosion *this_ptr)

{
  float fVar1;
  
  if ((0.0 < this_ptr->lifetime) &&
     (fVar1 = this_ptr->lifetime - g_CGamePtr->delta_time_float, this_ptr->lifetime = fVar1,
     fVar1 < 0.0)) {
    this_ptr->lifetime = 0.0;
    return;
  }
  return;
}
