// Name: core_larva.cpp_CLarva_ctor_FUN_00502f90
// Address: 00502f90
// Address Range: [[00502f90, 00503013]]
// Convention: __cdecl
// Signature: CLarva * __cdecl core_larva_cpp_CLarva_ctor_FUN_00502f90(CLarva *this_ptr)

#include "nocturne.h"

CLarva * __cdecl core_larva_cpp_CLarva_ctor_FUN_00502f90(CLarva *this_ptr)

{
  CEnemy *pCVar1;
  float fVar2;
  float fVar3;
  CLarva *pCVar4;
  
  pCVar4 = (CLarva *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CLarvaVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base).base.model,"worm.dfm");
  pCVar1 = &pCVar4->base;
  (pCVar1->base).cloth_data[0x344] = '\0';
  (pCVar1->base).cloth_data[0x345] = '\0';
  (pCVar1->base).cloth_data[0x346] = -0x80;
  (pCVar1->base).cloth_data[0x347] = '>';
  pCVar1 = &pCVar4->base;
  (pCVar1->base).cloth_data[0x348] = '\0';
  (pCVar1->base).cloth_data[0x349] = '\0';
  (pCVar1->base).cloth_data[0x34a] = '\0';
  (pCVar1->base).cloth_data[0x34b] = '?';
  pCVar1 = &pCVar4->base;
  (pCVar1->base).unk2[0x70] = '\x01';
  fVar2 = 20.0f;
  (pCVar1->base).unk2[0x71] = '\0';
  (pCVar1->base).unk2[0x72] = '\0';
  (pCVar1->base).unk2[0x73] = '\0';
  (pCVar4->base).base.hit_points = 0x41700000;
  fVar3 = 100.0f;
  pCVar4->unk[0xc] = '\0';
  pCVar4->unk[0xd] = '\0';
  pCVar4->unk[0xe] = '\0';
  pCVar4->unk[0xf] = '\0';
  pCVar4->unk[0x10] = '\0';
  pCVar4->unk[0x11] = '\0';
  pCVar4->unk[0x12] = '\0';
  pCVar4->unk[0x13] = '\0';
  *(float *)((pCVar4->base).base.cloth_data + 0x34c) = fVar2;
  *(float *)((pCVar4->base).base.cloth_data + 0x350) = fVar3;
  return pCVar4;
}
