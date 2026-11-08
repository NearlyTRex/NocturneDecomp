// Name: FUN_00522490
// Address: 00522490
// Address Range: [[00522490, 005224eb]]
// Convention: unknown
// Signature: void FUN_00522490(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_00522490(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00569890(param_2,0);
  iVar1 = FUN_00569eb0(param_2);
  iVar2 = *(int *)(param_2 + 0x2320) * 4 + iVar1;
  FUN_00522340(param_1,*(uint *)(iVar2 + 0x2c),*(uint *)(param_2 + 0x2324),
               *(uint *)(iVar2 + 0x54),*(uint *)(iVar2 + 0x7c),iVar1 + 0xc0,
               *(uint *)(iVar2 + 0x90));
  return;
}
