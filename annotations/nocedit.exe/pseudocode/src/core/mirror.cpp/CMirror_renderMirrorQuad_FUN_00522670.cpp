// Name: core_mirror.cpp_CMirror_renderMirrorQuad_FUN_00522670
// Address: 00522670
// Address Range: [[00522670, 005227f9]]
// Convention: __cdecl
// Signature: int core_mirror.cpp_CMirror_renderMirrorQuad_FUN_00522670(CMirror * this_ptr)

#include "nocturne.h"

int __cdecl core_mirror_cpp_CMirror_renderMirrorQuad_FUN_00522670(CMirror *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  byte local_34 [12];
  int local_28;
  CVector3i local_24 [2];
  
  local_24[0].x = (int)ROUND((this_ptr->reflection).corner1.x * 256f);
  local_24[0].y = (int)ROUND((this_ptr->reflection).corner1.y * 256f);
  local_24[0].z = (int)ROUND((this_ptr->reflection).corner1.z * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,local_24);
  local_34._8_4_ = (uint)ROUND((this_ptr->reflection).corner2.x * 256f);
  local_28 = (int)ROUND((this_ptr->reflection).corner2.y * 256f);
  local_24[0].x = (int)ROUND((this_ptr->reflection).corner2.z * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)(local_34 + 8)
            );
  local_34._0_4_ = (uint)ROUND((this_ptr->reflection).corner3.x * 256f);
  local_34._4_4_ = (uint)ROUND((this_ptr->reflection).corner3.y * 256f);
  local_34._8_4_ = (uint)ROUND((this_ptr->reflection).corner3.z * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)local_34);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
             (CVector3i *)&stack0xfffffff4);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  local_34._0_4_ = 1;
  local_34._4_4_ = 2;
  local_34._8_4_ = 3;
  iVar1 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                    (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffb0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  return iVar1;
}
