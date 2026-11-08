// Name: FUN_0059eeb0
// Address: 0059eeb0
// Address Range: [[0059eeb0, 0059ef19]]
// Convention: unknown
// Signature: void FUN_0059eeb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059eeb0(void)

{
  byte auStack_190 [400];
  
  FUN_005b3a90("initSockets\n");
  Ordinal_115(0x101,auStack_190);
  if (_DAT_02c8ae58 == 0) {
    _DAT_02c8ae58 = FUN_005b3740();
    if (_DAT_02c8ae58 == 0) {
      _DAT_01d1d400 = "..\\support\\trisock.cpp";
      _DAT_01d1d404 = 0x927;
      FUN_005030e0("Can't create mutex");
      return;
    }
  }
  return;
}
