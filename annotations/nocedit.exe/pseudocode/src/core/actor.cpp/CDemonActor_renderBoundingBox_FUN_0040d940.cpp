// Name: core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
// Address: 0040d940
// Address Range: [[0040d940, 0040deba] [006027e0, 006029f3]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor *this_ptr,uint32_t color)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor *this_ptr,uint32_t color)

{
  SRenderVertex vertex1;
  SRenderVertex vertex1_00;
  SRenderVertex vertex1_01;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  CDemonRenderer *pCVar1;
  CBoundingBox3D *this_ptr_00;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  int iVar5;
  uint corner_index;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  int *piVar8;
  byte bVar9;
  CDemonActor *in_stack_0000000c;
  int in_stack_00000010;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  CVector3f CStack_12c;
  CVector3f CStack_120;
  CVector3f CStack_114;
  CVector3i CStack_108;
  CVector3f CStack_fc;
  CVector3i CStack_f0;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  CVector3i CStack_cc;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3i CStack_54;
  CVector3f CStack_48;
  CVector3i CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  CBoundingBox3D *local_14;
  
  bVar9 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(this_ptr);
  this_ptr_00 = (*((this_ptr->vtable)._ub)->getBoundingBox)
                          (this_ptr,(CBoundingBox3D *)&stack0xfffffeb4);
  corner_index = 0;
  g_ActiveRenderColor = in_stack_00000010;
  do {
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (this_ptr_00,&CStack_b4,corner_index ^ 1);
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(this_ptr_00,&CStack_c0,corner_index)
    ;
    core_actor_cpp_copyFloat3_FUN_004104f0(&CStack_48.x,&pCVar3->x);
    core_actor_cpp_copyFloat2_FUN_004104e0(&CStack_48.y,&pCVar3->y);
    core_actor_cpp_copyFloat1_FUN_004104d0(&CStack_48.z,&pCVar3->z);
    core_actor_cpp_CVector3f_ctor_FUN_00410340(&CStack_24);
    CStack_24.x = pCVar2->x * 0.2f;
    CStack_24.y = pCVar2->y * 0.2f;
    CStack_24.z = pCVar2->z * 0.2f;
    core_actor_cpp_CVector3f_ctor_FUN_00410340(&CStack_d8);
    CStack_d8.x = pCVar3->x * 0.8f;
    CStack_d8.y = pCVar3->y * 0.8f;
    CStack_d8.z = 0.8f * pCVar3->z;
    core_actor_cpp_CVector3f_ctor_FUN_00410340(&CStack_114);
    pCVar1 = g_CDemonRendererPtr1;
    CStack_114.x = CStack_d8.x + CStack_24.x;
    CStack_114.y = CStack_d8.y + CStack_24.y;
    CStack_114.z = CStack_d8.z + CStack_24.z;
    core_actor_cpp_CVector3f_toFixed8_FUN_004103d0(&CStack_48,&CStack_3c);
    engine_special_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar1->vertex_buffer_ptr->projected_vertex,&CStack_3c);
    pCVar1 = g_CDemonRendererPtr1;
    core_actor_cpp_CVector3f_toFixed8_FUN_004103d0(&CStack_114,&CStack_54);
    engine_special_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar1->vertex_buffer_ptr[1].projected_vertex,&CStack_54);
    pSVar7 = g_CDemonRendererPtr1->vertex_buffer_ptr;
    iVar22 = pSVar7[1].projected_vertex.transformed_x;
    iVar23 = pSVar7[1].projected_vertex.transformed_y;
    iVar24 = pSVar7[1].projected_vertex.transformed_z;
    iVar25 = pSVar7[1].projected_vertex.inv_z;
    iVar26 = pSVar7[1].projected_vertex.screen_x;
    iVar27 = pSVar7[1].projected_vertex.screen_y;
    iVar28 = pSVar7[1].u;
    iVar29 = pSVar7[1].v;
    iVar30 = pSVar7[1].r;
    iVar31 = pSVar7[1].g;
    fVar32 = (float)pSVar7[1].b;
    fVar4 = (float)pSVar7[1].a;
    pSVar6 = pSVar7 + 1;
    piVar8 = (int *)&stack0xfffffe8c;
    fVar33 = fVar4;
    for (; fVar4 != 0.0; fVar4 = (float)((int)fVar4 + -1)) {
      *piVar8 = (pSVar6->projected_vertex).transformed_x;
      pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar9 * -2 + 1) * 4);
      piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
    }
    iVar10 = (pSVar7->projected_vertex).transformed_x;
    iVar11 = (pSVar7->projected_vertex).transformed_y;
    iVar12 = (pSVar7->projected_vertex).transformed_z;
    iVar13 = (pSVar7->projected_vertex).inv_z;
    iVar14 = (pSVar7->projected_vertex).screen_x;
    iVar15 = (pSVar7->projected_vertex).screen_y;
    iVar16 = pSVar7->u;
    iVar17 = pSVar7->v;
    iVar18 = pSVar7->r;
    iVar19 = pSVar7->g;
    iVar20 = pSVar7->b;
    iVar5 = pSVar7->a;
    piVar8 = (int *)&stack0xfffffe5c;
    iVar21 = iVar5;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar8 = (pSVar7->projected_vertex).transformed_x;
      pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
      piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
    }
    vertex1.projected_vertex.transformed_y = iVar11;
    vertex1.projected_vertex.transformed_x = iVar10;
    vertex1.projected_vertex.transformed_z = iVar12;
    vertex1.projected_vertex.inv_z = iVar13;
    vertex1.projected_vertex.screen_x = iVar14;
    vertex1.projected_vertex.screen_y = iVar15;
    vertex1.u = iVar16;
    vertex1.v = iVar17;
    vertex1.r = iVar18;
    vertex1.g = iVar19;
    vertex1.b = iVar20;
    vertex1.a = iVar21;
    vertex2.projected_vertex.transformed_y = iVar23;
    vertex2.projected_vertex.transformed_x = iVar22;
    vertex2.projected_vertex.transformed_z = iVar24;
    vertex2.projected_vertex.inv_z = iVar25;
    vertex2.projected_vertex.screen_x = iVar26;
    vertex2.projected_vertex.screen_y = iVar27;
    vertex2.u = iVar28;
    vertex2.v = iVar29;
    vertex2.r = iVar30;
    vertex2.g = iVar31;
    vertex2.b = (int)fVar32;
    vertex2.a = (int)fVar33;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,vertex2);
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (this_ptr_00,&CStack_e4,corner_index ^ 2);
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (this_ptr_00,&CStack_120,corner_index);
    core_actor_cpp_copyFloat3_FUN_004104f0(&CStack_60.x,&pCVar3->x);
    core_actor_cpp_copyFloat2_FUN_004104e0(&CStack_60.y,&pCVar3->y);
    core_actor_cpp_copyFloat1_FUN_004104d0(&CStack_60.z,&pCVar3->z);
    core_actor_cpp_CVector3f_ctor_FUN_00410340(&CStack_6c);
    CStack_6c.x = pCVar2->x * 0.2f;
    CStack_6c.y = pCVar2->y * 0.2f;
    CStack_6c.z = pCVar2->z * 0.2f;
    core_actor_cpp_CVector3f_ctor_FUN_00410340(&CStack_a8);
    CStack_a8.x = pCVar3->x * 0.8f;
    CStack_a8.y = pCVar3->y * 0.8f;
    CStack_a8.z = pCVar3->z * 0.8f;
    core_actor_cpp_CVector3f_ctor_FUN_00410340(&CStack_78);
    pCVar1 = g_CDemonRendererPtr1;
    CStack_78.x = CStack_a8.x + CStack_6c.x;
    CStack_78.y = CStack_a8.y + CStack_6c.y;
    CStack_78.z = CStack_a8.z + CStack_6c.z;
    core_actor_cpp_CVector3f_toFixed8_FUN_004103d0(&CStack_60,&CStack_108);
    engine_special_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar1->vertex_buffer_ptr->projected_vertex,&CStack_108);
    pCVar1 = g_CDemonRendererPtr1;
    core_actor_cpp_CVector3f_toFixed8_FUN_004103d0(&CStack_78,&CStack_f0);
    engine_special_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar1->vertex_buffer_ptr[1].projected_vertex,&CStack_f0);
    pSVar7 = g_CDemonRendererPtr1->vertex_buffer_ptr;
    iVar22 = pSVar7[1].projected_vertex.transformed_x;
    iVar23 = pSVar7[1].projected_vertex.transformed_y;
    iVar24 = pSVar7[1].projected_vertex.transformed_z;
    iVar25 = pSVar7[1].projected_vertex.inv_z;
    iVar26 = pSVar7[1].projected_vertex.screen_x;
    iVar27 = pSVar7[1].projected_vertex.screen_y;
    iVar28 = pSVar7[1].u;
    iVar29 = pSVar7[1].v;
    iVar30 = pSVar7[1].r;
    iVar31 = pSVar7[1].g;
    fVar32 = (float)pSVar7[1].b;
    fVar4 = (float)pSVar7[1].a;
    pSVar6 = pSVar7 + 1;
    piVar8 = (int *)&stack0xfffffe8c;
    fVar33 = fVar4;
    for (; fVar4 != 0.0; fVar4 = (float)((int)fVar4 + -1)) {
      *piVar8 = (pSVar6->projected_vertex).transformed_x;
      pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar9 * -2 + 1) * 4);
      piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
    }
    iVar10 = (pSVar7->projected_vertex).transformed_x;
    iVar11 = (pSVar7->projected_vertex).transformed_y;
    iVar12 = (pSVar7->projected_vertex).transformed_z;
    iVar13 = (pSVar7->projected_vertex).inv_z;
    iVar14 = (pSVar7->projected_vertex).screen_x;
    iVar15 = (pSVar7->projected_vertex).screen_y;
    iVar16 = pSVar7->u;
    iVar17 = pSVar7->v;
    iVar18 = pSVar7->r;
    iVar19 = pSVar7->g;
    iVar20 = pSVar7->b;
    iVar5 = pSVar7->a;
    piVar8 = (int *)&stack0xfffffe5c;
    iVar21 = iVar5;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar8 = (pSVar7->projected_vertex).transformed_x;
      pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
      piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
    }
    vertex1_00.projected_vertex.transformed_y = iVar11;
    vertex1_00.projected_vertex.transformed_x = iVar10;
    vertex1_00.projected_vertex.transformed_z = iVar12;
    vertex1_00.projected_vertex.inv_z = iVar13;
    vertex1_00.projected_vertex.screen_x = iVar14;
    vertex1_00.projected_vertex.screen_y = iVar15;
    vertex1_00.u = iVar16;
    vertex1_00.v = iVar17;
    vertex1_00.r = iVar18;
    vertex1_00.g = iVar19;
    vertex1_00.b = iVar20;
    vertex1_00.a = iVar21;
    vertex2_00.projected_vertex.transformed_y = iVar23;
    vertex2_00.projected_vertex.transformed_x = iVar22;
    vertex2_00.projected_vertex.transformed_z = iVar24;
    vertex2_00.projected_vertex.inv_z = iVar25;
    vertex2_00.projected_vertex.screen_x = iVar26;
    vertex2_00.projected_vertex.screen_y = iVar27;
    vertex2_00.u = iVar28;
    vertex2_00.v = iVar29;
    vertex2_00.r = iVar30;
    vertex2_00.g = iVar31;
    vertex2_00.b = (int)fVar32;
    vertex2_00.a = (int)fVar33;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_00,vertex2_00);
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (this_ptr_00,&CStack_84,corner_index ^ 4);
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(this_ptr_00,&CStack_90,corner_index)
    ;
    core_actor_cpp_copyFloat3_FUN_004104f0(&CStack_30.x,&pCVar3->x);
    core_actor_cpp_copyFloat2_FUN_004104e0(&CStack_30.y,&pCVar3->y);
    core_actor_cpp_copyFloat1_FUN_004104d0(&CStack_30.z,&pCVar3->z);
    core_actor_cpp_CVector3f_ctor_FUN_00410340(&CStack_fc);
    CStack_fc.x = pCVar2->x * 0.2f;
    CStack_fc.y = pCVar2->y * 0.2f;
    CStack_fc.z = pCVar2->z * 0.2f;
    core_actor_cpp_CVector3f_ctor_FUN_00410340(&CStack_12c);
    CStack_12c.x = pCVar3->x * 0.8f;
    CStack_12c.y = pCVar3->y * 0.8f;
    CStack_12c.z = 0.8f * pCVar3->z;
    core_actor_cpp_CVector3f_ctor_FUN_00410340(&CStack_9c);
    pCVar1 = g_CDemonRendererPtr1;
    CStack_9c.x = CStack_12c.x + CStack_fc.x;
    CStack_9c.y = CStack_12c.y + CStack_fc.y;
    CStack_9c.z = CStack_12c.z + CStack_fc.z;
    core_actor_cpp_CVector3f_toFixed8_FUN_004103d0(&CStack_30,&CStack_cc);
    engine_special_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar1->vertex_buffer_ptr->projected_vertex,&CStack_cc);
    pCVar1 = g_CDemonRendererPtr1;
    core_actor_cpp_CVector3f_toFixed8_FUN_004103d0(&CStack_9c,(CVector3i *)&stack0xffffffe8);
    engine_special_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar1->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)&stack0xffffffe8);
    pSVar7 = g_CDemonRendererPtr1->vertex_buffer_ptr;
    iVar22 = pSVar7[1].projected_vertex.transformed_x;
    iVar23 = pSVar7[1].projected_vertex.transformed_y;
    iVar24 = pSVar7[1].projected_vertex.transformed_z;
    iVar25 = pSVar7[1].projected_vertex.inv_z;
    iVar26 = pSVar7[1].projected_vertex.screen_x;
    iVar27 = pSVar7[1].projected_vertex.screen_y;
    iVar28 = pSVar7[1].u;
    iVar29 = pSVar7[1].v;
    iVar30 = pSVar7[1].r;
    iVar31 = pSVar7[1].g;
    fVar32 = (float)pSVar7[1].b;
    fVar4 = (float)pSVar7[1].a;
    pSVar6 = pSVar7 + 1;
    piVar8 = (int *)&stack0xfffffe8c;
    fVar33 = fVar4;
    for (; fVar4 != 0.0; fVar4 = (float)((int)fVar4 + -1)) {
      *piVar8 = (pSVar6->projected_vertex).transformed_x;
      pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar9 * -2 + 1) * 4);
      piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
    }
    corner_index = corner_index + 1;
    iVar10 = (pSVar7->projected_vertex).transformed_x;
    iVar11 = (pSVar7->projected_vertex).transformed_y;
    iVar12 = (pSVar7->projected_vertex).transformed_z;
    iVar13 = (pSVar7->projected_vertex).inv_z;
    iVar14 = (pSVar7->projected_vertex).screen_x;
    iVar15 = (pSVar7->projected_vertex).screen_y;
    iVar16 = pSVar7->u;
    iVar17 = pSVar7->v;
    iVar18 = pSVar7->r;
    iVar19 = pSVar7->g;
    iVar20 = pSVar7->b;
    iVar5 = pSVar7->a;
    piVar8 = (int *)&stack0xfffffe5c;
    iVar21 = iVar5;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar8 = (pSVar7->projected_vertex).transformed_x;
      pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
      piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
    }
    vertex1_01.projected_vertex.transformed_y = iVar11;
    vertex1_01.projected_vertex.transformed_x = iVar10;
    vertex1_01.projected_vertex.transformed_z = iVar12;
    vertex1_01.projected_vertex.inv_z = iVar13;
    vertex1_01.projected_vertex.screen_x = iVar14;
    vertex1_01.projected_vertex.screen_y = iVar15;
    vertex1_01.u = iVar16;
    vertex1_01.v = iVar17;
    vertex1_01.r = iVar18;
    vertex1_01.g = iVar19;
    vertex1_01.b = iVar20;
    vertex1_01.a = iVar21;
    vertex2_01.projected_vertex.transformed_y = iVar23;
    vertex2_01.projected_vertex.transformed_x = iVar22;
    vertex2_01.projected_vertex.transformed_z = iVar24;
    vertex2_01.projected_vertex.inv_z = iVar25;
    vertex2_01.projected_vertex.screen_x = iVar26;
    vertex2_01.projected_vertex.screen_y = iVar27;
    vertex2_01.u = iVar28;
    vertex2_01.v = iVar29;
    vertex2_01.r = iVar30;
    vertex2_01.g = iVar31;
    vertex2_01.b = (int)fVar32;
    vertex2_01.a = (int)fVar33;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_01,vertex2_01);
  } while ((int)corner_index < 8);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_0000000c);
  return;
}
