// Name: core_dog.cpp_CDemonDog_ctor_FUN_00463710
// Address: 00463710
// Address Range: [[00463710, 00463779]]
// Convention: unknown
// Signature: CDemonDog * core_dog_cpp_CDemonDog_ctor_FUN_00463710(CDemonDog *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDemonDog * core_dog_cpp_CDemonDog_ctor_FUN_00463710(CDemonDog *this_ptr)

{
  CZombieDog *pCVar1;
  
  pCVar1 = core_dog_cpp_CZombieDog_ctor_FUN_00462710((CZombieDog *)this_ptr);
  (pCVar1->base).base.base.vtable._ub = &g_CDemonDogVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"blackdog.dfm");
  (pCVar1->base).base.hit_points = 30.0;
  *(uint *)&(pCVar1->base).field_0xce5c = 0x41200000;
  *(uint *)&(pCVar1->base).field_0xce60 = 0x41200000;
  (pCVar1->base).base.base.is_transparent = 1;
  (pCVar1->base).base.base.is_renderable = 0;
  *(uint *)&pCVar1->field_0xd060 = 2;
  return (CDemonDog *)pCVar1;
}
