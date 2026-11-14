// Name: core_dog.cpp_CZombieDog_ctor_FUN_0045e270
// Address: 0045e270
// Address Range: [[0045e270, 0045e2d5]]
// Convention: __cdecl
// Signature: CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_0045e270(CZombieDog *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_0045e270(CZombieDog *this_ptr)

{
  float fVar1;
  float fVar2;
  CZombieDog *pCVar3;
  
  pCVar3 = (CZombieDog *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CZombieDogVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(pCVar3->base).base.model,"blackdog.dfm");
  fVar1 = _DAT_005f532c;
  (pCVar3->base).base.collision_cylinder_height = 0.75;
  fVar2 = _DAT_005f5330;
  (pCVar3->base).base.collision_cylinder_radius = 1.5;
  pCVar3->sfx_handle = 0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
