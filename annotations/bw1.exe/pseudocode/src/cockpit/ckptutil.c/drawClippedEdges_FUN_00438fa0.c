// Name: cockpit_ckptutil.c_drawClippedEdges_FUN_00438fa0
// Address: 00438fa0
// Address Range: [[00438fa0, 00439084]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_drawClippedEdges_FUN_00438fa0(short *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_drawClippedEdges_FUN_00438fa0(short *param_1,int param_2,int param_3,int param_4)

{
  int y2;
  int x1;
  int y1;
  int x2;
  int iVar1;
  
  iVar1 = 0;
  _DAT_01c4f020 = 0xfb;
  if (0 < param_2) {
    do {
      x1 = *param_1 + param_3;
      if (*param_1 + param_3 < _DAT_01c4f008) {
        x1 = _DAT_01c4f008;
      }
      if (_DAT_01c4f010 <= x1) {
        x1 = _DAT_01c4f010;
      }
      y1 = param_1[1] + param_4;
      if (param_1[1] + param_4 < _DAT_01c4f00c) {
        y1 = _DAT_01c4f00c;
      }
      if (_DAT_01c4f014 <= y1) {
        y1 = _DAT_01c4f014;
      }
      x2 = param_1[2] + param_3;
      if (param_1[2] + param_3 < _DAT_01c4f008) {
        x2 = _DAT_01c4f008;
      }
      if (_DAT_01c4f010 <= x2) {
        x2 = _DAT_01c4f010;
      }
      y2 = ((short)(param_1[3] * 2) >> 1) + param_4;
      if (y2 < _DAT_01c4f00c) {
        y2 = _DAT_01c4f00c;
      }
      if (_DAT_01c4f014 <= y2) {
        y2 = _DAT_01c4f014;
      }
      engine_2d_c_drawLine_FUN_004011a0(x1,y1,x2,y2);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 4;
    } while (iVar1 < param_2);
  }
  return;
}
