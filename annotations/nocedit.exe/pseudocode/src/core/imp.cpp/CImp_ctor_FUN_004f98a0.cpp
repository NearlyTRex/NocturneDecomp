// Name: core_imp.cpp_CImp_ctor_FUN_004f98a0
// Address: 004f98a0
// Address Range: [[004f98a0, 004f9905]]
// Convention: __cdecl
// Signature: CImp * core_imp.cpp_CImp_ctor_FUN_004f98a0(CImp * this_ptr)

#include "nocturne.h"

CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004f98a0(CImp *this_ptr)

{
  CEnemy *pCVar1;
  float fVar2;
  float fVar3;
  CImp *pCVar4;
  
  pCVar4 = (CImp *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable._ub = &g_CImpVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model,"imp.dfm");
  fVar2 = 50.0f;
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = -0x66;
  fVar3 = 100.0f;
  (pCVar1->base_character).cloth_data[0x345] = -0x67;
  (pCVar1->base_character).cloth_data[0x346] = '\x19';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = '\0';
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).field13_0x2620[4] = '\0';
  (pCVar1->base_character).field13_0x2620[5] = '\0';
  (pCVar1->base_character).field13_0x2620[6] = '\0';
  (pCVar1->base_character).field13_0x2620[7] = '\0';
  *(float *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = fVar2;
  *(float *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = fVar3;
  return pCVar4;
}
