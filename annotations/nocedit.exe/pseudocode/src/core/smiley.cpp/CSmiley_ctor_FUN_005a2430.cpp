// Name: core_smiley.cpp_CSmiley_ctor_FUN_005a2430
// Address: 005a2430
// Address Range: [[005a2430, 005a24c7]]
// Convention: __cdecl
// Signature: CSmiley * core_smiley.cpp_CSmiley_ctor_FUN_005a2430(CSmiley * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_005a2430(CSmiley *this_ptr)

{
  CEnemy *pCVar1;
  uint uVar2;
  uint uVar3;
  CSmiley *pCVar4;
  
  pCVar4 = (CSmiley *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable = &g_CSmileyVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model,"smiley.dfm");
  pCVar4->field1_0xbeb4[8] = '\0';
  pCVar4->field1_0xbeb4[9] = '\0';
  pCVar4->field1_0xbeb4[10] = '\0';
  pCVar4->field1_0xbeb4[0xb] = '\0';
  pCVar4->field1_0xbeb4[0xc] = '\0';
  pCVar4->field1_0xbeb4[0xd] = '\0';
  pCVar4->field1_0xbeb4[0xe] = -0x38;
  pCVar4->field1_0xbeb4[0xf] = 'B';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = -0x66;
  (pCVar1->base_character).cloth_data[0x345] = -0x67;
  (pCVar1->base_character).cloth_data[0x346] = '\x19';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = 'f';
  (pCVar1->base_character).cloth_data[0x349] = 'f';
  (pCVar1->base_character).cloth_data[0x34a] = 'f';
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  pCVar4->field1_0xbeb4[0x3c] = '\0';
  uVar2 = _DAT_00662f6c;
  pCVar4->field1_0xbeb4[0x3d] = '\0';
  pCVar4->field1_0xbeb4[0x3e] = '\0';
  pCVar4->field1_0xbeb4[0x3f] = '\0';
  pCVar4->field1_0xbeb4[0x40] = '\0';
  uVar3 = _PTR_FUN_00662f6d_3;
  pCVar4->field1_0xbeb4[0x41] = '\0';
  pCVar4->field1_0xbeb4[0x42] = '\0';
  pCVar4->field1_0xbeb4[0x43] = '\0';
  pCVar4->field1_0xbeb4[0x44] = '\0';
  pCVar4->field1_0xbeb4[0x45] = '\0';
  pCVar4->field1_0xbeb4[0x46] = '\0';
  pCVar4->field1_0xbeb4[0x47] = '\0';
  pCVar4->field1_0xbeb4[0x48] = '\x01';
  pCVar4->field1_0xbeb4[0x49] = '\0';
  pCVar4->field1_0xbeb4[0x4a] = '\0';
  pCVar4->field1_0xbeb4[0x4b] = '\0';
  *(uint *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(uint *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}
