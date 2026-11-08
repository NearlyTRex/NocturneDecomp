// Name: FUN_00567fd0
// Address: 00567fd0
// Address Range: [[00567fd0, 005683c6]]
// Convention: unknown
// Signature: void FUN_00567fd0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00567fd0(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_19b8 [1520];
  float fVar6;
  float fVar7;
  uint local_1dc;
  uint local_1cc;
  uint local_1bc;
  byte local_1ac [16];
  uint local_19c;
  uint auStack_198 [7];
  uint local_17c [4];
  uint local_16c [4];
  uint local_15c [4];
  uint local_14c [4];
  uint local_13c [4];
  uint local_12c [4];
  uint local_11c;
  uint local_10c [4];
  uint local_fc [4];
  byte local_ec [16];
  uint local_dc;
  uint auStack_d8 [7];
  uint local_bc;
  uint local_ac;
  uint local_9c;
  uint local_8c;
  uint local_7c;
  uint local_6c;
  uint local_5c;
  uint local_4c;
  uint local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  bVar5 = 0;
  if (param_2 == 0) {
    local_24 = _DAT_0264be3c;
    local_28 = _DAT_0264be44;
    FUN_00593fe0(0x3fc90fdb);
    local_1cc = local_11c;
    *(uint *)((int)&stack0xfffffe38 + (uint)bVar5 * 0xfffffffe * 4) =
         auStack_198[(uint)bVar5 * 0xfffffffe + 0x20];
    *(uint *)(&stack0xfffffe3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x21];
    *(uint *)
     ((int)(&stack0xfffffe3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x21)
         [(uint)bVar5 * -2 + 1];
    FUN_00594020(0x3fc90fdb);
    local_20 = param_1 + 0x25674;
    puVar4 = (uint *)local_1ac;
  }
  else {
    local_24 = _DAT_0264be40;
    local_28 = _DAT_0264be48;
    FUN_00593fe0(0xbfc90fdb);
    local_1cc = local_1dc;
    *(uint *)((int)&stack0xfffffe38 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffe28 + (uint)bVar5 * -8);
    *(uint *)(&stack0xfffffe3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xfffffe2c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    *(uint *)
     ((int)(&stack0xfffffe3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffe2c + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
          ((uint)bVar5 * -2 + 1) * 4);
    FUN_00594020(0xbfc90fdb);
    local_20 = param_1 + 0x25654;
    puVar4 = (uint *)local_ec;
  }
  puVar2 = puVar4 + (uint)bVar5 * -2 + 1;
  local_1bc = *puVar4;
  *(uint *)((int)&stack0xfffffe48 + (uint)bVar5 * 0xfffffffe * 4) = *puVar2;
  *(uint *)(&stack0xfffffe4c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       puVar2[(uint)bVar5 * -2 + 1];
  *(uint *)
   ((int)(&stack0xfffffe4c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       (puVar2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  fVar6 = (1.0 - (1.0 - *(float *)(local_20 + 0x14)) * *(float *)(param_1 + 0x2d08)) *
          *(float *)(param_1 + 0x2d08);
  if (0.0 < fVar6) {
    local_1c = param_1 + 0x2b4;
    uVar1 = FUN_00547890(local_1c,*(int *)(param_1 + 0x2d04) * 0x38 + param_1 + 0x283c,1,fVar6);
    uVar1 = FUN_00502f10(uVar1);
    iVar3 = local_1c;
    local_34 = FUN_00503f50(local_1c,uVar1,*(uint *)(param_1 + 0x2d08));
    local_18 = local_34;
    FUN_00545a60(iVar3,uVar1,local_34,fVar6,local_24,&LAB_00544cc0);
    FUN_00593fe0(*(uint *)(local_20 + 0xc));
    puVar4 = auStack_198 + 0xb;
    local_16c[0] = local_4c;
    auStack_198[(uint)bVar5 * 0xfffffffe + 0xc] = auStack_d8[(uint)bVar5 * 0xfffffffe + 0x24];
    auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd] =
         auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x25];
    (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd)[(uint)bVar5 * -2 + 1]
         = (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x25)
           [(uint)bVar5 * -2 + 1];
    FUN_00593fa0(*(uint *)(local_20 + 8),puVar4);
    local_17c[0] = local_19c;
    auStack_198[(uint)bVar5 * 0xfffffffe + 8] = auStack_198[(uint)bVar5 * 0xfffffffe];
    auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9] =
         auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
    (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9)[(uint)bVar5 * -2 + 1] =
         (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1)
         [(uint)bVar5 * -2 + 1];
    FUN_00593c60(auStack_198 + 7);
    puVar4 = &stack0xfffffe34;
    uVar1 = 0x3f733333;
    auStack_198[3] = local_ac;
    auStack_198[(uint)bVar5 * 0xfffffffe + 4] = auStack_d8[(uint)bVar5 * 0xfffffffe + 0xc];
    auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5] =
         auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd];
    (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5)[(uint)bVar5 * -2 + 1] =
         (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd)
         [(uint)bVar5 * -2 + 1];
    FUN_00593df0(&DAT_005fe2f0,puVar4,uVar1);
    puVar4 = auStack_198 + 3;
    local_15c[0] = local_9c;
    auStack_198[(uint)bVar5 * 0xfffffffe + 0x10] = auStack_d8[(uint)bVar5 * 0xfffffffe + 0x10];
    fVar7 = fVar6;
    auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11] =
         auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11];
    (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11)[(uint)bVar5 * -2 + 1]
         = (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11)
           [(uint)bVar5 * -2 + 1];
    FUN_00593c60(auStack_198 + 0xf,puVar4,fVar6);
    local_14c[0] = local_bc;
    auStack_198[(uint)bVar5 * 0xfffffffe + 0x14] = auStack_d8[(uint)bVar5 * 0xfffffffe + 8];
    auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15] =
         auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9];
    (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15)[(uint)bVar5 * -2 + 1]
         = (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9)
           [(uint)bVar5 * -2 + 1];
    iVar3 = local_24 * 0x10;
    local_2c = param_1 + 0x964 + iVar3;
    FUN_00593df0(local_2c,auStack_198 + 0x13);
    local_30 = param_1 + iVar3;
    puVar4 = (uint *)(local_30 + 0x968 + (uint)bVar5 * -8);
    *(uint *)(local_30 + 0x964) = local_6c;
    puVar2 = puVar4 + (uint)bVar5 * -2 + 1;
    *puVar4 = auStack_d8[(uint)bVar5 * 0xfffffffe + 0x1c];
    *puVar2 = auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x1d];
    puVar2[(uint)bVar5 * -2 + 1] =
         (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x1d)
         [(uint)bVar5 * -2 + 1];
    FUN_00593c60(&stack0xfffffe34,&stack0xfffffe44,auStack_198 + 3);
    local_12c[0] = local_8c;
    auStack_198[(uint)bVar5 * 0xfffffffe + 0x1c] = auStack_d8[(uint)bVar5 * 0xfffffffe + 0x14];
    auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x1d] =
         auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15];
    (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x1d)[(uint)bVar5 * -2 + 1]
         = (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15)
           [(uint)bVar5 * -2 + 1];
    FUN_00593c60(auStack_198 + 0x1b);
    local_13c[0] = local_7c;
    auStack_198[(uint)bVar5 * 0xfffffffe + 0x18] = auStack_d8[(uint)bVar5 * 0xfffffffe + 0x18];
    auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19] =
         auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19];
    (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19)[(uint)bVar5 * -2 + 1]
         = (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19)
           [(uint)bVar5 * -2 + 1];
    FUN_005466c0(local_1c,auStack_198 + 0x17,fVar7,local_28,&LAB_00544cc0);
    if ((float)_DAT_005eb915 < *(float *)(param_1 + 0x256f8)) {
      FUN_00593fa0(0x3fc90fdb);
      puVar4 = auStack_198 + 0x27;
      local_fc[0] = local_5c;
      auStack_198[(uint)bVar5 * 0xfffffffe + 0x28] = auStack_d8[(uint)bVar5 * 0xfffffffe + 0x20];
      auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x29] =
           auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x21];
      (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x29)
      [(uint)bVar5 * -2 + 1] =
           (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x21)
           [(uint)bVar5 * -2 + 1];
      FUN_00593c60(auStack_198 + 0xf,puVar4);
      local_10c[0] = local_dc;
      auStack_198[(uint)bVar5 * 0xfffffffe + 0x24] = auStack_d8[(uint)bVar5 * 0xfffffffe];
      auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x25] =
           auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
      (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x25)
      [(uint)bVar5 * -2 + 1] =
           (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1)
           [(uint)bVar5 * -2 + 1];
      FUN_00593df0(local_2c,auStack_198 + 0x23,*(uint *)(param_1 + 0x256f8));
      puVar4 = (uint *)(local_30 + 0x968 + (uint)bVar5 * -8);
      *(uint *)(local_30 + 0x964) = auStack_d8[3];
      puVar2 = puVar4 + (uint)bVar5 * -2 + 1;
      *puVar4 = auStack_d8[(uint)bVar5 * 0xfffffffe + 4];
      *puVar2 = auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5];
      puVar2[(uint)bVar5 * -2 + 1] =
           (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5)
           [(uint)bVar5 * -2 + 1];
      return;
    }
  }
  return;
}
