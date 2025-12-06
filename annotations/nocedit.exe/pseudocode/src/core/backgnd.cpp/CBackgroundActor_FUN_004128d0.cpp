// Name: core_backgnd.cpp_CBackgroundActor_FUN_004128d0
// Address: 004128d0
// Address Range: [[004128d0, 00412938]]
// Convention: __cdecl
// Signature: int core_backgnd.cpp_CBackgroundActor_FUN_004128d0(CBackgroundActor * this_ptr)

#include "nocturne.h"

int __cdecl core_backgnd_cpp_CBackgroundActor_FUN_004128d0(CBackgroundActor *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  BADSPACEBASE *in_ESP;
  float fStack_14;
  
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                          (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe8);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    fStack_14 = 5.984067e-39;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)this_ptr->model_name,0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
  return iVar1;
}
