// Name: FUN_00599d60
// Address: 00599d60
// Address Range: [[00599d60, 00599e01]]
// Convention: unknown
// Signature: void FUN_00599d60(int param_1,int param_2)

#include "nocturne.h"

void FUN_00599d60(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  byte *puVar3;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0xcc))(param_1);
  if (iVar2 == 0x2d24b98) {
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2538) = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x2538) = 0;
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
      FUN_00431ce0(param_1);
      puVar3 = &DAT_005d9a11;
    }
    else {
      if ((*(float *)(param_2 + 4) <= 0.0) || (*(int *)(param_1 + 0x26fc) != 0)) goto LAB_00599dc3;
      puVar3 = &DAT_005d9a15;
    }
    FUN_00599c80(param_1 + 0x158,puVar3);
  }
LAB_00599dc3:
  FUN_00430d60(param_1,param_2);
  return;
}
