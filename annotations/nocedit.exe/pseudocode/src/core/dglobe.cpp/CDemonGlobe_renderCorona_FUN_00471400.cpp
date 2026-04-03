// Name: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400
// Address: 00471400
// Address Range: [[00471400, 004715d0]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400(CDemonGlobe *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400(CDemonGlobe *this_ptr)

{
  float fVar1;
  int iVar3;
  int iVar4;
  int iVar1;
  int iVar2;
  SMRGLPrimitiveQuadIndex local_64;
  float local_3c;
  float local_38;
  float local_34;
  CVector3i local_30;
  float local_24;
  float local_20;
  float local_1c;
  CVector3f local_18;
  float local_c;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr1,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
            (g_CDemonRendererPtr2,&local_18);
  local_24 = local_18.x - (this_ptr->position).x;
  local_20 = local_18.y - (this_ptr->position).y;
  local_1c = local_18.z - (this_ptr->position).z;
  if (&local_18 != (CVector3f *)&local_24) {
    local_18.x = local_24;
    local_18.y = local_20;
    local_18.z = local_1c;
  }
  if (this_ptr->radius_squared <=
      local_18.z * local_18.z + local_18.x * local_18.x + local_18.y * local_18.y) {
    fVar1 = this_ptr->radius * (float)0.00390625;
    iVar2 = 0;
    iVar1 = 0;
    do {
      local_30.x = (int)ROUND((float)*(int *)((int)&g_CoronaVertexPositions[0].x + iVar1) * fVar1 *
                              256.0f);
      local_30.y = (int)ROUND((float)*(int *)((int)&g_CoronaVertexPositions[0].y + iVar1) * fVar1 *
                              256.0f);
      local_30.z = (int)ROUND((float)*(int *)((int)&g_CoronaVertexPositions[0].z + iVar1) * fVar1 *
                              256.0f);
      iVar1 = iVar1 + 0xc;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar2),&local_30);
      iVar2 = iVar2 + 0x30;
    } while (iVar1 != 0x2e8);
    iVar4 = 0;
    do {
      local_64.base.base.count = *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar4 + -0x14);
      local_64.base.surface_normal.A =
           *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar4 + -0x10);
      local_64.base.surface_normal.B =
           *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar4 + -0xc);
      local_64.base.surface_normal.C =
           *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar4 + -8);
      iVar3 = iVar4 + -4;
      local_64.vertices[0] = *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar4);
      local_64.vertices[1] = *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar4 + 4);
      local_64.vertices[2] = *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar4 + 8);
      local_64.vertices[3] = *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar4 + 0xc);
      iVar4 = iVar4 + 0x24;
      local_64.base.surface_normal.D =
           (int)ROUND(ROUND((float)*(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar3) *
                            this_ptr->radius));
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                (g_CDemonRendererPtr1,&local_64.base,
                 core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320);
    } while (iVar4 != 0xbd0);
    return;
  }
  core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0();
  return;
}
