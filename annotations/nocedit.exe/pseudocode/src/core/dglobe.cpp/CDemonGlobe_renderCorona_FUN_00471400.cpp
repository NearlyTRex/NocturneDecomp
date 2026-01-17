// Name: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400
// Address: 00471400
// Address Range: [[00471400, 004715d0]]
// Convention: __cdecl
// Signature: void core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400(CDemonGlobe * this_ptr)

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400(CDemonGlobe *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  int iVar2;
  double dVar3;
  SMRGLHeaderPrimitive *prim;
  RenderScanlineFunc *scanline_renderer;
  byte local_64 [4];
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  float local_3c;
  float local_38;
  float local_34;
  CVector3i local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
            (g_CDemonRendererPtr,&local_18);
  local_24 = local_18 - (this_ptr->position).x;
  local_20 = local_14 - (this_ptr->position).y;
  local_1c = local_10 - (this_ptr->position).z;
  if (&local_18 != &local_24) {
    local_18 = local_24;
    local_14 = local_20;
    local_10 = local_1c;
  }
  if (this_ptr->radius_squared <= local_10 * local_10 + local_18 * local_18 + local_14 * local_14) {
    local_c = this_ptr->radius * (float)0.00390625;
    iVar2 = 0;
    iVar1 = 0;
    do {
      local_3c = (float)*(int *)((int)&g_CoronaVertexPositions[0].x + iVar1) * local_c;
      local_38 = (float)*(int *)((int)&g_CoronaVertexPositions[0].y + iVar1) * local_c;
      local_34 = (float)*(int *)((int)&g_CoronaVertexPositions[0].z + iVar1) * local_c;
      local_30.x = (int)ROUND(local_3c * 256.0f);
      local_30.y = (int)ROUND(local_38 * 256.0f);
      local_30.z = (int)ROUND(local_34 * 256.0f);
      iVar1 = iVar1 + 0xc;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar2),&local_30);
      iVar2 = iVar2 + 0x30;
    } while (iVar1 != 0x2e8);
    iVar1 = 0;
    do {
      this_ptr_00 = g_CDemonRendererPtr;
      local_60 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar1 + -0x14);
      local_5c = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar1 + -0x10);
      local_58 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar1 + -0xc);
      local_54 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar1 + -8);
      iVar2 = iVar1 + -4;
      local_4c = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar1);
      local_48 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar1 + 4);
      local_44 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar1 + 8);
      local_40 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar1 + 0xc);
      scanline_renderer = (RenderScanlineFunc *)local_64;
      iVar1 = iVar1 + 0x24;
      prim = (SMRGLHeaderPrimitive *)0x471588;
      dVar3 = crt_math_c_round_FUN_005fe6b0
                        ((double)((float)*(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar2) *
                                 this_ptr->radius));
      local_54 = (int)ROUND(dVar3);
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                (this_ptr_00,prim,scanline_renderer);
    } while (iVar1 != 0xbd0);
    return;
  }
  core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0();
  return;
}
