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
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar2;
  SRenderVertex *pSVar3;
  int *piVar4;
  byte bVar5;
  CDemonActor *in_stack_00000004;
  SRenderVertex *in_stack_ffffff20;
  SRenderVertex *in_stack_ffffff24;
  int aiStack_b0 [8];
  uint uStack_90;
  float fStack_78;
  CBoundingBox3D local_74;
  CVector3i CStack_5c;
  CVector3i CStack_50;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  CVector3i CStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  float fStack_1c;
  uint uStack_18;
  int iStack_14;
  
  bVar5 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&local_74);
  iStack_14 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if ((iStack_14 != 0) && (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0)) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if (iVar1 == 0) {
      g_ActiveRenderColor = 0xfb;
      fStack_78 = 0.0;
      while( true ) {
        if (in_stack_00000004[2].location.position.z + (float)0.001 <= fStack_78) break;
        if (0.0 < fStack_78) {
          uStack_20 = 0;
          fStack_1c = fStack_78;
          uStack_18 = 0;
          CStack_50.x = (int)ROUND(_DAT_006605d0 * 0.0);
          CStack_50.y = (int)ROUND(fStack_78 * _DAT_006605d0);
          CStack_50.z = (int)ROUND(_DAT_006605d0 * 0.0);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&CStack_50);
          pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar2 = pSVar3 + 2;
          piVar4 = aiStack_b0;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar4 = (pSVar2->projected_vertex).transformed_x;
            pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
            piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
          }
          piVar4 = (int *)&stack0xffffff20;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar4 = (pSVar3->projected_vertex).transformed_x;
            pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
            piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff20,in_stack_ffffff24);
          pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar2 = pSVar3 + 2;
          piVar4 = aiStack_b0;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar4 = (pSVar2->projected_vertex).transformed_x;
            pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
            piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
          }
          pSVar3 = pSVar3 + 1;
          piVar4 = (int *)&stack0xffffff20;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar4 = (pSVar3->projected_vertex).transformed_x;
            pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
            piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff20,in_stack_ffffff24);
        }
        fStack_44 = -in_stack_00000004[2].location.position.y * (float)0.5;
        uStack_3c = 0;
        fStack_40 = fStack_78;
        fStack_2c = (float)0.5 * in_stack_00000004[2].location.position.y;
        fStack_24 = 0.0;
        fStack_28 = fStack_78;
        CStack_38.x = (int)ROUND(fStack_44 * _DAT_006605d0);
        CStack_38.y = (int)ROUND(fStack_78 * _DAT_006605d0);
        CStack_38.z = (int)ROUND(_DAT_006605d0 * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&CStack_38);
        CStack_5c.y = (int)ROUND(fStack_2c * _DAT_006605d0);
        CStack_5c.z = (int)ROUND(fStack_28 * _DAT_006605d0);
        CStack_50.x = (int)ROUND(fStack_24 * _DAT_006605d0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_5c);
        pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
        pSVar2 = pSVar3 + 1;
        piVar4 = aiStack_b0;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar4 = (pSVar2->projected_vertex).transformed_x;
          pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
          piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
        }
        piVar4 = (int *)&stack0xffffff20;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
        }
        engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff20,in_stack_ffffff24);
        fStack_78 = fStack_78 + DAT_006605e8;
      }
    }
  }
  if (iStack_14 != 0) {
    uStack_90 = 0x5028af;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iStack_14;
}
