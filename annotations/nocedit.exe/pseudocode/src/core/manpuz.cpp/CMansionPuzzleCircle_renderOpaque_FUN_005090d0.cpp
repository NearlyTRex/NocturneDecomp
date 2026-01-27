// Name: core_manpuz.cpp_CMansionPuzzleCircle_renderOpaque_FUN_005090d0
// Address: 005090d0
// Address Range: [[005090d0, 005091ca]]
// Convention: __cdecl
// Signature: int core_manpuz.cpp_CMansionPuzzleCircle_renderOpaque_FUN_005090d0(CMansionPuzzleCircle * this_ptr)

#include "nocturne.h"

int __cdecl
core_manpuz_cpp_CMansionPuzzleCircle_renderOpaque_FUN_005090d0(CMansionPuzzleCircle *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  int iVar2;
  int iStack_c;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffd4);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    iStack_c = (int)ROUND(g_ZeroVector.x * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1000].projected_vertex,
               (CVector3i *)&iStack_c);
    iVar2 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509bf0(this_ptr);
      core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509d50(this_ptr);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xc);
    if ((*(int *)(g_CDemonMissionPtr->unk1 + 4) != 0) &&
       (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
       iVar2 == 0)) {
      iVar2 = 0;
      do {
        core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509c60(this_ptr);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xc);
    }
    iVar2 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a1f0(this_ptr);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    return iVar1;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return 0;
}
