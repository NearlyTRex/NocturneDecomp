// Name: FUN_00466540
// Address: 00466540
// Address Range: [[00466540, 0046678f] [004667ff, 0046682a]]
// Convention: unknown
// Signature: void FUN_00466540(int param_1,undefined4 param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466540(int param_1,uint param_2,float *param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  FUN_005a3890(param_1,0x20,1,param_2);
  FUN_005a3890(param_1 + 0x20,4,1,param_2);
  FUN_005a3890(param_1 + 0x24,4,1,param_2);
  FUN_004662b0(param_1);
  FUN_005a3890(param_1 + 0x33c,0xc,1,param_2);
  FUN_005a3890(param_1 + 0x348,0xc,1,param_2);
  FUN_005a3890(param_1 + 0x354,0xc,1,param_2);
  FUN_005a3890(param_1 + 0x360,0xc,1,param_2);
  iVar4 = 0;
  FUN_005a3890(param_1 + 0x38,4,1,param_2);
  if (0 < *(int *)(param_1 + 0x38)) {
    iVar5 = param_1 + 0x44;
    do {
      iVar4 = iVar4 + 1;
      FUN_005a3890(iVar5,0x10,1,param_2);
      iVar5 = iVar5 + 0x18;
    } while (iVar4 < *(int *)(param_1 + 0x38));
  }
  FUN_005a3890(param_1 + 0x28,4,1,param_2);
  FUN_005a3890(*(uint *)(param_1 + 0x2c),0xc,*(uint *)(param_1 + 0x20),param_2);
  FUN_005a3890(*(uint *)(param_1 + 0x30),0xc,*(uint *)(param_1 + 0x20),param_2);
  iVar4 = FUN_005a3d00(param_1,"newformat");
  if (iVar4 == 0) {
    FUN_005a3890(*(uint *)(param_1 + 0x34),0x20,*(uint *)(param_1 + 0x24),param_2);
  }
  else {
    iVar4 = 0;
    FUN_005a3890(0x1b85194,0x48,*(uint *)(param_1 + 0x24),param_2);
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar3 = 0;
      iVar5 = 0;
      do {
        *(uint *)(*(int *)(param_1 + 0x34) + iVar5) = *(uint *)(iVar3 + 0x1b8519c);
        *(uint *)(*(int *)(param_1 + 0x34) + iVar5 + 4) = *(uint *)(iVar3 + 0x1b851a0);
        *(uint *)(*(int *)(param_1 + 0x34) + 8 + iVar5) = *(uint *)(iVar3 + 0x1b851a4);
        *(uint *)(*(int *)(param_1 + 0x34) + 0xc + iVar5) = *(uint *)(iVar3 + 0x1b851a8)
        ;
        *(uint *)(*(int *)(param_1 + 0x34) + 0x10 + iVar5) =
             *(uint *)(iVar3 + 0x1b851ac);
        *(uint *)(*(int *)(param_1 + 0x34) + 0x14 + iVar5) =
             *(uint *)(iVar3 + 0x1b851b8);
        *(uint *)(*(int *)(param_1 + 0x34) + 0x18 + iVar5) =
             *(uint *)(iVar3 + 0x1b851c4);
        if (*(int *)(iVar3 + 0x1b85198) == 3) {
          *(uint *)(*(int *)(param_1 + 0x34) + 0x1c + iVar5) = 0xffffffff;
        }
        else {
          *(uint *)(*(int *)(param_1 + 0x34) + iVar5 + 0x1c) =
               *(uint *)(iVar3 + 0x1b851d0);
        }
        iVar5 = iVar5 + 0x20;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x48;
      } while (iVar4 < *(int *)(param_1 + 0x24));
    }
  }
  if (param_3 != (float *)0x0) {
    fVar6 = (float10)_DAT_005bc174;
    fVar7 = (float10)*param_3 * fVar6;
    fVar8 = (float10)param_3[1] * fVar6;
    fVar6 = (float10)param_3[2] * fVar6;
    iVar4 = *(int *)(param_1 + 0x20);
    iVar5 = 0;
    FUN_005a3120();
    FUN_005a3120();
    FUN_005a3120();
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        piVar1 = (int *)(iVar4 + *(int *)(param_1 + 0x2c));
        *piVar1 = *piVar1 - (int)ROUND(fVar7);
        piVar1 = (int *)(iVar4 + 4 + *(int *)(param_1 + 0x2c));
        *piVar1 = *piVar1 - (int)ROUND(fVar8);
        piVar1 = (int *)(iVar4 + 8 + *(int *)(param_1 + 0x2c));
        *piVar1 = *piVar1 - (int)ROUND(fVar6);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar5 < *(int *)(param_1 + 0x20));
    }
  }
  FUN_00466470(param_1);
  fVar2 = (float)_DAT_005bc17c;
  *(float *)(param_1 + 0x36c) = (float)*(int *)(param_1 + 0x354) * fVar2;
  *(float *)(param_1 + 0x370) = (float)*(int *)(param_1 + 0x358) * fVar2;
  *(float *)(param_1 + 0x374) = (float)*(int *)(param_1 + 0x35c) * fVar2;
  *(float *)(param_1 + 0x378) = (float)*(int *)(param_1 + 0x360) * fVar2;
  *(float *)(param_1 + 0x37c) = (float)*(int *)(param_1 + 0x364) * fVar2;
  *(float *)(param_1 + 0x380) = (float)*(int *)(param_1 + 0x368) * fVar2;
  return;
}
