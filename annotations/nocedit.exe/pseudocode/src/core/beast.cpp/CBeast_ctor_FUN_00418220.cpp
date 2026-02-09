// Name: core_beast.cpp_CBeast_ctor_FUN_00418220
// Address: 00418220
// Address Range: [[00418220, 0041827b]]
// Convention: __cdecl
// Signature: CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_00418220(CBeast *this_ptr)

#include "nocturne.h"

CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_00418220(CBeast *this_ptr)

{
  float fVar1;
  float fVar2;
  CEnemy *pCVar3;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar3->base).base.vtable._ub = &g_CBeastVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar3->base).model,"beast.dfm");
  fVar2 = 100.0f;
  fVar1 = 100.0f;
  (pCVar3->base).field54_0x2ddc = 10.0;
  (pCVar3->base).collision_cylinder_radius = 10.0;
  (pCVar3->base).field56_0x2de4 = fVar1;
  (pCVar3->base).field57_0x2de8 = fVar2;
  return (CBeast *)pCVar3;
}
