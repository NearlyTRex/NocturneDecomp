// Name: FUN_004f6de0
// Address: 004f6de0
// Address Range: [[004f6de0, 004f6e8b]]
// Convention: unknown
// Signature: void FUN_004f6de0(int *param_1,int param_2)

#include "nocturne.h"

void FUN_004f6de0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == *param_1) {
    return;
  }
  *param_1 = param_2;
  FUN_00532b80(0x01ED78C8,param_1 + param_2 * 0x40 + 2);
  if (param_1[0x402] == 0) {
    FUN_004f6f80(param_1);
  }
  else {
    FUN_004f6bf0(param_1);
  }
  if (*param_1 != param_1[0x515]) {
    FUN_004f6a80(param_1);
  }
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < *(int *)(0x01ED78C8 + 0x14d164); iVar3 = iVar3 + 1) {
    iVar1 = *(int *)(iVar2 + 0x14d168 + 0x01ED78C8);
    iVar2 = iVar2 + 4;
    (**(code **)(*(int *)(iVar1 + 0x154) + 0x50))(iVar1);
  }
  FUN_00556c60();
  FUN_004c4870(0x01D2130C);
  *(uint *)(0x01D2130C + 0x290) = 1;
  return;
}
