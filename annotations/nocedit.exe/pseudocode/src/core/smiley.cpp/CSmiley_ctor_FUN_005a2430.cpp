// Name: core_smiley.cpp_CSmiley_ctor_FUN_005a2430
// Address: 005a2430
// Address Range: [[005a2430, 005a24c7]]
// Convention: __cdecl
// Signature: CSmiley * core_smiley.cpp_CSmiley_ctor_FUN_005a2430(CSmiley * this_ptr)

#include "nocturne.h"

CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_005a2430(CSmiley *this_ptr)

{
  CEnemy *pCVar1;
  float fVar2;
  float fVar3;
  CSmiley *pCVar4;
  
  pCVar4 = (CSmiley *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CSmileyVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base).base.model,"smiley.dfm");
  pCVar4->unk[8] = '\0';
  pCVar4->unk[9] = '\0';
  pCVar4->unk[10] = '\0';
  pCVar4->unk[0xb] = '\0';
  pCVar4->unk[0xc] = '\0';
  pCVar4->unk[0xd] = '\0';
  pCVar4->unk[0xe] = -0x38;
  pCVar4->unk[0xf] = 'B';
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
  pCVar4->unk[0x3c] = '\0';
  fVar2 = 50.0f;
  pCVar4->unk[0x3d] = '\0';
  pCVar4->unk[0x3e] = '\0';
  pCVar4->unk[0x3f] = '\0';
  pCVar4->unk[0x40] = '\0';
  fVar3 = 100.0f;
  pCVar4->unk[0x41] = '\0';
  pCVar4->unk[0x42] = '\0';
  pCVar4->unk[0x43] = '\0';
  pCVar4->unk[0x44] = '\0';
  pCVar4->unk[0x45] = '\0';
  pCVar4->unk[0x46] = '\0';
  pCVar4->unk[0x47] = '\0';
  pCVar4->unk[0x48] = '\x01';
  pCVar4->unk[0x49] = '\0';
  pCVar4->unk[0x4a] = '\0';
  pCVar4->unk[0x4b] = '\0';
  *(float *)((pCVar4->base).base.cloth_data + 0x34c) = fVar2;
  *(float *)((pCVar4->base).base.cloth_data + 0x350) = fVar3;
  return pCVar4;
}
