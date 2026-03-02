// Name: shape_superopt.cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280
// Address: 005c8280
// Address Range: [[005c8280, 005c84b9]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

{
  bool bVar1;
  int *ptr;
  SExpandedEdge *pSVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  byte bVar8;
  
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
      piVar3 = ptr;
      for (uVar4 = (uint)(edge_count * 0x60) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        edges->start_vertex_index = *piVar3;
        piVar3 = piVar3 + (uint)bVar8 * -2 + 1;
        edges = (SExpandedEdge *)((int)edges + (uint)bVar8 * -8 + 4);
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(char *)&edges->start_vertex_index = (char)*piVar3;
        piVar3 = (int *)((int)piVar3 + (uint)bVar8 * -2 + 1);
        edges = (SExpandedEdge *)((int)edges + (uint)bVar8 * -2 + 1);
      }
      shape_memdbg_cpp_free_FUN_005fe659(ptr);
      return 1;
    }
    pSVar2 = edges + iVar5;
    piVar3 = ptr + iVar7 * 0x18;
    *piVar3 = pSVar2->start_vertex_index;
    piVar3[1] = pSVar2->end_vertex_index;
    piVar3[2] = pSVar2->start_side;
    piVar3[3] = pSVar2->end_side;
    piVar3[4] = *(int *)&(pSVar2->start_pos).x;
    piVar3[5] = *(int *)((int)&(pSVar2->start_pos).x + 4);
    piVar3[6] = *(int *)&(pSVar2->start_pos).y;
    piVar3[7] = *(int *)((int)&(pSVar2->start_pos).y + 4);
    piVar3[8] = *(int *)&(pSVar2->start_pos).z;
    piVar3[9] = *(int *)((int)&(pSVar2->start_pos).z + 4);
    piVar3[10] = *(int *)&(pSVar2->end_pos).x;
    piVar3[0xb] = *(int *)((int)&(pSVar2->end_pos).x + 4);
    piVar3[0xc] = *(int *)&(pSVar2->end_pos).y;
    piVar3[0xd] = *(int *)((int)&(pSVar2->end_pos).y + 4);
    piVar3[0xe] = *(int *)&(pSVar2->end_pos).z;
    piVar3[0xf] = *(int *)((int)&(pSVar2->end_pos).z + 4);
    piVar3[0x10] = *(int *)pSVar2->start_uv;
    piVar3[0x11] = *(int *)((int)pSVar2->start_uv + 4);
    piVar3[0x12] = *(int *)(pSVar2->start_uv + 1);
    piVar3[0x13] = *(int *)((int)pSVar2->start_uv + 0xc);
    iVar7 = iVar7 + 1;
    piVar3[0x14] = *(int *)pSVar2->end_uv;
    piVar3[0x15] = *(int *)((int)pSVar2->end_uv + 4);
    piVar3[0x16] = *(int *)(pSVar2->end_uv + 1);
    piVar3[0x17] = *(int *)((int)pSVar2->end_uv + 0xc);
    pSVar2->start_vertex_index = -1;
    do {
      bVar1 = true;
      if (edge_count != 0) {
        iVar5 = iVar7 * 0x60;
        pdVar6 = (double *)(ptr + iVar7 * 0x18 + -0xe);
        pSVar2 = edges;
        do {
          if (!bVar1) break;
          if ((((pSVar2->start_vertex_index != -1) && ((pSVar2->start_pos).x == *pdVar6)) &&
              ((pSVar2->start_pos).y == pdVar6[1])) && ((pSVar2->start_pos).z == pdVar6[2])) {
            piVar3 = (int *)(iVar5 + (int)ptr);
            *piVar3 = pSVar2->start_vertex_index;
            piVar3[1] = pSVar2->end_vertex_index;
            piVar3[2] = pSVar2->start_side;
            piVar3[3] = pSVar2->end_side;
            *(double *)(piVar3 + 4) = (pSVar2->start_pos).x;
            *(double *)(piVar3 + 6) = (pSVar2->start_pos).y;
            *(double *)(piVar3 + 8) = (pSVar2->start_pos).z;
            pdVar6 = pdVar6 + 0xc;
            *(double *)(piVar3 + 10) = (pSVar2->end_pos).x;
            *(double *)(piVar3 + 0xc) = (pSVar2->end_pos).y;
            *(double *)(piVar3 + 0xe) = (pSVar2->end_pos).z;
            *(double *)(piVar3 + 0x10) = pSVar2->start_uv[0];
            *(double *)(piVar3 + 0x12) = pSVar2->start_uv[1];
            iVar7 = iVar7 + 1;
            iVar5 = iVar5 + 0x60;
            bVar1 = false;
            *(double *)(piVar3 + 0x14) = pSVar2->end_uv[0];
            *(double *)(piVar3 + 0x16) = pSVar2->end_uv[1];
            pSVar2->start_vertex_index = -1;
          }
          pSVar2 = pSVar2 + 1;
        } while (pSVar2 < edges + edge_count);
      }
    } while (!bVar1);
  } while( true );
}
