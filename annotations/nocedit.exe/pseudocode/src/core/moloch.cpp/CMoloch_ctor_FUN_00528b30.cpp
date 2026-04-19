// Name: core_moloch.cpp_CMoloch_ctor_FUN_00528b30
// Address: 00528b30
// Address Range: [[00528b30, 00528bed]]
// Convention: __cdecl
// Signature: CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_00528b30(CMoloch *this_ptr)

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_00528b30(CMoloch *this_ptr)

{
  char cVar1;
  CMoloch *pCVar3;
  CMoloch_ptr_130004 pCVar4;
  CMoloch_ptr_139100 pCVar5;
  char *pcVar2;
  char *pcVar3;
  
  pCVar3 = (CMoloch *)core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(&pCVar3->model);
  pCVar5 = core_morph_cpp_CMorph_ctor_FUN_0052b310(&ADJ(pCVar4)->morph);
  ADJ(pCVar5)->base.base.base.vtable._ub = &g_CMolochVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&ADJ(pCVar5)->base.base.model,"moloch_h.dfm");
  pcVar2 = "molochToDemon";
  pcVar3 = ADJ(pCVar5)->human_to_demon_condition;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar2 = "molochToHuman";
  pcVar3 = ADJ(pCVar5)->demon_to_human_condition;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  ADJ(pCVar5)->in_human_form = 1;
  ADJ(pCVar5)->morphing = 0;
  ADJ(pCVar5)->morph_timer = 0.0;
  return ADJ(pCVar5);
}
