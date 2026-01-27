// Name: core_filmreel.cpp_CFilmProjector_ctor_FUN_004bea40
// Address: 004bea40
// Address Range: [[004bea40, 004beaf9]]
// Convention: __cdecl
// Signature: CFilmProjector * core_filmreel.cpp_CFilmProjector_ctor_FUN_004bea40(CFilmProjector * this_ptr)

#include "nocturne.h"

CFilmProjector * __cdecl
core_filmreel_cpp_CFilmProjector_ctor_FUN_004bea40(CFilmProjector *this_ptr)

{
  char cVar1;
  CActorDestination *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  
  pCVar2 = core_dest_cpp_CActorDestination_ctor_FUN_0046f900(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pcVar3 = "CFilmReel";
  *(CDemonActor_vtable **)this_ptr_00[-1].animation_state = &g_CFilmProjectorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"filmreel.kfm");
  pcVar4 = this_ptr_00[-1].animation_state + 8;
  this_ptr_00[1].part_visibility_flags[0x1a] = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "none";
  this_ptr_00[1].part_visibility_flags[0x1b] = 0;
  piVar5 = this_ptr_00[1].part_visibility_flags + 1;
  this_ptr_00[1].part_visibility_flags[0] = 0;
  do {
    cVar1 = *pcVar4;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  this_ptr_00[1].part_visibility_flags[0x1c] = 0;
  return (CFilmProjector *)(this_ptr_00[-2].animation_state + 0x28);
}
