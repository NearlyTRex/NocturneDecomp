// Name: core_filmreel.cpp_CFilmProjector_ctor_FUN_004bea40
// Address: 004bea40
// Address Range: [[004bea40, 004beaf9]]
// Convention: __cdecl
// Signature: CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_ctor_FUN_004bea40(CFilmProjector *this_ptr)

#include "nocturne.h"

CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_ctor_FUN_004bea40(CFilmProjector *this_ptr)

{
  char cVar1;
  CFilmProjector *pCVar2;
  CFilmProjector_ptr_500 this_ptr_00;
  char *pcVar2;
  char *pcVar3;
  
  pCVar2 = (CFilmProjector *)core_dest_cpp_CActorDestination_ctor_FUN_0046f900(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  pcVar2 = "CFilmReel";
  ADJ(this_ptr_00)->base.base.vtable._ub = &g_CFilmProjectorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"filmreel.kfm");
  pcVar3 = ADJ(this_ptr_00)->base.dest_class;
  *(char *)(this_ptr_00[1].part_visibility_flags + 0x1a) = '\0';
  *(char *)((int)(this_ptr_00[1].part_visibility_flags + 0x1a) + 1) = '\0';
  *(char *)((int)(this_ptr_00[1].part_visibility_flags + 0x1a) + 2) = '\0';
  *(char *)((int)(this_ptr_00[1].part_visibility_flags + 0x1a) + 3) = '\0';
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar2 = "none";
  *(char *)(this_ptr_00[1].part_visibility_flags + 0x1b) = '\0';
  *(char *)((int)(this_ptr_00[1].part_visibility_flags + 0x1b) + 1) = '\0';
  *(char *)((int)(this_ptr_00[1].part_visibility_flags + 0x1b) + 2) = '\0';
  *(char *)((int)(this_ptr_00[1].part_visibility_flags + 0x1b) + 3) = '\0';
  pcVar3 = ADJ(this_ptr_00)->unk + 4;
  *(char *)(this_ptr_00[1].part_visibility_flags + 0) = '\0';
  *(char *)((int)(this_ptr_00[1].part_visibility_flags + 0) + 1) = '\0';
  *(char *)((int)(this_ptr_00[1].part_visibility_flags + 0) + 2) = '\0';
  *(char *)((int)(this_ptr_00[1].part_visibility_flags + 0) + 3) = '\0';
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  *(char *)(this_ptr_00[1].part_visibility_flags + 0x1c) = '\0';
  *(char *)((int)(this_ptr_00[1].part_visibility_flags + 0x1c) + 1) = '\0';
  *(char *)((int)(this_ptr_00[1].part_visibility_flags + 0x1c) + 2) = '\0';
  *(char *)((int)(this_ptr_00[1].part_visibility_flags + 0x1c) + 3) = '\0';
  return ADJ(this_ptr_00);
}
