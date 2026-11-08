// Name: FUN_00433f10
// Address: 00433f10
// Address Range: [[00433f10, 004340a1]]
// Convention: unknown
// Signature: undefined4 FUN_00433f10(int param_1,float param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00433f10(int param_1,float param_2,char *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    *(uint *)(param_1 + 0x2780) = 0;
    *(uint *)(param_1 + 0x2784) = 0;
    *(uint *)(param_1 + 0x277c) = 0;
    return 0;
  }
  param_2 = *(float *)(param_1 + 0x2784) - param_2;
  *(float *)(param_1 + 0x2784) = param_2;
  if (0.0 < param_2) goto LAB_00433fe3;
  iVar5 = *(int *)(param_1 + 0x277c);
  if ((iVar5 == 0) ||
     (fVar1 = *(float *)(iVar5 + 0x20) - *(float *)(param_1 + 0x20),
     fVar3 = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24),
     fVar2 = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28),
     (float)_DAT_005d5dff <= SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1))) {
    if (*(int *)(param_1 + 0x2780) == 0) goto LAB_00433f96;
    if (*(int *)(param_1 + 0x277c) == 0) goto LAB_00433fa0;
    uVar4 = FUN_004354a0(param_1,*(int *)(param_1 + 0x277c));
  }
  else {
    *(uint *)(param_1 + 0x2780) = 0;
LAB_00433f96:
    *(uint *)(param_1 + 0x277c) = 0;
LAB_00433fa0:
    uVar4 = FUN_00435380(param_1,param_3);
    *(uint *)(param_1 + 0x277c) = uVar4;
  }
  *(uint *)(param_1 + 0x2780) = uVar4;
  if (*(int *)(param_1 + 0x2780) == 0) {
    uVar6 = 0x41200000;
    uVar4 = 0x40800000;
  }
  else {
    uVar6 = 0x40000000;
    uVar4 = 0x3f800000;
  }
  uVar4 = FUN_0040cc00(uVar4,uVar6);
  *(uint *)(param_1 + 0x2784) = uVar4;
LAB_00433fe3:
  iVar5 = *(int *)(param_1 + 0x2780);
  if (iVar5 == 0) {
    return 0;
  }
  uVar4 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xc4))(iVar5,&DAT_02c8af28,0,0);
  iVar5 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0x2780) + 0x20,uVar4);
  if (iVar5 != 0) {
    if (iVar5 < 0) {
      *(uint *)(param_1 + 0x2780) = 0;
      return 0;
    }
    return 0;
  }
  return 1;
}
