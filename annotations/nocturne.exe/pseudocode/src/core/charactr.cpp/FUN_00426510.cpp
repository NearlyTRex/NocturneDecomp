// Name: core_charactr.cpp_FUN_00426510
// Address: 00426510
// Address Range: [[00426510, 00426566]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00426510(CCharacter *param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_00426510(CCharacter *param_1)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if (param_1->render_active == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&param_1->base);
  this_ptr = (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_1c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  if (iVar1 != 0) {
    core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(param_1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&param_1->base);
  return;
}
