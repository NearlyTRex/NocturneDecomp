// Name: core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80
// Address: 005c6a80
// MANUAL RECONSTRUCTION
// Address Range: [[005c6a80, 005c6b54]]
// Convention: __cdecl
// Signature: CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_005c6a80(CSuccubus *this_ptr)

#include "nocturne.h"

CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_005c6a80(CSuccubus *this_ptr)

{
  float fVar2;
  float fVar3;
  CSuccubus *pCVar6;
  CSuccubus_ptr_48828 pCVar7;
  CSuccubus_ptr_57712 pCVar8;
  CSuccubus_ptr_58172 pCVar9;

  pCVar6 = (CSuccubus *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(&pCVar6->hotdemon_model);
  pCVar8 = core_cloth_cpp_CClothList_ctor_FUN_0043bf40(&ADJ(pCVar7)->hotdemon_cloth_list);
  pCVar9 = core_morph_cpp_CMorph_ctor_FUN_0052b310(&ADJ(pCVar8)->morph);
  ADJ(pCVar9)->base.base.base.vtable._ub = &g_CSuccubusVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&ADJ(pCVar9)->base.base.model,"succubus.dfm");
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&ADJ(pCVar9)->hotdemon_model,"hotdemon.dfm");
  ADJ(pCVar9)->base.base.collision_cylinder_height = 0.6;
  fVar2 = 50.0f;
  ADJ(pCVar9)->base.base.collision_cylinder_radius = 0.9;
  fVar3 = 100.0f;
  (ADJ(pCVar9)->hotdemon_cloth_list).count = 1;
  ADJ(pCVar9)->base.base.ai_detection_range_min = fVar2;
  ADJ(pCVar9)->base.base.ai_detection_range_max = fVar3;
  strcpy((ADJ(pCVar9)->hotdemon_cloth_list).filenames[0],"hdwing.cth");
  return ADJ(pCVar9);
}
