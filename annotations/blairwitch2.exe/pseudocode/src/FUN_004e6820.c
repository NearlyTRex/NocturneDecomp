// Name: FUN_004e6820
// Address: 004e6820
// Address Range: [[004e6820, 004e68bd]]
// Convention: unknown
// Signature: void FUN_004e6820(int param_1,int param_2)

#include "nocturne.h"

void FUN_004e6820(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x149c + param_2 * 0x60;
  if ((*(int *)(0x01D182F0 + 0x1008) == 0) && (*(float *)(iVar2 + 0x18) <= 0.0)) {
    return;
  }
  FUN_0046b350(DAT_0060b280,iVar2 + 0x28,iVar2 + 0x1c);
  iVar1 = FUN_0044fd20(param_1 + 0x5ac,0xffffffff);
  FUN_0044fcc0(param_1 + 0x5ac,(float)(*(int *)(iVar1 + 0x100) + -1) * *(float *)(iVar2 + 0x18));
  thunk_FUN_004e9810(DAT_0060b280);
  return;
}
