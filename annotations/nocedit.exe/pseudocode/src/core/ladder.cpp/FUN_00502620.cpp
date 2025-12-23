// Name: core_ladder.cpp_FUN_00502620
// Address: 00502620
// Address Range: [[00502620, 005028b3]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502620()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_ladder.cpp_FUN_00502620(uint param_1) */

uint core_ladder_cpp_FUN_00502620(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  uint unaff_ESI;
  SRenderVertex *pSVar2;
  SRenderVertex *pSVar3;
  int unaff_EDI;
  int *piVar4;
  byte bVar5;
  CDemonActor *in_stack_00000004;
  SRenderVertex *in_stack_ffffff2c;
  SRenderVertex *in_stack_ffffff30;
  SRenderVertex *in_stack_ffffff34;
  int iStack_a4;
  int aiStack_a0 [6];
  uint uStack_88;
  CBoundingBox3D CStack_70;
  byte auStack_50 [12];
  int iStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  CVector3i CStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  uStack_88 = 0x502635;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  uStack_88 = 0x50264d;
  this_ptr = (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&CStack_70);
  uStack_88 = 0x502656;
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if ((iVar1 != 0) && (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0)) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if (iVar1 == 0) {
      g_ActiveRenderColor = 0xfb;
      CStack_70.min.x = 0.0;
      while( true ) {
        if (in_stack_00000004[2].location.position.z + (float)0.001 <= CStack_70.min.x)
        break;
        if (0.0 < CStack_70.min.x) {
          fStack_18 = 0.0;
          fStack_14 = CStack_70.min.x;
          auStack_50._8_4_ = (uint)ROUND(_DAT_006605d0 * 0.0);
          iStack_44 = (int)ROUND(CStack_70.min.x * _DAT_006605d0);
          iStack_40 = (int)ROUND(_DAT_006605d0 * 0.0);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                     (CVector3i *)(auStack_50 + 8));
          pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar2 = pSVar3 + 2;
          piVar4 = &iStack_a4;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar4 = (pSVar2->projected_vertex).transformed_x;
            pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
            piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
          }
          piVar4 = (int *)&stack0xffffff2c;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar4 = (pSVar3->projected_vertex).transformed_x;
            pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
            piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff2c,in_stack_ffffff30);
          pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar2 = pSVar3 + 2;
          piVar4 = aiStack_a0;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar4 = (pSVar2->projected_vertex).transformed_x;
            pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
            piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
          }
          pSVar3 = pSVar3 + 1;
          piVar4 = (int *)&stack0xffffff30;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar4 = (pSVar3->projected_vertex).transformed_x;
            pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
            piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff30,in_stack_ffffff34);
        }
        fStack_3c = -in_stack_00000004[2].location.position.y * (float)0.5;
        uStack_34 = 0;
        fStack_38 = CStack_70.min.x;
        fStack_24 = (float)0.5 * in_stack_00000004[2].location.position.y;
        fStack_1c = 0.0;
        fStack_20 = CStack_70.min.x;
        CStack_30.x = (int)ROUND(fStack_3c * _DAT_006605d0);
        CStack_30.y = (int)ROUND(CStack_70.min.x * _DAT_006605d0);
        CStack_30.z = (int)ROUND(_DAT_006605d0 * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&CStack_30);
        auStack_50._0_4_ = (uint)ROUND(fStack_20 * _DAT_006605d0);
        auStack_50._4_4_ = (uint)ROUND(fStack_1c * _DAT_006605d0);
        auStack_50._8_4_ = (uint)ROUND(fStack_18 * _DAT_006605d0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
                   (CVector3i *)auStack_50);
        pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
        pSVar2 = pSVar3 + 1;
        piVar4 = aiStack_a0;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar4 = (pSVar2->projected_vertex).transformed_x;
          pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
          piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
        }
        piVar4 = (int *)&stack0xffffff30;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
        }
        in_stack_ffffff2c = (SRenderVertex *)0x5027b6;
        engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff30,in_stack_ffffff34);
        CStack_70.max.x = CStack_70.max.x + DAT_006605e8;
      }
    }
  }
  if (unaff_EDI != 0) {
    uStack_88 = 0x5028af;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return unaff_ESI;
}
