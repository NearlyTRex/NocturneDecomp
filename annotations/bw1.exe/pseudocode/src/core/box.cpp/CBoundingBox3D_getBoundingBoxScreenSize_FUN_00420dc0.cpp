// Name: core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420dc0
// Address: 00420dc0
// Address Range: [[00420dc0, 00420eda]]
// Convention: __cdecl
// Signature: float __cdecl core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420dc0(CBoundingBox3D *this_ptr)

#include "nocturne.h"

float __cdecl core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420dc0(CBoundingBox3D *this_ptr)

{
  int iVar1;
  CVector3i local_28 [2];
  
  local_28[0].x =
       (int)ROUND(((this_ptr->min).x + (this_ptr->max).x) * 0.5f * 256.0f);
  local_28[0].y =
       (int)ROUND(((this_ptr->min).y + (this_ptr->max).y) * 0.5f * 256.0f);
  local_28[0].z =
       (int)ROUND(((this_ptr->min).z + (this_ptr->max).z) * 0.5f * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[19999].projected_vertex,local_28);
  iVar1 = g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[19999].projected_vertex.transformed_z;
  if (0 < iVar1) {
    return ABS(((float)g_INT_01c4effc *
               (((this_ptr->max).y - (this_ptr->min).y) / ((float)iVar1 * (float)0.00390625))
               ) / (float)g_INT_0061b4c4);
  }
  return 99999.0;
}
