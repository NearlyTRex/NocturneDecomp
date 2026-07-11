// Name: FUN_0045f5e0
// Address: 0045f5e0
// Address Range: [[0045f5e0, 0045f6f5]]
// Convention: unknown
// Signature: void FUN_0045f5e0(int *param_1,ushort *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045f5e0(int *param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  
  if (param_3 == -1) {
    param_3 = 0x2cd;
  }
  if (param_1[7] != 0) {
    FUN_00461bd0(param_1,param_2,param_3);
    return;
  }
  if ((param_1[1] == 0) && (param_1[8] == 0)) {
    puVar3 = param_2;
    do {
      uVar2 = *puVar3;
      *(uint *)((uint)uVar2 * 0x30 + 0x18 + *param_1) = (uint)puVar3[3] << 8;
      puVar1 = puVar3 + 6;
      puVar3 = puVar3 + 1;
      *(uint *)((uint)uVar2 * 0x30 + 0x1c + *param_1) = (uint)*puVar1 << 8;
    } while (puVar3 != param_2 + 3);
  }
  _DAT_01b4d76c = (uint)*param_2;
  _DAT_01b4d770 = (uint)param_2[1];
  _DAT_01b4d774 = (uint)param_2[2];
  if (param_1[1] == 0) {
    if (DAT_005b7624 == 0x20) {
      _DAT_01c00c7c = &LAB_0052f031;
    }
    else {
      _DAT_01c00c7c = &LAB_0052f823;
    }
    _DAT_01c039a0 = param_3;
    _DAT_01c039a4 = 6;
    FUN_0045ed80(param_1,3,&DAT_01b4d76c);
    return;
  }
  _DAT_01c039a0 = 0;
  _DAT_01c039a4 = 0;
  _DAT_01c00c7c = &LAB_00463a79;
  FUN_0045ed80(param_1,3,&DAT_01b4d76c);
  return;
}
