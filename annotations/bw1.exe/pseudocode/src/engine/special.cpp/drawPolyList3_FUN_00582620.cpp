// Name: engine_special.cpp_drawPolyList3_FUN_00582620
// Address: 00582620
// Address Range: [[00582620, 005826e4]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_drawPolyList3_FUN_00582620(SRenderVertex *vertex_buffer,STrianglePackedIndices *polygons,int polygon_count,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_drawPolyList3_FUN_00582620(SRenderVertex *vertex_buffer,STrianglePackedIndices *polygons,int polygon_count,int render_flags)

{
  int iVar1;
  SRenderVertex *pSStack_1c;
  SRenderVertex *pSStack_18;
  SRenderVertex *pSStack_14;
  
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  _DAT_01e7dac8 = _DAT_01e7dac8 + polygon_count;
  if (_DAT_02c833d4 != (code *)0x0) {
    iVar1 = (*_DAT_02c833d4)(vertex_buffer,polygons,polygon_count,render_flags);
    return iVar1;
  }
  iVar1 = 0;
  if (0 < polygon_count) {
    do {
      pSStack_1c = vertex_buffer + (uint)*(ushort *)polygons * 0x30;
      pSStack_18 = vertex_buffer + (uint)*(ushort *)(polygons + 2) * 0x30;
      pSStack_14 = vertex_buffer + (uint)*(ushort *)(polygons + 4) * 0x30;
      polygons = polygons + 6;
      iVar1 = iVar1 + 1;
      (*_DAT_02c833c8)(&pSStack_1c,3,render_flags);
    } while (iVar1 < polygon_count);
  }
  return 1;
}
