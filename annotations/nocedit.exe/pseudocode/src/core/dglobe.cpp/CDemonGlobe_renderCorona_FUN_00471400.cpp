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
  uint extraout_EDX;
  uint uVar2;
  uint extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  RenderScanlineFunc *unaff_ESI;
  int iVar3;
  int iVar4;
  float10 fVar5;
  code *prim;
  byte local_5c [4];
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_44;
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
    iVar4 = 0;
    iVar3 = 0;
    do {
      local_34 = (float)*(int *)((int)&g_CoronaVertexPositions[0].x + iVar3) * fVar1;
      local_30 = (float)*(int *)((int)&g_CoronaVertexPositions[0].y + iVar3) * fVar1;
      local_2c = (float)*(int *)((int)&g_CoronaVertexPositions[0].z + iVar3) * fVar1;
      local_28.x = (int)ROUND(local_34 * 256f);
      local_28.y = (int)ROUND(local_30 * 256f);
      local_28.z = (int)ROUND(local_2c * 256f);
      iVar3 = iVar3 + 0xc;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar4),&local_28);
      iVar4 = iVar4 + 0x30;
    } while (iVar3 != 0x2e8);
    iVar3 = 0;
    uVar2 = extraout_EDX;
    do {
      this_ptr_00 = g_CDemonRendererPtr;
      local_58 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar3 + -0x14);
      local_54 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar3 + -0x10);
      local_50 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar3 + -0xc);
      local_4c = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar3 + -8);
      local_44 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar3);
      fVar5 = (float10)*(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar3 + -4) *
              (float10)this_ptr->radius;
      local_40 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar3 + 4);
      local_3c = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar3 + 8);
      prim = core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320;
      local_38 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar3 + 0xc);
      iVar3 = iVar3 + 0x24;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(uVar2,local_5c));
      local_44 = (int)ROUND(fVar5);
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                (this_ptr_00,(SMRGLHeaderPrimitive *)prim,unaff_ESI);
      uVar2 = extraout_EDX_00;
    } while (iVar3 != 0xbd0);
    return;
  }
  core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0();
  return;
}
