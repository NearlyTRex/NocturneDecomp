// Name: FUN_00438fa0
// Address: 00438fa0
// Address Range: [[00438fa0, 00439084]]
// Convention: unknown
// Signature: void FUN_00438fa0(short *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438fa0(short *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  _DAT_01c4f020 = 0xfb;
  if (0 < param_2) {
    do {
      iVar2 = *param_1 + param_3;
      if (*param_1 + param_3 < _DAT_01c4f008) {
        iVar2 = _DAT_01c4f008;
      }
      if (_DAT_01c4f010 <= iVar2) {
        iVar2 = _DAT_01c4f010;
      }
      iVar3 = param_1[1] + param_4;
      if (param_1[1] + param_4 < _DAT_01c4f00c) {
        iVar3 = _DAT_01c4f00c;
      }
      if (_DAT_01c4f014 <= iVar3) {
        iVar3 = _DAT_01c4f014;
      }
      iVar4 = param_1[2] + param_3;
      if (param_1[2] + param_3 < _DAT_01c4f008) {
        iVar4 = _DAT_01c4f008;
      }
      if (_DAT_01c4f010 <= iVar4) {
        iVar4 = _DAT_01c4f010;
      }
      iVar1 = ((short)(param_1[3] * 2) >> 1) + param_4;
      if (iVar1 < _DAT_01c4f00c) {
        iVar1 = _DAT_01c4f00c;
      }
      if (_DAT_01c4f014 <= iVar1) {
        iVar1 = _DAT_01c4f014;
      }
      FUN_004011a0(iVar2,iVar3,iVar4,(short)iVar1);
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 4;
    } while (iVar5 < param_2);
  }
  return;
}
