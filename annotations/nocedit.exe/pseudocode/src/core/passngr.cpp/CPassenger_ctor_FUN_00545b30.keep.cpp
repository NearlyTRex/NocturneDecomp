// Name: core_passngr.cpp_CPassenger_ctor_FUN_00545b30
// Address: 00545b30
// MANUAL RECONSTRUCTION
// Address Range: [[00545b30, 00545c01]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00545b30(CPassenger *this_ptr)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00545b30(CPassenger *this_ptr)

{
  CPassenger *pCVar2;
  CPassenger_ptr_129044 pCVar3;

  pCVar2 = (CPassenger *)core_npc_cpp_CNPC_ctor_FUN_005447e0(&this_ptr->base);
  pCVar3 = core_morph_cpp_CMorph_ctor_FUN_0052b310(&pCVar2->morph);
  ADJ(pCVar3)->base.base.base.vtable._ub = &g_CPassengerVTable._ub;
  strcpy(ADJ(pCVar3)->wolf_model_name,"wolfbrn.dfm");
  strcpy(ADJ(pCVar3)->transform_event,"false");
  ADJ(pCVar3)->werewolf_actor = (CWerewolf *)0x0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&ADJ(pCVar3)->base.base.model,"trainman.dfm");
  ADJ(pCVar3)->wolf_size = 1.0;
  strcpy(ADJ(pCVar3)->name_of_wolf,"nameMePlease");
  ADJ(pCVar3)->transform_wav[0] = '\0';
  return ADJ(pCVar3);
}
