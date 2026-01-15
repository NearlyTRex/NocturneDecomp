// Name: core_mobster.cpp_FUN_00525650
// Address: 00525650
// Address Range: [[00525650, 00525719]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00525650()

#include "nocturne.h"

/* Signature: byte actors_enemy_mobster.cpp_FUN_00525650(uint param_1) */

void core_mobster_cpp_FUN_00525650(void)

{
  float fVar1;
  CVector3f *pCVar2;
  int in_stack_00000004;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  if (*(int *)(in_stack_00000004 + 0xbee4) == 0) {
    local_3c.y = -2.35;
    local_3c.z = -1.6;
    local_3c.x = 2.2;
    if (&local_24 != &local_3c) {
      local_24.y = -2.35;
      local_24.z = -1.6;
      local_24.x = 2.2;
    }
    fVar1 = *(float *)(*(int *)(in_stack_00000004 + 0xbee0) + 0x34) + (float)1.57079632675;
  }
  else {
    local_18.y = -2.35;
    local_18.z = -1.6;
    local_18.x = -2.2;
    if (&local_24 != &local_18) {
      local_24.y = -2.35;
      local_24.z = -1.6;
      local_24.x = -2.2;
    }
    fVar1 = *(float *)(*(int *)(in_stack_00000004 + 0xbee0) + 0x34) + (float)-1.57079632675;
  }
  *(float *)(in_stack_00000004 + 0x34) = fVar1;
  pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (*(CDemonActor **)(in_stack_00000004 + 0xbee0),&local_30,&local_24);
  *(float *)(in_stack_00000004 + 0x20) = pCVar2->x;
  *(float *)(in_stack_00000004 + 0x24) = pCVar2->y;
  *(float *)(in_stack_00000004 + 0x28) = pCVar2->z;
  return;
}
