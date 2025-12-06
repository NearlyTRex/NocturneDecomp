// Name: core_actor.cpp_drawBoundingBox_FUN_0040d470
// Address: 0040d470
// Address Range: [[0040d470, 0040d936]]
// Convention: __cdecl
// Signature: void core_actor.cpp_drawBoundingBox_FUN_0040d470(CBoundingBox3D * bbox, int line_color)

#include "nocturne.h"

void __cdecl core_actor_cpp_drawBoundingBox_FUN_0040d470(CBoundingBox3D *bbox,int line_color)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  uint corner_index;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  int *piVar6;
  byte bVar7;
  CBoundingBox3D *in_stack_00000018;
  CBoundingBox3D *in_stack_0000001c;
  CBoundingBox3D *in_stack_0000002c;
  SRenderVertex *in_stack_fffffe80;
  SRenderVertex *in_stack_fffffe84;
  SRenderVertex *in_stack_fffffe94;
  SRenderVertex *in_stack_fffffe98;
  SRenderVertex *in_stack_fffffea8;
  SRenderVertex *in_stack_fffffeac;
  int aiStack_150 [4];
  uint uStack_140;
  CVector3i local_e4;
  byte auStack_d8 [20];
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  CVector3f local_ac;
  CVector3i aCStack_98 [2];
  byte local_80 [28];
  CVector3i local_64;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_14;
  
  bVar7 = 0;
  corner_index = 0;
  g_ActiveRenderColor = line_color;
  do {
    uStack_140 = 0x40d49f;
    pCVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (bbox,(CVector3f *)(auStack_d8 + 8),corner_index ^ 1);
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       ((CBoundingBox3D *)line_color,(CVector3f *)auStack_d8,corner_index);
    local_64.z = (int)pCVar2->x;
    local_58 = pCVar2->y;
    local_54 = pCVar2->z;
    local_44 = pCVar2->x * 0.8f;
    local_40 = pCVar2->y * 0.8f;
    local_3c = 0.8f * pCVar2->z;
    local_e4.y = (int)(local_44 + pCVar1->x * 0.2f);
    local_e4.z = (int)(local_40 + pCVar1->y * 0.2f);
    auStack_d8._0_4_ = local_3c + 0.2f * pCVar1->z;
    local_14 = (int)ROUND((float)local_64.z * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&local_14);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)&stack0xfffffee8);
    pSVar5 = g_CDemonRendererPtr->vertex_buffer_ptr;
    pSVar4 = pSVar5 + 1;
    piVar6 = aiStack_150;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    piVar6 = (int *)&stack0xfffffe80;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = (pSVar5->projected_vertex).transformed_x;
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe80,in_stack_fffffe84);
    pCVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (in_stack_00000018,(CVector3f *)&stack0xfffffee4,corner_index ^ 2);
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (in_stack_0000001c,&local_ac,corner_index);
    local_64.y = (int)pCVar2->x;
    local_64.z = (int)pCVar2->y;
    local_58 = pCVar2->z;
    local_e4.x = (int)(pCVar1->x * 0.2f);
    local_e4.y = (int)(pCVar1->y * 0.2f);
    local_e4.z = (int)(0.2f * pCVar1->z);
    local_24 = pCVar2->x * 0.8f;
    local_20 = pCVar2->y * 0.8f;
    local_1c = 0.8f * pCVar2->z;
    local_54 = local_24 + (float)local_e4.x;
    local_50 = local_20 + (float)local_e4.y;
    local_4c = local_1c + (float)local_e4.z;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
               (CVector3i *)&stack0xfffffff4);
    aCStack_98[0].x = (int)ROUND(local_50 * 256f);
    aCStack_98[0].y = (int)ROUND(local_4c * 256f);
    aCStack_98[0].z = (int)ROUND(local_48 * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,aCStack_98);
    pSVar5 = g_CDemonRendererPtr->vertex_buffer_ptr;
    pSVar4 = pSVar5 + 1;
    piVar6 = (int *)&stack0xfffffec4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    piVar6 = (int *)&stack0xfffffe94;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = (pSVar5->projected_vertex).transformed_x;
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe94,in_stack_fffffe98);
    pCVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (in_stack_0000002c,(CVector3f *)(local_80 + 8),corner_index ^ 4);
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (in_stack_0000002c,(CVector3f *)local_80,corner_index);
    local_28 = pCVar2->x;
    local_24 = pCVar2->y;
    local_20 = pCVar2->z;
    local_58 = pCVar1->x * 0.2f;
    local_54 = pCVar1->y * 0.2f;
    local_50 = 0.2f * pCVar1->z;
    bbox = (CBoundingBox3D *)(0.8f * pCVar2->z);
    local_c4 = pCVar2->x * 0.8f + local_58;
    fStack_c0 = pCVar2->y * 0.8f + local_54;
    fStack_bc = (float)bbox + local_50;
    local_64.x = (int)ROUND(local_28 * 256f);
    local_64.y = (int)ROUND(local_24 * 256f);
    local_64.z = (int)ROUND(local_20 * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_64);
    local_e4.x = (int)ROUND(fStack_c0 * 256f);
    local_e4.y = (int)ROUND(fStack_bc * 256f);
    local_e4.z = (int)ROUND(local_b8 * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_e4);
    pSVar5 = g_CDemonRendererPtr->vertex_buffer_ptr;
    pSVar4 = pSVar5 + 1;
    piVar6 = (int *)&stack0xfffffed8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    corner_index = corner_index + 1;
    piVar6 = (int *)&stack0xfffffea8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = (pSVar5->projected_vertex).transformed_x;
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffea8,in_stack_fffffeac);
  } while ((int)corner_index < 8);
  return;
}
