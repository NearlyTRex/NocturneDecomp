// Name: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400
// Address: 00471400
// Address Range: [[00471400, 004715d0]]
// Convention: __cdecl
// Signature: void core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400(CDemonGlobe * this_ptr)

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400(CDemonGlobe *this_ptr)

{
  float fVar1;
  CDemonRenderer *this_ptr_00;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  int iVar2;
  int iVar3;
  double dVar4;
  SMRGLHeaderPrimitive *prim;
  RenderScanlineFunc *scanline_renderer;
  byte local_5c [4];
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  float local_34;
  float local_30;
  float local_2c;
  CVector3i local_28;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
            (g_CDemonRendererPtr,&local_14);
  local_1c = local_10 - (this_ptr->position).x;
  local_18 = local_c - (this_ptr->position).y;
  local_14 = unaff_EBP - (this_ptr->position).z;
  if (&local_10 != &local_1c) {
    local_10 = local_1c;
    local_c = local_18;
    unaff_EBP = local_14;
  }
  if (this_ptr->radius_squared <= unaff_EBP * unaff_EBP + local_10 * local_10 + local_c * local_c) {
    fVar1 = this_ptr->radius * (float)0.00390625;
    iVar3 = 0;
    iVar2 = 0;
    do {
      local_34 = (float)*(int *)((int)&g_CoronaVertexPositions[0].x + iVar2) * fVar1;
      local_30 = (float)*(int *)((int)&g_CoronaVertexPositions[0].y + iVar2) * fVar1;
      local_2c = (float)*(int *)((int)&g_CoronaVertexPositions[0].z + iVar2) * fVar1;
      local_28.x = (int)ROUND(local_34 * 256f);
      local_28.y = (int)ROUND(local_30 * 256f);
      local_28.z = (int)ROUND(local_2c * 256f);
      iVar2 = iVar2 + 0xc;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar3),&local_28);
      iVar3 = iVar3 + 0x30;
    } while (iVar2 != 0x2e8);
    iVar2 = 0;
    do {
      this_ptr_00 = g_CDemonRendererPtr;
      local_58 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + -0x14);
      local_54 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + -0x10);
      local_50 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + -0xc);
      local_4c = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + -8);
      iVar3 = iVar2 + -4;
      local_44 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar2);
      local_40 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + 4);
      local_3c = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + 8);
      local_38 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + 0xc);
      scanline_renderer = (RenderScanlineFunc *)local_5c;
      iVar2 = iVar2 + 0x24;
      prim = (SMRGLHeaderPrimitive *)0x471588;
      dVar4 = crt_math_c_round_FUN_005fe6b0
                        ((double)((float)*(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar3) *
                                 this_ptr->radius));
      local_4c = (int)ROUND(dVar4);
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                (this_ptr_00,prim,scanline_renderer);
    } while (iVar2 != 0xbd0);
    return;
  }
  core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0();
  return;
}
