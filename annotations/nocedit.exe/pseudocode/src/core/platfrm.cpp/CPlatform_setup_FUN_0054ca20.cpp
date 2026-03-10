// Name: core_platfrm.cpp_CPlatform_setup_FUN_0054ca20
// Address: 0054ca20
// Address Range: [[0054ca20, 0054ca2c]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_0054ca20(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_0054ca20(CPlatform *this_ptr)

{
  CPlatform *pCVar1;
  CDemonActor *actor;
  CPlatform *pCVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  if (this_ptr->course_filename[0] != '\0') {
    core_course_cpp_CCourse_load_FUN_00442580(&this_ptr->course,this_ptr->course_filename);
    (this_ptr->course).loop = 0;
  }
  core_platfrm_cpp_CPlatform_evaluatePosition_FUN_0054cab0(this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  pCVar1 = (CPlatform *)((this_ptr->model).model_name + 0x38);
  pCVar2 = this_ptr;
  do {
    while (actor = pCVar2->attach_actors[0].actor, actor != (CDemonActor *)0x0) {
      pCVar2->attach_actors[0].actor = (CDemonActor *)0x0;
      core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0(this_ptr,actor);
      pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
      if (pCVar2 == pCVar1) {
        return;
      }
    }
    pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
  } while (pCVar2 != pCVar1);
  return;
}
