// Name: core_biggs.cpp_CBiggs_ctor_FUN_004185c0
// Address: 004185c0
// Address Range: [[004185c0, 0041867c]]
// Convention: __cdecl
// Signature: CBiggs * core_biggs.cpp_CBiggs_ctor_FUN_004185c0(CBiggs * this_ptr)

#include "nocturne.h"

CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_004185c0(CBiggs *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CEnemy *pCVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
            ((CKeyFramedModelInstance *)(pCVar4[1].base_character.base_actor.actor_name + 8));
  iVar5 = core_morph_cpp_FUN_0052b310();
  *(CDemonActor_vtable **)(iVar5 + -0xbeec) = &g_CBiggsVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(iVar5 + -0xbee8),"biggs.dfm");
  pcVar6 = "bigAlien";
  pcVar7 = (char *)(iVar5 + 0xc2c);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(iVar5 + -0x184),"question.kfm");
  fVar2 = 50.0f;
  *(uint *)(iVar5 + -0x9264) = 0x3f19999a;
  fVar3 = 100.0f;
  *(uint *)(iVar5 + -0x9260) = 0x3f666666;
  *(float *)(iVar5 + -0x925c) = fVar2;
  *(float *)(iVar5 + -0x9258) = fVar3;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') {
      return (CBiggs *)(iVar5 + -0xc040);
    }
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  return (CBiggs *)(iVar5 + -0xc040);
}
