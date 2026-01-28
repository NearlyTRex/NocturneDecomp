// Name: core_actor.cpp_drawBoundingBox_FUN_0040d470
// Address: 0040d470
// Address Range: [[0040d470, 0040d936]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_drawBoundingBox_FUN_0040d470(CBoundingBox3D *bbox,int line_color)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_160 */
/* WARNING: Variable defined which should be unmapped: local_190 */

void __cdecl core_actor_cpp_drawBoundingBox_FUN_0040d470(CBoundingBox3D *bbox,int line_color)

{
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  float corner_index;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar6;
  byte bVar7;
  SRenderVertex local_190;
  SRenderVertex local_160;
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
  
  bVar7 = 0;
  corner_index = 0.0;
  g_ActiveRenderColor = line_color;
  do {
    local_160.w_recip = (float)((uint)corner_index ^ 1);
    local_160.fog = (float)&local_d0;
    local_160.color = (int)bbox;
    local_160.light = 5.953746e-39;
    pCVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (bbox,(CVector3f *)local_160.fog,(uint)local_160.w_recip);
    local_160.fog = (float)&local_dc;
    local_160.color = (int)bbox;
    local_160.light = 5.95378e-39;
    local_160.w_recip = corner_index;
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (bbox,(CVector3f *)local_160.fog,(uint)corner_index);
    local_64 = pCVar2->x;
    local_60 = pCVar2->y;
    local_5c = pCVar2->z;
    local_10c = pCVar1->x * 0.2f;
    local_108 = pCVar1->y * 0.2f;
    local_104 = 0.2f * pCVar1->z;
    local_4c = pCVar2->x * 0.8f;
    local_48 = pCVar2->y * 0.8f;
    local_44 = 0.8f * pCVar2->z;
    local_e8 = local_4c + local_10c;
    local_e4 = local_48 + local_108;
    local_e0 = local_44 + local_104;
    local_1c.x = (int)ROUND(local_64 * 256.0f);
    local_1c.y = (int)ROUND(local_60 * 256.0f);
    local_1c.z = (int)ROUND(local_5c * 256.0f);
    local_160.w_recip = (float)&local_1c;
    local_160.fog = (float)g_CDemonRendererPtr1->vertex_buffer_ptr;
    local_160.color = 0x40d594;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)local_160.fog,(CVector3i *)local_160.w_recip);
    local_124.x = (int)ROUND(local_e8 * 256.0f);
    local_124.y = (int)ROUND(local_e4 * 256.0f);
    local_124.z = (int)ROUND(local_e0 * 256.0f);
    local_160.w_recip = (float)&local_124;
    local_160.fog = (float)(g_CDemonRendererPtr1->vertex_buffer_ptr + 1);
    local_160.color = 0x40d5d7;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)local_160.fog,(CVector3i *)local_160.w_recip);
    pSVar5 = g_CDemonRendererPtr1->vertex_buffer_ptr;
    pSVar4 = pSVar5 + 1;
    pSVar6 = &local_160;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(int *)pSVar6 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
      pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar7 * -2 + 1) * 4);
    }
    pSVar4 = &local_190;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(int *)pSVar4 = (pSVar5->projected_vertex).transformed_x;
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
    }
    vertex2.light = local_160.light;
    vertex2.projected_vertex = local_160.projected_vertex;
    vertex2.u = local_160.u;
    vertex2.v = local_160.v;
    vertex2.color = local_160.color;
    vertex2.fog = local_160.fog;
    vertex2.w_recip = local_160.w_recip;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(local_190,vertex2);
    local_160.w_recip = (float)((uint)corner_index ^ 2);
    local_160.color = (int)bbox;
    local_160.light = 5.954281e-39;
    local_160.fog = (float)&local_130;
    pCVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (bbox,&local_130,(uint)local_160.w_recip);
    local_160.fog = (float)&local_c4;
    local_160.color = (int)bbox;
    local_160.light = 5.954315e-39;
    local_160.w_recip = corner_index;
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (bbox,(CVector3f *)local_160.fog,(uint)corner_index);
    local_7c = pCVar2->x;
    local_78 = pCVar2->y;
    local_74 = pCVar2->z;
    local_100 = pCVar1->x * 0.2f;
    local_fc = pCVar1->y * 0.2f;
    local_f8 = 0.2f * pCVar1->z;
    local_40 = pCVar2->x * 0.8f;
    local_3c = pCVar2->y * 0.8f;
    local_38 = 0.8f * pCVar2->z;
    local_70 = local_40 + local_100;
    local_6c = local_3c + local_fc;
    local_68 = local_38 + local_f8;
    local_28.x = (int)ROUND(local_7c * 256.0f);
    local_28.y = (int)ROUND(local_78 * 256.0f);
    local_28.z = (int)ROUND(local_74 * 256.0f);
    local_160.w_recip = (float)&local_28;
    local_160.fog = (float)g_CDemonRendererPtr1->vertex_buffer_ptr;
    local_160.color = 0x40d71b;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)local_160.fog,(CVector3i *)local_160.w_recip);
    local_b8.x = (int)ROUND(local_70 * 256.0f);
    local_b8.y = (int)ROUND(local_6c * 256.0f);
    local_b8.z = (int)ROUND(local_68 * 256.0f);
    local_160.w_recip = (float)&local_b8;
    local_160.fog = (float)(g_CDemonRendererPtr1->vertex_buffer_ptr + 1);
    local_160.color = 0x40d764;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)local_160.fog,(CVector3i *)local_160.w_recip);
    pSVar5 = g_CDemonRendererPtr1->vertex_buffer_ptr;
    pSVar4 = pSVar5 + 1;
    pSVar6 = &local_160;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(int *)pSVar6 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
      pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar7 * -2 + 1) * 4);
    }
    pSVar4 = &local_190;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(int *)pSVar4 = (pSVar5->projected_vertex).transformed_x;
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
    }
    vertex2_00.light = local_160.light;
    vertex2_00.projected_vertex = local_160.projected_vertex;
    vertex2_00.u = local_160.u;
    vertex2_00.v = local_160.v;
    vertex2_00.color = local_160.color;
    vertex2_00.fog = local_160.fog;
    vertex2_00.w_recip = local_160.w_recip;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(local_190,vertex2_00);
    local_160.w_recip = (float)((uint)corner_index ^ 4);
    local_160.fog = (float)&local_a0;
    local_160.color = (int)bbox;
    local_160.light = 5.954842e-39;
    pCVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (bbox,(CVector3f *)local_160.fog,(uint)local_160.w_recip);
    local_160.fog = (float)&local_ac;
    local_160.color = (int)bbox;
    local_160.light = 5.95487e-39;
    local_160.w_recip = corner_index;
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (bbox,(CVector3f *)local_160.fog,(uint)corner_index);
    local_58 = pCVar2->x;
    local_54 = pCVar2->y;
    local_50 = pCVar2->z;
    local_88 = pCVar1->x * 0.2f;
    local_84 = pCVar1->y * 0.2f;
    local_80 = 0.2f * pCVar1->z;
    local_34 = pCVar2->x * 0.8f;
    local_30 = pCVar2->y * 0.8f;
    local_2c = 0.8f * pCVar2->z;
    local_f4 = local_34 + local_88;
    local_f0 = local_30 + local_84;
    local_ec = local_2c + local_80;
    local_94.x = (int)ROUND(local_58 * 256.0f);
    local_94.y = (int)ROUND(local_54 * 256.0f);
    local_94.z = (int)ROUND(local_50 * 256.0f);
    local_160.w_recip = (float)&local_94;
    local_160.fog = (float)g_CDemonRendererPtr1->vertex_buffer_ptr;
    local_160.color = 0x40d8b0;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)local_160.fog,(CVector3i *)local_160.w_recip);
    local_118.x = (int)ROUND(local_f4 * 256.0f);
    local_118.y = (int)ROUND(local_f0 * 256.0f);
    local_118.z = (int)ROUND(local_ec * 256.0f);
    local_160.w_recip = (float)&local_118;
    local_160.fog = (float)(g_CDemonRendererPtr1->vertex_buffer_ptr + 1);
    local_160.color = 0x40d8f3;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)local_160.fog,(CVector3i *)local_160.w_recip);
    pSVar5 = g_CDemonRendererPtr1->vertex_buffer_ptr;
    pSVar4 = pSVar5 + 1;
    pSVar6 = &local_160;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(int *)pSVar6 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
      pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar7 * -2 + 1) * 4);
    }
    corner_index = (float)((int)corner_index + 1);
    pSVar4 = &local_190;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(int *)pSVar4 = (pSVar5->projected_vertex).transformed_x;
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
    }
    vertex2_01.light = local_160.light;
    vertex2_01.projected_vertex = local_160.projected_vertex;
    vertex2_01.u = local_160.u;
    vertex2_01.v = local_160.v;
    vertex2_01.color = local_160.color;
    vertex2_01.fog = local_160.fog;
    vertex2_01.w_recip = local_160.w_recip;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(local_190,vertex2_01);
  } while ((int)corner_index < 8);
  return;
}
