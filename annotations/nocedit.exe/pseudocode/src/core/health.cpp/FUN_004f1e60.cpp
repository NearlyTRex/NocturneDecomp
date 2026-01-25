// Name: core_health.cpp_FUN_004f1e60
// Address: 004f1e60
// Address Range: [[004f1e60, 004f1ec5]]
// Convention: unknown
// Signature: undefined core_health.cpp_FUN_004f1e60()

#include "nocturne.h"

/* Signature: byte actors_other_health.cpp_FUN_004f1e60(uint param_1) */

int core_health_cpp_FUN_004f1e60(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*((in_stack_00000004->vtable)._ub)->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffe0);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return 0;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar1;
}
