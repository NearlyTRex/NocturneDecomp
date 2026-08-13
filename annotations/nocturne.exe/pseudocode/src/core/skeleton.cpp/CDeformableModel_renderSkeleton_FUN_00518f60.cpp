// Name: core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_00518f60
// Address: 00518f60
// Address Range: [[00518f60, 00519117]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_00518f60(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_00518f60(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)

{
  SRenderVertex *pSVar1;
  SRenderVertex vertex2;
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
  SRenderVertex in_stack_ffffff54;
  byte auVar11 [24];
  byte in_stack_ffffff84 [32];
  uint in_stack_ffffffa4;
  uint in_stack_ffffffa8;
  SProjectedVertex *output;
  CVector3i local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  int local_1c;
  CSkeleton *local_18;
  int local_14;
  
  bVar10 = 0;
  output = (SProjectedVertex *)0x518f71;
  pCVar2 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(this_ptr);
  if ((render_flags & 1U) != 0) {
    iVar5 = 0;
    matrix_in = bone_matrices;
    if (0 < pCVar2->bone_count) {
      do {
        local_1c = iVar5 * 0x30;
        core_xform_cpp_getTranslation_FUN_0055bc00(matrix_in,&local_28);
        local_4c.x = (int)ROUND(local_28.x * _DAT_005a1ea8);
        local_4c.y = (int)ROUND(local_28.y * _DAT_005a1ea8);
        local_4c.z = (int)ROUND(local_28.z * _DAT_005a1ea8);
        output = (SProjectedVertex *)
                 ((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).
                        transformed_x + local_1c);
        iVar5 = iVar5 + 1;
        in_stack_ffffffa8 = 0x518ff1;
        this_ptr = (CDeformableModel *)&local_4c;
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c(output,&local_4c);
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
          pSVar1 = g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr;
          pSVar6 = pSVar1 + iVar4;
          piVar8 = (int *)&stack0xffffff84;
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
          vertex2.r = in_stack_ffffffa4;
          auVar11 = in_stack_ffffff84._0_24_;
          vertex2.projected_vertex.transformed_x = auVar11._0_4_;
          vertex2.projected_vertex.transformed_y = auVar11._4_4_;
          vertex2.projected_vertex.transformed_z = auVar11._8_4_;
          vertex2.projected_vertex.inv_z = auVar11._12_4_;
          vertex2.projected_vertex.screen_x = auVar11._16_4_;
          vertex2.projected_vertex.screen_y = auVar11._20_4_;
          vertex2.u = in_stack_ffffff84._24_4_;
          vertex2.v = in_stack_ffffff84._28_4_;
          vertex2.g = in_stack_ffffffa8;
          vertex2.b = (int)output;
          vertex2.a = (int)this_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00409290(in_stack_ffffff54,vertex2);
        }
        iVar5 = iVar5 + 0x30;
        local_18 = (CSkeleton *)((local_18->motion_list).state_names[1] + 2);
        local_14 = local_14 + 1;
      } while (local_14 < pCVar2->bone_count);
    }
  }
  if (((render_flags & 2U) != 0) && (iVar5 = 0, 0 < pCVar2->bone_count)) {
    do {
      core_xform_cpp_matrixToEulerAngles_FUN_0055b180(bone_matrices,&local_40);
      core_xform_cpp_getTranslation_FUN_0055bc00(bone_matrices,&local_34);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                (g_CDemonRenderer_PTR_005ae704,&local_40,&local_34);
      shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0
                (g_CEditorTools_PTR_005b6d50,0.5,0xff);
      iVar5 = iVar5 + 1;
      bone_matrices = bone_matrices + 1;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
    } while (iVar5 < pCVar2->bone_count);
  }
  return;
}
