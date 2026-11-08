// Name: FUN_005054c0
// Address: 005054c0
// Address Range: [[005054c0, 0050555d]]
// Convention: unknown
// Signature: void FUN_005054c0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005054c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x1340 + param_2 * 0x60;
  if ((*(int *)(0x01D2C900 + 0x1008) == 0) && (*(float *)(iVar2 + 0x18) <= 0.0)) {
    return;
  }
  FUN_00483850(DAT_00612560,iVar2 + 0x28,iVar2 + 0x1c);
  iVar1 = FUN_00468900(param_1 + 0x450,0xffffffff);
  FUN_004688a0(param_1 + 0x450,(float)(*(int *)(iVar1 + 0x100) + -1) * *(float *)(iVar2 + 0x18));
  thunk_FUN_005084b0(DAT_00612560);
  return;
}
