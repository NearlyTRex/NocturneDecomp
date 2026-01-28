// Name: wincore_windll.cpp_drawPolyList_FUN_005b7640
// Address: 005b7640
// Address Range: [[005b7640, 005b7775]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_drawPolyList_FUN_005b7640 (void *vertex_buffer,void **polygons,int polygon_count,int render_flags)

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_drawPolyList_FUN_005b7640
          (void *vertex_buffer,void **polygons,int polygon_count,int render_flags)

{
  void *pvVar1;
  int iVar2;
  void *local_20;
  void *local_1c;
  void *local_18;
  void *local_14;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + polygon_count;
  if (g_APIDLL_drawPolyList != (APIDLL_drawPolyList *)0x0) {
    iVar2 = (*g_APIDLL_drawPolyList)(vertex_buffer,polygons,polygon_count,render_flags);
    return iVar2;
  }
  iVar2 = 0;
  if (0 < polygon_count) {
    do {
      pvVar1 = *polygons;
      local_20 = (void *)((int)vertex_buffer + *(int *)((int)pvVar1 + 0x18) * 0x30);
      local_1c = (void *)((int)vertex_buffer + *(int *)((int)pvVar1 + 0x24) * 0x30);
      local_18 = (void *)((int)vertex_buffer + *(int *)((int)pvVar1 + 0x30) * 0x30);
      if (*(int *)((int)pvVar1 + 4) == 4) {
        local_14 = (void *)((int)vertex_buffer + *(int *)((int)pvVar1 + 0x3c) * 0x30);
      }
      *(uint *)((int)local_20 + 0x18) = *(uint *)((int)pvVar1 + 0x1c);
      *(uint *)((int)local_20 + 0x1c) = *(uint *)((int)pvVar1 + 0x20);
      *(uint *)((int)local_1c + 0x18) = *(uint *)((int)pvVar1 + 0x28);
      *(uint *)((int)local_1c + 0x1c) = *(uint *)((int)pvVar1 + 0x2c);
      *(uint *)((int)local_18 + 0x18) = *(uint *)((int)pvVar1 + 0x34);
      *(uint *)((int)local_18 + 0x1c) = *(uint *)((int)pvVar1 + 0x38);
      if (*(int *)((int)pvVar1 + 4) == 4) {
        *(uint *)((int)local_14 + 0x18) = *(uint *)((int)pvVar1 + 0x40);
        *(uint *)((int)local_14 + 0x1c) = *(uint *)((int)pvVar1 + 0x44);
      }
      polygons = polygons + 1;
      iVar2 = iVar2 + 1;
      (*g_APIDLL_drawPolygon2)(&local_20,*(int *)((int)pvVar1 + 4),render_flags);
    } while (iVar2 < polygon_count);
  }
  return 1;
}
