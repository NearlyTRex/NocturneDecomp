// Name: core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640
// Address: 0059b640
// MANUAL RECONSTRUCTION
// Address Range: [[0059b640, 0059b7f7] [0060dfc1, 0060e071]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_0059b640(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_0059b640(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)

{
  CSkeleton *pCVar1;
  SRenderVertex *pSVar2;
  int iVar4;
  int iVar22;
  CMatrix3x4f *matrix_in;
  CVector3i local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  int local_14;

  pCVar1 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  if ((render_flags & 1U) != 0) {
    iVar4 = 0;
    matrix_in = bone_matrices;
    if (0 < pCVar1->bone_count) {
      do {
        core_xform_cpp_getTranslation_FUN_005f6110(matrix_in,&local_28);
        local_4c.x = (int)ROUND(local_28.x * 256.0f);
        local_4c.y = (int)ROUND(local_28.y * 256.0f);
        local_4c.z = (int)ROUND(local_28.z * 256.0f);
        pSVar2 = g_CDemonRendererPtr2->vertex_buffer_ptr + iVar4;
        iVar4 = iVar4 + 1;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pSVar2->projected_vertex,&local_4c);
        matrix_in = matrix_in + 1;
      } while (iVar4 < pCVar1->bone_count);
    }
    g_ActiveRenderColor = color;
    if (0 < pCVar1->bone_count) {
      local_14 = 0;
      do {
        iVar22 = pCVar1->bone_list[local_14].parent_index;
        if (-1 < iVar22) {
          pSVar2 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar2[local_14], pSVar2[iVar22]);
        }
        local_14 = local_14 + 1;
      } while (local_14 < pCVar1->bone_count);
    }
  }
  if (((render_flags & 2U) != 0) && (iVar4 = 0, 0 < pCVar1->bone_count)) {
    do {
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690(bone_matrices,&local_40);
      core_xform_cpp_getTranslation_FUN_005f6110(bone_matrices,&local_34);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,(CVector3i *)&local_40,(CVector3i *)&local_34);
      shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,0.5,0xff);
      iVar4 = iVar4 + 1;
      bone_matrices = bone_matrices + 1;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
    } while (iVar4 < pCVar1->bone_count);
  }
  return;
}
