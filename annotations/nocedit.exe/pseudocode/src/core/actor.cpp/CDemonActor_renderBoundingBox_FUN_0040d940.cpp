// Name: core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
// Address: 0040d940
// Address Range: [[0040d940, 0040deba]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor *this_ptr,uint32_t color)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_17c */
/* WARNING: Variable defined which should be unmapped: local_14c */
/* WARNING: Variable defined which should be unmapped: local_1ac */

void __cdecl
core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor *this_ptr,uint32_t color)

{
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  CDemonRenderer *pCVar1;
  CBoundingBox3D *this_ptr_00;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  float corner_index;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar6;
  int *piVar7;
  byte bVar8;
  CDemonActor *in_stack_0000000c;
  int in_stack_00000010;
  SRenderVertex local_1ac;
  SRenderVertex local_17c;
  CBoundingBox3D local_14c;
  CVector3f CStack_12c;
  CVector3f CStack_120;
  CVector3f CStack_114;
  CVector3f CStack_108;
  CVector3f CStack_fc;
  CVector3f CStack_f0;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  CBoundingBox3D *local_14;
  
  bVar8 = 0;
  local_17c.w_recip = (float)this_ptr;
  local_17c.fog = 5.955439e-39;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(this_ptr);
  local_17c.w_recip = (float)&local_14c;
  local_17c.fog = (float)this_ptr;
  local_17c.color = 0x40d975;
  this_ptr_00 = (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,&local_14c);
  corner_index = 0.0;
  g_ActiveRenderColor = in_stack_00000010;
  do {
    local_14c.min.y = (float)((uint)corner_index ^ 1);
    local_14c.min.x = (float)&CStack_b4;
    local_17c.fog = 5.955552e-39;
    local_17c.w_recip = (float)this_ptr_00;
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (this_ptr_00,(CVector3f *)local_14c.min.x,(uint)local_14c.min.y);
    local_14c.min.x = (float)&CStack_c0;
    local_17c.fog = 5.95559e-39;
    local_17c.w_recip = (float)this_ptr_00;
    local_14c.min.y = corner_index;
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (this_ptr_00,(CVector3f *)local_14c.min.x,(uint)corner_index);
    local_14c.min.x = (float)&CStack_48;
    local_17c.w_recip = 5.955617e-39;
    local_14c.min.y = (float)pCVar3;
    core_actor_cpp_copyFloat_FUN_004104f0((float *)local_14c.min.x,&pCVar3->x);
    local_14c.min.y = (float)&pCVar3->y;
    local_14c.min.x = (float)&CStack_48.y;
    local_17c.w_recip = 5.955645e-39;
    core_actor_cpp_copyFloat_FUN_004104e0((float *)local_14c.min.x,(float *)local_14c.min.y);
    local_14c.min.y = (float)&pCVar3->z;
    local_14c.min.x = (float)&CStack_48.z;
    local_17c.w_recip = 5.955673e-39;
    core_actor_cpp_copyFloat_FUN_004104d0((float *)local_14c.min.x,(float *)local_14c.min.y);
    local_14c.min.y = (float)&CStack_24;
    local_14c.min.x = 5.955695e-39;
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)local_14c.min.y);
    CStack_24.x = pCVar2->x * 0.2f;
    CStack_24.y = pCVar2->y * 0.2f;
    local_14c.min.y = (float)&CStack_d8;
    CStack_24.z = pCVar2->z * 0.2f;
    local_14c.min.x = 5.955771e-39;
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)local_14c.min.y);
    CStack_d8.x = pCVar3->x * 0.8f;
    CStack_d8.y = pCVar3->y * 0.8f;
    CStack_d8.z = 0.8f * pCVar3->z;
    local_14c.min.y = (float)&CStack_114;
    local_14c.min.x = 5.955831e-39;
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)local_14c.min.y);
    pCVar1 = g_CDemonRendererPtr1;
    local_14c.min.y = (float)&CStack_3c;
    local_14c.min.x = (float)&CStack_48;
    CStack_114.x = CStack_d8.x + CStack_24.x;
    CStack_114.y = CStack_d8.y + CStack_24.y;
    CStack_114.z = CStack_d8.z + CStack_24.z;
    local_17c.w_recip = 5.95595e-39;
    core_actor_cpp_CVector3f_toFixed8_FUN_004103d0
              ((CVector3f *)local_14c.min.x,(CVector3f *)local_14c.min.y);
    local_14c.min.y = (float)&CStack_3c;
    local_14c.min.x = (float)pCVar1->vertex_buffer_ptr;
    local_17c.w_recip = 5.955977e-39;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)local_14c.min.x,(CVector3i *)local_14c.min.y);
    pCVar1 = g_CDemonRendererPtr1;
    local_14c.min.y = (float)&CStack_54;
    local_14c.min.x = (float)&CStack_114;
    local_17c.w_recip = 5.956015e-39;
    core_actor_cpp_CVector3f_toFixed8_FUN_004103d0
              ((CVector3f *)local_14c.min.x,(CVector3f *)local_14c.min.y);
    local_14c.min.y = (float)&CStack_54;
    local_14c.min.x = (float)(pCVar1->vertex_buffer_ptr + 1);
    local_17c.w_recip = 5.956045e-39;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)local_14c.min.x,(CVector3i *)local_14c.min.y);
    pSVar6 = g_CDemonRendererPtr1->vertex_buffer_ptr;
    pSVar5 = pSVar6 + 1;
    piVar7 = &local_17c.projected_vertex.transformed_z;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = (pSVar5->projected_vertex).transformed_x;
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    piVar7 = &local_1ac.projected_vertex.transformed_z;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = (pSVar6->projected_vertex).transformed_x;
      pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    local_1ac.projected_vertex.transformed_y = 0x40db35;
    vertex2.v = local_17c.color;
    vertex2.projected_vertex.transformed_x = local_17c.projected_vertex.transformed_z;
    vertex2.projected_vertex.transformed_y = local_17c.projected_vertex.inv_z;
    vertex2.projected_vertex.transformed_z = local_17c.projected_vertex.screen_x;
    vertex2.projected_vertex.inv_z = local_17c.projected_vertex.screen_y;
    vertex2.projected_vertex.screen_x = local_17c.u;
    vertex2.projected_vertex.screen_y = local_17c.v;
    vertex2.u = (int)local_17c.light;
    vertex2.light = local_17c.fog;
    vertex2.color = (int)local_17c.w_recip;
    vertex2.fog = local_14c.min.x;
    vertex2.w_recip = local_14c.min.y;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(stack0xfffffe5c,vertex2);
    local_14c.min.y = (float)((uint)corner_index ^ 2);
    local_14c.min.x = (float)&CStack_e4;
    local_17c.fog = 5.956146e-39;
    local_17c.w_recip = (float)this_ptr_00;
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (this_ptr_00,(CVector3f *)local_14c.min.x,(uint)local_14c.min.y);
    local_14c.min.x = (float)&CStack_120;
    local_17c.fog = 5.95618e-39;
    local_17c.w_recip = (float)this_ptr_00;
    local_14c.min.y = corner_index;
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (this_ptr_00,(CVector3f *)local_14c.min.x,(uint)corner_index);
    local_14c.min.x = (float)&CStack_60;
    local_17c.w_recip = 5.956207e-39;
    local_14c.min.y = (float)pCVar3;
    core_actor_cpp_copyFloat_FUN_004104f0((float *)local_14c.min.x,&pCVar3->x);
    local_14c.min.y = (float)&pCVar3->y;
    local_14c.min.x = (float)&CStack_60.y;
    local_17c.w_recip = 5.956235e-39;
    core_actor_cpp_copyFloat_FUN_004104e0((float *)local_14c.min.x,(float *)local_14c.min.y);
    local_14c.min.y = (float)&pCVar3->z;
    local_14c.min.x = (float)&CStack_60.z;
    local_17c.w_recip = 5.956263e-39;
    core_actor_cpp_copyFloat_FUN_004104d0((float *)local_14c.min.x,(float *)local_14c.min.y);
    local_14c.min.y = (float)&CStack_6c;
    local_14c.min.x = 5.956285e-39;
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)local_14c.min.y);
    CStack_6c.x = pCVar2->x * 0.2f;
    CStack_6c.y = pCVar2->y * 0.2f;
    local_14c.min.y = (float)&CStack_a8;
    CStack_6c.z = pCVar2->z * 0.2f;
    local_14c.min.x = 5.956365e-39;
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)local_14c.min.y);
    CStack_a8.x = pCVar3->x * 0.8f;
    CStack_a8.y = pCVar3->y * 0.8f;
    local_14c.min.y = (float)&CStack_78;
    CStack_a8.z = pCVar3->z * 0.8f;
    local_14c.min.x = 5.956445e-39;
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)local_14c.min.y);
    pCVar1 = g_CDemonRendererPtr1;
    local_14c.min.y = (float)&CStack_108;
    local_14c.min.x = (float)&CStack_60;
    CStack_78.x = CStack_a8.x + CStack_6c.x;
    CStack_78.y = CStack_a8.y + CStack_6c.y;
    CStack_78.z = CStack_a8.z + CStack_6c.z;
    local_17c.w_recip = 5.956585e-39;
    core_actor_cpp_CVector3f_toFixed8_FUN_004103d0
              ((CVector3f *)local_14c.min.x,(CVector3f *)local_14c.min.y);
    local_14c.min.y = (float)&CStack_108;
    local_14c.min.x = (float)pCVar1->vertex_buffer_ptr;
    local_17c.w_recip = 5.956607e-39;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)local_14c.min.x,(CVector3i *)local_14c.min.y);
    pCVar1 = g_CDemonRendererPtr1;
    local_14c.min.y = (float)&CStack_f0;
    local_14c.min.x = (float)&CStack_78;
    local_17c.w_recip = 5.956645e-39;
    core_actor_cpp_CVector3f_toFixed8_FUN_004103d0
              ((CVector3f *)local_14c.min.x,(CVector3f *)local_14c.min.y);
    local_14c.min.y = (float)&CStack_f0;
    local_14c.min.x = (float)(pCVar1->vertex_buffer_ptr + 1);
    local_17c.w_recip = 5.956672e-39;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)local_14c.min.x,(CVector3i *)local_14c.min.y);
    pSVar6 = g_CDemonRendererPtr1->vertex_buffer_ptr;
    pSVar5 = pSVar6 + 1;
    piVar7 = &local_17c.projected_vertex.transformed_z;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = (pSVar5->projected_vertex).transformed_x;
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    piVar7 = &local_1ac.projected_vertex.transformed_z;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = (pSVar6->projected_vertex).transformed_x;
      pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    local_1ac.projected_vertex.transformed_y = 0x40dcf4;
    vertex2_00.v = local_17c.color;
    vertex2_00.projected_vertex.transformed_x = local_17c.projected_vertex.transformed_z;
    vertex2_00.projected_vertex.transformed_y = local_17c.projected_vertex.inv_z;
    vertex2_00.projected_vertex.transformed_z = local_17c.projected_vertex.screen_x;
    vertex2_00.projected_vertex.inv_z = local_17c.projected_vertex.screen_y;
    vertex2_00.projected_vertex.screen_x = local_17c.u;
    vertex2_00.projected_vertex.screen_y = local_17c.v;
    vertex2_00.u = (int)local_17c.light;
    vertex2_00.light = local_17c.fog;
    vertex2_00.color = (int)local_17c.w_recip;
    vertex2_00.fog = local_14c.min.x;
    vertex2_00.w_recip = local_14c.min.y;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(stack0xfffffe5c,vertex2_00);
    local_14c.min.y = (float)((uint)corner_index ^ 4);
    local_14c.min.x = (float)&CStack_84;
    local_17c.fog = 5.956777e-39;
    local_17c.w_recip = (float)this_ptr_00;
    pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (this_ptr_00,(CVector3f *)local_14c.min.x,(uint)local_14c.min.y);
    local_14c.min.x = (float)&CStack_90;
    local_17c.fog = 5.956815e-39;
    local_17c.w_recip = (float)this_ptr_00;
    local_14c.min.y = corner_index;
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (this_ptr_00,(CVector3f *)local_14c.min.x,(uint)corner_index);
    local_14c.min.x = (float)&CStack_30;
    local_17c.w_recip = 5.956841e-39;
    local_14c.min.y = (float)pCVar3;
    core_actor_cpp_copyFloat_FUN_004104f0((float *)local_14c.min.x,&pCVar3->x);
    local_14c.min.y = (float)&pCVar3->y;
    local_14c.min.x = (float)&CStack_30.y;
    local_17c.w_recip = 5.95687e-39;
    core_actor_cpp_copyFloat_FUN_004104e0((float *)local_14c.min.x,(float *)local_14c.min.y);
    local_14c.min.y = (float)&pCVar3->z;
    local_14c.min.x = (float)&CStack_30.z;
    local_17c.w_recip = 5.956897e-39;
    core_actor_cpp_copyFloat_FUN_004104d0((float *)local_14c.min.x,(float *)local_14c.min.y);
    local_14c.min.y = (float)&CStack_fc;
    local_14c.min.x = 5.956916e-39;
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)local_14c.min.y);
    CStack_fc.x = pCVar2->x * 0.2f;
    CStack_fc.y = pCVar2->y * 0.2f;
    local_14c.min.y = (float)&CStack_12c;
    CStack_fc.z = pCVar2->z * 0.2f;
    local_14c.min.x = 5.956979e-39;
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)local_14c.min.y);
    CStack_12c.x = pCVar3->x * 0.8f;
    CStack_12c.y = pCVar3->y * 0.8f;
    CStack_12c.z = 0.8f * pCVar3->z;
    local_14c.min.y = (float)&CStack_9c;
    local_14c.min.x = 5.957049e-39;
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)local_14c.min.y);
    pCVar1 = g_CDemonRendererPtr1;
    local_14c.min.x = (float)&CStack_30;
    CStack_9c.x = CStack_12c.x + CStack_fc.x;
    CStack_9c.y = CStack_12c.y + CStack_fc.y;
    CStack_9c.z = CStack_12c.z + CStack_fc.z;
    local_17c.w_recip = 5.957158e-39;
    local_14c.min.y = (float)&CStack_cc;
    core_actor_cpp_CVector3f_toFixed8_FUN_004103d0((CVector3f *)local_14c.min.x,&CStack_cc);
    local_14c.min.y = (float)&CStack_cc;
    local_14c.min.x = (float)pCVar1->vertex_buffer_ptr;
    local_17c.w_recip = 5.95718e-39;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)local_14c.min.x,(CVector3i *)local_14c.min.y);
    pCVar1 = g_CDemonRendererPtr1;
    local_14c.min.y = (float)&stack0xffffffe8;
    local_14c.min.x = (float)&CStack_9c;
    local_17c.w_recip = 5.957222e-39;
    core_actor_cpp_CVector3f_toFixed8_FUN_004103d0
              ((CVector3f *)local_14c.min.x,(CVector3f *)local_14c.min.y);
    local_14c.min.y = (float)&stack0xffffffe8;
    local_14c.min.x = (float)(pCVar1->vertex_buffer_ptr + 1);
    local_17c.w_recip = 5.957253e-39;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)local_14c.min.x,(CVector3i *)local_14c.min.y);
    pSVar6 = g_CDemonRendererPtr1->vertex_buffer_ptr;
    pSVar5 = pSVar6 + 1;
    piVar7 = &local_17c.projected_vertex.transformed_z;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = (pSVar5->projected_vertex).transformed_x;
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    corner_index = (float)((int)corner_index + 1);
    piVar7 = &local_1ac.projected_vertex.transformed_z;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = (pSVar6->projected_vertex).transformed_x;
      pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    local_1ac.projected_vertex.transformed_y = 0x40de94;
    vertex2_01.v = local_17c.color;
    vertex2_01.projected_vertex.transformed_x = local_17c.projected_vertex.transformed_z;
    vertex2_01.projected_vertex.transformed_y = local_17c.projected_vertex.inv_z;
    vertex2_01.projected_vertex.transformed_z = local_17c.projected_vertex.screen_x;
    vertex2_01.projected_vertex.inv_z = local_17c.projected_vertex.screen_y;
    vertex2_01.projected_vertex.screen_x = local_17c.u;
    vertex2_01.projected_vertex.screen_y = local_17c.v;
    vertex2_01.u = (int)local_17c.light;
    vertex2_01.light = local_17c.fog;
    vertex2_01.color = (int)local_17c.w_recip;
    vertex2_01.fog = local_14c.min.x;
    vertex2_01.w_recip = local_14c.min.y;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(stack0xfffffe5c,vertex2_01);
  } while ((int)corner_index < 8);
  local_14c.min.x = 5.957353e-39;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_0000000c);
  return;
}
