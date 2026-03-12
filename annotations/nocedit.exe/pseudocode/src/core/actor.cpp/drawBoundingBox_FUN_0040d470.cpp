// Name: core_actor.cpp_drawBoundingBox_FUN_0040d470
// Address: 0040d470
// Address Range: [[0040d470, 0040d936]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_drawBoundingBox_FUN_0040d470(CBoundingBox3D *bbox,int line_color)

#include "nocturne.h"

void __cdecl core_actor_cpp_drawBoundingBox_FUN_0040d470(CBoundingBox3D *bbox,int line_color)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  int iVar3;
  int iVar9;
  uint corner_index;
  SRenderVertex *pSVar10;
  SRenderVertex *pSVar12;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  int *piVar13;
  int *piVar6;
  byte bVar7;
  SRenderVertex *output;
  CVector3i *pCVar14;
  CVector3f local_130;
  CVector3i local_124;
  CVector3i local_118;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3i local_b8;
  CVector3f local_ac;
  CVector3f local_a0;
  CVector3i local_94;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  CVector3i local_28;
  CVector3i local_1c;
  SRenderVertex *pSVar11;
  CVector3i *pCVar12;
  SRenderVertex vertex2_01;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex in_stack_fffffe70;
  byte auVar8 [24];
  byte in_stack_fffffea0 [32];
  uint uVar10;
  uint uVar9;
  
  bVar7 = 0;
  corner_index = 0;
  g_ActiveRenderColor = line_color;
  do {
    pCVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(bbox,&local_d0,corner_index ^ 1);
    uVar9 = 0x40d4b7;
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(bbox,&local_dc,corner_index);
    fVar1 = pCVar1->x * 0.2f;
    fVar2 = pCVar1->y * 0.2f;
    fVar3 = 0.2f * pCVar1->z;
    fVar4 = pCVar2->x * 0.8f;
    fVar5 = pCVar2->y * 0.8f;
    fVar6 = 0.8f * pCVar2->z;
    local_1c.x = (int)ROUND(pCVar2->x * 256.0f);
    local_1c.y = (int)ROUND(pCVar2->y * 256.0f);
    local_1c.z = (int)ROUND(pCVar2->z * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex,&local_1c);
    local_124.x = (int)ROUND((fVar4 + fVar1) * 256.0f);
    local_124.y = (int)ROUND((fVar5 + fVar2) * 256.0f);
    local_124.z = (int)ROUND((fVar6 + fVar3) * 256.0f);
    pCVar12 = &local_124;
    pSVar11 = g_CDemonRendererPtr1->vertex_buffer_ptr + 1;
    uVar10 = 0x40d5d7;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(&pSVar11->projected_vertex,pCVar12);
    pSVar12 = g_CDemonRendererPtr1->vertex_buffer_ptr;
    pSVar10 = pSVar12 + 1;
    piVar13 = (int *)&stack0xfffffea0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar13 = (pSVar10->projected_vertex).transformed_x;
      pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar7 * -2 + 1) * 4);
      piVar13 = piVar13 + (uint)bVar7 * -2 + 1;
    }
    piVar13 = (int *)&stack0xfffffe70;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar13 = (pSVar12->projected_vertex).transformed_x;
      pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar7 * -2 + 1) * 4);
      piVar13 = piVar13 + (uint)bVar7 * -2 + 1;
    }
    vertex2.r = uVar9;
    auVar8 = in_stack_fffffea0._0_24_;
    vertex2.projected_vertex.transformed_x = auVar8._0_4_;
    vertex2.projected_vertex.transformed_y = auVar8._4_4_;
    vertex2.projected_vertex.transformed_z = auVar8._8_4_;
    vertex2.projected_vertex.inv_z = auVar8._12_4_;
    vertex2.projected_vertex.screen_x = auVar8._16_4_;
    vertex2.projected_vertex.screen_y = auVar8._20_4_;
    vertex2.u = in_stack_fffffea0._24_4_;
    vertex2.v = in_stack_fffffea0._28_4_;
    vertex2.g = uVar10;
    vertex2.b = (int)pSVar11;
    vertex2.a = (int)pCVar12;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe70,vertex2);
    pCVar7 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(bbox,&local_130,corner_index ^ 2);
    uVar9 = 0x40d635;
    pCVar8 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(bbox,&local_c4,corner_index);
    fVar1 = pCVar7->x * 0.2f;
    fVar2 = pCVar7->y * 0.2f;
    fVar3 = 0.2f * pCVar7->z;
    fVar4 = pCVar8->x * 0.8f;
    fVar5 = pCVar8->y * 0.8f;
    fVar6 = 0.8f * pCVar8->z;
    local_28.x = (int)ROUND(pCVar8->x * 256.0f);
    local_28.y = (int)ROUND(pCVar8->y * 256.0f);
    local_28.z = (int)ROUND(pCVar8->z * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex,&local_28);
    local_b8.x = (int)ROUND((fVar4 + fVar1) * 256.0f);
    local_b8.y = (int)ROUND((fVar5 + fVar2) * 256.0f);
    local_b8.z = (int)ROUND((fVar6 + fVar3) * 256.0f);
    pCVar14 = &local_b8;
    output = g_CDemonRendererPtr1->vertex_buffer_ptr + 1;
    uVar10 = 0x40d764;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(&output->projected_vertex,pCVar14);
    pSVar12 = g_CDemonRendererPtr1->vertex_buffer_ptr;
    pSVar10 = pSVar12 + 1;
    piVar13 = (int *)&stack0xfffffea0;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar13 = (pSVar10->projected_vertex).transformed_x;
      pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar7 * -2 + 1) * 4);
      piVar13 = piVar13 + (uint)bVar7 * -2 + 1;
    }
    piVar13 = (int *)&stack0xfffffe70;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar13 = (pSVar12->projected_vertex).transformed_x;
      pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar7 * -2 + 1) * 4);
      piVar13 = piVar13 + (uint)bVar7 * -2 + 1;
    }
    vertex2_00.r = uVar9;
    auVar8 = in_stack_fffffea0._0_24_;
    vertex2_00.projected_vertex.transformed_x = auVar8._0_4_;
    vertex2_00.projected_vertex.transformed_y = auVar8._4_4_;
    vertex2_00.projected_vertex.transformed_z = auVar8._8_4_;
    vertex2_00.projected_vertex.inv_z = auVar8._12_4_;
    vertex2_00.projected_vertex.screen_x = auVar8._16_4_;
    vertex2_00.projected_vertex.screen_y = auVar8._20_4_;
    vertex2_00.u = in_stack_fffffea0._24_4_;
    vertex2_00.v = in_stack_fffffea0._28_4_;
    vertex2_00.g = uVar10;
    vertex2_00.b = (int)output;
    vertex2_00.a = (int)pCVar14;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe70,vertex2_00);
    pCVar7 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(bbox,&local_a0,corner_index ^ 4);
    uVar9 = 0x40d7c1;
    pCVar8 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(bbox,&local_ac,corner_index);
    fVar1 = pCVar7->x * 0.2f;
    fVar2 = pCVar7->y * 0.2f;
    fVar3 = 0.2f * pCVar7->z;
    fVar4 = pCVar8->x * 0.8f;
    fVar5 = pCVar8->y * 0.8f;
    fVar6 = 0.8f * pCVar8->z;
    local_94.x = (int)ROUND(pCVar8->x * 256.0f);
    local_94.y = (int)ROUND(pCVar8->y * 256.0f);
    local_94.z = (int)ROUND(pCVar8->z * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex,&local_94);
    local_118.x = (int)ROUND((fVar4 + fVar1) * 256.0f);
    local_118.y = (int)ROUND((fVar5 + fVar2) * 256.0f);
    local_118.z = (int)ROUND((fVar6 + fVar3) * 256.0f);
    pCVar14 = &local_118;
    pSVar12 = g_CDemonRendererPtr1->vertex_buffer_ptr + 1;
    uVar10 = 0x40d8f3;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(&pSVar12->projected_vertex,pCVar14);
    pSVar5 = g_CDemonRendererPtr1->vertex_buffer_ptr;
    pSVar4 = pSVar5 + 1;
    piVar13 = (int *)&stack0xfffffea0;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
      *piVar13 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = pSVar4;
      piVar13 = piVar13 + (uint)bVar7 * -2 + 1;
    }
    corner_index = corner_index + 1;
    piVar6 = (int *)&stack0xfffffe70;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
      *piVar6 = (pSVar5->projected_vertex).transformed_x;
      pSVar5 = pSVar5;
      piVar6 = piVar6;
    }
    vertex2_01.r = uVar9;
    auVar8 = in_stack_fffffea0._0_24_;
    vertex2_01.projected_vertex.transformed_x = auVar8._0_4_;
    vertex2_01.projected_vertex.transformed_y = auVar8._4_4_;
    vertex2_01.projected_vertex.transformed_z = auVar8._8_4_;
    vertex2_01.projected_vertex.inv_z = auVar8._12_4_;
    vertex2_01.projected_vertex.screen_x = auVar8._16_4_;
    vertex2_01.projected_vertex.screen_y = auVar8._20_4_;
    vertex2_01.u = in_stack_fffffea0._24_4_;
    vertex2_01.v = in_stack_fffffea0._28_4_;
    vertex2_01.g = uVar10;
    vertex2_01.b = (int)pSVar12;
    vertex2_01.a = (int)pCVar14;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe70,vertex2_01);
  } while ((int)corner_index < 8);
  return;
}
