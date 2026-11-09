// Name: cockpit_ckptutil.c_drawClippedEdges_FUN_0042e290
// Address: 0042e290
// Address Range: [[0042e290, 0042e374]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_drawClippedEdges_FUN_0042e290(short *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_drawClippedEdges_FUN_0042e290(short *param_1,int param_2,int param_3,int param_4)

{
  int y2;
  int x1;
  int y1;
  int x2;
  int iVar1;
  
  iVar1 = 0;
  _DAT_01c35e60 = 0xfb;
  if (0 < param_2) {
    do {
      x1 = *param_1 + param_3;
      if (*param_1 + param_3 < _DAT_01c35e48) {
        x1 = _DAT_01c35e48;
      }
      if (_DAT_01c35e50 <= x1) {
        x1 = _DAT_01c35e50;
      }
      y1 = param_1[1] + param_4;
      if (param_1[1] + param_4 < _DAT_01c35e4c) {
        y1 = _DAT_01c35e4c;
      }
      if (_DAT_01c35e54 <= y1) {
        y1 = _DAT_01c35e54;
      }
      x2 = param_1[2] + param_3;
      if (param_1[2] + param_3 < _DAT_01c35e48) {
        x2 = _DAT_01c35e48;
      }
      if (_DAT_01c35e50 <= x2) {
        x2 = _DAT_01c35e50;
      }
      y2 = ((short)(param_1[3] * 2) >> 1) + param_4;
      if (y2 < _DAT_01c35e4c) {
        y2 = _DAT_01c35e4c;
      }
      if (_DAT_01c35e54 <= y2) {
        y2 = _DAT_01c35e54;
      }
      engine_2d_c_drawLine_FUN_004011a0(x1,y1,x2,y2);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 4;
    } while (iVar1 < param_2);
  }
  return;
}
