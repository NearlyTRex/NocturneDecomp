// Name: core_platfrm.cpp_CPlatform_LoadCourseSomething_FUN_0054ca20
// Address: 0054ca20
// Address Range: [[0054ca20, 0054ca2c]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_CPlatform_LoadCourseSomething_FUN_0054ca20()
// Cross-references:
//   core_conveyor.cpp_FUN_00441d60 (00441d60) at 00441dc2 [UNCONDITIONAL_CALL]
//   core_minecar.cpp_FUN_00520e90 (00520e90) at 00520e95 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_CPlatform_LoadCourseSomething(undefined4 param_1)
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
    in_stack_00000004[2].field6_0x68 = 0;
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


// Assembly code:
// 0054ca20: PUSH EBX
//   Label: core_platfrm.cpp_CPlatform_LoadCourseSomething_FUN_0054ca20
// 0054ca21: PUSH ESI
// 0054ca22: PUSH EDI
// 0054ca23: MOV ESI,dword ptr [ESP + 0x10]
// 0054ca27: PUSH ESI
// 0054ca28: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
