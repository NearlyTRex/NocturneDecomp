// Name: FUN_00565a90
// Address: 00565a90
// Address Range: [[00565a90, 00565bac]]
// Convention: unknown
// Signature: undefined4 FUN_00565a90(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00565a90(uint param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  _DAT_02cf5fdc = 0;
  if (param_3 < 0x10) {
    param_3 = 0x10;
  }
  if ((_DAT_02cf6108 == 0) && (iVar2 = FUN_00564be0(_DAT_02cf611c), iVar2 == 0)) {
    return 0;
  }
  iVar2 = (*_DAT_02cf5ff4)(param_1,param_2,param_3,&DAT_01c5faec);
  if (iVar2 == 0) {
    _DAT_01c6cee8 = iVar2;
    return 0;
  }
  (*_DAT_02cf6058)(&DAT_01c6af98,0x1c6a070);
  FUN_004d4eb0();
  (*_DAT_02cf6048)(_DAT_02cf6110,_DAT_02cf6114,_DAT_02cf6118);
  _DAT_01c6cee8 = 1;
  _DAT_02cf6120 = param_3;
  iVar2 = FUN_00565820();
  piVar1 = _DAT_01c5faec;
  if (iVar2 == 0) {
    return 1;
  }
  if (DAT_005fba20 == 0x10) {
    iVar2 = *_DAT_01c5faec;
    *(short *)_DAT_01c5faec = -0x5433;
    bVar3 = (short)*piVar1 != -0x5433;
    *(short *)piVar1 = (short)iVar2;
  }
  else {
    if (DAT_005fba20 != 0x20) goto LAB_00565b6a;
    iVar2 = *_DAT_01c5faec;
    *_DAT_01c5faec = -0x55443323;
    bVar3 = *piVar1 != -0x55443323;
    *piVar1 = iVar2;
  }
  _DAT_02cf5fdc = (uint)bVar3;
LAB_00565b6a:
  FUN_00565870(0);
  return 1;
}
