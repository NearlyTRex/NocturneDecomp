// Name: core_platfrm.cpp_CPlatform_setup_FUN_00518280
// Address: 00518280
// Address Range: [[00518280, 0051830c]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_00518280(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_00518280(CPlatform *this_ptr)

{
  byte *puVar1;
  CDemonActor *actor;
  CPlatform *pCVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  if (this_ptr->course_filename[0] != '\0') {
    core_course_cpp_CCourse_load_FUN_00438af0
              ((CCourse *)&this_ptr->field_0x46c,this_ptr->course_filename);
    *(uint *)&this_ptr->field_0x474 = 0;
  }
  core_platfrm_cpp_CPlatform_evaluatePosition_FUN_00518310(this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  puVar1 = &(this_ptr->base).field_0x208;
  pCVar2 = this_ptr;
  do {
    while (actor = *(CDemonActor **)pCVar2->attach_actors, actor != (CDemonActor *)0x0) {
      pCVar2->attach_actors[0] = (SPlatformAttachment)0x0;
      pCVar2->attach_actors[1] = (SPlatformAttachment)0x0;
      pCVar2->attach_actors[2] = (SPlatformAttachment)0x0;
      pCVar2->attach_actors[3] = (SPlatformAttachment)0x0;
      core_platfrm_cpp_CPlatform_attachActor_FUN_00519a60(this_ptr,actor);
      pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
      if (pCVar2 == (CPlatform *)puVar1) {
        return;
      }
    }
    pCVar2 = (CPlatform *)((int)&(pCVar2->base).orient + 4);
  } while (pCVar2 != (CPlatform *)puVar1);
  return;
}
