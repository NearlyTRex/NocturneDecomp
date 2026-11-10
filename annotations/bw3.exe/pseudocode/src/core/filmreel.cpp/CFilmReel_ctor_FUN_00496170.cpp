// Name: core_filmreel.cpp_CFilmReel_ctor_FUN_00496170
// Address: 00496170
// Address Range: [[00496170, 004961dc]]
// Convention: __cdecl
// Signature: CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_ctor_FUN_00496170(CFilmReel *this_ptr)

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_ctor_FUN_00496170(CFilmReel *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  int *piVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408600(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CFilmReelVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(this_ptr_00,(char *)0x5c03dc);
  pcVar3 = (char *)0x5c03e9;
  piVar4 = this_ptr_00[1].part_visibility_flags + 1;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar4 = cVar1;
    if (cVar1 == '\0') {
      return (CFilmReel *)(this_ptr_00[-1].part_visibility_flags + 9);
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar4 + 1) = cVar1;
    piVar4 = (int *)((int)piVar4 + 2);
  } while (cVar1 != '\0');
  return (CFilmReel *)(this_ptr_00[-1].part_visibility_flags + 9);
}
