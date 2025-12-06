// Name: wincore_windll.cpp_drawPolyList3_FUN_005b78c0
// Address: 005b78c0
// Address Range: [[005b78c0, 005b7984]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_drawPolyList3_FUN_005b78c0(void * vertex_buffer, void * polygons, int polygon_count, int render_flags)

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_drawPolyList3_FUN_005b78c0
          (void *vertex_buffer,void *polygons,int polygon_count,int render_flags)

{
  BADSPACEBASE *in_ESP;
  int iVar1;
  void *local_1c;
  void *local_18;
  void *local_14;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + polygon_count;
  if (g_APIDLL_drawPolyList3 != (APIDLL_drawPolyList3 *)0x0) {
    iVar1 = (*g_APIDLL_drawPolyList3)(vertex_buffer,polygons,polygon_count,render_flags);
    return iVar1;
  }
  iVar1 = 0;
  if (0 < polygon_count) {
    do {
                    /* WARNING: Load size is inaccurate */
      local_1c = (void *)((int)vertex_buffer + (uint)*polygons * 0x30);
      local_18 = (void *)((int)vertex_buffer + (uint)*(ushort *)((int)polygons + 2) * 0x30);
      local_14 = (void *)((int)vertex_buffer + (uint)*(ushort *)((int)polygons + 4) * 0x30);
      polygons = (void *)((int)polygons + 6);
      iVar1 = iVar1 + 1;
      (*g_APIDLL_drawPolygon2)(&local_1c,3,render_flags);
    } while (iVar1 < polygon_count);
  }
  return 1;
}
