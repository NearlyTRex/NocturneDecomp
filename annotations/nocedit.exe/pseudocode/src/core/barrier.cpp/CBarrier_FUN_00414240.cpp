// Name: core_barrier.cpp_CBarrier_FUN_00414240
// Address: 00414240
// Address Range: [[00414240, 004142d6]]
// Convention: __cdecl
// Signature: int __cdecl core_barrier_cpp_CBarrier_FUN_00414240(CBarrier *this_ptr)

#include "nocturne.h"

int __cdecl core_barrier_cpp_CBarrier_FUN_00414240(CBarrier *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  CBoundingBox3D local_20;
  
  if ((g_CDemonMissionPtr->is_in_editor != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar1 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_20);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    if (iVar1 != 0) {
      core_actor_cpp_CDemonActor_FUN_0040dec0(&this_ptr->base);
    }
    return iVar1;
  }
  return 0;
}
