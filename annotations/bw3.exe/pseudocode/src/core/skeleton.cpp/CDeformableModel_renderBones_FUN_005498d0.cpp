// Name: core_skeleton.cpp_CDeformableModel_renderBones_FUN_005498d0
// Address: 005498d0
// Address Range: [[005498d0, 005499c7]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderBones_FUN_005498d0(CDeformableModel *this_ptr,CMatrix3x4f *bone_matrices)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_renderBones_FUN_005498d0(CDeformableModel *this_ptr,CMatrix3x4f *bone_matrices)

{
  SRenderVertex *pSVar1;
  SBone *text;
  byte bVar2;
  float afStackY_101c [1012];
  CVector3i CStack_40;
  float fStack_34;
  float afStack_30 [2];
  CVector3f CStack_28;
  CSkeleton *pCStack_1c;
  int iStack_18;
  CMatrix3x4f *pCStack_14;
  
  bVar2 = 0;
  pCStack_1c = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0(this_ptr);
  iStack_18 = 0;
  if (0 < pCStack_1c->bone_count) {
    text = pCStack_1c->bone_list;
    pCStack_14 = bone_matrices;
    do {
      core_xform_cpp_getTranslation_FUN_00584450(pCStack_14,&CStack_28);
      fStack_34 = CStack_28.x;
      afStack_30[(uint)bVar2 * -2] = *(float *)((int)&CStack_28 + (uint)bVar2 * -8 + 4);
      afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           *(float *)((int)&CStack_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      CStack_40.x = (int)ROUND(fStack_34 * 256.0f);
      CStack_40.y = (int)ROUND(afStack_30[0] * 256.0f);
      CStack_40.z = (int)ROUND(afStack_30[1] * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[24999].projected_vertex,
                 &CStack_40);
      pSVar1 = g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr;
      if ((int)(pSVar1[24999].projected_vertex.screen_x & -0x80000000) == 0) {
        engine_2d_c_drawText_FUN_00401fe0
                  (text->bone_name,pSVar1[24999].projected_vertex.screen_x >> 0x10,
                   pSVar1[24999].projected_vertex.screen_y >> 0x10);
      }
      text = text + 1;
      pCStack_14 = pCStack_14 + 1;
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < pCStack_1c->bone_count);
  }
  return;
}
