// Name: core_fire.cpp_allocateSmokeParticle_FUN_004b4a8e
// Address: 004b4a8e
// Address Range: [[004b4a8e, 004b4abd]]
// Convention: __cdecl
// Signature: CSmokeParticle * __cdecl core_fire_cpp_allocateSmokeParticle_FUN_004b4a8e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSmokeParticle * __cdecl core_fire_cpp_allocateSmokeParticle_FUN_004b4a8e(void)

{
  int iVar1;
  
  iVar1 = _DAT_01c58a9c * 0x2c;
  _DAT_01c58a9c = _DAT_01c58a9c + 1;
  if (0x7ff < _DAT_01c58a9c) {
    _DAT_01c58a9c = 0;
  }
  return (CSmokeParticle *)(&DAT_01c58aa0 + iVar1);
}
