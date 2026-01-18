// Name: core_ladder.cpp_FUN_00502620
// Address: 00502620
// Address Range: [[00502620, 005028b3]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502620()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_ladder.cpp_FUN_00502620(uint param_1) */

int core_ladder_cpp_FUN_00502620(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  byte bVar6;
  CDemonActor *in_stack_00000004;
  SRenderVertex *in_stack_ffffff28;
  SRenderVertex *in_stack_ffffff2c;
  int aiStack_a8 [7];
  uint uStack_8c;
  byte auStack_78 [8];
  float fStack_70;
  CVector3i CStack_54;
  CVector3i CStack_48;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  CVector3i CStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  float fStack_14;
  
  bVar6 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  uStack_8c = 0x50264d;
  this_ptr = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)(auStack_78 + 4));
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if ((iVar1 != 0) && (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0)) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar2 == 0) {
      g_ActiveRenderColor = 0xfb;
      fStack_70 = 0.0;
      while( true ) {
        auStack_78 = (byte  [8])(double)fStack_70;
        if (in_stack_00000004[2].location.position.z + (float)0.001 <= fStack_70) break;
        if (0.0 < (double)auStack_78) {
          uStack_18 = 0;
          fStack_14 = fStack_70;
          CStack_48.x = (int)ROUND(_DAT_006605d0 * 0.0);
          CStack_48.y = (int)ROUND(fStack_70 * _DAT_006605d0);
          CStack_48.z = (int)ROUND(_DAT_006605d0 * 0.0);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&CStack_48);
          pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar3 = pSVar4 + 2;
          piVar5 = aiStack_a8;
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
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff28,in_stack_ffffff2c);
          pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar3 = pSVar4 + 2;
          piVar5 = aiStack_a8;
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
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff28,in_stack_ffffff2c);
        }
        fStack_3c = -in_stack_00000004[2].location.position.y * (float)0.5;
        uStack_34 = 0;
        fStack_38 = fStack_70;
        fStack_24 = (float)0.5 * in_stack_00000004[2].location.position.y;
        fStack_1c = 0.0;
        fStack_20 = fStack_70;
        CStack_30.x = (int)ROUND(fStack_3c * _DAT_006605d0);
        CStack_30.y = (int)ROUND(fStack_70 * _DAT_006605d0);
        CStack_30.z = (int)ROUND(_DAT_006605d0 * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_30);
        CStack_54.x = (int)ROUND(fStack_24 * _DAT_006605d0);
        CStack_54.y = (int)ROUND(fStack_20 * _DAT_006605d0);
        CStack_54.z = (int)ROUND(fStack_1c * _DAT_006605d0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&CStack_54);
        pSVar4 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        pSVar3 = pSVar4 + 1;
        piVar5 = aiStack_a8;
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
        engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff28,in_stack_ffffff2c);
        fStack_70 = fStack_70 + 0x3F800000;
      }
    }
  }
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar1;
}
