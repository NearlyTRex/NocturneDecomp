// Name: cockpit_ckptutil.c_drawClippedEdges_FUN_004335f0
// Address: 004335f0
// Address Range: [[004335f0, 004336d4]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_drawClippedEdges_FUN_004335f0(SEdge * edges, int count, int x_offset, int y_offset)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_drawClippedEdges_FUN_004335f0(SEdge *edges,int count,int x_offset,int y_offset)

{
  int y2;
  int x1;
  int y1;
  int x2;
  int iVar1;
  
  iVar1 = 0;
  g_ActiveRenderColor = 0xfb;
  if (0 < count) {
    do {
      x1 = edges->x0 + x_offset;
      if (x1 < g_ClipLeft) {
        x1 = g_ClipLeft;
      }
      if (g_ClipRight <= x1) {
        x1 = g_ClipRight;
      }
      y1 = edges->y0 + y_offset;
      if (y1 < g_ClipTop) {
        y1 = g_ClipTop;
      }
      if (g_ClipBottom <= y1) {
        y1 = g_ClipBottom;
      }
      x2 = edges->x1 + x_offset;
      if (x2 < g_ClipLeft) {
        x2 = g_ClipLeft;
      }
      if (g_ClipRight <= x2) {
        x2 = g_ClipRight;
      }
      y2 = ((short)(edges->y1 * 2) >> 1) + y_offset;
      if (y2 < g_ClipTop) {
        y2 = g_ClipTop;
      }
      if (g_ClipBottom <= y2) {
        y2 = g_ClipBottom;
      }
      engine_2d_c_drawLine_FUN_004011b0(x1,y1,x2,y2);
      iVar1 = iVar1 + 1;
      edges = edges + 1;
    } while (iVar1 < x_offset);
  }
  return;
}
