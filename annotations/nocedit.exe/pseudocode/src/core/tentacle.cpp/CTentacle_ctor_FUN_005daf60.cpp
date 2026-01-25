// Name: core_tentacle.cpp_CTentacle_ctor_FUN_005daf60
// Address: 005daf60
// Address Range: [[005daf60, 005dafbf]]
// Convention: __cdecl
// Signature: CTentacle * core_tentacle.cpp_CTentacle_ctor_FUN_005daf60(CTentacle * this_ptr)

#include "nocturne.h"

CTentacle * __cdecl core_tentacle_cpp_CTentacle_ctor_FUN_005daf60(CTentacle *this_ptr)

{
  CEnemy *pCVar1;
  CTentacle *pCVar2;
  
  pCVar2 = (CTentacle *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar2->base_enemy).base_character.base_actor.vtable._ub = &g_CTentacleVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar2->base_enemy).base_character.model,"tentacle.dfm");
  pCVar1 = &pCVar2->base_enemy;
  (pCVar1->base_character).cloth_data[0x34c] = '\0';
  (pCVar1->base_character).cloth_data[0x34d] = '\0';
  (pCVar1->base_character).cloth_data[0x34e] = 'H';
  (pCVar1->base_character).cloth_data[0x34f] = 'B';
  pCVar1 = &pCVar2->base_enemy;
  (pCVar1->base_character).cloth_data[0x350] = '\0';
  (pCVar1->base_character).cloth_data[0x351] = '\0';
  (pCVar1->base_character).cloth_data[0x352] = -0x38;
  (pCVar1->base_character).cloth_data[0x353] = 'B';
  pCVar2->field1_0xbeb4[8] = '\0';
  pCVar2->field1_0xbeb4[9] = '\0';
  pCVar2->field1_0xbeb4[10] = '\0';
  pCVar2->field1_0xbeb4[0xb] = '\0';
  pCVar2->field1_0xbeb4[0xc] = '\0';
  pCVar2->field1_0xbeb4[0xd] = '\0';
  pCVar2->field1_0xbeb4[0xe] = '\0';
  pCVar2->field1_0xbeb4[0xf] = '\0';
  pCVar2->field1_0xbeb4[0x10] = '\0';
  pCVar2->field1_0xbeb4[0x11] = '\0';
  pCVar2->field1_0xbeb4[0x12] = '\0';
  pCVar2->field1_0xbeb4[0x13] = '\0';
  return pCVar2;
}
