// Name: cockpit_ckptutil.c_setEdgeData_FUN_00430590
// Address: 00430590
// Address Range: [[00430590, 0043062a]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_setEdgeData_FUN_00430590(SEdge *edge_array,int edge_index,int x1,int y1,int x2,int y2,int flag_bit)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_setEdgeData_FUN_00430590(SEdge *edge_array,int edge_index,int x1,int y1,int x2,int y2,int flag_bit)

{
  SEdge *pSVar1;
  ushort uVar2;
  
  pSVar1 = edge_array + edge_index;
  pSVar1->x0 = 0;
  pSVar1->y0 = 0;
  uVar2 = pSVar1->y1 & 0x8000;
  pSVar1->x0 = (short)x1;
  pSVar1->x1 = 0;
  pSVar1->y0 = (short)y1;
  pSVar1->y1 = uVar2;
  pSVar1->y1 = uVar2 | (ushort)y2 & 0x7fff;
  *(byte *)((int)&pSVar1->y1 + 1) = *(byte *)((int)&pSVar1->y1 + 1) & 0x7f;
  pSVar1->x1 = (short)x2;
  pSVar1->y1 = pSVar1->y1 | (ushort)((flag_bit & 1U) << 0xf);
  return;
}
