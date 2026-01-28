// Name: core_beast.cpp_CBeast_ctor_FUN_00418220
// Address: 00418220
// Address Range: [[00418220, 0041827b]]
// Convention: __cdecl
// Signature: CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_00418220(CBeast *this_ptr)

#include "nocturne.h"

CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_00418220(CBeast *this_ptr)

{
  CEnemy *pCVar1;
  float fVar2;
  float fVar3;
  CBeast *pCVar4;
  
  pCVar4 = (CBeast *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CBeastVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base).base.model,"beast.dfm");
  fVar3 = 100.0f;
  fVar2 = 100.0f;
  pCVar1 = &pCVar4->base;
  (pCVar1->base).cloth_data[0x344] = '\0';
  (pCVar1->base).cloth_data[0x345] = '\0';
  (pCVar1->base).cloth_data[0x346] = ' ';
  (pCVar1->base).cloth_data[0x347] = 'A';
  pCVar1 = &pCVar4->base;
  (pCVar1->base).cloth_data[0x348] = '\0';
  (pCVar1->base).cloth_data[0x349] = '\0';
  (pCVar1->base).cloth_data[0x34a] = ' ';
  (pCVar1->base).cloth_data[0x34b] = 'A';
  *(float *)((pCVar4->base).base.cloth_data + 0x34c) = fVar2;
  *(float *)((pCVar4->base).base.cloth_data + 0x350) = fVar3;
  return pCVar4;
}
