// Name: core_fire.cpp_CExplosion_process_FUN_00486f90
// Address: 00486f90
// Address Range: [[00486f90, 00486fd4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_process_FUN_00486f90(CExplosion *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_process_FUN_00486f90(CExplosion *this_ptr)

{
  float fVar1;
  
  if ((0.0 < this_ptr->lifetime) &&
     (fVar1 = this_ptr->lifetime - *(float *)(0x01C775EC + 0x264), this_ptr->lifetime = fVar1,
     fVar1 < 0.0)) {
    this_ptr->lifetime = 0.0;
    return;
  }
  return;
}
