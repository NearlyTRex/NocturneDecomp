// Name: FUN_004cc440
// Address: 004cc440
// Address Range: [[004cc440, 004cc5c6]]
// Convention: unknown
// Signature: void FUN_004cc440(undefined4 param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cc440(uint param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  byte local_44 [4];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  local_1c = (int)ROUND(*param_2 * _DAT_005a02b0);
  local_18 = (int)ROUND(param_2[1] * _DAT_005a02b0);
  local_14 = (int)ROUND(param_2[2] * _DAT_005a02b0);
  wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704,&local_1c);
  piVar1 = DAT_005ae704;
  puVar3 = (uint *)*DAT_005ae704;
  puVar4 = (uint *)*DAT_005ae704 + 0xc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar3 = (uint *)*piVar1;
  puVar4 = (uint *)*piVar1 + 0x18;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar3 = (uint *)*piVar1;
  puVar4 = (uint *)*piVar1 + 0x24;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(int *)*piVar1 = *(int *)*piVar1 + 0x80;
  *(int *)(*piVar1 + 4) = *(int *)(*piVar1 + 4) + 0x80;
  *(int *)(*piVar1 + 0x30) = *(int *)(*piVar1 + 0x30) + -0x80;
  *(int *)(*piVar1 + 0x34) = *(int *)(*piVar1 + 0x34) + 0x80;
  *(int *)(*piVar1 + 0x60) = *(int *)(*piVar1 + 0x60) + -0x80;
  *(int *)(*piVar1 + 100) = *(int *)(*piVar1 + 100) + -0x80;
  *(int *)(*piVar1 + 0x90) = *(int *)(*piVar1 + 0x90) + 0x80;
  *(int *)(*piVar1 + 0x94) = *(int *)(*piVar1 + 0x94) + -0x80;
  *(uint *)(*piVar1 + 0x10) = 0x80000000;
  *(uint *)(*piVar1 + 0x40) = 0x80000000;
  *(uint *)(*piVar1 + 0x70) = 0x80000000;
  *(uint *)(*piVar1 + 0xa0) = 0x80000000;
  *(uint *)(*piVar1 + 0x18) = 0x80000;
  *(uint *)(*piVar1 + 0x1c) = 0xf80000;
  *(uint *)(*piVar1 + 0x48) = 0xf80000;
  *(uint *)(*piVar1 + 0x4c) = 0xf80000;
  *(uint *)(*piVar1 + 0x78) = 0xf80000;
  *(uint *)(*piVar1 + 0x7c) = 0x80000;
  *(uint *)(*piVar1 + 0xa8) = 0x80000;
  *(uint *)(*piVar1 + 0xac) = 0x80000;
  local_40 = 4;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_2c = 0;
  local_20 = 3;
  local_28 = 1;
  local_24 = 2;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(piVar1,local_44,99);
  return;
}
