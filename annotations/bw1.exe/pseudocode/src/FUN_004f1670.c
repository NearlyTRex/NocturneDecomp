// Name: FUN_004f1670
// Address: 004f1670
// Address Range: [[004f1670, 004f17d2]]
// Convention: unknown
// Signature: void FUN_004f1670(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f1670(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  byte bVar3;
  uint auStackY_1808 [1519];
  byte *puVar4;
  uint local_2c;
  uint local_1c;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x1ffcc) != 0) {
    if (*(int *)(param_1 + 0x1ffac) == 0) {
      fVar1 = *(float *)(param_1 + 0x1ffd4) - param_2 * (float)_DAT_005e53b7;
      *(float *)(param_1 + 0x1ffd4) = fVar1;
      if (fVar1 < 0.0) {
        *(uint *)(param_1 + 0x1ffd4) = 0;
      }
    }
    else {
      fVar1 = param_2 * (float)_DAT_005e53b7 + *(float *)(param_1 + 0x1ffd4);
      *(float *)(param_1 + 0x1ffd4) = fVar1;
      if (1.0 < fVar1) {
        *(uint *)(param_1 + 0x1ffd4) = 0x3f800000;
      }
    }
    uVar2 = FUN_00524a00(param_1 + 0x158,"shoot",1);
    uVar2 = FUN_005240c0(uVar2);
    FUN_00568100(param_1 + 0x158,uVar2,0,*(uint *)(param_1 + 0x1ffd4),_DAT_01d06cb4,
                 &LAB_00567360);
    *(float *)(param_1 + 0x1ffd8) =
         *(float *)(param_1 + 0xc204) * _DAT_005e53bf * (float)_DAT_005e53b7 * param_2 +
         *(float *)(param_1 + 0x1ffd8);
    if (*(int *)(param_1 + 0x1ffd8) < 0x3f490fdc) {
      if (*(float *)(param_1 + 0x1ffd8) < _DAT_005e53c3) {
        *(uint *)(param_1 + 0x1ffd8) = 0xbf490fdb;
      }
    }
    else {
      *(uint *)(param_1 + 0x1ffd8) = 0x3f490fdb;
    }
    FUN_005b7af0(*(uint *)(param_1 + 0x1ffd8));
    puVar4 = &LAB_00567360;
    local_1c = local_2c;
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffd8 + (uint)bVar3 * -8);
    uVar2 = _DAT_01d06cb4;
    *(uint *)(&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    FUN_005695e0(param_1 + 0x158,&stack0xffffffe4,*(uint *)(param_1 + 0x1ffd4),uVar2,puVar4);
  }
  return;
}
