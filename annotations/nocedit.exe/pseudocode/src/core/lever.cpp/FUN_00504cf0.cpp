// Name: core_lever.cpp_FUN_00504cf0
// Address: 00504cf0
// Address Range: [[00504cf0, 00504d7b]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00504cf0()

#include "nocturne.h"

/* Signature: byte actors_other_lever.cpp_FUN_00504cf0(uint param_1) */

int core_lever_cpp_FUN_00504cf0(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CKeyFramedModel *pCVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_ffffffd4;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffd4);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return 0;
  }
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),
             (float)(pCVar2->frame_count + -1) * (float)in_stack_00000004[2].location.area_id,
             (int)in_stack_ffffffd4);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar1;
}
