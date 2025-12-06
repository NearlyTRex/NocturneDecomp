// Name: core_skeleton.cpp_CDeformableModel_renderBones_FUN_0059b800
// Address: 0059b800
// Address Range: [[0059b800, 0059b8cf]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_renderBones_FUN_0059b800(CDeformableModel * this_ptr, CMatrix3x4f * bone_matrices)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_renderBones_FUN_0059b800
          (CDeformableModel *this_ptr,CMatrix3x4f *bone_matrices)

{
  SRenderVertex *pSVar1;
  CSkeleton *pCVar2;
  BADSPACEBASE *in_ESP;
  SBone *text;
  int iVar3;
  CVector3f *in_stack_0000000c;
  
  iVar3 = 0;
  pCVar2 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  if (0 < pCVar2->bone_count) {
    text = pCVar2->bone_list;
    do {
      core_xform_cpp_getTranslation_FUN_005f6110(in_stack_0000000c,(CMatrix3x4f *)&stack0xffffffe4);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,
                 (CVector3i *)&stack0xffffffdc);
      pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
      if ((int)(pSVar1[19999].projected_vertex.screen_x & -0x80000000) == 0) {
        engine_2d_c_drawText_FUN_00401fd0
                  (text->bone_name,pSVar1[19999].projected_vertex.screen_x >> 0x10,
                   pSVar1[19999].projected_vertex.screen_y >> 0x10);
      }
      in_stack_0000000c = in_stack_0000000c + 4;
      iVar3 = iVar3 + 1;
      text = text + 1;
    } while (iVar3 < pCVar2->bone_count);
  }
  return;
}
