// Name: core_ammo.cpp_FUN_0040e3a0
// Address: 0040e3a0
// Address Range: [[0040e3a0, 0040e3bb]]
// Convention: unknown
// Signature: void core_ammo_cpp_FUN_0040e3a0(void)

#include "nocturne.h"

void core_ammo_cpp_FUN_0040e3a0(void)

{
  CAmmoBullet *this_ptr;
  
  this_ptr = (CAmmoBullet *)debugAllocTracked1(800);
  if (this_ptr == (CAmmoBullet *)0x0) {
    return;
  }
  core_ammo_cpp_CAmmoBullet_ctor_FUN_0040e3d0(this_ptr);
  return;
}
