// Name: FUN_0047afb0
// Address: 0047afb0
// Address Range: [[0047afb0, 0047b1eb]]
// Convention: unknown
// Signature: void FUN_0047afb0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047b117) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047afb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = _DAT_01c25f7c + param_3;
  if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x134)) {
    iVar3 = FUN_0047aef0(param_1,*(int *)(param_1 + 0x138));
    iVar3 = iVar3 + param_2;
    iVar4 = FUN_0047aef0(param_1,*(uint *)(param_1 + 0x134));
    iVar4 = iVar4 + param_2;
    iVar5 = iVar4;
    if (iVar4 < iVar3) {
      iVar5 = iVar3;
      iVar3 = iVar4;
    }
    if (_DAT_01c25f84 == 0) {
      FUN_004031c0(iVar3,param_3,iVar5,iVar1,_DAT_01c263a8);
    }
    else {
      iVar4 = (_DAT_01c263a8 & 0xff) * 3;
      FUN_004f8e20((uint)(byte)(&DAT_01c3583a)[iVar4] |
                   (uint)(byte)(&DAT_01c35838)[iVar4] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar4] << 8);
      FUN_004f90d0(iVar3,param_3,iVar5,iVar1);
    }
  }
  FUN_00406da0(0xffff);
  FUN_004f3570(0x3f800000);
  uVar6 = _DAT_01c25590;
  iVar3 = param_1;
  uVar7 = _DAT_01c263ac;
  if (*(int *)(param_1 + 0x13c) != 0) {
    if (0x3ff < *(uint *)(param_1 + 0x130)) {
      _DAT_01d046a0 = "..\\shape\\edittool.cpp";
      _DAT_01d046a4 = 0x223;
      FUN_004e4500("CInputString::draw - string too big for hidden text!");
    }
    FUN_005b77c0(0x1c25f88,0x2a,*(uint *)(param_1 + 0x130));
    uVar7 = _DAT_01c263ac;
    uVar6 = _DAT_01c25590;
    *(byte *)(*(int *)(param_1 + 0x130) + 0x1c25f88) = 0;
    iVar3 = 0x1c25f88;
  }
  FUN_004a8df0(uVar6,iVar3,param_2,param_3,uVar7,0xffffffff);
  uVar2 = FUN_0058e9e0();
  if ((uVar2 & 0x40000) != 0) {
    if (_DAT_01c25f84 == 0) {
      _DAT_01c35e60 = _DAT_01c263b0;
    }
    else {
      iVar3 = (_DAT_01c263b0 & 0xff) * 3;
      FUN_004f8e20((uint)(byte)(&DAT_01c3583a)[iVar3] |
                   (uint)(byte)(&DAT_01c35838)[iVar3] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar3] << 8);
    }
    iVar3 = FUN_0047aef0(param_1,*(uint *)(param_1 + 0x134));
    FUN_004011a0(param_2 + iVar3,param_3,param_2 + iVar3,iVar1);
  }
  return;
}
