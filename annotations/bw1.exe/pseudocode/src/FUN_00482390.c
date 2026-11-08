// Name: FUN_00482390
// Address: 00482390
// Address Range: [[00482390, 004824a5]]
// Convention: unknown
// Signature: void FUN_00482390(int *param_1,ushort *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482390(int *param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  
  if (param_3 == -1) {
    param_3 = 0x2cd;
  }
  if (param_1[7] != 0) {
    FUN_00484c20(param_1,param_2,param_3);
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
  _DAT_01bc1240 = (uint)*param_2;
  _DAT_01bc1244 = (uint)param_2[1];
  _DAT_01bc1248 = (uint)param_2[2];
  if (param_1[1] == 0) {
    if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f02c = &LAB_0057de01;
    }
    else {
      _DAT_01c4f02c = &LAB_0057e5e3;
    }
    _DAT_01c51d14 = param_3;
    _DAT_01c51d18 = 6;
    FUN_00481aa0(param_1,3,&DAT_01bc1240);
    return;
  }
  _DAT_01c51d14 = 0;
  _DAT_01c51d18 = 0;
  _DAT_01c4f02c = &LAB_00486e26;
  FUN_00481aa0(param_1,3,&DAT_01bc1240);
  return;
}
