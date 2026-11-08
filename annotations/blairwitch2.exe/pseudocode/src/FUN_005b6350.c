// Name: FUN_005b6350
// Address: 005b6350
// Address Range: [[005b6350, 005b63ab]]
// Convention: unknown
// Signature: void FUN_005b6350(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_005b6350(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_005471f0(param_2,0);
  iVar1 = FUN_00547810(param_2);
  iVar2 = *(int *)(param_2 + 0x2230) * 4 + iVar1;
  FUN_005b6200(param_1,*(uint *)(iVar2 + 0x2c),*(uint *)(param_2 + 0x2234),
               *(uint *)(iVar2 + 0x54),*(uint *)(iVar2 + 0x7c),iVar1 + 0xc0,
               *(uint *)(iVar2 + 0x90));
  return;
}
