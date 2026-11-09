// Name: core_hero.cpp_FUN_004ce500
// Address: 004ce500
// Address Range: [[004ce500, 004ce535]]
// Convention: unknown
// Signature: int core_hero_cpp_FUN_004ce500(CDemonActor *param_1,SCollisionReturnInfo *param_2,float param_3)

#include "nocturne.h"

int core_hero_cpp_FUN_004ce500(CDemonActor *param_1,SCollisionReturnInfo *param_2,float param_3)

{
  int iVar1;
  
  if ((*(int *)&g_CGamePtr->field_0x1ec == 0) &&
     ((*(uint *)&param_1[0x62].field_0x178 & 0x7fffffff) == 0)) {
    iVar1 = core_actor_cpp_CDemonActor_testCylinderCollision_FUN_00408f00(param_1,param_2,param_3);
    return iVar1;
  }
  return 0;
}
