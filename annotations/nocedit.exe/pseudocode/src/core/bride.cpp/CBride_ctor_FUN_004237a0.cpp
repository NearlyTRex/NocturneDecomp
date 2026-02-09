// Name: core_bride.cpp_CBride_ctor_FUN_004237a0
// Address: 004237a0
// Address Range: [[004237a0, 00423805]]
// Convention: __cdecl
// Signature: CBride * __cdecl core_bride_cpp_CBride_ctor_FUN_004237a0(CBride *this_ptr)

#include "nocturne.h"

CBride * __cdecl core_bride_cpp_CBride_ctor_FUN_004237a0(CBride *this_ptr)

{
  float fVar1;
  float fVar2;
  CBride *pCVar3;
  
  pCVar3 = (CBride *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CBrideVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar3->base).base.model,"bride.dfm");
  fVar1 = 50.0f;
  (pCVar3->base).base.field54_0x2ddc = 0.75;
  fVar2 = 100.0f;
  (pCVar3->base).base.collision_cylinder_radius = 1.5;
  pCVar3->unk[0x24] = '\0';
  pCVar3->unk[0x25] = '\0';
  pCVar3->unk[0x26] = '\0';
  pCVar3->unk[0x27] = '\0';
  (pCVar3->base).base.field56_0x2de4 = fVar1;
  (pCVar3->base).base.field57_0x2de8 = fVar2;
  return pCVar3;
}
