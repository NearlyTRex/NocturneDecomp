// Name: core_ghoul.cpp_CGhoul_ctor_FUN_004e6030
// Address: 004e6030
// Address Range: [[004e6030, 004e606b]]
// Convention: __cdecl
// Signature: CGhoul * __cdecl core_ghoul_cpp_CGhoul_ctor_FUN_004e6030(CGhoul *this_ptr)

#include "nocturne.h"

CGhoul * __cdecl core_ghoul_cpp_CGhoul_ctor_FUN_004e6030(CGhoul *this_ptr)

{
  CEnemy *pCVar1;
  CGhoul *pCVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  int iVar6;
  float max_value;
  
  pCVar2 = (CGhoul *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar2->base).base.base.vtable._ub = &g_CGhoulVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar2->base).base.model,"guul.dfm");
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(20.0,35.0);
  max_value = 4.0;
  fVar5 = 7.197803e-39;
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)(fVar3 * (float)65536));
  *(int *)(pCVar2->unk1 + 0xc) = (int)ROUND(dVar4);
  fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar5,max_value);
  pCVar2->arise_timer = 0xa0000;
  pCVar2->unk2[0] = -1;
  pCVar2->unk2[1] = -1;
  pCVar2->unk2[2] = -1;
  pCVar2->unk2[3] = -1;
  fVar3 = (float)65536;
  pCVar2->unk2[4] = '\0';
  pCVar2->unk2[5] = '\0';
  pCVar2->unk2[6] = '\0';
  pCVar2->unk2[7] = '\0';
  pCVar2->spasm_count = 2;
  iVar6 = 0x4e60d7;
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)(fVar5 * fVar3));
  *(int *)(pCVar2->unk1 + 0x10) = (int)ROUND(dVar4);
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(1,iVar6);
  pCVar1 = &pCVar2->base;
  (pCVar1->base).cloth_data[0x344] = '\0';
  (pCVar1->base).cloth_data[0x345] = '\0';
  (pCVar1->base).cloth_data[0x346] = '@';
  (pCVar1->base).cloth_data[0x347] = '?';
  pCVar1 = &pCVar2->base;
  (pCVar1->base).cloth_data[0x348] = '\0';
  (pCVar1->base).cloth_data[0x349] = '\0';
  (pCVar1->base).cloth_data[0x34a] = -0x40;
  (pCVar1->base).cloth_data[0x34b] = '?';
  pCVar2->unk3[0x38] = '\0';
  pCVar2->unk3[0x39] = '\0';
  pCVar2->unk3[0x3a] = '\0';
  pCVar2->unk3[0x3b] = '\0';
  pCVar2->unk3[0x3c] = '\0';
  pCVar2->unk3[0x3d] = '\0';
  pCVar2->unk3[0x3e] = '\0';
  pCVar2->unk3[0x3f] = '\0';
  pCVar2->unk3[0x40] = '\0';
  pCVar2->unk3[0x41] = '\0';
  pCVar2->unk3[0x42] = '\0';
  pCVar2->unk3[0x43] = '\0';
  pCVar2->unk3[0x44] = '\0';
  fVar3 = 50.0f;
  pCVar2->unk3[0x45] = '\0';
  pCVar2->unk3[0x46] = '\0';
  pCVar2->unk3[0x47] = '\0';
  pCVar2->unk3[0x48] = '\0';
  fVar5 = 100.0f;
  pCVar2->unk3[0x49] = '\0';
  pCVar2->unk3[0x4a] = '\0';
  pCVar2->unk3[0x4b] = '\0';
  pCVar2->lives_left = iVar6;
  *(float *)((pCVar2->base).base.cloth_data + 0x34c) = fVar3;
  *(float *)((pCVar2->base).base.cloth_data + 0x350) = fVar5;
  return pCVar2;
}
