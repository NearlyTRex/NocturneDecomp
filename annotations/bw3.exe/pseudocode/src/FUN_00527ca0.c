// Name: FUN_00527ca0
// Address: 00527ca0
// Address Range: [[00527ca0, 00527d4d]]
// Convention: unknown
// Signature: void FUN_00527ca0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00527ca0(int param_1)

{
  int iVar1;
  int iVar2;
  float *unaff_ESI;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  byte auStack_23d4 [5076];
  float afStack_1000 [1021];
  
  bVar5 = 0;
  FUN_0054bf00(auStack_23d4);
  iVar1 = FUN_004625a0(param_1 + 0x158);
  pfVar3 = (float *)(iVar1 + 0x338);
  pfVar4 = afStack_1000 + 0x3f4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar1 = FUN_005a3d00(param_1 + 0x1d0,"LITEDESLILE.kfm");
  if (iVar1 == 0) {
    afStack_1000[0x3fc] = afStack_1000[0x3f9] + (float)_DAT_005cdb11;
    afStack_1000[0x3fb] = afStack_1000[0x3f8] + (float)_DAT_005cdb09;
  }
  else {
    afStack_1000[0x3fb] = afStack_1000[0x3f8];
    afStack_1000[0x3fc] = afStack_1000[0x3f9];
  }
  afStack_1000[0x3fa] = afStack_1000[0x3f7] * _DAT_005cdb19;
  FUN_0054bf80(auStack_23d4,0);
  *unaff_ESI = afStack_1000[0x3fa];
  unaff_ESI[(uint)bVar5 * -2 + 1] = afStack_1000[(uint)bVar5 * -2 + 0x3fb];
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       afStack_1000[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3fc];
  return;
}
