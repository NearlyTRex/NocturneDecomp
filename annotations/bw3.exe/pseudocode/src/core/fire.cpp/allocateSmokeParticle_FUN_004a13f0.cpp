// Name: core_fire.cpp_allocateSmokeParticle_FUN_004a13f0
// Address: 004a13f0
// Address Range: [[004a13f0, 004a141d]]
// Convention: __cdecl
// Signature: CSmokeParticle * __cdecl core_fire_cpp_allocateSmokeParticle_FUN_004a13f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSmokeParticle * __cdecl core_fire_cpp_allocateSmokeParticle_FUN_004a13f0(void)

{
  int iVar1;
  
  iVar1 = _DAT_01c74e9c * 0x2c;
  _DAT_01c74e9c = _DAT_01c74e9c + 1;
  if (0x7ff < _DAT_01c74e9c) {
    _DAT_01c74e9c = 0;
  }
  return (CSmokeParticle *)(&DAT_01c74ea0 + iVar1);
}
