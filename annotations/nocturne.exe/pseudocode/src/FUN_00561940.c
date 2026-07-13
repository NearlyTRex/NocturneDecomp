// Name: FUN_00561940
// Address: 00561940
// Address Range: [[00561940, 00561a9e]]
// Convention: unknown
// Signature: undefined4 FUN_00561940(int param_1)

#include "nocturne.h"

uint FUN_00561940(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_f4 [12];
  uint local_c4 [12];
  byte local_94 [12];
  byte local_88 [12];
  byte local_7c [12];
  uint local_70;
  uint local_6c;
  uint local_68;
  float local_64;
  float local_60;
  float local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  byte local_4c [12];
  byte local_40 [12];
  float local_34;
  float local_30;
  float local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar5 = 0;
  if ((*(int *)(param_1 + 0x2618) != 0) && (*(int *)(param_1 + 0xbda8) != 0)) {
    FUN_0051d0a0(param_1 + 0x150,*(uint *)(param_1 + 0xbdb4));
    local_6c = 0x3f000000;
    local_68 = 0x3f000000;
    puVar3 = local_c4;
    puVar4 = local_f4;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    local_70 = 0;
    uVar1 = FUN_0055a8b0(local_94,&local_70,local_f4);
    FUN_0040a240(param_1,local_88,uVar1);
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    uVar1 = FUN_0055a8b0(local_40,&local_58,local_f4);
    FUN_0040a200(param_1,&local_34,uVar1);
    local_28 = 0;
    local_24 = 0;
    local_20 = 0x3f800000;
    uVar1 = FUN_0055a8b0(local_4c,&local_28,local_f4);
    FUN_0040a200(param_1,&local_1c,uVar1);
    local_64 = local_1c - local_34;
    local_60 = local_18 - local_30;
    local_5c = local_14 - local_2c;
    FUN_0054e4a0(local_7c,&local_64);
    FUN_00451b70(local_88,local_7c,0x42600000,0x40c00000);
  }
  if (*(int *)(param_1 + 0x2618) == 0) {
    return *(uint *)(param_1 + 0x2618);
  }
  FUN_00427260(param_1);
  return *(uint *)(param_1 + 0x2618);
}
