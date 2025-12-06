// Name: core_mobster.cpp_FUN_00525720
// Address: 00525720
// Address Range: [[00525720, 0052580f]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00525720()

#include "nocturne.h"

/* Signature: byte actors_enemy_mobster.cpp_FUN_00525720(uint param_1) */

void core_mobster_cpp_FUN_00525720(void)

{
  float fVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  if (*(int *)(in_stack_00000004 + 0xbee4) == 0) {
    local_18.y = -2.35;
    local_18.z = -1.6;
    local_18.x = 4.2;
    if (&local_24 != &local_18) {
      local_24.y = -2.35;
      local_24.z = -1.6;
      local_24.x = 4.2;
    }
    fVar1 = *(float *)(*(int *)(in_stack_00000004 + 0xbee0) + 0x34) + (float)1.57079632675;
  }
  else {
    if (&local_24 != (CVector3f *)&stack0xffffffc4) {
      local_24.y = -2.35;
      local_24.z = -1.6;
      local_24.x = -4.2;
    }
    fVar1 = *(float *)(*(int *)(in_stack_00000004 + 0xbee0) + 0x34) + (float)-1.57079632675;
  }
  *(float *)(in_stack_00000004 + 0x34) = fVar1;
  pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (*(CDemonActor **)(in_stack_00000004 + 0xbee0),&local_30,&local_24);
  *(float *)(in_stack_00000004 + 0x20) = pCVar2->x;
  *(float *)(in_stack_00000004 + 0x24) = pCVar2->y;
  *(float *)(in_stack_00000004 + 0x28) = pCVar2->z;
  *(uint *)(in_stack_00000004 + 0xbee0) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),8,1);
  return;
}
