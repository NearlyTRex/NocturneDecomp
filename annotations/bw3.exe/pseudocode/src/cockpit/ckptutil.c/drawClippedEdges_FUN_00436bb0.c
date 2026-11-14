// Name: cockpit_ckptutil.c_drawClippedEdges_FUN_00436bb0
// Address: 00436bb0
// Address Range: [[00436bb0, 00436c94]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_drawClippedEdges_FUN_00436bb0(SEdge *edges,int count,int x_offset,int y_offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_drawClippedEdges_FUN_00436bb0(SEdge *edges,int count,int x_offset,int y_offset)

{
  int y2;
  int x1;
  int y1;
  int x2;
  int iVar1;
  
  iVar1 = 0;
  _DAT_01c6b5c0 = 0xfb;
  if (0 < count) {
    do {
      x1 = edges->x0 + x_offset;
      if (x1 < _DAT_01c6b5a8) {
        x1 = _DAT_01c6b5a8;
      }
      if (_DAT_01c6b5b0 <= x1) {
        x1 = _DAT_01c6b5b0;
      }
      y1 = edges->y0 + y_offset;
      if (y1 < _DAT_01c6b5ac) {
        y1 = _DAT_01c6b5ac;
      }
      if (_DAT_01c6b5b4 <= y1) {
        y1 = _DAT_01c6b5b4;
      }
      x2 = edges->x1 + x_offset;
      if (x2 < _DAT_01c6b5a8) {
        x2 = _DAT_01c6b5a8;
      }
      if (_DAT_01c6b5b0 <= x2) {
        x2 = _DAT_01c6b5b0;
      }
      y2 = ((short)(edges->y1 * 2) >> 1) + y_offset;
      if (y2 < _DAT_01c6b5ac) {
        y2 = _DAT_01c6b5ac;
      }
      if (_DAT_01c6b5b4 <= y2) {
        y2 = _DAT_01c6b5b4;
      }
      engine_2d_c_drawLine_FUN_004011a0(x1,y1,x2,y2);
      iVar1 = iVar1 + 1;
      edges = edges + 1;
    } while (iVar1 < count);
  }
  return;
}
