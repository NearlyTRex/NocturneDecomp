// Name: core_hero.cpp_FUN_004d2760
// Address: 004d2760
// Address Range: [[004d2760, 004d27a0]]
// Convention: unknown
// Signature: int core_hero_cpp_FUN_004d2760(CDemonActor *param_1,CVector3f *param_2,CVector3f *param_3,CVector3f *param_4)

#include "nocturne.h"

int core_hero_cpp_FUN_004d2760(CDemonActor *param_1,CVector3f *param_2,CVector3f *param_3,CVector3f *param_4)

{
  int iVar1;
  
  if ((*(int *)&g_CGamePtr->field_0x1f4 == 0) &&
     ((*(uint *)&param_1[0x99].field_0x34 & 0x7fffffff) == 0)) {
    iVar1 = core_actor_cpp_CDemonActor_testLineIntersection_FUN_00408da0
                      (param_1,param_2,param_3,param_4);
    return iVar1;
  }
  return 0;
}
