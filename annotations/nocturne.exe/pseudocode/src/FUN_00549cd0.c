// Name: FUN_00549cd0
// Address: 00549cd0
// Address Range: [[00549cd0, 00549ed2]]
// Convention: unknown
// Signature: undefined4 * FUN_00549cd0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * FUN_00549cd0(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  byte local_100 [48];
  uint local_d0 [12];
  uint local_a0 [12];
  byte local_70 [48];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  byte local_28 [12];
  byte local_1c [12];
  int local_10;
  float local_c;
  
  bVar5 = 0;
  local_c = (float)FUN_00549ef0(param_1,0);
  fVar6 = (float10)local_c;
  uVar1 = FUN_00563a30();
  local_c = (float)(int)ROUND(fVar6);
  iVar2 = FUN_00454530(uVar1);
  puVar3 = (uint *)((int)local_c * 0x18 + *(int *)(iVar2 + 0x350));
  *param_2 = *puVar3;
  param_2[1] = puVar3[1];
  param_2[2] = puVar3[2];
  param_2[3] = puVar3[3];
  param_2[4] = puVar3[4];
  param_2[5] = puVar3[5];
  local_10 = param_1 + 0x57c;
  iVar2 = FUN_00454530(local_10);
  if (*(int *)(iVar2 + 0x110) < 1) {
    return param_2;
  }
  FUN_0055afb0(local_70,&DAT_02dd1184,param_1 + 0x570);
  FUN_0055ae80(local_100,&DAT_02dd1184,param_1 + 0x30);
  FUN_0055aa00(local_70,local_100);
  puVar3 = local_a0;
  puVar4 = local_d0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  local_c = (float)FUN_00549ef0(param_1,1);
  iVar2 = local_10;
  fVar6 = (float10)local_c;
  FUN_00563a30();
  local_c = (float)(int)ROUND(fVar6);
  iVar2 = FUN_00454530(iVar2);
  puVar3 = (uint *)(*(int *)(iVar2 + 0x350) + (int)local_c * 0x18);
  local_40 = *puVar3;
  local_3c = puVar3[1];
  local_38 = puVar3[2];
  local_34 = puVar3[3];
  local_30 = puVar3[4];
  local_2c = puVar3[5];
  iVar2 = 0;
  do {
    uVar1 = FUN_0041cc70(&local_40,local_1c,iVar2,local_d0);
    uVar1 = FUN_0055a8b0(local_28,uVar1);
    iVar2 = iVar2 + 1;
    FUN_0041cc00(param_2,uVar1);
  } while (iVar2 < 8);
  return param_2;
}
