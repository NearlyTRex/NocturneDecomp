// Name: core_ghoul.cpp_FUN_004e6030
// Address: 004e6030
// Address Range: [[004e6030, 004e606b]]
// Convention: __cdecl
// Signature: CGhoul * core_ghoul.cpp_FUN_004e6030(CGhoul * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGhoul * __cdecl core_ghoul_cpp_FUN_004e6030(CGhoul *this_ptr)

{
  CEnemy *pCVar1;
  uint uVar2;
  uint uVar3;
  CGhoul *pCVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  int iVar8;
  float max_value;
  
  pCVar4 = (CGhoul *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable = &PTR_core_ghoul_cpp_FUN_0065ed44;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model,"guul.dfm");
  fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(20.0,35.0);
  max_value = 4.0;
  fVar7 = 7.197803e-39;
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)(fVar5 * (float)65536));
  *(int *)(pCVar4->field1_0xbeb4 + 0xc) = (int)ROUND(dVar6);
  fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar7,max_value);
  pCVar4->arise_timer = 0xa0000;
  pCVar4->field3_0xbecc[0] = -1;
  pCVar4->field3_0xbecc[1] = -1;
  pCVar4->field3_0xbecc[2] = -1;
  pCVar4->field3_0xbecc[3] = -1;
  fVar5 = (float)65536;
  pCVar4->field3_0xbecc[4] = '\0';
  pCVar4->field3_0xbecc[5] = '\0';
  pCVar4->field3_0xbecc[6] = '\0';
  pCVar4->field3_0xbecc[7] = '\0';
  pCVar4->spasm_count = 2;
  iVar8 = 0x4e60d7;
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)(fVar7 * fVar5));
  *(int *)(pCVar4->field1_0xbeb4 + 0x10) = (int)ROUND(dVar6);
  iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc70(1,iVar8);
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = '\0';
  (pCVar1->base_character).cloth_data[0x345] = '\0';
  (pCVar1->base_character).cloth_data[0x346] = '@';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = -0x40;
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  pCVar4->field6_0xbee0[0x38] = '\0';
  pCVar4->field6_0xbee0[0x39] = '\0';
  pCVar4->field6_0xbee0[0x3a] = '\0';
  pCVar4->field6_0xbee0[0x3b] = '\0';
  pCVar4->field6_0xbee0[0x3c] = '\0';
  pCVar4->field6_0xbee0[0x3d] = '\0';
  pCVar4->field6_0xbee0[0x3e] = '\0';
  pCVar4->field6_0xbee0[0x3f] = '\0';
  pCVar4->field6_0xbee0[0x40] = '\0';
  pCVar4->field6_0xbee0[0x41] = '\0';
  pCVar4->field6_0xbee0[0x42] = '\0';
  pCVar4->field6_0xbee0[0x43] = '\0';
  pCVar4->field6_0xbee0[0x44] = '\0';
  uVar2 = _DAT_0065ed30;
  pCVar4->field6_0xbee0[0x45] = '\0';
  pCVar4->field6_0xbee0[0x46] = '\0';
  pCVar4->field6_0xbee0[0x47] = '\0';
  pCVar4->field6_0xbee0[0x48] = '\0';
  uVar3 = _DAT_0065ed34;
  pCVar4->field6_0xbee0[0x49] = '\0';
  pCVar4->field6_0xbee0[0x4a] = '\0';
  pCVar4->field6_0xbee0[0x4b] = '\0';
  pCVar4->lives_left = iVar8;
  *(uint *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(uint *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}
