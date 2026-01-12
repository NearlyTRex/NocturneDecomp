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
  BADSPACEBASE *in_ESP;
  CVector3i local_30;
  float local_24;
  float local_20;
  float local_1c;
  
  local_24 = ((this_ptr->min).x + (this_ptr->max).x) * 0.5f;
  local_20 = ((this_ptr->min).y + (this_ptr->max).y) * 0.5f;
  local_1c = ((this_ptr->min).z + (this_ptr->max).z) * 0.5f;
  local_30.x = (int)ROUND(local_24 * 256f);
  local_30.y = (int)ROUND(local_20 * 256f);
  local_30.z = (int)ROUND(local_1c * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,&local_30);
  iVar1 = g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex.transformed_z;
  if (0 < iVar1) {
    return ABS(((float)g_ViewportCenterYFixed *
               (((this_ptr->max).y - (this_ptr->min).y) /
               ((float)iVar1 * (float)0.00390625))) /
               (float)g_ProjectionScale);
  }
  return 99999.0;
}
