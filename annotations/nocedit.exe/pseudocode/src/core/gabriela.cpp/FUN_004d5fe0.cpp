// Name: core_gabriela.cpp_FUN_004d5fe0
// Address: 004d5fe0
// Address Range: [[004d5fe0, 004d604a]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d5fe0()

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d5fe0(uint param_1) */

void core_gabriela_cpp_FUN_004d5fe0(void)

{
  int iVar1;
  CDemonActor *in_stack_00000004;
  
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  iVar1 = (**(code **)(*(int *)((int)in_stack_00000004[0x178].previous_transform_state.position.x +
                               0x154) + 0xf8))();
  if ((iVar1 != 0) &&
     (*(int *)((int)in_stack_00000004[0x178].previous_transform_state.position.x + 0x2dc) == 1)) {
    in_stack_00000004[0x17a].actor_name[0x1c] = '\0';
    in_stack_00000004[0x17a].actor_name[0x1d] = '\0';
    in_stack_00000004[0x17a].actor_name[0x1e] = -0x80;
    in_stack_00000004[0x17a].actor_name[0x1f] = '?';
  }
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  in_stack_00000004[0x179].vtable._ub = (CDemonActor_vtable *)0x0;
  return;
}
