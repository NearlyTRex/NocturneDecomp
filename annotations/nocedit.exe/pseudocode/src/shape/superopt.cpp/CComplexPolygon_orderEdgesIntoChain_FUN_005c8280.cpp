// Name: shape_superopt.cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280
// Address: 005c8280
// Address Range: [[005c8280, 005c84b9]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

{
  int *ptr;
  SExpandedEdge *pSVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  SExpandedEdge *pSVar1;
  double *pdVar6;
  int iVar7;
  int *piVar2;
  int iVar3;
  byte bVar8;
  bool bVar1;
  
  bVar8 = 0;
  ptr = shape_memdbg_cpp_malloc_FUN_006021da(edge_count * 0x60);
  iVar7 = 0;
  if (ptr == (int *)0x0) {
    return 0;
  }
  do {
    iVar5 = 0;
    if (edge_count != 0) {
      pSVar2 = edges;
      do {
        if (pSVar2->start_vertex_index != -1) break;
        pSVar2 = pSVar2 + 1;
        iVar5 = iVar5 + 1;
      } while (pSVar2 < edges + edge_count);
    }
    if (iVar5 == edge_count) {
      piVar2 = ptr;
      for (uVar4 = (uint)(edge_count * 0x60) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        edges->start_vertex_index = *piVar2;
        piVar2 = piVar2 + (uint)bVar8 * -2 + 1;
        edges = (SExpandedEdge *)((int)edges + (uint)bVar8 * -8 + 4);
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(char *)&edges->start_vertex_index = (char)*piVar2;
        piVar2 = (int *)((int)piVar2 + (uint)bVar8 * -2 + 1);
        edges = (SExpandedEdge *)((int)edges + (uint)bVar8 * -2 + 1);
      }
      shape_memdbg_cpp_free_FUN_005fe659(ptr);
      return 1;
    }
    pSVar1 = edges + iVar5;
    piVar2 = ptr + iVar7 * 0x18;
    *piVar2 = pSVar1->start_vertex_index;
    piVar2[1] = pSVar1->end_vertex_index;
    piVar2[2] = pSVar1->start_side;
    piVar2[3] = pSVar1->end_side;
    piVar2[4] = *(int *)&(pSVar1->start_pos).x;
    piVar2[5] = *(int *)((int)&(pSVar1->start_pos).x + 4);
    piVar2[6] = *(int *)&(pSVar1->start_pos).y;
    piVar2[7] = *(int *)((int)&(pSVar1->start_pos).y + 4);
    piVar2[8] = *(int *)&(pSVar1->start_pos).z;
    piVar2[9] = *(int *)((int)&(pSVar1->start_pos).z + 4);
    piVar2[10] = *(int *)&(pSVar1->end_pos).x;
    piVar2[0xb] = *(int *)((int)&(pSVar1->end_pos).x + 4);
    piVar2[0xc] = *(int *)&(pSVar1->end_pos).y;
    piVar2[0xd] = *(int *)((int)&(pSVar1->end_pos).y + 4);
    piVar2[0xe] = *(int *)&(pSVar1->end_pos).z;
    piVar2[0xf] = *(int *)((int)&(pSVar1->end_pos).z + 4);
    piVar2[0x10] = *(int *)pSVar1->start_uv;
    piVar2[0x11] = *(int *)((int)pSVar1->start_uv + 4);
    piVar2[0x12] = *(int *)(pSVar1->start_uv + 1);
    piVar2[0x13] = *(int *)((int)pSVar1->start_uv + 0xc);
    iVar7 = iVar7 + 1;
    piVar2[0x14] = *(int *)pSVar1->end_uv;
    piVar2[0x15] = *(int *)((int)pSVar1->end_uv + 4);
    piVar2[0x16] = *(int *)(pSVar1->end_uv + 1);
    piVar2[0x17] = *(int *)((int)pSVar1->end_uv + 0xc);
    pSVar1->start_vertex_index = -1;
    do {
      bVar1 = true;
      if (edge_count != 0) {
        iVar3 = iVar7 * 0x60;
        pdVar6 = (double *)(ptr + iVar7 * 0x18 + -0xe);
        pSVar1 = edges;
        do {
          if (!bVar1) break;
          if ((((pSVar1->start_vertex_index != -1) && ((pSVar1->start_pos).x == *pdVar6)) &&
              ((pSVar1->start_pos).y == pdVar6[1])) && ((pSVar1->start_pos).z == pdVar6[2])) {
            piVar3 = (int *)(iVar3 + (int)ptr);
            *piVar3 = pSVar1->start_vertex_index;
            piVar3[1] = pSVar1->end_vertex_index;
            piVar3[2] = pSVar1->start_side;
            piVar3[3] = pSVar1->end_side;
            *(double *)(piVar3 + 4) = (pSVar1->start_pos).x;
            *(double *)(piVar3 + 6) = (pSVar1->start_pos).y;
            *(double *)(piVar3 + 8) = (pSVar1->start_pos).z;
            pdVar6 = pdVar6 + 0xc;
            *(double *)(piVar3 + 10) = (pSVar1->end_pos).x;
            *(double *)(piVar3 + 0xc) = (pSVar1->end_pos).y;
            *(double *)(piVar3 + 0xe) = (pSVar1->end_pos).z;
            *(double *)(piVar3 + 0x10) = pSVar1->start_uv[0];
            *(double *)(piVar3 + 0x12) = pSVar1->start_uv[1];
            iVar7 = iVar7 + 1;
            iVar3 = iVar3 + 0x60;
            bVar1 = false;
            *(double *)(piVar3 + 0x14) = pSVar1->end_uv[0];
            *(double *)(piVar3 + 0x16) = pSVar1->end_uv[1];
            pSVar1->start_vertex_index = -1;
          }
          pSVar1 = pSVar1 + 1;
        } while (pSVar1 < edges + edge_count);
      }
    } while (!bVar1);
  } while( true );
}
