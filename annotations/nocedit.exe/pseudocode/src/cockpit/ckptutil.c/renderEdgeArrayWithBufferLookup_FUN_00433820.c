// Name: cockpit_ckptutil.c_renderEdgeArrayWithBufferLookup_FUN_00433820
// Address: 00433820
// Address Range: [[00433820, 004338e4]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_renderEdgeArrayWithBufferLookup_FUN_00433820 (uchar *color_buffer,SEdge *edge_array,int edge_count,int offset_x,int offset_y, int buffer_width)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_renderEdgeArrayWithBufferLookup_FUN_00433820
          (uchar *color_buffer,SEdge *edge_array,int edge_count,int offset_x,int offset_y,
          int buffer_width)

{
  int iVar1;
  int iVar2;
  
  if ((color_buffer != (uchar *)0x0) && (iVar2 = 0, 0 < edge_count)) {
    do {
      iVar1 = (int)((short)(edge_array->y1 * 2) >> 1);
      cockpit_ckptutil_c_drawLineAAWithBlending_FUN_004339c0
                (edge_array->x0 + offset_x,edge_array->y0 + offset_y,edge_array->x1 + offset_x,
                 iVar1 + offset_y,
                 (uint)color_buffer[(int)edge_array->x0 + buffer_width * edge_array->y0],
                 color_buffer[(int)edge_array->x1 + buffer_width * iVar1],
                 (uint)((ushort)edge_array->y1 >> 0xf));
      iVar2 = iVar2 + 1;
      edge_array = edge_array + 1;
    } while (iVar2 < edge_count);
  }
  return;
}
