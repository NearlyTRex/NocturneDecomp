// Name: core_dog.cpp_CZombieDog_ctor_FUN_0047f050
// Address: 0047f050
// Address Range: [[0047f050, 0047f0b5]]
// Convention: __cdecl
// Signature: CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_0047f050(CZombieDog *this_ptr)

#include "nocturne.h"

CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_0047f050(CZombieDog *this_ptr)

{
  float fVar1;
  float fVar2;
  CZombieDog *pCVar3;
  
  pCVar3 = (CZombieDog *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CZombieDogVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar3->base).base.model,"dog.dfm");
  fVar1 = 50.0f;
  (pCVar3->base).base.collision_cylinder_height = 0.75;
  fVar2 = 100.0f;
  (pCVar3->base).base.collision_cylinder_radius = 1.5;
  pCVar3->sfx_handle = 0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
