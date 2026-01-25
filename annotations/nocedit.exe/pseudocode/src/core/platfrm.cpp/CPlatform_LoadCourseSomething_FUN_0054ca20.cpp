// Name: core_platfrm.cpp_CPlatform_LoadCourseSomething_FUN_0054ca20
// Address: 0054ca20
// Address Range: [[0054ca20, 0054ca2c]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_CPlatform_LoadCourseSomething_FUN_0054ca20()

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_CPlatform_LoadCourseSomething(uint param_1)
    */

void core_platfrm_cpp_CPlatform_LoadCourseSomething_FUN_0054ca20(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  if (*(char *)&in_stack_00000004[2].orient_matrix.m[0].y != '\0') {
    core_course_cpp_CCourse_load_FUN_00442580
              ((CCourse *)&in_stack_00000004[2].runtime_state,
               (char *)&in_stack_00000004[2].orient_matrix.m[0].y);
    in_stack_00000004[2].validation_magic = 0;
  }
  core_platfrm_cpp_FUN_0054cab0();
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  pCVar1 = in_stack_00000004 + 1;
  do {
    while (in_stack_00000004[3].field19_0x114 != 0) {
      in_stack_00000004[3].field19_0x114 = 0;
      core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0();
      in_stack_00000004 = (CDemonActor *)&(in_stack_00000004->orient).bank;
      if (in_stack_00000004 == (CDemonActor *)(pCVar1->create_event + 0x38)) {
        return;
      }
    }
    in_stack_00000004 = (CDemonActor *)&(in_stack_00000004->orient).bank;
  } while (in_stack_00000004 != (CDemonActor *)(pCVar1->create_event + 0x38));
  return;
}
