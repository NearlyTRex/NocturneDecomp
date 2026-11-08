// Name: FUN_00429f20
// Address: 00429f20
// Address Range: [[00429f20, 0042a0b1]]
// Convention: unknown
// Signature: undefined4 FUN_00429f20(int param_1,float param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00429f20(int param_1,float param_2,char *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    *(uint *)(param_1 + 0x27ec) = 0;
    *(uint *)(param_1 + 0x27f0) = 0;
    *(uint *)(param_1 + 0x27e8) = 0;
    return 0;
  }
  param_2 = *(float *)(param_1 + 0x27f0) - param_2;
  *(float *)(param_1 + 0x27f0) = param_2;
  if (0.0 < param_2) goto LAB_00429ff3;
  iVar5 = *(int *)(param_1 + 0x27e8);
  if ((iVar5 == 0) ||
     (fVar1 = *(float *)(iVar5 + 0x20) - *(float *)(param_1 + 0x20),
     fVar3 = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24),
     fVar2 = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28),
     (float)_DAT_005cd146 <= SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1))) {
    if (*(int *)(param_1 + 0x27ec) == 0) goto LAB_00429fa6;
    if (*(int *)(param_1 + 0x27e8) == 0) goto LAB_00429fb0;
    uVar4 = FUN_0042b420(param_1,*(int *)(param_1 + 0x27e8));
  }
  else {
    *(uint *)(param_1 + 0x27ec) = 0;
LAB_00429fa6:
    *(uint *)(param_1 + 0x27e8) = 0;
LAB_00429fb0:
    uVar4 = FUN_0042b300(param_1,param_3);
    *(uint *)(param_1 + 0x27e8) = uVar4;
  }
  *(uint *)(param_1 + 0x27ec) = uVar4;
  if (*(int *)(param_1 + 0x27ec) == 0) {
    uVar6 = 0x41200000;
    uVar4 = 0x40800000;
  }
  else {
    uVar6 = 0x40000000;
    uVar4 = 0x3f800000;
  }
  uVar4 = FUN_0040cf60(uVar4,uVar6);
  *(uint *)(param_1 + 0x27f0) = uVar4;
LAB_00429ff3:
  iVar5 = *(int *)(param_1 + 0x27ec);
  if (iVar5 == 0) {
    return 0;
  }
  uVar4 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0xcc))(iVar5,&DAT_0265370c,0,0);
  iVar5 = FUN_00423000(param_1,*(int *)(param_1 + 0x27ec) + 0x20,uVar4);
  if (iVar5 != 0) {
    if (iVar5 < 0) {
      *(uint *)(param_1 + 0x27ec) = 0;
      return 0;
    }
    return 0;
  }
  return 1;
}
