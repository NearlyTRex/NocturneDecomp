// Name: core_dog.cpp_CZombieDog_ctor_FUN_00462710
// Address: 00462710
// Address Range: [[00462710, 0046277f]]
// Convention: __cdecl
// Signature: CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_00462710(CZombieDog *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_00462710(CZombieDog *this_ptr)

{
  float fVar1;
  float fVar2;
  CZombieDog *pCVar3;
  
  pCVar3 = (CZombieDog *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CZombieDogVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar3->base).base.model,"blackdog.dfm");
  (pCVar3->base).base.collision_cylinder_height = 0.75;
  fVar1 = _DAT_005de5bc;
  (pCVar3->base).base.collision_cylinder_radius = 1.5;
  fVar2 = _DAT_005de5c0;
  pCVar3->sfx_handle = 0;
  pCVar3->dog_variant = 0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
