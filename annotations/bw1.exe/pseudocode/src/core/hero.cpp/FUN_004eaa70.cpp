// Name: core_hero.cpp_FUN_004eaa70
// Address: 004eaa70
// Address Range: [[004eaa70, 004eaaa5]]
// Convention: unknown
// Signature: int core_hero_cpp_FUN_004eaa70(CDemonActor *param_1,SCollisionReturnInfo *param_2,float param_3)

#include "nocturne.h"

int core_hero_cpp_FUN_004eaa70(CDemonActor *param_1,SCollisionReturnInfo *param_2,float param_3)

{
  int iVar1;
  
  if ((*(int *)&g_CGamePtr->field_0x1ec == 0) &&
     ((*(uint *)&param_1[0x90].field_0x50 & 0x7fffffff) == 0)) {
    iVar1 = core_actor_cpp_FUN_00408cd0(param_1,param_2,param_3);
    return iVar1;
  }
  return 0;
}
