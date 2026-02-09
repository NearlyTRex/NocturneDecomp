// Name: core_cow.cpp_CZombieCow_ctor_FUN_00444140
// Address: 00444140
// Address Range: [[00444140, 004441a5]]
// Convention: __cdecl
// Signature: CZombieCow * __cdecl core_cow_cpp_CZombieCow_ctor_FUN_00444140(CZombieCow *this_ptr)

#include "nocturne.h"

CZombieCow * __cdecl core_cow_cpp_CZombieCow_ctor_FUN_00444140(CZombieCow *this_ptr)

{
  float fVar1;
  float fVar2;
  CZombieCow *pCVar3;
  
  pCVar3 = (CZombieCow *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CZombieCowVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar3->base).base.model,"cow.dfm");
  fVar1 = 50.0f;
  (pCVar3->base).base.field54_0x2ddc = 1.75;
  fVar2 = 100.0f;
  (pCVar3->base).base.collision_cylinder_radius = 3.5;
  pCVar3->unk[8] = '\0';
  pCVar3->unk[9] = '\0';
  pCVar3->unk[10] = '\0';
  pCVar3->unk[0xb] = '\0';
  (pCVar3->base).base.field56_0x2de4 = fVar1;
  (pCVar3->base).base.field57_0x2de8 = fVar2;
  return pCVar3;
}
