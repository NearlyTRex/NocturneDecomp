// Name: FUN_004b5e00
// Address: 004b5e00
// Address Range: [[004b5e00, 004b5ea8]]
// Convention: unknown
// Signature: void FUN_004b5e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b5e00(uint param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = _DAT_01ca9e5c * 0xa4;
  _DAT_01ca9e5c = _DAT_01ca9e5c + 1;
  if (0x3f < _DAT_01ca9e5c) {
    _DAT_01ca9e5c = 0;
  }
  (*(code *)**(uint **)(&DAT_01ca9e9c + iVar2))(iVar2 + 0x1ca9e60,param_2,param_3);
  uVar1 = FUN_0040cc60(0xc000,0xffff);
  *(uint *)(iVar2 + 0x1ca9ea0) = uVar1;
  if (param_4 == 0) {
    *(uint *)(iVar2 + 0x1ca9ea4) = 0x2000;
  }
  else {
    *(uint *)(iVar2 + 0x1ca9ea4) = 0x8000;
  }
  *(int *)(iVar2 + 0x1ca9eac) = param_4;
  *(uint *)(iVar2 + 0x1ca9ea8) = 0;
  *(uint *)(iVar2 + 0x1ca9ec0) = param_5;
  FUN_005737d0(param_5,iVar2 + 0x1ca9e60);
  FUN_005738d0(*(uint *)(iVar2 + 0x1ca9ec0),iVar2 + 0x1ca9e6c);
  return;
}
