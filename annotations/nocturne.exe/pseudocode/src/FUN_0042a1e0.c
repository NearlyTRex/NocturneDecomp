// Name: FUN_0042a1e0
// Address: 0042a1e0
// Address Range: [[0042a1e0, 0042a4fd]]
// Convention: unknown
// Signature: undefined4 FUN_0042a1e0(int param_1,float param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0042a1e0(int param_1,float param_2,char *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_1f80 [2005];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float *local_1c;
  uint local_14;
  
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    *(uint *)(param_1 + 0x25e8) = 0;
    *(uint *)(param_1 + 0x25ec) = 0;
    *(uint *)(param_1 + 0x25e4) = 0;
    return 0;
  }
  param_2 = *(float *)(param_1 + 0x25ec) - param_2;
  *(float *)(param_1 + 0x25ec) = param_2;
  if (0.0 < param_2) goto LAB_0042a39c;
  iVar7 = *(int *)(param_1 + 0x25e4);
  if ((iVar7 == 0) ||
     (fVar1 = *(float *)(iVar7 + 0x20) - *(float *)(param_1 + 0x20),
     fVar3 = *(float *)(iVar7 + 0x24) - *(float *)(param_1 + 0x24),
     fVar2 = *(float *)(iVar7 + 0x28) - *(float *)(param_1 + 0x28),
     (float)_DAT_0057a37a <= SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1))) {
    if (*(int *)(param_1 + 0x25e8) == 0) goto LAB_0042a274;
    if (*(int *)(param_1 + 0x25e4) == 0) goto LAB_0042a27e;
    uVar8 = FUN_00552680(param_1 + 0x20,*(int *)(param_1 + 0x25e4));
    *(uint *)(param_1 + 0x25e8) = uVar8;
  }
  else {
    *(uint *)(param_1 + 0x25e8) = 0;
LAB_0042a274:
    *(uint *)(param_1 + 0x25e4) = 0;
LAB_0042a27e:
    *(uint *)(param_1 + 0x25e8) = 0;
    local_28 = 0;
    local_1c = (float *)(param_1 + 0x20);
    local_24 = 0;
    iVar7 = 0;
    for (local_20 = 0; local_20 < *(int *)(0x01E57284 + 0x154a7c); local_20 = local_20 + 1) {
      iVar5 = *(int *)(0x01E57284 + local_24 + 0x154a80);
      iVar4 = FUN_004775b0(param_3,iVar5,0);
      iVar6 = iVar7;
      if ((iVar4 != 0) &&
         (fVar1 = *local_1c - *(float *)(iVar5 + 0x20),
         fVar3 = local_1c[1] - *(float *)(iVar5 + 0x24),
         fVar2 = local_1c[2] - *(float *)(iVar5 + 0x28),
         _DAT_0057a382 <= SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1))) {
        iVar6 = iVar7 + 4;
        local_28 = local_28 + 1;
        *(int *)((int)local_1f80 + iVar7) = iVar5;
      }
      local_24 = local_24 + 4;
      iVar7 = iVar6;
    }
    if (0 < local_28) {
      local_2c = local_28 + -1;
      iVar7 = 0;
      do {
        while( true ) {
          iVar5 = FUN_0040de00(0,local_2c);
          if (local_1f80[iVar5] != 0) break;
          iVar7 = iVar7 + 1;
          if (9 < iVar7) goto LAB_0042a369;
        }
        iVar6 = FUN_00552680(param_1 + 0x20,local_1f80[iVar5]);
        *(int *)(param_1 + 0x25e8) = iVar6;
        if (iVar6 != 0) {
          *(int *)(param_1 + 0x25e4) = local_1f80[iVar5];
          break;
        }
        local_1f80[iVar5] = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 10);
    }
  }
LAB_0042a369:
  if (*(int *)(param_1 + 0x25e8) == 0) {
    uVar9 = 0x41200000;
    uVar8 = 0x40800000;
  }
  else {
    uVar9 = 0x40000000;
    uVar8 = 0x3f800000;
  }
  local_14 = FUN_0040dda0(uVar8,uVar9);
  *(uint *)(param_1 + 0x25ec) = local_14;
LAB_0042a39c:
  iVar7 = *(int *)(param_1 + 0x25e8);
  if (iVar7 == 0) {
    return 0;
  }
  uVar8 = (**(code **)(*(int *)(iVar7 + 0x14c) + 0xbc))(iVar7,&DAT_02dd1184,0,0);
  iVar7 = FUN_004247f0(param_1,*(int *)(param_1 + 0x25e8) + 0x20,uVar8);
  if (iVar7 == 0) {
    return 1;
  }
  if (iVar7 < 0) {
    *(uint *)(param_1 + 0x25e8) = 0;
    return 0;
  }
  return 0;
}
