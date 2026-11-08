// Name: FUN_00561330
// Address: 00561330
// Address Range: [[00561330, 00561454]]
// Convention: unknown
// Signature: void FUN_00561330(int param_1,int param_2)

#include "nocturne.h"

void FUN_00561330(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc28c) == 0) {
    iVar2 = *(int *)(param_2 + 0x30);
    if (((((iVar2 == 100) || (iVar2 == 0x65)) || (iVar2 == 0x66)) ||
        ((iVar2 == 0x67 || (iVar2 == 0x68)))) ||
       ((iVar2 == 0x69 || ((iVar2 == 0x6a || (iVar2 == 0x6b)))))) {
      FUN_004a1b70(0x01C51D80,"ShotShadowWithLead");
      *(uint *)(param_2 + 4) = 0;
      return;
    }
    if (iVar2 == 0x6c) {
      FUN_00408b40(param_1,param_2 + 0x1c);
    }
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2538) = fVar1;
    if (0.0 < fVar1) {
      FUN_00561060(param_1);
      FUN_004a0f00(param_1,param_2);
      return;
    }
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_00524770(param_1 + 0x158);
    if ((*(int *)(iVar2 + 0x24) != 7) && (*(int *)(iVar2 + 0x24) != 6)) {
      FUN_005247c0(param_1 + 0x158,6,1);
      FUN_005610a0(param_1);
    }
    FUN_004a0f00(param_1,param_2);
  }
  return;
}
