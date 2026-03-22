// Name: core_actor.cpp_draw3DLineSegment_FUN_0040d330
// Address: 0040d330
// Address Range: [[0040d330, 0040d469]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_draw3DLineSegment_FUN_0040d330(CVector3i *start_point,CVector3f *direction_offset)

#include "nocturne.h"

void __cdecl core_actor_cpp_draw3DLineSegment_FUN_0040d330(CVector3i *start_point,CVector3f *direction_offset)

{
  SRenderVertex vertex2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  SRenderVertex *pSVar8;
  SRenderVertex *pSVar9;
  int *piVar10;
  byte bVar11;
  SRenderVertex in_stack_ffffff4c;
  byte auVar12 [24];
  byte in_stack_ffffff7c [36];
  uint uVar13;
  SRenderVertex *output;
  CVector3i *input;
  CVector3i local_54;
  float local_48;
  float local_44;
  float local_40;
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
  
  bVar11 = 0;
  fVar1 = direction_offset->x * 0.2f;
  fVar2 = direction_offset->y * 0.2f;
  fVar3 = 0.2f * direction_offset->z;
  fVar4 = (float)start_point->x * 0.8f;
  fVar5 = (float)start_point->y * 0.8f;
  fVar6 = 0.8f * (float)start_point->z;
  local_54.x = (int)ROUND((float)start_point->x * 256.0f);
  local_54.y = (int)ROUND((float)start_point->y * 256.0f);
  local_54.z = (int)ROUND((float)start_point->z * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex,&local_54);
  local_30.x = (int)ROUND((fVar4 + fVar1) * 256.0f);
  local_30.y = (int)ROUND((fVar5 + fVar2) * 256.0f);
  local_30.z = (int)ROUND((fVar6 + fVar3) * 256.0f);
  input = &local_30;
  output = g_CDemonRendererPtr1->vertex_buffer_ptr + 1;
  uVar13 = 0x40d434;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(&output->projected_vertex,input);
  pSVar9 = g_CDemonRendererPtr1->vertex_buffer_ptr;
  pSVar8 = pSVar9 + 1;
  piVar10 = (int *)&stack0xffffff7c;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar10 = (pSVar8->projected_vertex).transformed_x;
    pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar11 * -2 + 1) * 4);
    piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
  }
  piVar10 = (int *)&stack0xffffff4c;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar10 = (pSVar9->projected_vertex).transformed_x;
    pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar11 * -2 + 1) * 4);
    piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
  }
  vertex2.g = uVar13;
  auVar12 = in_stack_ffffff7c._0_24_;
  vertex2.projected_vertex.transformed_x = auVar12._0_4_;
  vertex2.projected_vertex.transformed_y = auVar12._4_4_;
  vertex2.projected_vertex.transformed_z = auVar12._8_4_;
  vertex2.projected_vertex.inv_z = auVar12._12_4_;
  vertex2.projected_vertex.screen_x = auVar12._16_4_;
  vertex2.projected_vertex.screen_y = auVar12._20_4_;
  vertex2.u = in_stack_ffffff7c._24_4_;
  vertex2.v = in_stack_ffffff7c._28_4_;
  vertex2.r = in_stack_ffffff7c._32_4_;
  vertex2.b = (int)output;
  vertex2.a = (int)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff4c,vertex2);
  return;
}
