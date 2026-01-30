// Name: core_gabriela.cpp_FUN_004d6d40
// Address: 004d6d40
// Address Range: [[004d6d40, 004d6f74]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_FUN_004d6d40(void)

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d6d40(uint param_1, uint
   param_2, uint param_3) */

void __cdecl core_gabriela_cpp_FUN_004d6d40(void)

{
  float fVar1;
  float fVar2;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_0000000c;
  
  fVar1 = *(float *)(in_stack_00000004[0x17a].actor_name + 4);
  fVar2 = in_stack_00000008 / 0.5f;
  *(float *)in_stack_00000004[0x17a].actor_name =
       *(float *)in_stack_00000004[0x17a].actor_name - fVar2;
  *(float *)(in_stack_00000004[0x17a].actor_name + 4) = fVar1 - fVar2;
  if (*(float *)in_stack_00000004[0x17a].actor_name < 0.0) {
    in_stack_00000004[0x17a].actor_name[0] = '\0';
    in_stack_00000004[0x17a].actor_name[1] = '\0';
    in_stack_00000004[0x17a].actor_name[2] = '\0';
    in_stack_00000004[0x17a].actor_name[3] = '\0';
  }
  if (*(float *)(in_stack_00000004[0x17a].actor_name + 4) < 0.0) {
    in_stack_00000004[0x17a].actor_name[4] = '\0';
    in_stack_00000004[0x17a].actor_name[5] = '\0';
    in_stack_00000004[0x17a].actor_name[6] = '\0';
    in_stack_00000004[0x17a].actor_name[7] = '\0';
  }
  if (in_stack_0000000c == 0) {
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),0,0.0,
               *(float *)in_stack_00000004[0x17a].actor_name,INT_02d7b84c,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),0,0.0,
               *(float *)(in_stack_00000004[0x17a].actor_name + 4),INT_02d7b850,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    return;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  if ((CDemonActor *)in_stack_00000004[0x1b].unk1 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
              (g_CDemonSetPtr,(CDemonActor *)in_stack_00000004[0x1b].unk1);
  }
  if (*(CDemonActor **)(in_stack_00000004[0x1b].create_event + 0x38) != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
              (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004[0x1b].create_event + 0x38));
  }
  core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
  if (in_stack_00000004[0x1b].unk1 != 0) {
    (**(code **)(*(int *)(in_stack_00000004[0x1b].unk1 + 0x154) + 0x14))();
  }
  core_gabriela_cpp_FUN_004d6f80();
  if (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) != 0) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004[0x1b].create_event + 0x38) + 0x154) + 0x14))();
  }
  core_gabriela_cpp_FUN_004d6f80();
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  return;
}
