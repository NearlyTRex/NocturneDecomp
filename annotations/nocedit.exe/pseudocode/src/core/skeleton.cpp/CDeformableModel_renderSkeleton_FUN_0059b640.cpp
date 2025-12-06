// Name: core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640
// Address: 0059b640
// Address Range: [[0059b640, 0059b7d8] [0059b7f0, 0059b7f7]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640(CDeformableModel * this_ptr, int color, CMatrix3x4f * bone_matrices, int render_flags)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_0059b640
          (CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)

{
  SRenderVertex *pSVar1;
  CSkeleton *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  SRenderVertex *pSVar7;
  uint *puVar8;
  CVector3f *output_vector;
  int *piVar9;
  uint *puVar10;
  byte bVar11;
  byte in_stack_00000014;
  SRenderVertex *in_stack_ffffff58;
  SRenderVertex *in_stack_ffffff5c;
  int aiStack_78 [7];
  uint uStack_5c;
  uint uStack_58;
  CMatrix3x3f CStack_3c;
  int local_18;
  CSkeleton *local_14;
  
  bVar11 = 0;
  pCVar2 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  if ((in_stack_00000014 & 1) != 0) {
    iVar6 = 0;
    output_vector = (CVector3f *)render_flags;
    if (0 < pCVar2->bone_count) {
      do {
        local_18 = iVar6 * 0x30;
        uStack_5c = 0x59b68d;
        core_xform_cpp_getTranslation_FUN_005f6110(output_vector,(CMatrix3x4f *)(CStack_3c.m + 2));
        iVar6 = iVar6 + 1;
        uStack_58 = 0x59b6d1;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)
                   ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                   (int)CStack_3c.m[2].z),(CVector3i *)&stack0xffffffb4);
        output_vector = output_vector + 4;
      } while (iVar6 < pCVar2->bone_count);
    }
    iVar6 = 0;
    g_ActiveRenderColor = (int)bone_matrices;
    if (0 < pCVar2->bone_count) {
      iVar5 = 0;
      local_14 = pCVar2;
      do {
        iVar4 = local_14->bone_list[0].parent_index;
        if (-1 < iVar4) {
          pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar7 = pSVar1 + iVar4;
          piVar9 = aiStack_78;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar9 = (pSVar7->projected_vertex).transformed_x;
            pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar11 * -2 + 1) * 4);
            piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
          }
          puVar8 = (uint *)((int)&(pSVar1->projected_vertex).transformed_x + iVar5);
          puVar10 = (uint *)&stack0xffffff58;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff58,in_stack_ffffff5c);
        }
        iVar5 = iVar5 + 0x30;
        local_14 = (CSkeleton *)((local_14->motion_list).state_names[1] + 2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < pCVar2->bone_count);
    }
  }
  if (((in_stack_00000014 & 2) != 0) && (iVar6 = 0, 0 < pCVar2->bone_count)) {
    do {
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CVector3f *)render_flags,&CStack_3c);
      core_xform_cpp_getTranslation_FUN_005f6110
                ((CVector3f *)render_flags,(CMatrix3x4f *)&CStack_3c.m[1].y);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,(CVector3i *)&CStack_3c.m[0].z,(CVector3i *)&CStack_3c.m[1].z);
      shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,0.5,0xff);
      CStack_3c.m[0].x = (float)g_CDemonRendererPtr;
      iVar6 = iVar6 + 1;
      render_flags = render_flags + 0x30;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    } while (iVar6 < pCVar2->bone_count);
  }
  return;
}
