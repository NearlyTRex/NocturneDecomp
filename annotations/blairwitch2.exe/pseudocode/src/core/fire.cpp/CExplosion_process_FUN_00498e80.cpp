// Name: core_fire.cpp_CExplosion_process_FUN_00498e80
// Address: 00498e80
// Address Range: [[00498e80, 00498ec4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_process_FUN_00498e80(CExplosion *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_process_FUN_00498e80(CExplosion *this_ptr)

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
