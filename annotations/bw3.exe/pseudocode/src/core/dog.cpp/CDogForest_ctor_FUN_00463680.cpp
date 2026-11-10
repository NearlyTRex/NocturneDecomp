// Name: core_dog.cpp_CDogForest_ctor_FUN_00463680
// Address: 00463680
// Address Range: [[00463680, 004636d5]]
// Convention: unknown
// Signature: CDogForest * core_dog_cpp_CDogForest_ctor_FUN_00463680(CDogForest *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDogForest * core_dog_cpp_CDogForest_ctor_FUN_00463680(CDogForest *this_ptr)

{
  CZombieDog *pCVar1;
  
  pCVar1 = core_dog_cpp_CZombieDog_ctor_FUN_00462710((CZombieDog *)this_ptr);
  (pCVar1->base).base.base.vtable._ub = &g_CDogForestVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"blackdog.dfm");
  (pCVar1->base).base.hit_points = 20.0;
  *(uint *)&(pCVar1->base).field_0xce5c = 0x40a00000;
  *(uint *)&(pCVar1->base).field_0xce60 = 0x41200000;
  *(uint *)&pCVar1->field_0xd060 = 1;
  return (CDogForest *)pCVar1;
}
