// Name: core_ladder.cpp_FUN_00502620
// Address: 00502620
// Address Range: [[00502620, 005028b3]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502620()

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005027cc) */
/* WARNING: Removing unreachable block (ram,0x00502835) */
/* WARNING: Removing unreachable block (ram,0x00502837) */
/* WARNING: Removing unreachable block (ram,0x00502843) */
/* WARNING: Removing unreachable block (ram,0x00502845) */
/* WARNING: Removing unreachable block (ram,0x00502861) */
/* WARNING: Removing unreachable block (ram,0x00502863) */
/* WARNING: Removing unreachable block (ram,0x00502870) */
/* WARNING: Removing unreachable block (ram,0x00502872) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_ladder.cpp_FUN_00502620(uint param_1) */

uint core_ladder_cpp_FUN_00502620(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  byte bVar6;
  float unaff_retaddr;
  CDemonActor *in_stack_00000004;
  int in_stack_0000000c;
  uint in_stack_00000010;
  SRenderVertex *in_stack_ffffff48;
  SRenderVertex *in_stack_ffffff4c;
  int iStack_88;
  float fStack_70;
  CVector3i CStack_38;
  float fStack_24;
  int iStack_20;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar6 = 0;
  iStack_88 = 0x502635;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  iStack_88 = 0x50264d;
  this_ptr = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&fStack_70);
  fStack_70 = 7.360592e-39;
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (((iVar1 != 0) && (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0)) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar1 == 0)) {
    g_ActiveRenderColor = 0xfb;
    while (0.0 < in_stack_00000004[2].location.position.z + (float)0.001) {
      fStack_24 = -in_stack_00000004[2].location.position.y * (float)0.5;
      uStack_1c = 0;
      iStack_18 = (int)ROUND(fStack_24 * _DAT_006605d0);
      iStack_14 = (int)ROUND(_DAT_006605d0 * 0.0);
      iStack_20 = iVar1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&iStack_18);
      CStack_38.x = (int)ROUND(_DAT_006605d0 * 0.0);
      CStack_38.y = (int)ROUND(_DAT_006605d0 * 0.0);
      CStack_38.z = (int)ROUND(unaff_retaddr * _DAT_006605d0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_38);
      pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
      pSVar3 = pSVar4 + 1;
      piVar5 = &iStack_88;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      piVar5 = (int *)&stack0xffffff48;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff48,in_stack_ffffff4c);
    }
  }
  if (in_stack_0000000c != 0) {
    fStack_70 = 7.361434e-39;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return in_stack_00000010;
}
