// Name: FUN_00531da0
// Address: 00531da0
// Address Range: [[00531da0, 00531e7c]]
// Convention: unknown
// Signature: void FUN_00531da0(int param_1,int param_2)

#include "nocturne.h"

void FUN_00531da0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0xcc))(param_1);
  if (iVar2 == 0x1d8136c) {
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    iVar2 = param_1 + 0x158;
    *(float *)(param_1 + 0x2538) = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x2538) = 0;
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
      FUN_004328c0(param_1);
      FUN_00531cc0(iVar2,&DAT_005ec7dc);
    }
    else if ((0.0 < *(float *)(param_2 + 4)) && (*(int *)(param_1 + 0x26fc) == 0)) {
      iVar3 = FUN_00531cc0(iVar2,&DAT_005ec7e0);
      if (iVar3 == 0) {
        iVar3 = FUN_00531cc0(iVar2,"DAMAGE");
        if (iVar3 == 0) {
          FUN_00531cc0(iVar2,&DAT_005ec7ec);
          FUN_004319e0(param_1,param_2);
          return;
        }
      }
    }
  }
  FUN_004319e0(param_1,param_2);
  return;
}
