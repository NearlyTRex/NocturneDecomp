// Name: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400
// Address: 00471400
// MANUAL RECONSTRUCTION
// Address Range: [[00471400, 004715d0]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400(CDemonGlobe *this_ptr)

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400(CDemonGlobe *this_ptr)

{
  float fVar1;
  int iVar1;
  SMRGLPrimitiveQuadIndex local_64;
  CVector3i local_30;
  CVector3f local_18;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr1,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_0048c780
            (g_CDemonRendererPtr2,&local_18);
  local_18.x = local_18.x - (this_ptr->position).x;
  local_18.y = local_18.y - (this_ptr->position).y;
  local_18.z = local_18.z - (this_ptr->position).z;
  if (this_ptr->radius_squared <=
      local_18.z * local_18.z + local_18.x * local_18.x + local_18.y * local_18.y) {
    fVar1 = this_ptr->radius * (float)0.00390625;
    for (iVar1 = 0; iVar1 < 62; iVar1 = iVar1 + 1) {
      local_30.x = (int)ROUND((float)g_CoronaVertexPositions[iVar1].x * fVar1 * 256.0f);
      local_30.y = (int)ROUND((float)g_CoronaVertexPositions[iVar1].y * fVar1 * 256.0f);
      local_30.z = (int)ROUND((float)g_CoronaVertexPositions[iVar1].z * fVar1 * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[iVar1].projected_vertex,&local_30);
    }
    for (iVar1 = 0; iVar1 < 84; iVar1 = iVar1 + 1) {
      memcpy(&local_64.base.base.count,&g_CoronaFacePrimitives[iVar1],sizeof(SMRGLLightPrimitive));
      local_64.base.surface_normal.D.i =
           (int)ROUND(ROUND((float)g_CoronaFacePrimitives[iVar1].normal.D.i * this_ptr->radius));
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                (g_CDemonRendererPtr1,&local_64.base,
                 core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320);
    }
    return;
  }
  core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0();
  return;
}
