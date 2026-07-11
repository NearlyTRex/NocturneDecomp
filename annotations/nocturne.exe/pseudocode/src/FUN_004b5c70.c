// Name: FUN_004b5c70
// Address: 004b5c70
// Address Range: [[004b5c70, 004b5caf]]
// Convention: unknown
// Signature: void FUN_004b5c70(int param_1,int param_2)

#include "nocturne.h"

void FUN_004b5c70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + param_2 * 0x44;
  iVar2 = *(int *)(iVar1 + 0x24ac);
  if (iVar2 == 0) {
    return;
  }
  FUN_004bf360(param_1 + 0x1f5a0,iVar2,1);
  *(uint *)(iVar1 + 0x24ac) = 0;
  return;
}
