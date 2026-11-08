// Name: FUN_0046ba70
// Address: 0046ba70
// Address Range: [[0046ba70, 0046bb85]]
// Convention: unknown
// Signature: void FUN_0046ba70(int *param_1,ushort *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ba70(int *param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  
  if (param_3 == -1) {
    param_3 = 0x2cd;
  }
  if (param_1[7] != 0) {
    FUN_0046e300(param_1,param_2,param_3);
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
  _DAT_01bdd818 = (uint)*param_2;
  _DAT_01bdd81c = (uint)param_2[1];
  _DAT_01bdd820 = (uint)param_2[2];
  if (param_1[1] == 0) {
    if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5cc = &LAB_00560f31;
    }
    else {
      _DAT_01c6b5cc = &LAB_00561713;
    }
    _DAT_01c6e2b4 = param_3;
    _DAT_01c6e2b8 = 6;
    FUN_0046b160(param_1,3,&DAT_01bdd818);
    return;
  }
  _DAT_01c6e2b4 = 0;
  _DAT_01c6e2b8 = 0;
  _DAT_01c6b5cc = &LAB_0046f9a6;
  FUN_0046b160(param_1,3,&DAT_01bdd818);
  return;
}
