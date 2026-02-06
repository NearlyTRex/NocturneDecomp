// Name: core_larva.cpp_CLarva_ctor_FUN_00502f90
// Address: 00502f90
// Address Range: [[00502f90, 00503013]]
// Convention: __cdecl
// Signature: CLarva * __cdecl core_larva_cpp_CLarva_ctor_FUN_00502f90(CLarva *this_ptr)

#include "nocturne.h"

CLarva * __cdecl core_larva_cpp_CLarva_ctor_FUN_00502f90(CLarva *this_ptr)

{
  float fVar1;
  float fVar2;
  CLarva *pCVar3;
  
  pCVar3 = (CLarva *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CLarvaVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar3->base).base.model,"worm.dfm");
  (pCVar3->base).base.field54_0x2ddc = 0.25;
  (pCVar3->base).base.collision_cylinder_radius = 0.5;
  (pCVar3->base).base.field39_0x2610 = 1;
  fVar1 = 20.0f;
  (pCVar3->base).base.hit_points = 15.0;
  fVar2 = 100.0f;
  pCVar3->unk[0xc] = '\0';
  pCVar3->unk[0xd] = '\0';
  pCVar3->unk[0xe] = '\0';
  pCVar3->unk[0xf] = '\0';
  pCVar3->unk[0x10] = '\0';
  pCVar3->unk[0x11] = '\0';
  pCVar3->unk[0x12] = '\0';
  pCVar3->unk[0x13] = '\0';
  (pCVar3->base).base.field56_0x2de4 = fVar1;
  (pCVar3->base).base.field57_0x2de8 = fVar2;
  return pCVar3;
}
