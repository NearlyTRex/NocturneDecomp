// Name: FUN_0049d500
// Address: 0049d500
// Address Range: [[0049d500, 0049d5a8]]
// Convention: unknown
// Signature: void FUN_0049d500(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d500(uint param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = _DAT_01c913d0 * 0xa4;
  _DAT_01c913d0 = _DAT_01c913d0 + 1;
  if (0x3f < _DAT_01c913d0) {
    _DAT_01c913d0 = 0;
  }
  (*(code *)**(uint **)(&DAT_01c91410 + iVar2))(iVar2 + 0x1c913d4,param_2,param_3);
  uVar1 = FUN_0040cfc0(0xc000,0xffff);
  *(uint *)(iVar2 + 0x1c91414) = uVar1;
  if (param_4 == 0) {
    *(uint *)(iVar2 + 0x1c91418) = 0x2000;
  }
  else {
    *(uint *)(iVar2 + 0x1c91418) = 0x8000;
  }
  *(int *)(iVar2 + 0x1c91420) = param_4;
  *(uint *)(iVar2 + 0x1c9141c) = 0;
  *(uint *)(iVar2 + 0x1c91434) = param_5;
  FUN_00550da0(param_5,iVar2 + 0x1c913d4);
  FUN_00550ea0(*(uint *)(iVar2 + 0x1c91434),iVar2 + 0x1c913e0);
  return;
}
