// Name: FUN_004ba930
// Address: 004ba930
// Address Range: [[004ba930, 004baa07]]
// Convention: unknown
// Signature: void FUN_004ba930(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ba930(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_004c1dd0(param_1[0x47],param_1 + 7,*param_1,param_1[1],0,0xffffffff);
  if (param_1[6] == 0) {
    return;
  }
  iVar1 = FUN_004c4510(param_1[0x47],0x78);
  iVar1 = param_1[1] + iVar1;
  if (param_1[0x47] != _DAT_0152d254) {
    _DAT_01c4f020 = 0;
    FUN_00402f30(*param_1,iVar1,*param_1 + param_1[2] + -1);
    return;
  }
  iVar2 = param_1[2];
  iVar3 = *param_1;
  if (_DAT_01cc7ccc < iVar2) {
    do {
      FUN_0040d4b0(0x1cc7cc0,iVar3,iVar1,0xffff);
      iVar2 = iVar2 - _DAT_01cc7ccc;
      iVar3 = iVar3 + _DAT_01cc7ccc;
    } while (_DAT_01cc7ccc < iVar2);
  }
  FUN_0040d660(0x1cc7cc0,iVar3,iVar1,0,0,iVar2 + -1,_DAT_01cc7cd0 + -1,0xffff);
  return;
}
