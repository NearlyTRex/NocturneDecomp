// Name: FUN_00469e80
// Address: 00469e80
// Address Range: [[00469e80, 00469f95]]
// Convention: unknown
// Signature: void FUN_00469e80(int *param_1,ushort *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469e80(int *param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  
  if (param_3 == -1) {
    param_3 = 0x2cd;
  }
  if (param_1[7] != 0) {
    FUN_0046c720(param_1,param_2,param_3);
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
  _DAT_01ba5c84 = (uint)*param_2;
  _DAT_01ba5c88 = (uint)param_2[1];
  _DAT_01ba5c8c = (uint)param_2[2];
  if (param_1[1] == 0) {
    if (DAT_006141c0 == 0x20) {
      _DAT_01c35e6c = &LAB_0055b3b1;
    }
    else {
      _DAT_01c35e6c = &LAB_0055bb93;
    }
    _DAT_01c38b54 = param_3;
    _DAT_01c38b58 = 6;
    FUN_00469590(param_1,3,&DAT_01ba5c84);
    return;
  }
  _DAT_01c38b54 = 0;
  _DAT_01c38b58 = 0;
  _DAT_01c35e6c = &LAB_0046e936;
  FUN_00469590(param_1,3,&DAT_01ba5c84);
  return;
}
