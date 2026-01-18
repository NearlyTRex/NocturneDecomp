// Name: core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
// Address: 0040d940
// Address Range: [[0040d940, 0040deba]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor * this_ptr, uint32_t color)

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor *this_ptr,uint32_t color)

{
  CDemonRenderer *pCVar1;
  CBoundingBox3D *this_ptr_00;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  uint corner_index;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar6;
  int *piVar7;
  byte bVar8;
  CDemonActor *in_stack_0000000c;
  int in_stack_00000010;
  SRenderVertex *in_stack_fffffe5c;
  SRenderVertex *in_stack_fffffe60;
  int aiStack_174 [7];
  uint uStack_158;
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
  CVector3f aCStack_6c [2];
  CVector3i aCStack_54 [2];
  CVector3i aCStack_3c [2];
  CVector3f CStack_24;
  
  bVar8 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(this_ptr);
  uStack_158 = 0x40d975;
  this_ptr_00 = (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)&stack0xfffffeb4);
  corner_index = 0;
  g_ActiveRenderColor = in_stack_00000010;
  do {
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (this_ptr_00,&CStack_b4,corner_index ^ 1);
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(this_ptr_00,&CStack_c0,corner_index)
    ;
    core_actor_cpp_FUN_004104f0();
    core_actor_cpp_FUN_004104e0();
    core_actor_cpp_FUN_004104d0();
    core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_24);
    CStack_24.x = pCVar2->x * 0.2f;
    CStack_24.y = pCVar2->y * 0.2f;
    CStack_24.z = pCVar2->z * 0.2f;
    core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_d8);
    CStack_d8.x = pCVar3->x * 0.8f;
    CStack_d8.y = pCVar3->y * 0.8f;
    CStack_d8.z = 0.8f * pCVar3->z;
    core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_114);
    pCVar1 = g_CDemonRendererPtr1;
    CStack_114.x = CStack_d8.x + CStack_24.x;
    CStack_114.y = CStack_d8.y + CStack_24.y;
    CStack_114.z = CStack_d8.z + CStack_24.z;
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar1->vertex_buffer_ptr->projected_vertex,aCStack_3c);
    pCVar1 = g_CDemonRendererPtr1;
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar1->vertex_buffer_ptr[1].projected_vertex,aCStack_54);
    pSVar6 = g_CDemonRendererPtr1->vertex_buffer_ptr;
    pSVar5 = pSVar6 + 1;
    piVar7 = aiStack_174;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = (pSVar5->projected_vertex).transformed_x;
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    piVar7 = (int *)&stack0xfffffe5c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = (pSVar6->projected_vertex).transformed_x;
      pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe5c,in_stack_fffffe60);
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (this_ptr_00,&CStack_e4,corner_index ^ 2);
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (this_ptr_00,&CStack_120,corner_index);
    core_actor_cpp_FUN_004104f0();
    core_actor_cpp_FUN_004104e0();
    core_actor_cpp_FUN_004104d0();
    core_actor_cpp_CVector_ctor_FUN_00410340(aCStack_6c);
    aCStack_6c[0].x = pCVar2->x * 0.2f;
    aCStack_6c[0].y = pCVar2->y * 0.2f;
    aCStack_6c[0].z = pCVar2->z * 0.2f;
    core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_a8);
    CStack_a8.x = pCVar3->x * 0.8f;
    CStack_a8.y = pCVar3->y * 0.8f;
    CStack_a8.z = pCVar3->z * 0.8f;
    core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_78);
    pCVar1 = g_CDemonRendererPtr1;
    CStack_78.x = CStack_a8.x + aCStack_6c[0].x;
    CStack_78.y = CStack_a8.y + aCStack_6c[0].y;
    CStack_78.z = CStack_a8.z + aCStack_6c[0].z;
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar1->vertex_buffer_ptr->projected_vertex,&CStack_108);
    pCVar1 = g_CDemonRendererPtr1;
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar1->vertex_buffer_ptr[1].projected_vertex,&CStack_f0);
    pSVar6 = g_CDemonRendererPtr1->vertex_buffer_ptr;
    pSVar5 = pSVar6 + 1;
    piVar7 = aiStack_174;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = (pSVar5->projected_vertex).transformed_x;
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    piVar7 = (int *)&stack0xfffffe5c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = (pSVar6->projected_vertex).transformed_x;
      pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe5c,in_stack_fffffe60);
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (this_ptr_00,&CStack_84,corner_index ^ 4);
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(this_ptr_00,&CStack_90,corner_index)
    ;
    core_actor_cpp_FUN_004104f0();
    core_actor_cpp_FUN_004104e0();
    core_actor_cpp_FUN_004104d0();
    core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_fc);
    CStack_fc.x = pCVar2->x * 0.2f;
    CStack_fc.y = pCVar2->y * 0.2f;
    CStack_fc.z = pCVar2->z * 0.2f;
    core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_12c);
    CStack_12c.x = pCVar3->x * 0.8f;
    CStack_12c.y = pCVar3->y * 0.8f;
    CStack_12c.z = 0.8f * pCVar3->z;
    core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_9c);
    pCVar1 = g_CDemonRendererPtr1;
    CStack_9c.x = CStack_12c.x + CStack_fc.x;
    CStack_9c.y = CStack_12c.y + CStack_fc.y;
    CStack_9c.z = CStack_12c.z + CStack_fc.z;
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar1->vertex_buffer_ptr->projected_vertex,&CStack_cc);
    pCVar1 = g_CDemonRendererPtr1;
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar1->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)&stack0xffffffe8);
    pSVar6 = g_CDemonRendererPtr1->vertex_buffer_ptr;
    pSVar5 = pSVar6 + 1;
    piVar7 = aiStack_174;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = (pSVar5->projected_vertex).transformed_x;
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    corner_index = corner_index + 1;
    piVar7 = (int *)&stack0xfffffe5c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = (pSVar6->projected_vertex).transformed_x;
      pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe5c,in_stack_fffffe60);
  } while ((int)corner_index < 8);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_0000000c);
  return;
}
