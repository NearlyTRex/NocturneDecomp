// Name: FUN_00465400
// Address: 00465400
// Address Range: [[00465400, 004658d4]]
// Convention: unknown
// Signature: void FUN_00465400(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465400(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_10ac [954];
  uint uVar6;
  uint uVar7;
  byte local_1ac [200];
  byte local_e4 [32];
  float local_c4;
  float local_c0 [4];
  float local_b0;
  float local_ac;
  float local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  float local_88;
  float local_7c [3];
  float local_70;
  uint local_6c;
  uint local_68;
  float local_64;
  uint local_60;
  uint local_5c;
  float local_58;
  float local_4c;
  uint local_48;
  uint local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  uint local_24;
  uint local_20;
  float local_1c;
  uint local_18;
  uint local_14;
  float local_10;
  
  bVar5 = 0;
  local_10 = (float)FUN_0040cf60(0x3f800000,0x40e00000);
  *(float *)(param_1 + 0x10b8c) = local_10;
  iVar1 = FUN_00552b20();
  if (iVar1 != 0) {
    puVar4 = (uint *)&DAT_01ba5798;
    iVar1 = 0;
    do {
      iVar2 = FUN_00550b70(*puVar4);
      uVar6 = _DAT_01ba5778;
      if (iVar2 == 0) {
        puVar4[7] = 0;
        FUN_00546a90(param_1 + 0x2b4,uVar6);
        local_7c[0] = (float)local_94;
        local_c0[(uint)bVar5 * -2 + 0x12] = local_c0[(uint)bVar5 * -2 + 0xc];
        local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
             local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
        FUN_00408d70(param_1,local_c0 + 0x11);
        local_4c = local_88;
        local_c0[(uint)bVar5 * -2 + 0x1e] = local_c0[(uint)bVar5 * -2 + 0xf];
        local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f] =
             local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
        if ((float *)(puVar4 + 0xb) != local_c0 + 0x1d) {
          puVar4[0xb] = local_4c;
          puVar4[0xc] = local_48;
          puVar4[0xd] = local_44;
        }
        uVar7 = 0x40a00000;
        uVar6 = 0xc0a00000;
        local_c0[2] = (float)puVar4[0xb];
        local_c0[(uint)bVar5 * -2 + 3] = (float)puVar4[(uint)bVar5 * -2 + 0xc];
        local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             (float)(puVar4 + (uint)bVar5 * -2 + 0xc)[(uint)bVar5 * -2 + 1];
        local_10 = (float)FUN_0040cf60(uVar6,uVar7);
        local_c0[2] = local_10 + local_c0[2];
        local_10 = (float)FUN_0040cf60(0xc0000000,0x40000000);
        local_c0[3] = local_10 + local_c0[3];
        local_10 = (float)FUN_0040cf60(0xc0a00000,0x40a00000);
        local_b0 = local_10 + local_b0;
        local_a0 = local_c0[2];
        local_c0[(uint)bVar5 * -2 + 9] = local_c0[(uint)bVar5 * -2 + 3];
        local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
             local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        if ((float *)(puVar4 + 8) != local_c0 + 8) {
          puVar4[8] = local_a0;
          puVar4[9] = local_9c;
          puVar4[10] = local_98;
        }
        uVar7 = 0x40a00000;
        uVar6 = 0xc0a00000;
        local_40 = (float)puVar4[0xb];
        local_c0[(uint)bVar5 * -2 + 0x21] = (float)puVar4[(uint)bVar5 * -2 + 0xc];
        local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22] =
             (float)(puVar4 + (uint)bVar5 * -2 + 0xc)[(uint)bVar5 * -2 + 1];
        local_10 = (float)FUN_0040cf60(uVar6,uVar7);
        local_40 = local_10 + local_40;
        local_10 = (float)FUN_0040cf60(0xc0000000,0x40000000);
        local_3c = local_10 + local_3c;
        local_10 = (float)FUN_0040cf60(0xc0a00000,0x40a00000);
        local_38 = local_10 + local_38;
        local_70 = local_40;
        local_c0[(uint)bVar5 * -2 + 0x15] = local_c0[(uint)bVar5 * -2 + 0x21];
        local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
             local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22];
        if ((float *)(puVar4 + 0xe) != local_c0 + 0x14) {
          puVar4[0xe] = local_70;
          puVar4[0xf] = local_6c;
          puVar4[0x10] = local_68;
        }
        uVar7 = 0x40a00000;
        uVar6 = 0xc0a00000;
        local_34 = _DAT_01fc783c;
        local_c0[(uint)bVar5 * -2 + 0x24] = *(float *)(&DAT_01fc7840 + (uint)bVar5 * -8);
        local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25] =
             *(float *)(&DAT_01fc7844 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        fVar3 = (float)FUN_0040cf60(uVar6,uVar7);
        local_10 = fVar3;
        local_c4 = local_34;
        local_c0[(uint)bVar5 * -2] = local_c0[(uint)bVar5 * -2 + 0x24];
        local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25];
        local_c4 = fVar3 + local_c4;
        local_10 = (float)FUN_0040cf60(0xc0000000,0x40000000);
        local_c0[0] = local_10 + local_c0[0];
        local_10 = (float)FUN_0040cf60(0xc0a00000,0x40a00000);
        local_c0[1] = local_10 + local_c0[1];
        local_28 = local_c4;
        local_c0[(uint)bVar5 * -2 + 0x27] = local_c0[(uint)bVar5 * -2];
        local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x28] =
             local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        if ((float *)(puVar4 + 0x11) != local_c0 + 0x26) {
          puVar4[0x11] = local_28;
          puVar4[0x12] = local_24;
          puVar4[0x13] = local_20;
        }
        FUN_00561310(local_e4,puVar4[7],0);
        FUN_00561540(local_e4,puVar4 + 8,puVar4 + 0xb,puVar4 + 0xe,puVar4 + 0x11);
        local_1c = local_58;
        local_c0[(uint)bVar5 * -2 + 0x2a] = local_c0[(uint)bVar5 * -2 + 0x1b];
        local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2b] =
             local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
        if ((float *)(puVar4 + 1) != local_c0 + 0x29) {
          puVar4[1] = local_1c;
          puVar4[2] = local_18;
          puVar4[3] = local_14;
        }
        FUN_00561780(local_e4,puVar4 + 8,puVar4 + 0xb,puVar4 + 0xe,puVar4 + 0x11);
        local_64 = local_ac;
        local_c0[(uint)bVar5 * -2 + 0x18] = local_c0[(uint)bVar5 * -2 + 6];
        local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19] =
             local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
        if ((float *)(puVar4 + 4) != local_c0 + 0x17) {
          puVar4[4] = local_64;
          puVar4[5] = local_60;
          puVar4[6] = local_5c;
        }
        FUN_00550450();
        FUN_00550170(puVar4 + 1);
        FUN_00550210(puVar4 + 4);
        FUN_00550270(param_3);
        FUN_005593d0(0x0264B290,local_1ac,param_2);
        uVar6 = FUN_005506b0(local_1ac);
        *puVar4 = uVar6;
        FUN_005504d0();
        puVar4[0x14] = param_1;
        return;
      }
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 0x15;
    } while (iVar1 < 6);
  }
  return;
}
