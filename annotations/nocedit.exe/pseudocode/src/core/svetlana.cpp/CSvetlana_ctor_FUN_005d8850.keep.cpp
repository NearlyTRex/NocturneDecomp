// Name: core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850
// Address: 005d8850
// MANUAL RECONSTRUCTION
// Address Range: [[005d8850, 005d88d7]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005d8850(CSvetlana *this_ptr)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005d8850(CSvetlana *this_ptr)

{
  CSvetlana *pCVar1;
  CSvetlana_ptr_130012 pCVar2;
  CSvetlana_ptr_391756 pCVar4;
  
  pCVar1 = (CSvetlana *)core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  pCVar2 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0(&pCVar1->cape_cloth);
  pCVar4 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0(&ADJ(pCVar2)->hair_cloth);
  ADJ(pCVar4)->base.base.base.vtable._ub = &g_CSvetlanaVTable._ub;
  ADJ(pCVar4)->blades_drawn = 0;
  ADJ(pCVar4)->attack_hand = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&ADJ(pCVar4)->base.base.model,"svetlana.dfm");
  ADJ(pCVar4)->head_blend_weight = 1.0;
  (ADJ(pCVar4)->head_euler_angles).x = 0.0f;
  (ADJ(pCVar4)->head_euler_angles).y = 0.0f;
  (ADJ(pCVar4)->head_euler_angles).z = 0.0f;
  return ADJ(pCVar4);
}
