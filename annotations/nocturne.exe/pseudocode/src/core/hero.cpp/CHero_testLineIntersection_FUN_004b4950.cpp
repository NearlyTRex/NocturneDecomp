// Name: core_hero.cpp_CHero_testLineIntersection_FUN_004b4950
// Address: 004b4950
// Address Range: [[004b4950, 004b4990]]
// Convention: unknown
// Signature: int core_hero_cpp_CHero_testLineIntersection_FUN_004b4950(CDemonActor *param_1,CVector3f *param_2,CVector3f *param_3,CVector3f *param_4)

#include "nocturne.h"

int core_hero_cpp_CHero_testLineIntersection_FUN_004b4950(CDemonActor *param_1,CVector3f *param_2,CVector3f *param_3,CVector3f *param_4)

{
  int iVar1;
  
  if ((g_CGame_PTR_005b9354->god_mode_enabled == 0) &&
     (((uint)param_1[0x8f].standing_platform & 0x7fffffff) == 0)) {
    iVar1 = core_actor_cpp_CDemonActor_testLineIntersection_FUN_0040a420
                      (param_1,param_2,param_3,param_4);
    return iVar1;
  }
  return 0;
}
