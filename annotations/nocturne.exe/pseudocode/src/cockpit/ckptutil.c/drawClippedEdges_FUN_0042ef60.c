// Name: cockpit_ckptutil.c_drawClippedEdges_FUN_0042ef60
// Address: 0042ef60
// Address Range: [[0042ef60, 0042f044]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_drawClippedEdges_FUN_0042ef60(short *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_drawClippedEdges_FUN_0042ef60(short *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  _DAT_01c00c70 = 0xfb;
  if (0 < param_2) {
    do {
      iVar2 = *param_1 + param_3;
      if (*param_1 + param_3 < _DAT_01c00c58) {
        iVar2 = _DAT_01c00c58;
      }
      if (_DAT_01c00c60 <= iVar2) {
        iVar2 = _DAT_01c00c60;
      }
      iVar3 = param_1[1] + param_4;
      if (param_1[1] + param_4 < _DAT_01c00c5c) {
        iVar3 = _DAT_01c00c5c;
      }
      if (_DAT_01c00c64 <= iVar3) {
        iVar3 = _DAT_01c00c64;
      }
      iVar4 = param_1[2] + param_3;
      if (param_1[2] + param_3 < _DAT_01c00c58) {
        iVar4 = _DAT_01c00c58;
      }
      if (_DAT_01c00c60 <= iVar4) {
        iVar4 = _DAT_01c00c60;
      }
      iVar1 = ((short)(param_1[3] * 2) >> 1) + param_4;
      if (iVar1 < _DAT_01c00c5c) {
        iVar1 = _DAT_01c00c5c;
      }
      if (_DAT_01c00c64 <= iVar1) {
        iVar1 = _DAT_01c00c64;
      }
      engine_2d_c_drawLine_FUN_004015a0(iVar2,iVar3,iVar4,(short)iVar1);
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 4;
    } while (iVar5 < param_2);
  }
  return;
}
