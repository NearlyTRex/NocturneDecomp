// Name: FUN_004df5b0
// Address: 004df5b0
// Address Range: [[004df5b0, 004df60b]]
// Convention: unknown
// Signature: void FUN_004df5b0(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_004df5b0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0051da50(param_2,0);
  iVar1 = FUN_0051e020(param_2);
  iVar2 = *(int *)(param_2 + 0x2230) * 4 + iVar1;
  FUN_004df460(param_1,*(uint *)(iVar2 + 0x2c),*(uint *)(param_2 + 0x2234),
               *(uint *)(iVar2 + 0x54),*(uint *)(iVar2 + 0x7c),iVar1 + 0xc0,
               *(uint *)(iVar2 + 0x90));
  return;
}
