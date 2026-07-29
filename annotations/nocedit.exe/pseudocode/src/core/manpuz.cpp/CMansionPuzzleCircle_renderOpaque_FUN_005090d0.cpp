// Name: core_manpuz.cpp_CMansionPuzzleCircle_renderOpaque_FUN_005090d0
// Address: 005090d0
// Address Range: [[005090d0, 005091ca]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderOpaque_FUN_005090d0(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderOpaque_FUN_005090d0(CMansionPuzzleCircle *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  int iVar2;
  CBoundingBox3D CStack_2c;
  CVector3i CStack_14;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_2c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    CStack_14.x = (int)ROUND(g_ZeroVector.f.x * 256.0f);
    CStack_14.y = (int)ROUND(g_ZeroVector.f.y * 256.0f);
    CStack_14.z = (int)ROUND(g_ZeroVector.f.z * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1000].projected_vertex,&CStack_14);
    iVar2 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_renderPanel_FUN_00509bf0(this_ptr,iVar2);
      core_manpuz_cpp_CMansionPuzzleCircle_renderGem_FUN_00509d50(this_ptr,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xc);
    if ((g_CDemonMissionPtr->is_in_editor != 0) &&
       (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
       iVar2 == 0)) {
      iVar2 = 0;
      do {
        core_manpuz_cpp_CMansionPuzzleCircle_renderEmitter_FUN_00509c60(this_ptr,iVar2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xc);
    }
    iVar2 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_renderReflector_FUN_0050a1f0(this_ptr,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    return iVar1;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return 0;
}
