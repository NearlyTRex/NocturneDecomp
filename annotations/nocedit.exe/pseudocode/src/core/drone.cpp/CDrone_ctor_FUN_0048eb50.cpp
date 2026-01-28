// Name: core_drone.cpp_CDrone_ctor_FUN_0048eb50
// Address: 0048eb50
// Address Range: [[0048eb50, 0048ebbf]]
// Convention: __cdecl
// Signature: CDrone * __cdecl core_drone_cpp_CDrone_ctor_FUN_0048eb50(CDrone *this_ptr)

#include "nocturne.h"

CDrone * __cdecl core_drone_cpp_CDrone_ctor_FUN_0048eb50(CDrone *this_ptr)

{
  CEnemy *pCVar1;
  float fVar2;
  float fVar3;
  CDrone *pCVar4;
  
  pCVar4 = (CDrone *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CDroneVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base).base.model,"drone.dfm");
  pCVar1 = &pCVar4->base;
  (pCVar1->base).cloth_data[0x344] = '\0';
  fVar2 = 50.0f;
  (pCVar1->base).cloth_data[0x345] = '\0';
  (pCVar1->base).cloth_data[0x346] = '@';
  (pCVar1->base).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base;
  (pCVar1->base).cloth_data[0x348] = '\0';
  fVar3 = 100.0f;
  (pCVar1->base).cloth_data[0x349] = '\0';
  (pCVar1->base).cloth_data[0x34a] = -0x40;
  (pCVar1->base).cloth_data[0x34b] = '?';
  pCVar1 = &pCVar4->base;
  (pCVar1->base).unk2[0x70] = '\x01';
  (pCVar1->base).unk2[0x71] = '\0';
  (pCVar1->base).unk2[0x72] = '\0';
  (pCVar1->base).unk2[0x73] = '\0';
  (pCVar4->base).base.hit_points = 75.0;
  *(float *)((pCVar4->base).base.cloth_data + 0x34c) = fVar2;
  *(float *)((pCVar4->base).base.cloth_data + 0x350) = fVar3;
  return pCVar4;
}
