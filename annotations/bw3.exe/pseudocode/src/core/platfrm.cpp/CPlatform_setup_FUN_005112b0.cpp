// Name: core_platfrm.cpp_CPlatform_setup_FUN_005112b0
// Address: 005112b0
// Address Range: [[005112b0, 0051133c]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_005112b0(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_005112b0(CPlatform *this_ptr)

{
  CPlatform *pCVar1;
  CDemonActor *actor;
  CPlatform *pCVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  if (this_ptr->course_filename[0] != '\0') {
    core_course_cpp_FUN_00444970(&this_ptr->course,this_ptr->course_filename);
    (this_ptr->course).loop = 0;
  }
  core_platfrm_cpp_CPlatform_evaluatePosition_FUN_00511340(this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  pCVar1 = (CPlatform *)((this_ptr->model).model_name + 0x38);
  pCVar2 = this_ptr;
  do {
    while (actor = *(CDemonActor **)pCVar2->attach_actors, actor != (CDemonActor *)0x0) {
      pCVar2->attach_actors[0] = (SPlatformAttachment)0x0;
      pCVar2->attach_actors[1] = (SPlatformAttachment)0x0;
      pCVar2->attach_actors[2] = (SPlatformAttachment)0x0;
      pCVar2->attach_actors[3] = (SPlatformAttachment)0x0;
      core_platfrm_cpp_CPlatform_attachActor_FUN_00512aa0(this_ptr,actor);
      pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
      if (pCVar2 == pCVar1) {
        return;
      }
    }
    pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
  } while (pCVar2 != pCVar1);
  return;
}
