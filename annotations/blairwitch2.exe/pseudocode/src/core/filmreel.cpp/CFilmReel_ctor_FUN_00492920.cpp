// Name: core_filmreel.cpp_CFilmReel_ctor_FUN_00492920
// Address: 00492920
// Address Range: [[00492920, 0049298c]]
// Convention: __cdecl
// Signature: CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_ctor_FUN_00492920(CFilmReel *this_ptr)

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_ctor_FUN_00492920(CFilmReel *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  int *piVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CFilmReelVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(this_ptr_00,(char *)0x5d525e);
  pcVar3 = (char *)0x5d526b;
  piVar4 = this_ptr_00[1].part_visibility_flags + 1;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar4 = cVar1;
    if (cVar1 == '\0') {
      return (CFilmReel *)(this_ptr_00[-2].part_visibility_flags + 0x11);
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar4 + 1) = cVar1;
    piVar4 = (int *)((int)piVar4 + 2);
  } while (cVar1 != '\0');
  return (CFilmReel *)(this_ptr_00[-2].part_visibility_flags + 0x11);
}
