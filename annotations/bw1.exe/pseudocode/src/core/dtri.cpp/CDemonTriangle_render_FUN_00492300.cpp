// Name: core_dtri.cpp_CDemonTriangle_render_FUN_00492300
// Address: 00492300
// Address Range: [[00492300, 0049244b]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_render_FUN_00492300(CDemonTriangle *this_ptr)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_render_FUN_00492300(CDemonTriangle *this_ptr)

{
  double dVar1;
  CDemonRenderer *this_ptr_00;
  SMRGLPrimitivePoly *poly;
  CVector3i CStack_30;
  CVector3i CStack_24;
  CVector3i CStack_18;
  
  CStack_30.x = (int)ROUND((this_ptr->vertex1).x * 256.0f);
  CStack_30.y = (int)ROUND((this_ptr->vertex1).y * 256.0f);
  CStack_30.z = (int)ROUND((this_ptr->vertex1).z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&g_CDemonRenderer_PTR_0061255c->vertex_buffer_ptr->projected_vertex,&CStack_30);
  CStack_18.x = (int)ROUND((this_ptr->vertex2).x * 256.0f);
  CStack_18.y = (int)ROUND((this_ptr->vertex2).y * 256.0f);
  CStack_18.z = (int)ROUND((this_ptr->vertex2).z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&g_CDemonRenderer_PTR_0061255c->vertex_buffer_ptr[1].projected_vertex,&CStack_18);
  CStack_24.x = (int)ROUND((this_ptr->vertex3).x * 256.0f);
  CStack_24.y = (int)ROUND((this_ptr->vertex3).y * 256.0f);
  CStack_24.z = (int)ROUND((this_ptr->vertex3).z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&g_CDemonRenderer_PTR_0061255c->vertex_buffer_ptr[2].projected_vertex,&CStack_24);
  dVar1 = -65536;
  round((double)(this_ptr->normal).x * -65536);
  round((double)(this_ptr->normal).y * dVar1);
  round(dVar1 * (double)(this_ptr->normal).z);
  this_ptr_00 = (CDemonRenderer *)0x492439;
  poly = (SMRGLPrimitivePoly *)g_CDemonRenderer_PTR_0061255c;
  round
            ((double)(this_ptr->plane_distance * (float)65536 * (float)256
                     ));
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(this_ptr_00,poly);
  return;
}
