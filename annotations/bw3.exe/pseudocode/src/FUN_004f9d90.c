// Name: FUN_004f9d90
// Address: 004f9d90
// Address Range: [[004f9d90, 004f9deb]]
// Convention: unknown
// Signature: void FUN_004f9d90(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_004f9d90(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0054e420(param_2,0);
  iVar1 = FUN_0054ea40(param_2);
  iVar2 = *(int *)(param_2 + 0x2320) * 4 + iVar1;
  FUN_004f9c40(param_1,*(uint *)(iVar2 + 0x2c),*(uint *)(param_2 + 0x2324),
               *(uint *)(iVar2 + 0x54),*(uint *)(iVar2 + 0x7c),iVar1 + 0xc0,
               *(uint *)(iVar2 + 0x90));
  return;
}
