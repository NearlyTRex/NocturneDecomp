// Name: core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_00522800
// Address: 00522800
// Address Range: [[00522800, 005229a3]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_00522800(CMirror * this_ptr)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_00522800(CMirror *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive SStack_88;
  uint local_70;
  uint local_64;
  uint local_58;
  uint local_4c;
  CVector3i local_40;
  CVector3i local_34;
  CVector3i local_28;
  CVector3i local_1c;
  
  local_34.x = (int)ROUND((this_ptr->reflection).corner1.x * 256f);
  local_34.y = (int)ROUND((this_ptr->reflection).corner1.y * 256f);
  local_34.z = (int)ROUND((this_ptr->reflection).corner1.z * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_34);
  local_40.x = (int)ROUND((this_ptr->reflection).corner2.x * 256f);
  local_40.y = (int)ROUND((this_ptr->reflection).corner2.y * 256f);
  local_40.z = (int)ROUND((this_ptr->reflection).corner2.z * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_40);
  local_1c.x = (int)ROUND((this_ptr->reflection).corner3.x * 256f);
  local_1c.y = (int)ROUND((this_ptr->reflection).corner3.y * 256f);
  local_1c.z = (int)ROUND((this_ptr->reflection).corner3.z * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_1c);
  local_28.x = (int)ROUND((this_ptr->reflection).corner4.x * 256f);
  local_28.y = (int)ROUND((this_ptr->reflection).corner4.y * 256f);
  local_28.z = (int)ROUND((this_ptr->reflection).corner4.z * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_28);
  iVar2 = 0;
  do {
    piVar1 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x
                    + iVar2);
    *piVar1 = *piVar1 << 4;
    piVar1 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_y
                    + iVar2);
    *piVar1 = *piVar1 << 4;
    piVar1 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_z
                    + iVar2);
    *piVar1 = *piVar1 << 4;
    iVar3 = iVar2 + 0x30;
    *(uint *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).inv_z + iVar2) =
         *(uint *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).inv_z + iVar2)
         >> 4;
    iVar2 = iVar3;
  } while (iVar3 != 0xc0);
  SStack_88.base.count = 4;
  SStack_88.surface_normal.D = 0;
  SStack_88.surface_normal.C = 0;
  SStack_88.surface_normal.B = 0;
  local_58 = 2;
  SStack_88.surface_normal.A = 0;
  local_70 = 0;
  local_4c = 3;
  local_64 = 1;
  engine_drender_cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950
            (g_CDemonRendererPtr,&SStack_88);
  return;
}
