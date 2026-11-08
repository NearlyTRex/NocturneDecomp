// Name: FUN_00419740
// Address: 00419740
// Address Range: [[00419740, 0041993a]]
// Convention: unknown
// Signature: void FUN_00419740(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419740(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_100c [999];
  byte auStack_60 [4];
  uint uStack_5c;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  uint auStack_20 [4];
  
  bVar4 = 0;
  if ((*(int *)(param_1 + 0x174) < 3) || (*(int *)(param_1 + 0x180) < 1)) {
    *(uint *)(param_1 + 0x70) = 2;
    FUN_00418d00(param_1,0,0);
    puVar3 = (uint *)(param_1 + 0x168);
    if (puVar3 != (uint *)&DAT_02c8af28) {
      *puVar3 = _DAT_02c8af28;
      *(uint *)(param_1 + 0x16c) = _DAT_02c8af2c;
      *(uint *)(param_1 + 0x170) = _DAT_02c8af30;
    }
    if ((uint *)(param_1 + 0x15c) != puVar3) {
      *(uint *)(param_1 + 0x15c) = *puVar3;
      *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x16c);
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x170);
      return;
    }
  }
  else {
    if ((*(int *)(param_1 + 0x158) == 0) || (*(int *)(param_1 + 0xf24) != 0)) {
      if ((*(int *)(param_1 + 0xf2c) != 0) || (*(int *)(param_1 + 0xf24) != 0)) {
        FUN_0041aef0(param_1);
      }
      if (*(int *)(param_1 + 0xf2c) == 0) {
        fVar1 = *(float *)(param_1 + 0xcbc) - param_2;
        *(float *)(param_1 + 0xcbc) = fVar1;
        if (0.0 <= fVar1) {
          puVar3 = (uint *)(param_1 + 0x24 + (uint)bVar4 * -8);
          uStack_24 = *(uint *)(param_1 + 0x20);
          auStack_20[(uint)bVar4 * -2] = *puVar3;
          auStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] = puVar3[(uint)bVar4 * -2 + 1];
          FUN_0041e0d0((uint *)(param_1 + 0xcd0),param_2);
          *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0xcd0);
          *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0xcd4);
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0xcd8);
          if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0xcdc)) {
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0xcdc);
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0xce0);
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0xce4);
          }
          FUN_004088b0(param_1);
          if ((float)_DAT_005d44a9 <
              SQRT(*(float *)(param_1 + 0xd18) * *(float *)(param_1 + 0xd18) +
                   *(float *)(param_1 + 0xd10) * *(float *)(param_1 + 0xd10) +
                   *(float *)(param_1 + 0xd14) * *(float *)(param_1 + 0xd14))) {
            iVar2 = FUN_004a6c30(0x01C51D80,"disableBodyPartDamage");
            if (iVar2 == 0) {
              FUN_0042c010(auStack_60);
              uStack_5c = FUN_0040cc00(0x41200000,0x41700000);
              iStack_2c = param_1;
              iStack_28 = param_1;
              auStack_20[2] = uStack_5c;
              FUN_00559350(0x01E82168,&uStack_24,param_1 + 0x20,auStack_60);
              FUN_00419940(param_1,param_2);
              return;
            }
          }
        }
        else {
          *(uint *)(param_1 + 0xf24) = 0;
          *(uint *)(param_1 + 0xcbc) = 0;
        }
      }
    }
    FUN_00419940(param_1,param_2);
  }
  return;
}
