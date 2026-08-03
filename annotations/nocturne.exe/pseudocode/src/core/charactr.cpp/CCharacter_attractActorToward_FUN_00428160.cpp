// Name: core_charactr.cpp_CCharacter_attractActorToward_FUN_00428160
// Address: 00428160
// Address Range: [[00428160, 0042825e]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_CCharacter_attractActorToward_FUN_00428160(int param_1,CDemonActor *param_2,CVector3f *param_3)

#include "nocturne.h"

uint core_charactr_cpp_CCharacter_attractActorToward_FUN_00428160(int param_1,CDemonActor *param_2,CVector3f *param_3)

{
  int iVar1;
  CVector3f *pCVar2;
  CVector3f local_44;
  CVector3f local_38;
  float local_2c;
  float local_28;
  float local_24;
  float local_20 [2];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if ((param_2 != (CDemonActor *)0x0) &&
     (iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x10c))(param_1,local_20), iVar1 != 0)) {
    pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_2,&local_44,param_3);
    local_2c = local_20[0] - pCVar2->x;
    local_24 = local_18 - pCVar2->z;
    local_28 = 0.0;
    local_10 = SQRT(local_24 * local_24 + local_2c * local_2c);
    local_14 = g_CGame_PTR_005b9354->delta_time_float * (float)5;
    if (local_14 < local_10) {
      local_c = local_14 / local_10;
      local_2c = local_2c * local_c;
      local_28 = local_c * 0.0;
      local_24 = local_24 * local_c;
    }
    local_38.x = (param_2->location).position.x + local_2c;
    local_38.y = (param_2->location).position.y + local_28;
    local_38.z = (param_2->location).position.z + local_24;
    (*((param_2->vtable)._ub)->setPositionAndOrientation)
              (param_2,&local_38,(CVector3f *)&param_2->orient);
    return 1;
  }
  return 0;
}
