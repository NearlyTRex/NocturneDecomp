// Name: core_hero.cpp_FUN_004d2720
// Address: 004d2720
// Address Range: [[004d2720, 004d2755]]
// Convention: unknown
// Signature: int core_hero_cpp_FUN_004d2720(CDemonActor *param_1,SCollisionReturnInfo *param_2,float param_3)

#include "nocturne.h"

int core_hero_cpp_FUN_004d2720(CDemonActor *param_1,SCollisionReturnInfo *param_2,float param_3)

{
  int iVar1;
  
  if ((*(int *)&g_CGamePtr->field_0x1f4 == 0) &&
     ((*(uint *)&param_1[0x99].field_0x34 & 0x7fffffff) == 0)) {
    iVar1 = core_actor_cpp_CDemonActor_testCylinderCollision_FUN_00408d10(param_1,param_2,param_3);
    return iVar1;
  }
  return 0;
}
