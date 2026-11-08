// Name: FUN_0051b610
// Address: 0051b610
// Address Range: [[0051b610, 0051b6bb]]
// Convention: unknown
// Signature: void FUN_0051b610(int *param_1,int param_2)

#include "nocturne.h"

void FUN_0051b610(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == *param_1) {
    return;
  }
  *param_1 = param_2;
  FUN_0054d3c0(0x01E82168,param_1 + param_2 * 0x40 + 2);
  if (param_1[0x402] == 0) {
    FUN_0051b7b0(param_1);
  }
  else {
    FUN_0051b420(param_1);
  }
  if (*param_1 != param_1[0x515]) {
    FUN_0051b2b0(param_1);
  }
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < *(int *)(0x01E82168 + 0x14d164); iVar3 = iVar3 + 1) {
    iVar1 = *(int *)(iVar2 + 0x14d168 + 0x01E82168);
    iVar2 = iVar2 + 4;
    (**(code **)(*(int *)(iVar1 + 0x154) + 0x50))(iVar1);
  }
  FUN_00573b00();
  FUN_004dc000(0x01CCF390);
  *(uint *)(0x01CCF390 + 0x288) = 1;
  return;
}
