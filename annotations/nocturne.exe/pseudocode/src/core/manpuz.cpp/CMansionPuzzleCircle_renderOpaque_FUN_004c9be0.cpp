// Name: core_manpuz.cpp_CMansionPuzzleCircle_renderOpaque_FUN_004c9be0
// Address: 004c9be0
// Address Range: [[004c9be0, 004c9ce5]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderOpaque_FUN_004c9be0(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderOpaque_FUN_004c9be0(CMansionPuzzleCircle *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  int iVar2;
  CBoundingBox3D local_2c;
  CVector3i CStack_14;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_2c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar1 != 0) {
    CStack_14.x = (int)ROUND(_DAT_02dd1184 * _DAT_005a0020);
    CStack_14.y = (int)ROUND(_DAT_02dd1188 * _DAT_005a0020);
    CStack_14.z = (int)ROUND(_DAT_02dd118c * _DAT_005a0020);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[1000].projected_vertex,&CStack_14);
    iVar2 = 0;
    do {
      core_manpuz_cpp_FUN_004ca710(this_ptr,iVar2);
      core_manpuz_cpp_FUN_004ca790(this_ptr,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xc);
    if ((g_CDemonMission_PTR_005baf90->is_in_editor != 0) &&
       (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
       iVar2 == 0)) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xc);
    }
    iVar2 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_renderReflector_FUN_004cabf0(this_ptr,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
    return iVar1;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  return 0;
}
