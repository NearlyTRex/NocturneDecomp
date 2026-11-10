// Name: core_fire.cpp_allocateSmokeParticle_FUN_0049c0ee
// Address: 0049c0ee
// Address Range: [[0049c0ee, 0049c11d]]
// Convention: unknown
// Signature: undefined * core_fire_cpp_allocateSmokeParticle_FUN_0049c0ee(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * core_fire_cpp_allocateSmokeParticle_FUN_0049c0ee(void)

{
  int iVar1;
  
  iVar1 = _DAT_01c3f8dc * 0x2c;
  _DAT_01c3f8dc = _DAT_01c3f8dc + 1;
  if (0x7ff < _DAT_01c3f8dc) {
    _DAT_01c3f8dc = 0;
  }
  return &DAT_01c3f8e0 + iVar1;
}
