// Name: core_hero.cpp_CHero_testCylinderCollision_FUN_004b4910
// Address: 004b4910
// Address Range: [[004b4910, 004b4945]]
// Convention: unknown
// Signature: int core_hero_cpp_CHero_testCylinderCollision_FUN_004b4910(CDemonActor *param_1,SCollisionReturnInfo *param_2,float param_3)

#include "nocturne.h"

int core_hero_cpp_CHero_testCylinderCollision_FUN_004b4910(CDemonActor *param_1,SCollisionReturnInfo *param_2,float param_3)

{
  int iVar1;
  
  if ((g_CGame_PTR_005b9354->god_mode_enabled == 0) &&
     (((uint)param_1[0x8f].standing_platform & 0x7fffffff) == 0)) {
    iVar1 = core_actor_cpp_CDemonActor_testPointInCylinder_FUN_0040a390(param_1,param_2,param_3);
    return iVar1;
  }
  return 0;
}
