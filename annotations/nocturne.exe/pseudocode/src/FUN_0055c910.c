// Name: FUN_0055c910
// Address: 0055c910
// Address Range: [[0055c910, 0055c960]]
// Convention: unknown
// Signature: void FUN_0055c910(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0055c910(void)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint local_34 [6];
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_8;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_8 = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  local_34[3] = 0;
  local_34[4] = 0;
  puVar2 = local_34;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
