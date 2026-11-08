// Name: FUN_0042e1a0
// Address: 0042e1a0
// Address Range: [[0042e1a0, 0042e40b]]
// Convention: unknown
// Signature: undefined4 FUN_0042e1a0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0042e1a0(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint auStack_44 [6];
  uint auStack_2c [6];
  uint uStack_14;
  
  bVar7 = 0;
  fVar1 = *(float *)(param_1 + 0x2fe4) - param_2;
  *(float *)(param_1 + 0x2fe4) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0x2fe4) = 0;
  }
  FUN_0042f8e0(param_1,param_2);
  FUN_00432e00(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0xb9f0) - param_2;
  *(float *)(param_1 + 0xb9f0) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0xb9f0) = 0;
  }
  if ((0.0 < *(float *)(param_1 + 0x27b4)) &&
     (param_2 = *(float *)(param_1 + 0x27b4) - param_2, *(float *)(param_1 + 0x27b4) = param_2,
     uVar2 = 0x01E81C80, param_2 < 0.0)) {
    *(uint *)(param_1 + 0x27b4) = 0;
    FUN_0054aca0(uVar2,param_1);
  }
  if (*(int *)(param_1 + 0x2540) == 2) {
    FUN_004d6340(0x01CCF390,param_1 + 0x2544,
                 *(float *)(param_1 + 0x2538) / *(float *)(param_1 + 0x253c),0x40000000);
  }
  if (*(int *)(param_1 + 0x24fc) == 0) {
    if (*(float *)(param_1 + 0x2504) == _DAT_005fd614) {
      iVar4 = 0;
      iVar3 = param_1;
      do {
        if ((*(int *)(iVar3 + 0x25b0) != 0) && (*(int *)(iVar3 + 0x25ec) == 0)) {
          FUN_00432690(param_1,iVar4,0,0);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x78;
      } while (iVar4 < 2);
    }
    fVar1 = *(float *)(param_1 + 0xe4);
    *(uint *)(param_1 + 0xe4) = 0;
    *(float *)(param_1 + 0x24) = fVar1 + *(float *)(param_1 + 0x24);
    if ((*(float *)(param_1 + 0x2504) == _DAT_005fd614) || (*(int *)(param_1 + 0xdc) != 0)) {
      uStack_14 = (**(code **)(*(int *)(param_1 + 0x154) + 0x40))
                            (param_1,*(uint *)(param_1 + 0x2fec),0);
      *(uint *)(param_1 + 0x2504) = uStack_14;
    }
    *(uint *)(param_1 + 0x2500) =
         (uint)(*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2504) + (float)_DAT_005d592f);
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x2508) = 0;
    if (((*(int *)(param_1 + 0xdc) == 0) && (*(int *)(param_1 + 0x2704) == 0)) &&
       (iVar3 = FUN_004ea770(param_1 + 0x20,*(uint *)(param_1 + 0x2ff8),
                             *(uint *)(param_1 + 0x2ff4)), iVar3 == 0)) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
      puVar5 = auStack_2c;
      puVar6 = auStack_44;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      iVar3 = FUN_004207b0(auStack_44);
      if (iVar3 != 0) {
        FUN_00573a80(*(uint *)(param_1 + 0xb9e4));
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
