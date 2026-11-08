// Name: FUN_005099e0
// Address: 005099e0
// Address Range: [[005099e0, 00509abc]]
// Convention: unknown
// Signature: void FUN_005099e0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005099e0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0xcc))(param_1);
  if (iVar2 == 0x1dd6a44) {
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    iVar2 = param_1 + 0x158;
    *(float *)(param_1 + 0x2538) = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x2538) = 0;
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
      FUN_00431ce0(param_1);
      FUN_00509900(iVar2,&DAT_005cb644);
    }
    else if ((0.0 < *(float *)(param_2 + 4)) && (*(int *)(param_1 + 0x26fc) == 0)) {
      iVar3 = FUN_00509900(iVar2,&DAT_005cb648);
      if (iVar3 == 0) {
        iVar3 = FUN_00509900(iVar2,"DAMAGE");
        if (iVar3 == 0) {
          FUN_00509900(iVar2,&DAT_005cb654);
          FUN_00430d60(param_1,param_2);
          return;
        }
      }
    }
  }
  FUN_00430d60(param_1,param_2);
  return;
}
