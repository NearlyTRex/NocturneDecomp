// Name: core_ladder.cpp_CLadder_FUN_00502620
// Address: 00502620
// Address Range: [[00502620, 005028b3]]
// Convention: __cdecl
// Signature: int core_ladder.cpp_CLadder_FUN_00502620(CLadder * this_ptr)

#include "nocturne.h"

int __cdecl core_ladder_cpp_CLadder_FUN_00502620(CLadder *this_ptr)

{
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  byte bVar6;
  SRenderVertex in_stack_ffffff28;
  byte auVar7 [24];
  byte in_stack_ffffff58 [28];
  uint uVar8;
  CLadder *pCVar9;
  uint uVar10;
  SRenderVertex *pSVar11;
  float *pfVar12;
  SRenderVertex local_74;
  CVector3i CStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  int iStack_14;
  
  bVar6 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  uVar8 = 0x50264d;
  pCVar9 = this_ptr;
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)&local_74);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if ((iVar1 != 0) && (*(int *)(g_CDemonMissionPtr->unk1 + 4) != 0)) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar2 == 0) {
      g_ActiveRenderColor = 0xfb;
      local_74.projected_vertex.transformed_y = 0;
      while( true ) {
        if ((this_ptr->ladder_size).y + (float)0.001 <=
            (float)local_74.projected_vertex.transformed_y) break;
        if (0.0 < (float)local_74.projected_vertex.transformed_y) {
          uStack_18 = 0;
          iStack_14 = local_74.projected_vertex.transformed_y;
          local_74.w_recip = (float)(int)ROUND(256.0f * 0.0);
          pfVar12 = &local_74.w_recip;
          pSVar11 = g_CDemonRendererPtr2->vertex_buffer_ptr + 2;
          uVar10 = 0x50281e;
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&pSVar11->projected_vertex,(CVector3i *)pfVar12);
          pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar3 = pSVar4 + 2;
          piVar5 = (int *)&stack0xffffff58;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar5 = (pSVar3->projected_vertex).transformed_x;
            pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
          piVar5 = (int *)&stack0xffffff28;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar5 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
          vertex2_00.v = (float)uVar8;
          auVar7 = in_stack_ffffff58._0_24_;
          vertex2_00.projected_vertex.transformed_x = auVar7._0_4_;
          vertex2_00.projected_vertex.transformed_y = auVar7._4_4_;
          vertex2_00.projected_vertex.transformed_z = auVar7._8_4_;
          vertex2_00.projected_vertex.inv_z = auVar7._12_4_;
          vertex2_00.projected_vertex.screen_x = auVar7._16_4_;
          vertex2_00.projected_vertex.screen_y = auVar7._20_4_;
          vertex2_00.u = (float)in_stack_ffffff58._24_4_;
          vertex2_00.light = (float)pCVar9;
          vertex2_00.color = uVar10;
          vertex2_00.fog = (float)pSVar11;
          vertex2_00.w_recip = (float)pfVar12;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff28,vertex2_00);
          pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar3 = pSVar4 + 2;
          piVar5 = (int *)&stack0xffffff58;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar5 = (pSVar3->projected_vertex).transformed_x;
            pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
          pSVar4 = pSVar4 + 1;
          piVar5 = (int *)&stack0xffffff28;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar5 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
          vertex2_01.v = (float)uVar8;
          auVar7 = in_stack_ffffff58._0_24_;
          vertex2_01.projected_vertex.transformed_x = auVar7._0_4_;
          vertex2_01.projected_vertex.transformed_y = auVar7._4_4_;
          vertex2_01.projected_vertex.transformed_z = auVar7._8_4_;
          vertex2_01.projected_vertex.inv_z = auVar7._12_4_;
          vertex2_01.projected_vertex.screen_x = auVar7._16_4_;
          vertex2_01.projected_vertex.screen_y = auVar7._20_4_;
          vertex2_01.u = (float)in_stack_ffffff58._24_4_;
          vertex2_01.light = (float)pCVar9;
          vertex2_01.color = uVar10;
          vertex2_01.fog = (float)pSVar11;
          vertex2_01.w_recip = (float)pfVar12;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff28,vertex2_01);
        }
        fStack_24 = (float)0.5 * (this_ptr->ladder_size).x;
        fStack_1c = 0.0;
        fStack_20 = (float)local_74.projected_vertex.transformed_y;
        CStack_30.x = (int)ROUND(-(this_ptr->ladder_size).x * (float)0.5 *
                                 256.0f);
        CStack_30.y = (int)ROUND((float)local_74.projected_vertex.transformed_y * 256.0f);
        CStack_30.z = (int)ROUND(256.0f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_30);
        local_74.light = (float)(int)ROUND(fStack_24 * 256.0f);
        local_74.color = (int)ROUND(fStack_20 * 256.0f);
        local_74.fog = (float)(int)ROUND(fStack_1c * 256.0f);
        pfVar12 = &local_74.light;
        pSVar11 = g_CDemonRendererPtr2->vertex_buffer_ptr + 1;
        uVar10 = 0x50278a;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pSVar11->projected_vertex,(CVector3i *)pfVar12);
        pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        pSVar3 = pSVar4 + 1;
        piVar5 = (int *)&stack0xffffff58;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
        piVar5 = (int *)&stack0xffffff28;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
        vertex2.v = (float)uVar8;
        auVar7 = in_stack_ffffff58._0_24_;
        vertex2.projected_vertex.transformed_x = auVar7._0_4_;
        vertex2.projected_vertex.transformed_y = auVar7._4_4_;
        vertex2.projected_vertex.transformed_z = auVar7._8_4_;
        vertex2.projected_vertex.inv_z = auVar7._12_4_;
        vertex2.projected_vertex.screen_x = auVar7._16_4_;
        vertex2.projected_vertex.screen_y = auVar7._20_4_;
        vertex2.u = (float)in_stack_ffffff58._24_4_;
        vertex2.light = (float)pCVar9;
        vertex2.color = uVar10;
        vertex2.fog = (float)pSVar11;
        vertex2.w_recip = (float)pfVar12;
        engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff28,vertex2);
        local_74.projected_vertex.transformed_y =
             (int)((float)local_74.projected_vertex.transformed_y + 1.0f);
      }
    }
  }
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return iVar1;
}
