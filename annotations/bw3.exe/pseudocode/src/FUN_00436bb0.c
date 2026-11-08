// Name: FUN_00436bb0
// Address: 00436bb0
// Address Range: [[00436bb0, 00436c94]]
// Convention: unknown
// Signature: void FUN_00436bb0(short *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00436bb0(short *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  _DAT_01c6b5c0 = 0xfb;
  if (0 < param_2) {
    do {
      iVar2 = *param_1 + param_3;
      if (*param_1 + param_3 < _DAT_01c6b5a8) {
        iVar2 = _DAT_01c6b5a8;
      }
      if (_DAT_01c6b5b0 <= iVar2) {
        iVar2 = _DAT_01c6b5b0;
      }
      iVar3 = param_1[1] + param_4;
      if (param_1[1] + param_4 < _DAT_01c6b5ac) {
        iVar3 = _DAT_01c6b5ac;
      }
      if (_DAT_01c6b5b4 <= iVar3) {
        iVar3 = _DAT_01c6b5b4;
      }
      iVar4 = param_1[2] + param_3;
      if (param_1[2] + param_3 < _DAT_01c6b5a8) {
        iVar4 = _DAT_01c6b5a8;
      }
      if (_DAT_01c6b5b0 <= iVar4) {
        iVar4 = _DAT_01c6b5b0;
      }
      iVar1 = ((short)(param_1[3] * 2) >> 1) + param_4;
      if (iVar1 < _DAT_01c6b5ac) {
        iVar1 = _DAT_01c6b5ac;
      }
      if (_DAT_01c6b5b4 <= iVar1) {
        iVar1 = _DAT_01c6b5b4;
      }
      FUN_004011a0(iVar2,iVar3,iVar4,(short)iVar1);
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 4;
    } while (iVar5 < param_2);
  }
  return;
}
