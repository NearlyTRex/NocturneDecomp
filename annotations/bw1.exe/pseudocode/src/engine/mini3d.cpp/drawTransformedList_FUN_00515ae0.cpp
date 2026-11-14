// Name: engine_mini3d.cpp_drawTransformedList_FUN_00515ae0
// Address: 00515ae0
// Address Range: [[00515ae0, 00515bc8]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_drawTransformedList_FUN_00515ae0(float *vertices,int vertex_count,ushort *indices,int triangle_count,int clip_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_drawTransformedList_FUN_00515ae0(float *vertices,int vertex_count,ushort *indices,int triangle_count,int clip_flags)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  
  if (clip_flags != 0) {
    engine_mini3d_cpp_beginTriangleBatch_FUN_005155d0(vertex_count);
    iVar4 = 0;
    if (0 < triangle_count) {
      do {
        puVar1 = indices + 2;
        puVar2 = indices + 1;
        uVar3 = *indices;
        indices = indices + 3;
        iVar4 = iVar4 + 1;
        engine_mini3d_cpp_clipBatchTriangle_FUN_00515850
                  ((float *)(_DAT_01d227e0 + (uint)uVar3 * 0x40),
                   (float *)((uint)*puVar2 * 0x40 + _DAT_01d227e0),
                   (float *)((uint)*puVar1 * 0x40 + _DAT_01d227e0));
      } while (iVar4 < triangle_count);
    }
    engine_mini3d_cpp_flushTriangleBatch_FUN_00515750();
    return;
  }
  if ((_DAT_02c83470 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c83470)(_DAT_01d227e0,vertex_count,indices,triangle_count,_DAT_01c51d14);
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
      engine_mini3d_cpp_rasterizeTriangle_FUN_00516060
                ((float *)(_DAT_01d227e0 + (uint)uVar3 * 0x40),
                 (float *)((uint)*puVar2 * 0x40 + _DAT_01d227e0),
                 (float *)((uint)*puVar1 * 0x40 + _DAT_01d227e0));
    } while (iVar4 < triangle_count);
  }
  return;
}
