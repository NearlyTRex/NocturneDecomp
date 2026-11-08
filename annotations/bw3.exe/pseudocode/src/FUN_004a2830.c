// Name: FUN_004a2830
// Address: 004a2830
// Address Range: [[004a2830, 004a28d8]]
// Convention: unknown
// Signature: void FUN_004a2830(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a2830(uint param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = _DAT_01cefe7c * 0xa4;
  _DAT_01cefe7c = _DAT_01cefe7c + 1;
  if (0x3f < _DAT_01cefe7c) {
    _DAT_01cefe7c = 0;
  }
  (*(code *)**(uint **)(&DAT_01cefebc + iVar2))(iVar2 + 0x1cefe80,param_2,param_3);
  uVar1 = FUN_0040cea0(0xc000,0xffff);
  *(uint *)(iVar2 + 0x1cefec0) = uVar1;
  if (param_4 == 0) {
    *(uint *)(iVar2 + 0x1cefec4) = 0x2000;
  }
  else {
    *(uint *)(iVar2 + 0x1cefec4) = 0x8000;
  }
  *(int *)(iVar2 + 0x1cefecc) = param_4;
  *(uint *)(iVar2 + 0x1cefec8) = 0;
  *(uint *)(iVar2 + 0x1cefee0) = param_5;
  FUN_00556930(param_5,iVar2 + 0x1cefe80);
  FUN_00556a30(*(uint *)(iVar2 + 0x1cefee0),iVar2 + 0x1cefe8c);
  return;
}
