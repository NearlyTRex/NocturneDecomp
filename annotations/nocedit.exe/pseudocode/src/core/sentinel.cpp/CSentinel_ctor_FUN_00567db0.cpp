// Name: core_sentinel.cpp_CSentinel_ctor_FUN_00567db0
// Address: 00567db0
// Address Range: [[00567db0, 00567e15]]
// Convention: __cdecl
// Signature: CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_00567db0(CSentinel *this_ptr)

#include "nocturne.h"

CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_00567db0(CSentinel *this_ptr)

{
  CEnemy *pCVar1;
  float fVar2;
  float fVar3;
  CSentinel *pCVar4;
  
  pCVar4 = (CSentinel *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CSentinelVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base).base.model,"sentinel.dfm");
  fVar2 = 50.0f;
  pCVar1 = &pCVar4->base;
  (pCVar1->base).cloth_data[0x344] = -0x66;
  fVar3 = 100.0f;
  (pCVar1->base).cloth_data[0x345] = -0x67;
  (pCVar1->base).cloth_data[0x346] = '\x19';
  (pCVar1->base).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base;
  (pCVar1->base).cloth_data[0x348] = '\0';
  (pCVar1->base).cloth_data[0x349] = '\0';
  (pCVar1->base).cloth_data[0x34a] = '\0';
  (pCVar1->base).cloth_data[0x34b] = '@';
  pCVar4->unk[0xc] = '\0';
  pCVar4->unk[0xd] = '\0';
  pCVar4->unk[0xe] = '\0';
  pCVar4->unk[0xf] = '\0';
  *(float *)((pCVar4->base).base.cloth_data + 0x34c) = fVar2;
  *(float *)((pCVar4->base).base.cloth_data + 0x350) = fVar3;
  return pCVar4;
}
