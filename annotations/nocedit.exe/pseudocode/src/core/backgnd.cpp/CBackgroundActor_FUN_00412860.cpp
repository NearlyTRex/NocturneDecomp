// Name: core_backgnd.cpp_CBackgroundActor_FUN_00412860
// Address: 00412860
// Address Range: [[00412860, 004128c5]]
// Convention: __cdecl
// Signature: void core_backgnd.cpp_CBackgroundActor_FUN_00412860(CBackgroundActor * this_ptr)

#include "nocturne.h"

void __cdecl core_backgnd_cpp_CBackgroundActor_FUN_00412860(CBackgroundActor *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  float fStack_10;
  
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) && (in_stack_00000008 != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                            (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe8);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar1 != 0) {
      fStack_10 = 5.98391e-39;
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)this_ptr->model_name,0.0,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    return;
  }
  return;
}
