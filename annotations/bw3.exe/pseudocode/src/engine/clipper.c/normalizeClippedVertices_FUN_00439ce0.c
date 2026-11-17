// Name: engine_clipper.c_normalizeClippedVertices_FUN_00439ce0
// Address: 00439ce0
// Address Range: [[00439ce0, 00439d4b]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_normalizeClippedVertices_FUN_00439ce0(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_normalizeClippedVertices_FUN_00439ce0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (0 < g_INT_007e3e88) {
    pSVar4 = g_SRenderVertex_ARRAY_007e3e8c;
    do {
      if ((pSVar4->projected_vertex).transformed_z == 0) {
        (pSVar4->projected_vertex).transformed_z = 1;
        (pSVar4->projected_vertex).transformed_x = 0;
        (pSVar4->projected_vertex).transformed_y = 0;
      }
      else {
        iVar1 = (pSVar4->projected_vertex).transformed_z;
        if (iVar1 < (pSVar4->projected_vertex).transformed_x) {
          (pSVar4->projected_vertex).transformed_x = iVar1;
        }
        else {
          iVar2 = (pSVar4->projected_vertex).transformed_x;
          iVar6 = -iVar1;
          if (-iVar2 == iVar1 || iVar6 < iVar2) {
            iVar2 = (pSVar4->projected_vertex).transformed_z;
            iVar3 = (pSVar4->projected_vertex).transformed_y;
            if (iVar2 < iVar3) {
              (pSVar4->projected_vertex).transformed_y = iVar2;
            }
            else if (-iVar3 != iVar1 && iVar3 <= iVar6) {
              (pSVar4->projected_vertex).transformed_y = iVar6;
            }
          }
          else {
            (pSVar4->projected_vertex).transformed_x = iVar6;
          }
        }
      }
      iVar5 = iVar5 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar5 < g_INT_007e3e88);
  }
  return;
}
