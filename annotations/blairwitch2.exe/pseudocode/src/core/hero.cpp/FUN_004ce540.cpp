// Name: core_hero.cpp_FUN_004ce540
// Address: 004ce540
// Address Range: [[004ce540, 004ce580]]
// Convention: unknown
// Signature: int core_hero_cpp_FUN_004ce540(CDemonActor *param_1,CVector3f *param_2,CVector3f *param_3,CVector3f *param_4)

#include "nocturne.h"

int core_hero_cpp_FUN_004ce540(CDemonActor *param_1,CVector3f *param_2,CVector3f *param_3,CVector3f *param_4)

{
  int iVar1;
  
  if ((*(int *)&g_CGamePtr->field_0x1ec == 0) &&
     ((*(uint *)&param_1[0x62].field_0x178 & 0x7fffffff) == 0)) {
    iVar1 = core_actor_cpp_FUN_00408f90(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  return 0;
}
