// Name: FUN_004d41a0
// Address: 004d41a0
// Address Range: [[004d41a0, 004d41df]]
// Convention: unknown
// Signature: void FUN_004d41a0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004d41a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + param_2 * 0x78;
  iVar2 = *(int *)(iVar1 + 0x25b0);
  if (iVar2 == 0) {
    return;
  }
  FUN_004da880(param_1 + 0x206e8,iVar2,1);
  *(uint *)(iVar1 + 0x25b0) = 0;
  return;
}
