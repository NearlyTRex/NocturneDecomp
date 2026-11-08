// Name: FUN_004b99c0
// Address: 004b99c0
// Address Range: [[004b99c0, 004b9a5b]]
// Convention: unknown
// Signature: void FUN_004b99c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b99c0(int param_1)

{
  int iVar1;
  int iVar2;
  float *unaff_ESI;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  byte auStack_23d0 [5076];
  float afStack_ffc [1021];
  
  bVar5 = 0;
  FUN_00567370(auStack_23d0);
  iVar1 = FUN_00468900(param_1 + 0x158);
  pfVar3 = (float *)(iVar1 + 0x338);
  pfVar4 = afStack_ffc + 0x3f4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  afStack_ffc[0x3fa] = afStack_ffc[0x3f7] * _DAT_005df816;
  afStack_ffc[0x3fc] = afStack_ffc[0x3f9];
  afStack_ffc[0x3fb] = afStack_ffc[0x3f8] + (float)_DAT_005df81a;
  FUN_005673f0(auStack_23d0,0);
  *unaff_ESI = afStack_ffc[0x3fa];
  unaff_ESI[(uint)bVar5 * -2 + 1] = afStack_ffc[(uint)bVar5 * -2 + 0x3fb];
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       afStack_ffc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3fc];
  return;
}
