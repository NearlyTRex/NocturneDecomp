// Name: cockpit_ckptutil.c_drawClippedEdges_FUN_0042ef60
// Address: 0042ef60
// Address Range: [[0042ef60, 0042f044]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_drawClippedEdges_FUN_0042ef60(short *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_drawClippedEdges_FUN_0042ef60(short *param_1,int param_2,int param_3,int param_4)

{
  int y2;
  int x1;
  int y1;
  int x2;
  int iVar1;
  
  iVar1 = 0;
  _DAT_01c00c70 = 0xfb;
  if (0 < param_2) {
    do {
      x1 = *param_1 + param_3;
      if (*param_1 + param_3 < _DAT_01c00c58) {
        x1 = _DAT_01c00c58;
      }
      if (_DAT_01c00c60 <= x1) {
        x1 = _DAT_01c00c60;
      }
      y1 = param_1[1] + param_4;
      if (param_1[1] + param_4 < _DAT_01c00c5c) {
        y1 = _DAT_01c00c5c;
      }
      if (_DAT_01c00c64 <= y1) {
        y1 = _DAT_01c00c64;
      }
      x2 = param_1[2] + param_3;
      if (param_1[2] + param_3 < _DAT_01c00c58) {
        x2 = _DAT_01c00c58;
      }
      if (_DAT_01c00c60 <= x2) {
        x2 = _DAT_01c00c60;
      }
      y2 = ((short)(param_1[3] * 2) >> 1) + param_4;
      if (y2 < _DAT_01c00c5c) {
        y2 = _DAT_01c00c5c;
      }
      if (_DAT_01c00c64 <= y2) {
        y2 = _DAT_01c00c64;
      }
      engine_2d_c_drawLine_FUN_004015a0(x1,y1,x2,y2);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 4;
    } while (iVar1 < param_2);
  }
  return;
}
