// Name: core_grave.cpp_FUN_004ee680
// Address: 004ee680
// Address Range: [[004ee680, 004ee70b]]
// Convention: __cdecl
// Signature: int __cdecl core_grave_cpp_FUN_004ee680(void)

#include "nocturne.h"

/* Signature: byte actors_other_grave.cpp_FUN_004ee680(uint param_1) */

int __cdecl core_grave_cpp_FUN_004ee680(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CDemonActor *in_stack_00000004;
  
  if ((in_stack_00000004[2].location.area_id == 0) &&
     (((*(int *)(g_CDemonMissionPtr->unk1 + 4) != 0 || (in_stack_00000004[2].orient.bank == 0.0)) ||
      (in_stack_00000004[2].orient.pitch != 0.0)))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
    this_ptr = (*((in_stack_00000004->vtable)._ub)->getBoundingBox)
                         (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffe4);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),
                 in_stack_00000004[2].location.position.y,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return iVar1;
  }
  return 0;
}
