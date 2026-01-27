// Name: core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0
// Address: 004f6ca0
// Address Range: [[004f6ca0, 004f6cfb]]
// Convention: __cdecl
// Signature: CHotDemon * core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0(CHotDemon * this_ptr)

#include "nocturne.h"

CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(CHotDemon *this_ptr)

{
  CEnemy *pCVar1;
  float fVar2;
  float fVar3;
  CHotDemon *pCVar4;
  
  pCVar4 = (CHotDemon *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CHotDemonVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base).base.model,"hotdemon.dfm");
  fVar3 = 100.0f;
  fVar2 = 50.0f;
  pCVar1 = &pCVar4->base;
  (pCVar1->base).cloth_data[0x344] = -0x66;
  (pCVar1->base).cloth_data[0x345] = -0x67;
  (pCVar1->base).cloth_data[0x346] = '\x19';
  (pCVar1->base).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base;
  (pCVar1->base).cloth_data[0x348] = 'f';
  (pCVar1->base).cloth_data[0x349] = 'f';
  (pCVar1->base).cloth_data[0x34a] = 'f';
  (pCVar1->base).cloth_data[0x34b] = '?';
  *(float *)((pCVar4->base).base.cloth_data + 0x34c) = fVar2;
  *(float *)((pCVar4->base).base.cloth_data + 0x350) = fVar3;
  return pCVar4;
}
