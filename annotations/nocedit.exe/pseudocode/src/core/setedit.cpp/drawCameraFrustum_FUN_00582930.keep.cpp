// Name: core_setedit.cpp_drawCameraFrustum_FUN_00582930
// Address: 00582930
// MANUAL RECONSTRUCTION
// Address Range: [[00582930, 00582f23] [00603676, 00603ef7]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_drawCameraFrustum_FUN_00582930(int color,int use_3d_lines)

#include "nocturne.h"

void __cdecl core_setedit_cpp_drawCameraFrustum_FUN_00582930(int color,int use_3d_lines)

{
  SRenderVertex *pSVar4;
  CVector3i local_7c;
  CVector3i local_70;
  CVector3i local_64;
  CVector3i local_58;
  CVector3i local_40;
  CVector3i local_34;
  CVector3i local_28;
  CVector3i local_1c;

  local_28.x = (int)ROUND(256.0f * -1.0);
  local_28.y = (int)ROUND(256.0f * -1.0);
  local_28.z = (int)ROUND(256.0f * 2.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_28);
  local_64.x = (int)ROUND(256.0f * 1.0);
  local_64.y = (int)ROUND(256.0f * -1.0);
  local_64.z = (int)ROUND(256.0f * 2.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_64);
  local_7c.x = (int)ROUND(256.0f * 1.0);
  local_7c.y = (int)ROUND(256.0f * 1.0);
  local_7c.z = (int)ROUND(256.0f * 2.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_7c);
  local_70.x = (int)ROUND(256.0f * -1.0);
  local_70.y = (int)ROUND(256.0f * 1.0);
  local_70.z = (int)ROUND(256.0f * 2.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_70);
  local_40.x = (int)ROUND(256.0f * -0.3);
  local_40.y = (int)ROUND(256.0f * -0.3);
  local_40.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[4].projected_vertex,&local_40);
  local_1c.x = (int)ROUND(256.0f * 0.3);
  local_1c.y = (int)ROUND(256.0f * -0.3);
  local_1c.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[5].projected_vertex,&local_1c);
  local_34.x = (int)ROUND(256.0f * 0.3);
  local_34.y = (int)ROUND(256.0f * 0.3);
  local_34.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[6].projected_vertex,&local_34);
  local_58.x = (int)ROUND(256.0f * -0.3);
  local_58.y = (int)ROUND(256.0f * 0.3);
  local_58.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[7].projected_vertex,&local_58);
  if (use_3d_lines != 0) {
    engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
              (g_CDemonRendererPtr2,color);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,0,1);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,1,2);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,2,3);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,3,0);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,4,5);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,5,6);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,6,7);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,7,4);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,0,4);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,1,5);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,2,6);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,3,7);
    return;
  }
  g_ActiveRenderColor = color;
  pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar4[0], pSVar4[1]);
  pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar4[1], pSVar4[2]);
  pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar4[2], pSVar4[3]);
  pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar4[3], pSVar4[0]);
  pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar4[4], pSVar4[5]);
  pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar4[5], pSVar4[6]);
  pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar4[6], pSVar4[7]);
  pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar4[7], pSVar4[4]);
  pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar4[0], pSVar4[4]);
  pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar4[1], pSVar4[5]);
  pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar4[2], pSVar4[6]);
  pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar4[3], pSVar4[7]);
  return;
}
