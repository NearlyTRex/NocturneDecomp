// Name: FUN_0055d660
// Address: 0055d660
// Address Range: [[0055d660, 0055d6a8]]
// Convention: unknown
// Signature: void FUN_0055d660(undefined4 param_1)

#include "nocturne.h"

void FUN_0055d660(uint param_1)

{
  uint *unaff_ESI;
  uint *puVar1;
  byte bVar2;
  uint auStackY_1804 [1512];
  byte auStack_58 [48];
  uint uStack_28;
  uint auStack_24 [6];
  
  bVar2 = 0;
  auStack_24[3] = 0;
  auStack_24[4] = 0;
  auStack_24[5] = 0;
  FUN_0055ae80(auStack_58,auStack_24 + 3,param_1);
  FUN_0055cf10(auStack_58);
  puVar1 = unaff_ESI + (uint)bVar2 * -2 + 1;
  *unaff_ESI = uStack_28;
  *puVar1 = auStack_24[(uint)bVar2 * -2];
  puVar1[(uint)bVar2 * -2 + 1] = auStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  (puVar1 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       (auStack_24 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
  return;
}
