// Name: core_platfrm.cpp_FUN_004f5f60
// Address: 004f5f60
// Address Range: [[004f5f60, 004f5fec]]
// Convention: unknown
// Signature: void core_platfrm_cpp_FUN_004f5f60(CPlatform *param_1)

#include "nocturne.h"

void core_platfrm_cpp_FUN_004f5f60(CPlatform *param_1)

{
  CPlatform *pCVar1;
  CDemonActor *actor;
  CPlatform *pCVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&param_1->base);
  if (param_1->course_filename[0] != '\0') {
    core_course_cpp_CCourse_load_FUN_0043b690(&param_1->course,param_1->course_filename);
    (param_1->course).loop = 0;
  }
  core_platfrm_cpp_CPlatform_evaluatePosition_FUN_004f5ff0(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&param_1->model);
  pCVar1 = (CPlatform *)((param_1->model).model_name + 0x40);
  pCVar2 = param_1;
  do {
    while (actor = pCVar2->attach_actors[0].actor, actor != (CDemonActor *)0x0) {
      pCVar2->attach_actors[0].actor = (CDemonActor *)0x0;
      core_platfrm_cpp_CPlatform_attachActor_FUN_004f75c0(param_1,actor);
      pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
      if (pCVar2 == pCVar1) {
        return;
      }
    }
    pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
  } while (pCVar2 != pCVar1);
  return;
}
