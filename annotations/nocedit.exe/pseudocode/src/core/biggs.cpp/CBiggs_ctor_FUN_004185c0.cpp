// Name: core_biggs.cpp_CBiggs_ctor_FUN_004185c0
// Address: 004185c0
// Address Range: [[004185c0, 0041867c]]
// Convention: __cdecl
// Signature: CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_004185c0(CBiggs *this_ptr)

#include "nocturne.h"

CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_004185c0(CBiggs *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CBiggs *pCVar4;
  int extraout_EAX;
  char *pcVar4;
  char *pcVar5;
  
  pCVar4 = (CBiggs *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar4->model);
  core_morph_cpp_FUN_0052b310();
  *(CDemonActor_vtable **)(extraout_EAX + -0xbeec) = &g_CBiggsVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(extraout_EAX + -0xbee8),"biggs.dfm");
  pcVar4 = "bigAlien";
  pcVar5 = (char *)(extraout_EAX + 0xc2c);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(extraout_EAX + -0x184),"question.kfm");
  fVar2 = 50.0f;
  *(uint *)(extraout_EAX + -0x9264) = 0x3f19999a;
  fVar3 = 100.0f;
  *(uint *)(extraout_EAX + -0x9260) = 0x3f666666;
  *(float *)(extraout_EAX + -0x925c) = fVar2;
  *(float *)(extraout_EAX + -0x9258) = fVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') {
      return (CBiggs *)(extraout_EAX + -0xc040);
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  return (CBiggs *)(extraout_EAX + -0xc040);
}
