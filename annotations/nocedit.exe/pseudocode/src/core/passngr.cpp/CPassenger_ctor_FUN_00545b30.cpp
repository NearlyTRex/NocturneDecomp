// Name: core_passngr.cpp_CPassenger_ctor_FUN_00545b30
// Address: 00545b30
// Address Range: [[00545b30, 00545c01]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00545b30(CPassenger *this_ptr)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00545b30(CPassenger *this_ptr)

{
  char cVar1;
  CPassenger *pCVar2;
  CPassenger_ptr_129044 pCVar3;
  char *pcVar2;
  char *pcVar3;
  
  pCVar2 = (CPassenger *)core_npc_cpp_CNPC_ctor_FUN_005447e0(&this_ptr->base);
  pcVar2 = "wolfbrn.dfm";
  pCVar3 = core_morph_cpp_CMorph_ctor_FUN_0052b310(&pCVar2->morph);
  pcVar3 = ADJ(pCVar3)->wolf_model_name;
  ADJ(pCVar3)->base.base.base.vtable._ub = &g_CPassengerVTable;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar2 = "false";
  pcVar3 = ADJ(pCVar3)->transform_event;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar2 = "nameMePlease";
  ADJ(pCVar3)->werewolf_actor = (CWerewolf *)0x0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&ADJ(pCVar3)->base.base.model,"trainman.dfm");
  pcVar3 = ADJ(pCVar3)->name_of_wolf;
  ADJ(pCVar3)->wolf_size = 1.0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  ADJ(pCVar3)->transform_wav[0] = '\0';
  return ADJ(pCVar3);
}
