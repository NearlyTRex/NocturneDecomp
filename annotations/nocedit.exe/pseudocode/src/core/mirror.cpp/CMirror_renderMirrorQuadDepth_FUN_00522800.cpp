// Name: core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_00522800
// Address: 00522800
// Address Range: [[00522800, 005229a3]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_00522800(CMirror *this_ptr)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_00522800(CMirror *this_ptr)

{
  int *piVar2;
  int iVar2;
  int iVar3;
  SMRGLPrimitiveQuad SStack_88;
  CVector3i local_40;
  CVector3i local_34;
  CVector3i local_28;
  CVector3i local_1c;
  int *piVar1;
  
  local_34.x = (int)ROUND((this_ptr->reflection).corner1.x * 256.0f);
  local_34.y = (int)ROUND((this_ptr->reflection).corner1.y * 256.0f);
  local_34.z = (int)ROUND((this_ptr->reflection).corner1.z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_34);
  local_40.x = (int)ROUND((this_ptr->reflection).corner2.x * 256.0f);
  local_40.y = (int)ROUND((this_ptr->reflection).corner2.y * 256.0f);
  local_40.z = (int)ROUND((this_ptr->reflection).corner2.z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_40);
  local_1c.x = (int)ROUND((this_ptr->reflection).corner3.x * 256.0f);
  local_1c.y = (int)ROUND((this_ptr->reflection).corner3.y * 256.0f);
  local_1c.z = (int)ROUND((this_ptr->reflection).corner3.z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_1c);
  local_28.x = (int)ROUND((this_ptr->reflection).corner4.x * 256.0f);
  local_28.y = (int)ROUND((this_ptr->reflection).corner4.y * 256.0f);
  local_28.z = (int)ROUND((this_ptr->reflection).corner4.z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_28);
  iVar2 = 0;
  do {
    piVar1 = (int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x
                    + iVar2);
    *piVar1 = *piVar1 << 4;
    piVar2 = (int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_y
                    + iVar2);
    *piVar2 = *piVar2 << 4;
    piVar2 = (int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_z
                    + iVar2);
    *piVar2 = *piVar2 << 4;
    iVar3 = iVar2 + 0x30;
    *(uint *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).inv_z + iVar2) =
         *(uint *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).inv_z + iVar2)
         >> 4;
    iVar2 = iVar3;
  } while (iVar3 != 0xc0);
  SStack_88.base.base.count = 4;
  SStack_88.base.surface_normal.D.i = 0;
  SStack_88.base.surface_normal.C.i = 0;
  SStack_88.base.surface_normal.B.i = 0;
  SStack_88.vertices[2].vertex_index = 2;
  SStack_88.base.surface_normal.A.i = 0;
  SStack_88.vertices[0].vertex_index = 0;
  SStack_88.vertices[3].vertex_index = 3;
  SStack_88.vertices[1].vertex_index = 1;
  engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0048a950
            (g_CDemonRendererPtr2,(SMRGLPrimitivePoly *)&SStack_88);
  return;
}
