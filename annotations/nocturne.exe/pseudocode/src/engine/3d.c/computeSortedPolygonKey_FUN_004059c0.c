// Name: engine_3d.c_computeSortedPolygonKey_FUN_004059c0
// Address: 004059c0
// Address Range: [[004059c0, 00405a55]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_computeSortedPolygonKey_FUN_004059c0(SMRGLHeaderExtended *primitive)

#include "nocturne.h"

void __cdecl engine_3d_c_computeSortedPolygonKey_FUN_004059c0(SMRGLHeaderExtended *primitive)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = g_UINT_006b0268;
  iVar4 = 1;
  iVar5 = g_SRenderVertex_ARRAY_005c5014[primitive[2].base.type + g_UINT_006b0264].projected_vertex.
          transformed_z;
  pSVar2 = primitive;
  if (1 < (primitive->base).count) {
    do {
      iVar1 = g_SRenderVertex_ARRAY_005c5014[pSVar2[3].base.type + g_UINT_006b0264].projected_vertex
              .transformed_z;
      if (iVar1 < iVar5) {
        iVar5 = iVar1;
      }
      iVar4 = iVar4 + 1;
      pSVar2 = pSVar2 + 1;
    } while (iVar4 < (primitive->base).count);
  }
  g_INT_ARRAY_006b029c[g_UINT_006b0268 * 8 + 0x13] = iVar5;
  iVar5 = g_INT_01c039dc;
  g_INT_ARRAY_006b029c[uVar3 * 8 + 0x14] = g_UINT_006b0264;
  g_INT_ARRAY_006b029c[uVar3 * 8 + 0x15] = iVar5;
  g_INT_ARRAY_006b029c[uVar3 * 8 + 0x16] = g_INT_01c039e0;
  g_INT_ARRAY_006b029c[uVar3 * 8 + 0x17] = g_INT_01c039e4;
  return;
}
