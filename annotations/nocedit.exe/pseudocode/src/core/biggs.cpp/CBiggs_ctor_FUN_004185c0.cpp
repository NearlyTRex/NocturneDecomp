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
  CBiggs_ptr_48828 pCVar6;
  CBiggs_ptr_49216 pCVar7;
  char *pcVar4;
  char *pcVar5;
  
  pCVar4 = (CBiggs *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar4->model);
  pCVar7 = core_morph_cpp_CMorph_ctor_FUN_0052b310(&ADJ(pCVar6)->morph);
  ADJ(pCVar7)->base.base.base.vtable._ub = &g_CBiggsVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&ADJ(pCVar7)->base.base.model,"biggs.dfm");
  pcVar4 = "bigAlien";
  pcVar5 = ADJ(pCVar7)->morph_event;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(pCVar7)->model,"question.kfm");
  fVar2 = 50.0f;
  ADJ(pCVar7)->base.base.collision_cylinder_height = 0.6;
  fVar3 = 100.0f;
  ADJ(pCVar7)->base.base.collision_cylinder_radius = 0.9;
  ADJ(pCVar7)->base.base.ai_detection_range_min = fVar2;
  ADJ(pCVar7)->base.base.ai_detection_range_max = fVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') {
      return ADJ(pCVar7);
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  return ADJ(pCVar7);
}
