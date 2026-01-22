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
  SRenderVertex *pSVar6;
  uint *puVar7;
  CMatrix3x4f *matrix_in;
  int *piVar8;
  uint *puVar9;
  byte bVar10;
  SRenderVertex *in_stack_ffffff54;
  SRenderVertex *in_stack_ffffff58;
  int aiStack_7c [8];
  uint uStack_5c;
  CVector3i local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  int local_1c;
  CSkeleton *local_18;
  int local_14;
  
  bVar10 = 0;
  pCVar2 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  if ((render_flags & 1U) != 0) {
    iVar5 = 0;
    matrix_in = bone_matrices;
    if (0 < pCVar2->bone_count) {
      do {
        local_1c = iVar5 * 0x30;
        core_xform_cpp_getTranslation_FUN_005f6110(matrix_in,&local_28);
        local_4c.x = (int)ROUND(local_28.x * 256.0f);
        local_4c.y = (int)ROUND(local_28.y * 256.0f);
        local_4c.z = (int)ROUND(local_28.z * 256.0f);
        iVar5 = iVar5 + 1;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)
                   ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x
                   + local_1c),&local_4c);
        matrix_in = matrix_in + 1;
      } while (iVar5 < pCVar2->bone_count);
    }
    local_14 = 0;
    g_ActiveRenderColor = color;
    if (0 < pCVar2->bone_count) {
      iVar5 = 0;
      local_18 = pCVar2;
      do {
        iVar4 = local_18->bone_list[0].parent_index;
        if (-1 < iVar4) {
          pSVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar6 = pSVar1 + iVar4;
          piVar8 = aiStack_7c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar8 = (pSVar6->projected_vertex).transformed_x;
            pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar10 * -2 + 1) * 4);
            piVar8 = piVar8 + (uint)bVar10 * -2 + 1;
          }
          puVar7 = (uint *)((int)&(pSVar1->projected_vertex).transformed_x + iVar5);
          puVar9 = (uint *)&stack0xffffff54;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff54,in_stack_ffffff58);
        }
        iVar5 = iVar5 + 0x30;
        local_18 = (CSkeleton *)((local_18->motion_list).state_names[1] + 2);
        local_14 = local_14 + 1;
      } while (local_14 < pCVar2->bone_count);
    }
  }
  if (((render_flags & 2U) != 0) && (iVar5 = 0, 0 < pCVar2->bone_count)) {
    do {
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)bone_matrices,&local_40);
      core_xform_cpp_getTranslation_FUN_005f6110(bone_matrices,&local_34);
      uStack_5c = 0x59b7ae;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,(CVector3i *)&local_40,(CVector3i *)&local_34);
      uStack_5c = 0x59b7c6;
      shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,0.5,0xff);
      iVar5 = iVar5 + 1;
      bone_matrices = bone_matrices + 1;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    } while (iVar5 < pCVar2->bone_count);
  }
  return;
}
