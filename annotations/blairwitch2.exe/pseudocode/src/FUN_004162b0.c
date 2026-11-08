// Name: FUN_004162b0
// Address: 004162b0
// Address Range: [[004162b0, 004164aa]]
// Convention: unknown
// Signature: void FUN_004162b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004162b0(int param_1,float param_2)

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
  if ((*(int *)(param_1 + 0x2d0) < 3) || (*(int *)(param_1 + 0x2dc) < 1)) {
    *(uint *)(param_1 + 0x70) = 2;
    FUN_00415890(param_1,0,0);
    puVar3 = (uint *)(param_1 + 0x2c4);
    if (puVar3 != (uint *)&DAT_0265370c) {
      *puVar3 = _DAT_0265370c;
      *(uint *)(param_1 + 0x2c8) = _DAT_02653710;
      *(uint *)(param_1 + 0x2cc) = _DAT_02653714;
    }
    if ((uint *)(param_1 + 0x2b8) != puVar3) {
      *(uint *)(param_1 + 0x2b8) = *puVar3;
      *(uint *)(param_1 + 700) = *(uint *)(param_1 + 0x2c8);
      *(uint *)(param_1 + 0x2c0) = *(uint *)(param_1 + 0x2cc);
      return;
    }
  }
  else {
    if ((*(int *)(param_1 + 0x2b4) == 0) || (*(int *)(param_1 + 0x1334) != 0)) {
      if ((*(int *)(param_1 + 0x133c) != 0) || (*(int *)(param_1 + 0x1334) != 0)) {
        FUN_00417a70(param_1);
      }
      if (*(int *)(param_1 + 0x133c) == 0) {
        fVar1 = *(float *)(param_1 + 0x10d0) - param_2;
        *(float *)(param_1 + 0x10d0) = fVar1;
        if (0.0 <= fVar1) {
          puVar3 = (uint *)(param_1 + 0x24 + (uint)bVar4 * -8);
          uStack_24 = *(uint *)(param_1 + 0x20);
          auStack_20[(uint)bVar4 * -2] = *puVar3;
          auStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] = puVar3[(uint)bVar4 * -2 + 1];
          FUN_005b2290((uint *)(param_1 + 0x10e0),param_2);
          *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x10e0);
          *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x10e4);
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x10e8);
          if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0x10ec)) {
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x10ec);
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x10f0);
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x10f4);
          }
          FUN_00408ae0(param_1);
          if ((float)_DAT_005cbf32 <
              SQRT(*(float *)(param_1 + 0x1128) * *(float *)(param_1 + 0x1128) +
                   *(float *)(param_1 + 0x1120) * *(float *)(param_1 + 0x1120) +
                   *(float *)(param_1 + 0x1124) * *(float *)(param_1 + 0x1124))) {
            iVar2 = FUN_0048e340(0x01C38BC0,"disableBodyPartDamage");
            if (iVar2 == 0) {
              FUN_004222d0(auStack_60);
              uStack_5c = FUN_0040cf60(0x41200000,0x41700000);
              iStack_2c = param_1;
              iStack_28 = param_1;
              auStack_20[2] = uStack_5c;
              FUN_00537f30(0x01E661B8,&uStack_24,param_1 + 0x20,auStack_60);
              FUN_004164b0(param_1,param_2);
              return;
            }
          }
        }
        else {
          *(uint *)(param_1 + 0x1334) = 0;
          *(uint *)(param_1 + 0x10d0) = 0;
        }
      }
    }
    FUN_004164b0(param_1,param_2);
  }
  return;
}
