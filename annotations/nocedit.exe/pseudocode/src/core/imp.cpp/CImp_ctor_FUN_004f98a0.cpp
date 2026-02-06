// Name: core_imp.cpp_CImp_ctor_FUN_004f98a0
// Address: 004f98a0
// Address Range: [[004f98a0, 004f9905]]
// Convention: __cdecl
// Signature: CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004f98a0(CImp *this_ptr)

#include "nocturne.h"

CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004f98a0(CImp *this_ptr)

{
  float fVar1;
  float fVar2;
  CImp *pCVar3;
  
  pCVar3 = (CImp *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CImpVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar3->base).base.model,"imp.dfm");
  fVar1 = 50.0f;
  (pCVar3->base).base.field54_0x2ddc = 0.6;
  fVar2 = 100.0f;
  (pCVar3->base).base.collision_cylinder_radius = 0.5;
  (pCVar3->base).base.field44_0x2624 = 0;
  (pCVar3->base).base.field56_0x2de4 = fVar1;
  (pCVar3->base).base.field57_0x2de8 = fVar2;
  return pCVar3;
}
