// Name: core_tentacle.cpp_FUN_005db900
// Address: 005db900
// Address Range: [[005db900, 005db9ca]]
// Convention: unknown
// Signature: undefined core_tentacle.cpp_FUN_005db900()

#include "nocturne.h"

/* Signature: byte actors_enemy_tentacle.cpp_FUN_005db900(uint param_1, uint
   param_2) */

uint core_tentacle_cpp_FUN_005db900(void)

{
  CDemonActor *actor_ptr;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000008;
  int local_14;
  
  iVar5 = 0;
  local_14 = 0;
  do {
    if (g_CDemonSetPtr->damage_listener_count <= local_14) {
      return 0;
    }
    actor_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar5 + -4);
    if (actor_ptr != in_stack_00000004) {
      iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,in_stack_00000008);
      if (iVar4 != 0) {
        fVar1 = (actor_ptr->location).position.x - (in_stack_00000004->location).position.x;
        fVar2 = ((actor_ptr->location).position.y - (in_stack_00000004->location).position.y) *
                (float)3;
        fVar3 = (actor_ptr->location).position.z - (in_stack_00000004->location).position.z;
        if (SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) <
            *(float *)(in_stack_00000004[0x8d].create_event + 0x44)) {
          *(CDemonActor **)(in_stack_00000004[0x8d].create_event + 0x4c) = actor_ptr;
          return 1;
        }
      }
    }
    local_14 = local_14 + 1;
    iVar5 = iVar5 + 4;
  } while( true );
}
