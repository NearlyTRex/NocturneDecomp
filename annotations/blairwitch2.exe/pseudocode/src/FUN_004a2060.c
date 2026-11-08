// Name: FUN_004a2060
// Address: 004a2060
// Address Range: [[004a2060, 004a2137]]
// Convention: unknown
// Signature: void FUN_004a2060(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a2060(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_004a8df0(param_1[0x47],param_1 + 7,*param_1,param_1[1],0,0xffffffff);
  if (param_1[6] == 0) {
    return;
  }
  iVar1 = FUN_004ab560(param_1[0x47],0x78);
  iVar1 = param_1[1] + iVar1;
  if (param_1[0x47] != _DAT_01511cd0) {
    _DAT_01c35e60 = 0;
    FUN_00402f30(*param_1,iVar1,*param_1 + param_1[2] + -1);
    return;
  }
  iVar2 = param_1[2];
  iVar3 = *param_1;
  if (_DAT_01caf238 < iVar2) {
    do {
      FUN_0040d900(0x1caf22c,iVar3,iVar1,0xffff);
      iVar2 = iVar2 - _DAT_01caf238;
      iVar3 = iVar3 + _DAT_01caf238;
    } while (_DAT_01caf238 < iVar2);
  }
  FUN_0040dab0(0x1caf22c,iVar3,iVar1,0,0,iVar2 + -1,_DAT_01caf23c + -1,0xffff);
  return;
}
