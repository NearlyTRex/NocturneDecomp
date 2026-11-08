// Name: FUN_00481fc0
// Address: 00481fc0
// Address Range: [[00481fc0, 0048200c]]
// Convention: unknown
// Signature: int FUN_00481fc0(int param_1,int *param_2)

#include "nocturne.h"

int FUN_00481fc0(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  (**(code **)(*(int *)(param_1 + 0xc) + 0x14))(param_1);
  if (*param_2 < 1) {
    return param_1;
  }
  FUN_004821a0(param_1,*param_2);
  for (iVar2 = 0; iVar2 < *param_2; iVar2 = iVar2 + 1) {
    uVar1 = FUN_00482440(param_2,iVar2);
    FUN_00482070(param_1,uVar1);
  }
  return param_1;
}
