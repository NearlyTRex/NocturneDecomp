// Name: core_bugs.cpp_FUN_004250f0
// Address: 004250f0
// Address Range: [[004250f0, 004251a6]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004250f0()

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_FUN_004250f0(uint param_1, uint param_2)
    */

void core_bugs_cpp_FUN_004250f0(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  
  iVar1 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar1 != 0) {
    if ((in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x42].m[1].y == 0.0) &&
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (g_CEventListPtr,
                           (char *)(in_stack_00000004[2].model.bone_transform.bone_world_matrices
                                    [0x42].m + 2)), iVar1 != 0)) {
      in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x42].m[1].y = 1.4013e-45;
    }
    if ((in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x42].m[1].z == 0.0) &&
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (g_CEventListPtr,
                           (char *)&in_stack_00000004[2].model.bone_transform.bone_world_matrices
                                    [0x44].m[2].x), iVar1 != 0)) {
      in_stack_00000004[2].model.bone_transform.bone_world_matrices[0x42].m[1].z = 1.4013e-45;
    }
    switch(*(uint *)(in_stack_00000004[1].base.create_event + 0x20)) {
    case 0:
      core_bugs_cpp_FUN_00425cc0();
      break;
    case 1:
      core_bugs_cpp_FUN_00425fe0();
      return;
    case 2:
      core_bugs_cpp_FUN_00426410();
      return;
    }
  }
  return;
}
