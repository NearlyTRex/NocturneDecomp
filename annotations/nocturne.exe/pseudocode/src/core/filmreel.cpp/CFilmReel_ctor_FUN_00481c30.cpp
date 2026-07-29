// Name: core_filmreel.cpp_CFilmReel_ctor_FUN_00481c30
// Address: 00481c30
// Address Range: [[00481c30, 00481c9c]]
// Convention: __cdecl
// Signature: CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_ctor_FUN_00481c30(CFilmReel *this_ptr)

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_ctor_FUN_00481c30(CFilmReel *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  int *piVar4;
  
  pCVar2 = core_actor_cpp_FUN_00409d30(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CFilmReelVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr_00,"filmreel.kfm");
  pcVar3 = "movie3";
  piVar4 = this_ptr_00[1].part_visibility_flags + 1;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar4 = cVar1;
    if (cVar1 == '\0') {
      return (CFilmReel *)(this_ptr_00[-1].part_visibility_flags + 0xb);
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar4 + 1) = cVar1;
    piVar4 = (int *)((int)piVar4 + 2);
  } while (cVar1 != '\0');
  return (CFilmReel *)(this_ptr_00[-1].part_visibility_flags + 0xb);
}
