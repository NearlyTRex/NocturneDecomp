// Name: core_mimic.cpp_CMimic_ctor_FUN_0051f1d0
// Address: 0051f1d0
// MANUAL RECONSTRUCTION
// Address Range: [[0051f1d0, 0051f2b6]]
// Convention: __cdecl
// Signature: CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_0051f1d0(CMimic *this_ptr)

#include "nocturne.h"

CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_0051f1d0(CMimic *this_ptr)

{
  float fVar2;
  float fVar3;
  CMimic *pCVar5;
  CMimic_ptr_49028 pCVar6;
  CMimic_ptr_310820 pCVar7;

  pCVar5 = (CMimic *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pCVar6 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0(&pCVar5->cloth);
  pCVar7 = core_morph_cpp_CMorph_ctor_FUN_0052b310(&ADJ(pCVar6)->morph);
  ADJ(pCVar7)->base.base.base.vtable._ub = &g_CMimicVTable._ub;
  ADJ(pCVar7)->base.base.collision_cylinder_height = 0.5;
  ADJ(pCVar7)->base.base.collision_cylinder_radius = 1.0;
  fVar2 = 50.0f;
  ADJ(pCVar7)->mirror_condition[0] = '\0';
  fVar3 = 100.0f;
  ADJ(pCVar7)->attack_condition[0] = '\0';
  ADJ(pCVar7)->base.base.ai_detection_range_min = fVar2;
  ADJ(pCVar7)->base.base.ai_detection_range_max = fVar3;
  ADJ(pCVar7)->attack_mode = 0;
  ADJ(pCVar7)->mirror_plane_actor = (CDemonActor *)0x0;
  strcpy(ADJ(pCVar7)->morph_actor_type,"CGhoul");
  ADJ(pCVar7)->morph_target_actor = (CDemonActor *)0x0;
  ADJ(pCVar7)->morph_blend = -1.0;
  ADJ(pCVar7)->base.base.base.scale.x = 0x10000;
  ADJ(pCVar7)->base.base.base.scale.y = 0x10000;
  ADJ(pCVar7)->base.base.base.scale.z = 0x10000;
  return ADJ(pCVar7);
}
