// Name: core_filmreel.cpp_CFilmReel_ctor_FUN_004be6b0
// Address: 004be6b0
// Address Range: [[004be6b0, 004be71c]]
// Convention: __cdecl
// Signature: CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_ctor_FUN_004be6b0(CFilmReel *this_ptr)

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_ctor_FUN_004be6b0(CFilmReel *this_ptr)

{
  char cVar1;
  CFilmReel *pCVar2;
  CFilmReel_ptr_344 this_ptr_00;
  char *pcVar2;
  char *pcVar3;
  
  pCVar2 = (CFilmReel *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CFilmReelVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"filmreel.kfm");
  pcVar2 = "movie3";
  pcVar3 = ADJ(this_ptr_00)->movie_name;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return ADJ(this_ptr_00);
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return ADJ(this_ptr_00);
}
