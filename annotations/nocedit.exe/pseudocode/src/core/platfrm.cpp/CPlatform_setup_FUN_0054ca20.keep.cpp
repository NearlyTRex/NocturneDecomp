// Name: core_platfrm.cpp_CPlatform_setup_FUN_0054ca20
// Address: 0054ca20
// MANUAL RECONSTRUCTION
// Address Range: [[0054ca20, 0054caac]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_0054ca20(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_0054ca20(CPlatform *this_ptr)

{
  CDemonActor *actor;
  int i;

  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  if (this_ptr->course_filename[0] != '\0') {
    core_course_cpp_CCourse_load_FUN_00442580(&this_ptr->course,this_ptr->course_filename);
    (this_ptr->course).loop = 0;
  }
  core_platfrm_cpp_CPlatform_evaluatePosition_FUN_0054cab0(this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  for (i = 0; i < 10; i++) {
    actor = this_ptr->attach_actors[i].actor;
    if (actor != (CDemonActor *)0x0) {
      this_ptr->attach_actors[i].actor = (CDemonActor *)0x0;
      core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0(this_ptr,actor);
    }
  }
  return;
}
