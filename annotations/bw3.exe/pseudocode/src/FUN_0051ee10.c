// Name: FUN_0051ee10
// Address: 0051ee10
// Address Range: [[0051ee10, 0051f351]]
// Convention: unknown
// Signature: void FUN_0051ee10(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051ee10(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1a18 [1520];
  float fVar6;
  float fVar7;
  byte *puVar8;
  uint local_23c;
  uint local_22c;
  uint local_21c;
  byte local_20c [16];
  uint local_1fc;
  uint auStack_1f8 [7];
  uint local_1dc [4];
  uint local_1cc [4];
  uint local_1bc [4];
  uint local_1ac [4];
  uint local_19c [4];
  uint local_18c [4];
  uint local_17c;
  uint local_16c [4];
  uint local_15c;
  byte local_14c [16];
  uint local_13c;
  uint auStack_138 [7];
  uint local_11c;
  uint local_10c;
  uint local_fc;
  uint local_ec;
  uint local_dc;
  uint local_cc;
  uint local_bc;
  uint local_ac;
  uint local_9c;
  uint local_8c [4];
  uint local_7c [4];
  uint local_6c;
  uint local_5c;
  uint local_4c;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar5 = 0;
  if (param_2 == 0) {
    local_24 = _DAT_01ed36e8;
    local_2c = _DAT_01ed36f0;
    FUN_00585d10(0x3fc90fdb);
    local_22c = local_17c;
    *(uint *)((int)&stack0xfffffdd8 + (uint)bVar5 * 0xfffffffe * 4) =
         auStack_1f8[(uint)bVar5 * 0xfffffffe + 0x20];
    *(uint *)(&stack0xfffffddc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x21];
    *(uint *)
     ((int)(&stack0xfffffddc + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x21)
         [(uint)bVar5 * -2 + 1];
    FUN_00585d50(0);
    local_20 = param_1 + 0x20c00;
    puVar2 = (uint *)local_20c;
  }
  else {
    local_24 = _DAT_01ed36ec;
    local_2c = _DAT_01ed36f4;
    FUN_00585d10(0xbfc90fdb);
    local_22c = local_15c;
    *(uint *)((int)&stack0xfffffdd8 + (uint)bVar5 * 0xfffffffe * 4) =
         auStack_1f8[(uint)bVar5 * 0xfffffffe + 0x28];
    *(uint *)(&stack0xfffffddc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x29];
    *(uint *)
     ((int)(&stack0xfffffddc + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x29)
         [(uint)bVar5 * -2 + 1];
    FUN_00585d50(0xbfc90fdb);
    local_20 = param_1 + 0x20be0;
    puVar2 = (uint *)local_14c;
  }
  puVar3 = puVar2 + (uint)bVar5 * -2 + 1;
  local_21c = *puVar2;
  *(uint *)((int)&stack0xfffffde8 + (uint)bVar5 * 0xfffffffe * 4) = *puVar3;
  *(uint *)(&stack0xfffffdec + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       puVar3[(uint)bVar5 * -2 + 1];
  *(uint *)
   ((int)(&stack0xfffffdec + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       (puVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  fVar7 = (1.0 - (1.0 - *(float *)(local_20 + 0x14)) * *(float *)(param_1 + 0x2f04)) *
          *(float *)(param_1 + 0x2f04);
  if (0.0 < fVar7) {
    local_1c = param_1 + 0x158;
    uVar1 = FUN_0054eac0(local_1c,*(int *)(param_1 + 0x2f00) * 0x38 + param_1 + 0x27d0,1,fVar7);
    uVar1 = FUN_004fb9c0(uVar1);
    iVar4 = local_1c;
    local_30 = FUN_004fca20(local_1c,uVar1,*(uint *)(param_1 + 0x2f04));
    local_18 = local_30;
    FUN_0054cc90(iVar4,uVar1,local_30,fVar7,local_24,&LAB_0054bef0);
    FUN_00585d10(*(uint *)(local_20 + 0xc));
    puVar2 = auStack_1f8 + 0xb;
    local_1cc[0] = local_ec;
    auStack_1f8[(uint)bVar5 * 0xfffffffe + 0xc] = auStack_138[(uint)bVar5 * 0xfffffffe + 0x14];
    auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd] =
         auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15];
    (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd)[(uint)bVar5 * -2 + 1]
         = (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15)
           [(uint)bVar5 * -2 + 1];
    FUN_00585cd0(*(uint *)(local_20 + 8),puVar2);
    local_1dc[0] = local_dc;
    auStack_1f8[(uint)bVar5 * 0xfffffffe + 8] = auStack_138[(uint)bVar5 * 0xfffffffe + 0x18];
    auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9] =
         auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19];
    (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9)[(uint)bVar5 * -2 + 1] =
         (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19)
         [(uint)bVar5 * -2 + 1];
    FUN_00585990(auStack_1f8 + 7);
    puVar2 = &stack0xfffffdd4;
    uVar1 = 0x3f733333;
    auStack_1f8[3] = local_cc;
    auStack_1f8[(uint)bVar5 * 0xfffffffe + 4] = auStack_138[(uint)bVar5 * 0xfffffffe + 0x1c];
    auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5] =
         auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x1d];
    (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5)[(uint)bVar5 * -2 + 1] =
         (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x1d)
         [(uint)bVar5 * -2 + 1];
    FUN_00585b20(&DAT_005e65b0,puVar2,uVar1);
    puVar2 = auStack_1f8 + 3;
    local_1bc[0] = local_4c;
    auStack_1f8[(uint)bVar5 * 0xfffffffe + 0x10] = auStack_138[(uint)bVar5 * 0xfffffffe + 0x3c];
    fVar6 = fVar7;
    auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11] =
         auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x3d];
    (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11)[(uint)bVar5 * -2 + 1]
         = (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x3d)
           [(uint)bVar5 * -2 + 1];
    FUN_00585990(auStack_1f8 + 0xf,puVar2,fVar7);
    local_1ac[0] = local_1fc;
    auStack_1f8[(uint)bVar5 * 0xfffffffe + 0x14] = auStack_1f8[(uint)bVar5 * 0xfffffffe];
    auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15] =
         auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
    (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15)[(uint)bVar5 * -2 + 1]
         = (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1)
           [(uint)bVar5 * -2 + 1];
    local_28 = param_1 + 0x808;
    iVar4 = local_24 * 0x10;
    FUN_00585b20(local_28 + iVar4,auStack_1f8 + 0x13);
    puVar2 = (uint *)(iVar4 + 0x808 + param_1);
    puVar3 = puVar2 + (uint)bVar5 * -2 + 1;
    *puVar2 = local_10c;
    *puVar3 = auStack_138[(uint)bVar5 * 0xfffffffe + 0xc];
    puVar3[(uint)bVar5 * -2 + 1] =
         auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd];
    (puVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd)
         [(uint)bVar5 * -2 + 1];
    FUN_00585990(&stack0xfffffdd4,&stack0xfffffde4,auStack_1f8 + 3);
    local_18c[0] = local_fc;
    auStack_1f8[(uint)bVar5 * 0xfffffffe + 0x1c] = auStack_138[(uint)bVar5 * 0xfffffffe + 0x10];
    auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x1d] =
         auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11];
    (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x1d)[(uint)bVar5 * -2 + 1]
         = (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11)
           [(uint)bVar5 * -2 + 1];
    FUN_00585990(auStack_1f8 + 0x1b);
    uVar1 = local_2c;
    puVar8 = &LAB_0054bef0;
    local_19c[0] = local_9c;
    auStack_1f8[(uint)bVar5 * 0xfffffffe + 0x18] = auStack_138[(uint)bVar5 * 0xfffffffe + 0x28];
    iVar4 = local_1c;
    auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19] =
         auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x29];
    (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19)[(uint)bVar5 * -2 + 1]
         = (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x29)
           [(uint)bVar5 * -2 + 1];
    FUN_0054d8f0(local_1c,auStack_1f8 + 0x17,fVar6,uVar1,puVar8);
    if (param_2 == 0) {
      uVar1 = FUN_0054eac0(iVar4);
      local_18 = FUN_00548090(uVar1,"?Bip01 L Finger1" + 1,1);
      local_34 = FUN_00548090(uVar1,"Bip01 L Finger11",1);
      FUN_00585cd0(0x3fc90fdb);
      puVar2 = auStack_138 + 0x2b;
      local_18 = local_18 * 0x10;
      iVar4 = local_28 + local_18;
      local_8c[0] = local_6c;
      auStack_138[(uint)bVar5 * 0xfffffffe + 0x2c] = auStack_138[(uint)bVar5 * 0xfffffffe + 0x34];
      auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x2d] =
           auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x35];
      (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x2d)
      [(uint)bVar5 * -2 + 1] =
           (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x35)
           [(uint)bVar5 * -2 + 1];
      FUN_00585990(iVar4,puVar2);
      local_19c[0] = local_5c;
      auStack_1f8[(uint)bVar5 * 0xfffffffe + 0x18] = auStack_138[(uint)bVar5 * 0xfffffffe + 0x38];
      auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19] =
           auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x39];
      (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19)
      [(uint)bVar5 * -2 + 1] =
           (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x39)
           [(uint)bVar5 * -2 + 1];
      puVar2 = (uint *)(local_18 + 0x808 + param_1);
      puVar3 = puVar2 + (uint)bVar5 * -2 + 1;
      *puVar2 = local_5c;
      *puVar3 = auStack_138[(uint)bVar5 * 0xfffffffe + 0x38];
      puVar3[(uint)bVar5 * -2 + 1] =
           auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x39];
      (puVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x39)
           [(uint)bVar5 * -2 + 1];
      FUN_00585cd0(0x40490fdb);
      puVar2 = auStack_138 + 0x2f;
      local_18 = local_34 * 0x10;
      iVar4 = local_28 + local_34 * 0x10;
      local_7c[0] = local_13c;
      auStack_138[(uint)bVar5 * 0xfffffffe + 0x30] = auStack_138[(uint)bVar5 * 0xfffffffe];
      auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x31] =
           auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
      (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x31)
      [(uint)bVar5 * -2 + 1] =
           (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1)
           [(uint)bVar5 * -2 + 1];
      FUN_00585990(iVar4,puVar2);
      local_19c[0] = local_23c;
      auStack_1f8[(uint)bVar5 * 0xfffffffe + 0x18] =
           *(uint *)(&stack0xfffffdc8 + (uint)bVar5 * -8);
      auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19] =
           *(uint *)(&stack0xfffffdcc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19)
      [(uint)bVar5 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xfffffdcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4);
      puVar2 = (uint *)(local_18 + 0x808 + param_1);
      puVar3 = puVar2 + (uint)bVar5 * -2 + 1;
      *puVar2 = local_23c;
      *puVar3 = *(uint *)(&stack0xfffffdc8 + (uint)bVar5 * -8);
      puVar3[(uint)bVar5 * -2 + 1] =
           *(uint *)(&stack0xfffffdcc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      (puVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xfffffdcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4);
    }
    if ((float)_DAT_005cd48f < *(float *)(param_1 + 0x20c80)) {
      FUN_00585cd0(0x3fc90fdb);
      puVar2 = auStack_1f8 + 0x23;
      local_16c[0] = local_bc;
      auStack_1f8[(uint)bVar5 * 0xfffffffe + 0x24] = auStack_138[(uint)bVar5 * 0xfffffffe + 0x20];
      auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x25] =
           auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x21];
      (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x25)
      [(uint)bVar5 * -2 + 1] =
           (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x21)
           [(uint)bVar5 * -2 + 1];
      FUN_00585990(auStack_1f8 + 0xf,puVar2);
      auStack_138[3] = local_ac;
      auStack_138[(uint)bVar5 * 0xfffffffe + 4] = auStack_138[(uint)bVar5 * 0xfffffffe + 0x24];
      auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5] =
           auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x25];
      (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5)[(uint)bVar5 * -2 + 1]
           = (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x25)
             [(uint)bVar5 * -2 + 1];
      iVar4 = local_24 * 0x10;
      FUN_00585b20(param_1 + 0x808 + iVar4,auStack_138 + 3,*(uint *)(param_1 + 0x20c80));
      puVar2 = (uint *)(iVar4 + 0x808 + param_1);
      puVar3 = puVar2 + (uint)bVar5 * -2 + 1;
      *puVar2 = local_11c;
      *puVar3 = auStack_138[(uint)bVar5 * 0xfffffffe + 8];
      puVar3[(uint)bVar5 * -2 + 1] =
           auStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9];
      (puVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           (auStack_138 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9)
           [(uint)bVar5 * -2 + 1];
      return;
    }
  }
  return;
}
