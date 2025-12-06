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
  BADSPACEBASE *in_ESP;
  SMRGLHeaderPrimitive local_78;
  uint uStack_60;
  uint uStack_54;
  uint uStack_48;
  byte local_3c [12];
  int local_30;
  int local_2c;
  CVector3i local_1c;
  
  local_3c._8_4_ = (uint)ROUND((this_ptr->reflection).corner1.x * 256f);
  local_30 = (int)ROUND((this_ptr->reflection).corner1.y * 256f);
  local_2c = (int)ROUND((this_ptr->reflection).corner1.z * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)(local_3c + 8));
  local_3c._0_4_ = (uint)ROUND((this_ptr->reflection).corner2.x * 256f);
  local_3c._4_4_ = (uint)ROUND((this_ptr->reflection).corner2.y * 256f);
  local_3c._8_4_ = (uint)ROUND((this_ptr->reflection).corner2.z * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_3c);
  local_1c.z = (int)ROUND((this_ptr->reflection).corner3.x * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)&local_1c.z);
  local_1c.x = (int)ROUND((this_ptr->reflection).corner4.x * 256f);
  local_1c.y = (int)ROUND((this_ptr->reflection).corner4.y * 256f);
  local_1c.z = (int)ROUND((this_ptr->reflection).corner4.z * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_1c);
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
  local_78.base.count = 4;
  local_78.surface_normal.D = 0;
  local_78.surface_normal.C = 0;
  local_78.surface_normal.B = 0;
  uStack_48 = 2;
  local_78.surface_normal.A = 0;
  uStack_60 = 0;
  local_3c._0_4_ = 3;
  uStack_54 = 1;
  engine_drender_cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950
            (g_CDemonRendererPtr,&local_78);
  return;
}
