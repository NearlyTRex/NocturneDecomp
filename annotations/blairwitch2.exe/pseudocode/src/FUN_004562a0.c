// Name: FUN_004562a0
// Address: 004562a0
// Address Range: [[004562a0, 004567b4]]
// Convention: unknown
// Signature: void FUN_004562a0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004562a0(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1a78 [1520];
  float fVar6;
  float fVar7;
  uint local_29c;
  uint local_28c;
  uint local_27c;
  uint local_26c;
  uint local_25c;
  uint local_24c;
  uint local_23c;
  uint local_22c;
  uint local_21c;
  uint local_20c;
  uint local_1fc;
  uint local_1ec;
  uint local_1dc;
  uint local_1cc;
  uint local_1bc;
  uint local_1ac;
  uint local_19c;
  uint local_18c;
  uint local_17c;
  byte local_16c [16];
  uint local_15c;
  uint auStack_158 [7];
  uint local_13c;
  uint local_12c;
  uint local_11c;
  uint local_10c;
  byte local_fc [16];
  uint local_ec;
  uint auStack_e8 [7];
  uint local_cc;
  uint auStack_c8 [7];
  uint local_ac;
  uint local_9c;
  uint local_8c;
  uint local_7c [4];
  uint local_6c;
  uint local_5c [4];
  uint local_4c [6];
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  bVar5 = 0;
  if (param_2 == 0) {
    local_24 = _DAT_01b4d264;
    local_30 = _DAT_01b4d26c;
    FUN_00593fe0(0x3fc90fdb);
    local_28c = local_1ac;
    *(uint *)((int)&stack0xfffffd78 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffe58 + (uint)bVar5 * -8);
    *(uint *)(&stack0xfffffd7c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xfffffe5c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    *(uint *)
     ((int)(&stack0xfffffd7c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffe5c + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
          ((uint)bVar5 * -2 + 1) * 4);
    FUN_00594020(0x3fc90fdb);
    local_27c = local_29c;
    *(uint *)((int)&stack0xfffffd88 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffd68 + (uint)bVar5 * -8);
    *(uint *)(&stack0xfffffd8c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xfffffd6c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    *(uint *)
     ((int)(&stack0xfffffd8c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffd6c + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
          ((uint)bVar5 * -2 + 1) * 4);
    FUN_00593fa0(0xbf490fdb);
    puVar4 = &stack0xfffffe44;
    local_1bc = local_20c;
    *(uint *)((int)&stack0xfffffe48 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffdf8 + (uint)bVar5 * -8);
    *(uint *)(&stack0xfffffe4c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xfffffdfc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    *(uint *)
     ((int)(&stack0xfffffe4c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffdfc + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
          ((uint)bVar5 * -2 + 1) * 4);
    FUN_00594020(0x3fc90fdb,puVar4);
    local_1cc = local_17c;
    *(uint *)((int)&stack0xfffffe38 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffe88 + (uint)bVar5 * -8);
    *(uint *)(&stack0xfffffe3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xfffffe8c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    *(uint *)
     ((int)(&stack0xfffffe3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffe8c + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
          ((uint)bVar5 * -2 + 1) * 4);
    FUN_00593c60(&stack0xfffffe34);
    local_20 = param_1 + 0x25674;
    puVar4 = (uint *)local_16c;
  }
  else {
    local_24 = _DAT_01b4d268;
    local_30 = _DAT_01b4d270;
    FUN_00593fe0(0xbfc90fdb);
    local_28c = local_24c;
    *(uint *)((int)&stack0xfffffd78 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffdb8 + (uint)bVar5 * -8);
    *(uint *)(&stack0xfffffd7c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xfffffdbc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    *(uint *)
     ((int)(&stack0xfffffd7c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffdbc + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
          ((uint)bVar5 * -2 + 1) * 4);
    FUN_00594020(0xbfc90fdb);
    local_27c = local_12c;
    *(uint *)((int)&stack0xfffffd88 + (uint)bVar5 * 0xfffffffe * 4) =
         auStack_158[(uint)bVar5 * 0xfffffffe + 0xc];
    *(uint *)(&stack0xfffffd8c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         auStack_158[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd];
    *(uint *)
     ((int)(&stack0xfffffd8c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         (auStack_158 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd)
         [(uint)bVar5 * -2 + 1];
    FUN_00593fa0(0xbf490fdb);
    puVar4 = &stack0xfffffda4;
    local_25c = local_11c;
    *(uint *)((int)&stack0xfffffda8 + (uint)bVar5 * 0xfffffffe * 4) =
         auStack_158[(uint)bVar5 * 0xfffffffe + 0x10];
    *(uint *)(&stack0xfffffdac + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         auStack_158[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11];
    *(uint *)
     ((int)(&stack0xfffffdac + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         (auStack_158 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11)
         [(uint)bVar5 * -2 + 1];
    FUN_00594020(0xbfc90fdb,puVar4);
    local_15c = local_10c;
    auStack_158[(uint)bVar5 * 0xfffffffe] = auStack_158[(uint)bVar5 * 0xfffffffe + 0x14];
    auStack_158[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1] =
         auStack_158[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15];
    (auStack_158 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_158 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15)
         [(uint)bVar5 * -2 + 1];
    FUN_00593c60(&local_15c);
    local_20 = param_1 + 0x25654;
    puVar4 = (uint *)local_fc;
  }
  puVar2 = puVar4 + (uint)bVar5 * -2 + 1;
  local_26c = *puVar4;
  *(uint *)((int)&stack0xfffffd98 + (uint)bVar5 * 0xfffffffe * 4) = *puVar2;
  *(uint *)(&stack0xfffffd9c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       puVar2[(uint)bVar5 * -2 + 1];
  *(uint *)
   ((int)(&stack0xfffffd9c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       (puVar2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  fVar6 = (1.0 - (1.0 - *(float *)(local_20 + 0x14)) * *(float *)(param_1 + 0x2d08)) *
          *(float *)(param_1 + 0x2d08);
  if (0.0 < fVar6) {
    local_1c = param_1 + 0x2b4;
    uVar1 = FUN_00547890(local_1c,param_1 + *(int *)(param_1 + 0x2d04) * 0x38 + 0x283c,1,fVar6);
    uVar1 = FUN_00502f10(uVar1);
    iVar3 = local_1c;
    local_34 = FUN_00503f50(local_1c,uVar1,*(uint *)(param_1 + 0x2d08));
    local_18 = local_34;
    FUN_00545a60(iVar3,uVar1,local_34,fVar6,local_24,&LAB_00544cc0);
    FUN_00593fe0(*(uint *)(local_20 + 0xc));
    puVar4 = &stack0xfffffde4;
    local_21c = local_8c;
    *(uint *)((int)&stack0xfffffde8 + (uint)bVar5 * 0xfffffffe * 4) =
         auStack_c8[(uint)bVar5 * 0xfffffffe + 0x10];
    *(uint *)(&stack0xfffffdec + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         auStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11];
    *(uint *)
     ((int)(&stack0xfffffdec + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         (auStack_c8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11)
         [(uint)bVar5 * -2 + 1];
    FUN_00593fa0(*(uint *)(local_20 + 8),puVar4);
    local_22c = local_6c;
    *(uint *)((int)&stack0xfffffdd8 + (uint)bVar5 * 0xfffffffe * 4) =
         auStack_c8[(uint)bVar5 * 0xfffffffe + 0x18];
    *(uint *)(&stack0xfffffddc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         auStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19];
    *(uint *)
     ((int)(&stack0xfffffddc + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         (auStack_c8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19)
         [(uint)bVar5 * -2 + 1];
    FUN_00593c60(&stack0xfffffdd4);
    puVar4 = &stack0xfffffd74;
    uVar1 = 0x3f733333;
    local_23c = local_ec;
    *(uint *)((int)&stack0xfffffdc8 + (uint)bVar5 * 0xfffffffe * 4) =
         auStack_e8[(uint)bVar5 * 0xfffffffe];
    *(uint *)(&stack0xfffffdcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         auStack_e8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
    *(uint *)
     ((int)(&stack0xfffffdcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         (auStack_e8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1)
         [(uint)bVar5 * -2 + 1];
    FUN_00593df0(&DAT_005fe2f0,puVar4,uVar1);
    FUN_00593df0(&DAT_005fe2f0,&stack0xfffffd94,0x3f733333);
    puVar4 = &stack0xfffffdc4;
    local_7c[0] = local_cc;
    auStack_c8[(uint)bVar5 * 0xfffffffe + 0x14] = auStack_c8[(uint)bVar5 * 0xfffffffe];
    fVar7 = fVar6;
    auStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15] =
         auStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
    (auStack_c8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15)[(uint)bVar5 * -2 + 1]
         = (auStack_c8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1)
           [(uint)bVar5 * -2 + 1];
    FUN_00593c60(auStack_c8 + 0x13,puVar4,fVar6);
    local_1fc = auStack_c8[3];
    *(uint *)((int)&stack0xfffffe08 + (uint)bVar5 * 0xfffffffe * 4) =
         auStack_c8[(uint)bVar5 * 0xfffffffe + 4];
    *(uint *)(&stack0xfffffe0c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         auStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5];
    *(uint *)
     ((int)(&stack0xfffffe0c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         (auStack_c8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5)
         [(uint)bVar5 * -2 + 1];
    iVar3 = local_24 * 0x10;
    local_28 = param_1 + 0x964 + iVar3;
    FUN_00593df0(local_28,&stack0xfffffe04);
    local_2c = param_1 + iVar3;
    puVar4 = (uint *)(local_2c + 0x968 + (uint)bVar5 * -8);
    *(uint *)(local_2c + 0x964) = local_9c;
    puVar2 = puVar4 + (uint)bVar5 * -2 + 1;
    *puVar4 = auStack_c8[(uint)bVar5 * 0xfffffffe + 0xc];
    *puVar2 = auStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd];
    puVar2[(uint)bVar5 * -2 + 1] =
         (auStack_c8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd)
         [(uint)bVar5 * -2 + 1];
    FUN_00593c60(&stack0xfffffd74,&stack0xfffffd84,&stack0xfffffdc4);
    local_1dc = local_19c;
    *(uint *)((int)&stack0xfffffe28 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffe68 + (uint)bVar5 * -8);
    *(uint *)(&stack0xfffffe2c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xfffffe6c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    *(uint *)
     ((int)(&stack0xfffffe2c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffe6c + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
          ((uint)bVar5 * -2 + 1) * 4);
    FUN_00593c60(&stack0xfffffe24);
    local_1ec = local_18c;
    *(uint *)((int)&stack0xfffffe18 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffe78 + (uint)bVar5 * -8);
    *(uint *)(&stack0xfffffe1c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xfffffe7c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    *(uint *)
     ((int)(&stack0xfffffe1c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffe7c + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
          ((uint)bVar5 * -2 + 1) * 4);
    FUN_005466c0(local_1c,&stack0xfffffe14,fVar7,local_30,&LAB_00544cc0);
    if ((float)_DAT_005d0287 < *(float *)(param_1 + 0x256f4)) {
      FUN_00593fa0(0x3f490fdb);
      puVar4 = auStack_c8 + 0x1f;
      local_4c[0] = auStack_158[3];
      auStack_c8[(uint)bVar5 * 0xfffffffe + 0x20] = auStack_158[(uint)bVar5 * 0xfffffffe + 4];
      auStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x21] =
           auStack_158[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5];
      (auStack_c8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x21)
      [(uint)bVar5 * -2 + 1] =
           (auStack_158 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5)
           [(uint)bVar5 * -2 + 1];
      FUN_00593c60(auStack_c8 + 0x13,puVar4);
      local_5c[0] = local_13c;
      auStack_c8[(uint)bVar5 * 0xfffffffe + 0x1c] = auStack_158[(uint)bVar5 * 0xfffffffe + 8];
      auStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x1d] =
           auStack_158[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9];
      (auStack_c8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x1d)
      [(uint)bVar5 * -2 + 1] =
           (auStack_158 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9)
           [(uint)bVar5 * -2 + 1];
      FUN_00593df0(local_28,auStack_c8 + 0x1b,*(uint *)(param_1 + 0x256f4));
      puVar4 = (uint *)(local_2c + 0x968 + (uint)bVar5 * -8);
      *(uint *)(local_2c + 0x964) = local_ac;
      puVar2 = puVar4 + (uint)bVar5 * -2 + 1;
      *puVar4 = auStack_c8[(uint)bVar5 * 0xfffffffe + 8];
      *puVar2 = auStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9];
      puVar2[(uint)bVar5 * -2 + 1] =
           (auStack_c8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9)
           [(uint)bVar5 * -2 + 1];
      return;
    }
  }
  return;
}
