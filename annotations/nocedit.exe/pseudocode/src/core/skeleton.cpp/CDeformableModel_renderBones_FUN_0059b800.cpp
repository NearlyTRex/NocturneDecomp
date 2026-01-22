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
  SBone *text;
  int iVar2;
  CVector3i local_2c;
  CVector3f local_20;
  CSkeleton *local_14;
  
  iVar2 = 0;
  local_14 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  if (0 < local_14->bone_count) {
    text = local_14->bone_list;
    do {
      core_xform_cpp_getTranslation_FUN_005f6110(bone_matrices,&local_20);
      local_2c.x = (int)ROUND(local_20.x * 256.0f);
      local_2c.y = (int)ROUND(local_20.y * 256.0f);
      local_2c.z = (int)ROUND(local_20.z * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[19999].projected_vertex,&local_2c);
      pSVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr;
      if ((int)(pSVar1[19999].projected_vertex.screen_x & -0x80000000) == 0) {
        engine_2d_c_drawText_FUN_00401fd0
                  (text->bone_name,pSVar1[19999].projected_vertex.screen_x >> 0x10,
                   pSVar1[19999].projected_vertex.screen_y >> 0x10);
      }
      bone_matrices = bone_matrices + 1;
      iVar2 = iVar2 + 1;
      text = text + 1;
    } while (iVar2 < local_14->bone_count);
  }
  return;
}
