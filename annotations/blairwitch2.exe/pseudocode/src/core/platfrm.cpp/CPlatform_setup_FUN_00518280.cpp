// Name: core_platfrm.cpp_CPlatform_setup_FUN_00518280
// Address: 00518280
// Address Range: [[00518280, 0051830c]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_00518280(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_00518280(CPlatform *this_ptr)

{
  float *pfVar1;
  CDemonActor *actor;
  CPlatform *pCVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  if (this_ptr->course_filename[0] != '\0') {
    core_course_cpp_CCourse_load_FUN_00438af0(&this_ptr->course,this_ptr->course_filename);
    (this_ptr->course).loop = 0;
  }
  core_platfrm_cpp_CPlatform_evaluatePosition_FUN_00518310(this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  pfVar1 = &(this_ptr->base).particle_systems[2].fade_duration;
  pCVar2 = this_ptr;
  do {
    while (actor = pCVar2->attach_actors[0].actor, actor != (CDemonActor *)0x0) {
      pCVar2->attach_actors[0].actor = (CDemonActor *)0x0;
      core_platfrm_cpp_CPlatform_attachActor_FUN_00519a60(this_ptr,actor);
      pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
      if (pCVar2 == (CPlatform *)pfVar1) {
        return;
      }
    }
    pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
  } while (pCVar2 != (CPlatform *)pfVar1);
  return;
}
