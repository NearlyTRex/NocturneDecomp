// Name: engine_mini3d.cpp_drawTransformedList_FUN_004f6d00
// Address: 004f6d00
// Address Range: [[004f6d00, 004f6de8]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_drawTransformedList_FUN_004f6d00(float *vertices,int vertex_count,ushort *indices,int triangle_count,int clip_flags)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_drawTransformedList_FUN_004f6d00(float *vertices,int vertex_count,ushort *indices,int triangle_count,int clip_flags)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  
  if (clip_flags != 0) {
    engine_mini3d_cpp_beginTriangleBatch_FUN_004f6850(vertex_count);
    iVar4 = 0;
    if (0 < triangle_count) {
      do {
        puVar1 = indices + 2;
        puVar2 = indices + 1;
        uVar3 = *indices;
        indices = indices + 3;
        iVar4 = iVar4 + 1;
        engine_mini3d_cpp_clipBatchTriangle_FUN_004f6a70
                  (g_FLOAT_PTR_01d09b7c + (uint)uVar3 * 0x10,
                   g_FLOAT_PTR_01d09b7c + (uint)*puVar2 * 0x10,
                   g_FLOAT_PTR_01d09b7c + (uint)*puVar1 * 0x10);
      } while (iVar4 < triangle_count);
    }
    engine_mini3d_cpp_flushTriangleBatch_FUN_004f6970();
    return;
  }
  if ((g_PTR_0264bca0 != (byte *)0x0) && (g_INT_01c37788 != 0)) {
    (*(code *)g_PTR_0264bca0)
              (g_FLOAT_PTR_01d09b7c,vertex_count,indices,triangle_count,
               g_BIT_INTEGER32_01c38b54.dword);
    return;
  }
  iVar4 = 0;
  if (0 < triangle_count) {
    do {
      puVar1 = indices + 2;
      puVar2 = indices + 1;
      uVar3 = *indices;
      indices = indices + 3;
      iVar4 = iVar4 + 1;
      engine_mini3d_cpp_rasterizeTriangle_FUN_004f7280
                (g_FLOAT_PTR_01d09b7c + (uint)uVar3 * 0x10,
                 g_FLOAT_PTR_01d09b7c + (uint)*puVar2 * 0x10,
                 g_FLOAT_PTR_01d09b7c + (uint)*puVar1 * 0x10);
    } while (iVar4 < triangle_count);
  }
  return;
}
