// Name: core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0
// Address: 004150f0
// Address Range: [[004150f0, 0041514b]]
// Convention: __cdecl
// Signature: CBatCreature * __cdecl core_batcreat_cpp_CBatCreature_ctor_FUN_004150f0(CBatCreature *this_ptr)

#include "nocturne.h"

CBatCreature * __cdecl core_batcreat_cpp_CBatCreature_ctor_FUN_004150f0(CBatCreature *this_ptr)

{
  CEnemy *pCVar1;
  float fVar2;
  float fVar3;
  CBatCreature *pCVar4;
  
  pCVar4 = (CBatCreature *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CBatCreatureVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base).base.model,"batcreat.dfm");
  fVar3 = 100.0f;
  fVar2 = 50.0f;
  pCVar1 = &pCVar4->base;
  (pCVar1->base).cloth_data[0x344] = -0x66;
  (pCVar1->base).cloth_data[0x345] = -0x67;
  (pCVar1->base).cloth_data[0x346] = '\x19';
  (pCVar1->base).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base;
  (pCVar1->base).cloth_data[0x348] = '\0';
  (pCVar1->base).cloth_data[0x349] = '\0';
  (pCVar1->base).cloth_data[0x34a] = -0x40;
  (pCVar1->base).cloth_data[0x34b] = '?';
  *(float *)((pCVar4->base).base.cloth_data + 0x34c) = fVar2;
  *(float *)((pCVar4->base).base.cloth_data + 0x350) = fVar3;
  return pCVar4;
}
