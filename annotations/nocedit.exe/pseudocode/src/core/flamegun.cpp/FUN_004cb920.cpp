// Name: core_flamegun.cpp_FUN_004cb920
// Address: 004cb920
// Address Range: [[004cb920, 004cb9ad]]
// Convention: unknown
// Signature: undefined core_flamegun.cpp_FUN_004cb920()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_flame.cpp_FUN_004cb920(uint param_1) */

uint core_flamegun_cpp_FUN_004cb920(void)

{
  float fVar1;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  
  if (*(int *)(in_stack_00000004[4].actor_name + 8) < 1) {
    return 0;
  }
  input_local_point = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)&stack0xfffffffc,input_local_point);
  core_fire_cpp_CFireEffect_FUN_004c8ef0(g_CFireEffectPtr);
  if (in_stack_00000004[4].location.position.x == 0.0) {
    fVar1 = 1.0 / _DAT_0065e270;
    *(int *)(in_stack_00000004[4].actor_name + 8) =
         *(int *)(in_stack_00000004[4].actor_name + 8) + -1;
    in_stack_00000004[4].location.position.y = fVar1;
  }
  in_stack_00000004[4].actor_name[0x18] = '\x01';
  in_stack_00000004[4].actor_name[0x19] = '\0';
  in_stack_00000004[4].actor_name[0x1a] = '\0';
  in_stack_00000004[4].actor_name[0x1b] = '\0';
  return 1;
}
