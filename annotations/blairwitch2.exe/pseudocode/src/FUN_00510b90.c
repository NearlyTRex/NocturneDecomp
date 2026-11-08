// Name: FUN_00510b90
// Address: 00510b90
// Address Range: [[00510b90, 00510c6c]]
// Convention: unknown
// Signature: void FUN_00510b90(int param_1,int param_2)

#include "nocturne.h"

void FUN_00510b90(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0xd4))(param_1);
  if (iVar2 == 0x1d65404) {
    fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
    iVar2 = param_1 + 0x2b4;
    *(float *)(param_1 + 0x25a8) = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x25a8) = 0;
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0xb0))(param_1,0x32,0x41c80000);
      FUN_00428e00(param_1);
      FUN_00510ab0(iVar2,&DAT_005e1581);
    }
    else if ((0.0 < *(float *)(param_2 + 4)) && (*(int *)(param_1 + 0x276c) == 0)) {
      iVar3 = FUN_00510ab0(iVar2,&DAT_005e1585);
      if (iVar3 == 0) {
        iVar3 = FUN_00510ab0(iVar2,"DAMAGE");
        if (iVar3 == 0) {
          FUN_00510ab0(iVar2,&DAT_005e1591);
          FUN_00427fb0(param_1,param_2);
          return;
        }
      }
    }
  }
  FUN_00427fb0(param_1,param_2);
  return;
}
