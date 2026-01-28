// Name: wincore_windll.cpp_drawPolyList2_FUN_005b7780
// Address: 005b7780
// Address Range: [[005b7780, 005b78bc]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_drawPolyList2_FUN_005b7780 (void *vertex_buffer,void **polygons,int polygon_count,int render_flags)

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_drawPolyList2_FUN_005b7780
          (void *vertex_buffer,void **polygons,int polygon_count,int render_flags)

{
  ushort *puVar1;
  int iVar2;
  int in_stack_00000018;
  void *local_1c;
  void *local_18;
  void *local_14;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + polygon_count;
  if (g_APIDLL_drawPolyList2 != (APIDLL_drawPolyList2 *)0x0) {
    iVar2 = (*g_APIDLL_drawPolyList2)(vertex_buffer,polygons,polygon_count,render_flags);
    return iVar2;
  }
  if (0 < polygon_count) {
    iVar2 = 0;
    do {
      puVar1 = *polygons;
      local_1c = (void *)((int)vertex_buffer + (uint)*puVar1 * 0x30);
      local_18 = (void *)((int)vertex_buffer + (uint)puVar1[1] * 0x30);
      local_14 = (void *)((int)vertex_buffer + (uint)puVar1[2] * 0x30);
      *(uint *)((int)local_1c + 0x18) = (uint)puVar1[3] << 8;
      *(uint *)((int)local_1c + 0x1c) = (uint)puVar1[6] << 8;
      *(uint *)((int)local_18 + 0x18) = (uint)puVar1[4] << 8;
      *(uint *)((int)local_18 + 0x1c) = (uint)puVar1[7] << 8;
      *(uint *)((int)local_14 + 0x18) = (uint)puVar1[5] << 8;
      *(uint *)((int)local_14 + 0x1c) = (uint)puVar1[8] << 8;
      (*g_APIDLL_drawPolygon2)(&local_1c,3,render_flags);
      iVar2 = iVar2 + 1;
      polygons = polygons + 1;
    } while (iVar2 < in_stack_00000018);
  }
  return 1;
}
