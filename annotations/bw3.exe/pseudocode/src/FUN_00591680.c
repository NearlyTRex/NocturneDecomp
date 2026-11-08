// Name: FUN_00591680
// Address: 00591680
// Address Range: [[00591680, 005918d9]]
// Convention: unknown
// Signature: undefined4 FUN_00591680(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00591680(int param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  uint unaff_ESI;
  float10 fVar4;
  ulonglong uVar5;
  
  fVar2 = (float)*(int *)(param_1 + 0xd070) * (float)_DAT_005d8ebc * (float)_DAT_005d8ec4;
  if (*(int *)(param_1 + 0xd068) == 0) {
    fVar4 = ((float10)fVar2 * (float10)*(float *)(param_1 + 0xd064)) /
            (float10)*(float *)(param_1 + 0xd06c);
    uVar5 = FUN_005a3120();
    *(int *)(param_1 + 0xd060) = (int)uVar5 - (int)ROUND(fVar4);
    if (*(int *)(param_1 + 0xd094) == 0) {
      if (*(float *)(param_1 + 0xd064) == *(float *)(param_1 + 0xd06c)) {
        *(int *)(param_1 + 0xd08c) = (int)((ulonglong)uVar5 >> 0x20);
      }
      else {
        *(uint *)(param_1 + 0xd08c) = 0xffffffff;
      }
    }
  }
  else {
    fVar4 = ((float10)fVar2 * (float10)*(float *)(param_1 + 0xd064)) /
            (float10)*(float *)(param_1 + 0xd06c) +
            (float10)(((float)_DAT_005d8eb4 - (float)*(int *)(param_1 + 0xd070)) *
                      (float)_DAT_005d8ebc * (float)_DAT_005d8ec4);
    iVar1 = *(int *)(param_1 + 0xd094);
    FUN_005a3120();
    *(int *)(param_1 + 0xd060) = (int)ROUND(fVar4);
    if (iVar1 == 0) {
      if (*(float *)(param_1 + 0xd064) == *(float *)(param_1 + 0xd06c)) {
        *(uint *)(param_1 + 0xd08c) = 1;
      }
      else {
        *(uint *)(param_1 + 0xd08c) = 0xffffffff;
      }
    }
  }
  if ((*(int *)(param_1 + 0xd060) < 1000) && (*(int *)(param_1 + 0xd094) != 0)) {
    return 0;
  }
  FUN_004087f0(param_1);
  uVar3 = DAT_005f2afc;
  *(uint *)(param_1 + 0x27bc) = 1;
  FUN_0046d4c0(uVar3,*(uint *)(param_1 + 0xd060));
  FUN_0046d4b0(DAT_005f2afc,*(int *)(param_1 + 0xcdc4) != 0);
  if (*(int *)(param_1 + 0xd094) != 0) {
    unaff_ESI = FUN_0046d540(DAT_005f2afc);
    FUN_0046d520(DAT_005f2afc,0);
  }
  FUN_0046e120(DAT_005f2afc,1);
  FUN_0054e3a0(param_1 + 0x158,0xffffffff,0x2e7,1,0);
  FUN_0046e4e0(DAT_005f2afc);
  FUN_0046d4b0(DAT_005f2afc,0);
  if (0.0 < *(float *)(param_1 + 0x3254)) {
    FUN_0042f310(param_1);
  }
  if (_DAT_01d8e40c != 0) {
    FUN_004fcdc0(param_1 + 0x158,param_1);
  }
  if (*(int *)(param_1 + 0xd094) != 0) {
    FUN_0046d520(DAT_005f2afc,unaff_ESI);
  }
  FUN_00408830(param_1);
  return *(uint *)(param_1 + 0x27bc);
}
