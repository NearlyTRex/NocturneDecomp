// Name: core_dtri.cpp_CDemonTriangle_render_FUN_0046e9f0
// Address: 0046e9f0
// Address Range: [[0046e9f0, 0046eb3b]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_render_FUN_0046e9f0(CDemonTriangle *this_ptr)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_render_FUN_0046e9f0(CDemonTriangle *this_ptr)

{
  double dVar1;
  CDemonRenderer *this_ptr_00;
  SMRGLPrimitivePoly *poly;
  CVector3i local_30;
  CVector3i local_24;
  CVector3i local_18;
  
  local_30.x = (int)ROUND((this_ptr->vertex1).x * 256.0f);
  local_30.y = (int)ROUND((this_ptr->vertex1).y * 256.0f);
  local_30.z = (int)ROUND((this_ptr->vertex1).z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (*(SProjectedVertex **)PTR_g_CDemonRenderer_01b4d738_005ae700,&local_30);
  local_18.x = (int)ROUND((this_ptr->vertex2).x * 256.0f);
  local_18.y = (int)ROUND((this_ptr->vertex2).y * 256.0f);
  local_18.z = (int)ROUND((this_ptr->vertex2).z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            ((SProjectedVertex *)(*(int *)PTR_g_CDemonRenderer_01b4d738_005ae700 + 0x30),&local_18);
  local_24.x = (int)ROUND((this_ptr->vertex3).x * 256.0f);
  local_24.y = (int)ROUND((this_ptr->vertex3).y * 256.0f);
  local_24.z = (int)ROUND((this_ptr->vertex3).z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            ((SProjectedVertex *)(*(int *)PTR_g_CDemonRenderer_01b4d738_005ae700 + 0x60),&local_24);
  dVar1 = -65536;
  round((double)(this_ptr->normal).x * -65536);
  round((double)(this_ptr->normal).y * dVar1);
  round(dVar1 * (double)(this_ptr->normal).z);
  this_ptr_00 = (CDemonRenderer *)0x46eb29;
  poly = (SMRGLPrimitivePoly *)PTR_g_CDemonRenderer_01b4d738_005ae700;
  round
            ((double)(this_ptr->plane_distance * (float)65536 * (float)256));
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(this_ptr_00,poly);
  return;
}
