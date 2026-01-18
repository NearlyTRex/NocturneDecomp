// Name: core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
// Address: 00420840
// Address Range: [[00420840, 00420937]]
// Convention: __cdecl
// Signature: float core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(CBoundingBox3D * this_ptr)

#include "nocturne.h"

float __cdecl
core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(CBoundingBox3D *this_ptr)

{
  int iVar1;
  CVector3i local_34;
  float local_28;
  float local_24;
  float local_20;
  
  local_28 = ((this_ptr->min).x + (this_ptr->max).x) * 0.5f;
  local_24 = ((this_ptr->min).y + (this_ptr->max).y) * 0.5f;
  local_20 = ((this_ptr->min).z + (this_ptr->max).z) * 0.5f;
  local_34.x = (int)ROUND(local_28 * 256.0f);
  local_34.y = (int)ROUND(local_24 * 256.0f);
  local_34.z = (int)ROUND(local_20 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[19999].projected_vertex,&local_34);
  iVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr[19999].projected_vertex.transformed_z;
  if (0 < iVar1) {
    return ABS(((float)g_ViewportCenterYFixed *
               (((this_ptr->max).y - (this_ptr->min).y) /
               ((float)iVar1 * (float)0.00390625))) /
               (float)g_ProjectionScale);
  }
  return 99999.0;
}
