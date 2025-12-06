// Name: cockpit_ckptutil.c_flipEdgeArrayHorizontally_FUN_004355c0
// Address: 004355c0
// Address Range: [[004355c0, 00435720]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_flipEdgeArrayHorizontally_FUN_004355c0(SEdge * edge_array, int edge_count, int flip_width)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_flipEdgeArrayHorizontally_FUN_004355c0
          (SEdge *edge_array,int edge_count,int flip_width)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  
  iVar2 = 0;
  if (0 < edge_count) {
    do {
      while( true ) {
        sVar1 = edge_array->y0;
        uVar3 = ((short)flip_width - edge_array->x1) - 1;
        uVar4 = (short)(edge_array->y1 * 2) >> 1;
        uVar5 = ((short)flip_width - edge_array->x0) - 1;
        if (edge_array->x0 <= edge_array->x1) break;
        edge_array->x0 = 0;
        edge_array->y0 = 0;
        edge_array->x0 = sVar1;
        edge_array->y0 = uVar5;
        edge_array->x1 = 0;
        uVar5 = edge_array->y1 & 0x8000;
        edge_array->x1 = uVar4;
        edge_array->y1 = uVar5;
        edge_array->y1 = uVar5 | uVar3 & 0x7fff;
        iVar2 = iVar2 + 1;
        edge_array = edge_array + 1;
        if (edge_count <= iVar2) {
          return;
        }
      }
      edge_array->x0 = 0;
      edge_array->y0 = 0;
      edge_array->x0 = edge_array->x0 | uVar4;
      edge_array->y0 = uVar3;
      edge_array->x1 = 0;
      uVar3 = edge_array->y1 & 0x8000;
      edge_array->x1 = sVar1;
      edge_array->y1 = uVar3;
      edge_array->y1 = uVar3 | uVar5 & 0x7fff;
      iVar2 = iVar2 + 1;
      edge_array = edge_array + 1;
    } while (iVar2 < edge_count);
  }
  return;
}
