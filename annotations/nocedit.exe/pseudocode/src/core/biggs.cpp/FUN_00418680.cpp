// Name: core_biggs.cpp_FUN_00418680
// Address: 00418680
// Address Range: [[00418680, 004186f7]]
// Convention: unknown
// Signature: undefined core_biggs.cpp_FUN_00418680()

#include "nocturne.h"

/* Signature: byte actors_enemy_biggs.cpp_FUN_00418680(uint param_1) */

void core_biggs_cpp_FUN_00418680(void)

{
  CKeyFramedModelInstance *this_ptr;
  CCharacter *pCVar1;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(&(in_stack_00000004->base).model)
  ;
  this_ptr = (CKeyFramedModelInstance *)(in_stack_00000004[1].base.base.actor_name + 8);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr);
  core_morph_cpp_FUN_0052b430();
  core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr);
  core_morph_cpp_FUN_0052b470();
  core_morph_cpp_CMorph_getReady_FUN_0052b680
            ((CMorph *)(in_stack_00000004[1].base.model.motion_controller.current_motion_name + 4));
  in_stack_00000004[1].base.model.motion_controller.in_transition = 0;
  pCVar1 = &in_stack_00000004[1].base;
  (pCVar1->model).motion_controller.current_motion_name[0] = '\0';
  (pCVar1->model).motion_controller.current_motion_name[1] = '\0';
  (pCVar1->model).motion_controller.current_motion_name[2] = '\0';
  (pCVar1->model).motion_controller.current_motion_name[3] = '\0';
  return;
}
