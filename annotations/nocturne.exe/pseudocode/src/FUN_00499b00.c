// Name: FUN_00499b00
// Address: 00499b00
// Address Range: [[00499b00, 00499c9f]]
// Convention: unknown
// Signature: void FUN_00499b00(int param_1,float param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00499b00(int param_1,float param_2,float *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float local_1b48;
  byte local_1b44 [6812];
  uint local_a8 [12];
  uint local_78 [12];
  byte local_48 [12];
  byte local_3c [12];
  byte local_30 [4];
  float local_2c;
  byte local_24 [12];
  float local_18;
  int local_14;
  
  bVar6 = 0;
  FUN_0051ed90(param_1 + 0x150,local_1b44);
  FUN_0051d2a0(param_1 + 0x150,local_30,param_5);
  local_2c = local_2c + _DAT_00582286;
  FUN_0040a240(param_1,local_24,local_30);
  local_18 = *param_3;
  local_1b48 = param_2 / _DAT_0059dcb8 + local_18;
  if (1.0 < local_1b48) {
    local_1b48 = 1.0;
  }
  local_14 = param_1 + 0x150;
  iVar3 = 0;
  do {
    iVar2 = local_14;
    FUN_0051ee60(local_14,local_1b44);
    FUN_0051c3d0(iVar2,0,0,*param_3,param_5,&LAB_0051b650);
    FUN_0051d0a0(iVar2,param_4);
    puVar4 = local_78;
    puVar5 = local_a8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    uVar1 = FUN_0055a8b0(local_48,param_6,local_a8);
    FUN_0040a240(param_1,local_3c,uVar1);
    iVar2 = FUN_0050fa30(0x01E57284,local_24,local_3c);
    if (iVar2 == 0) {
      local_1b48 = *param_3;
    }
    else if (iVar3 != 0) {
      local_18 = *param_3;
    }
    iVar3 = iVar3 + 1;
    *param_3 = (local_18 + local_1b48) * (float)_DAT_0058228a;
  } while (iVar3 < 7);
  return;
}
