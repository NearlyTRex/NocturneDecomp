// Name: core_filmreel.cpp_CFilmProjector_ctor_FUN_004ab5c0
// Address: 004ab5c0
// Address Range: [[004ab5c0, 004ab679]]
// Convention: __cdecl
// Signature: CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_ctor_FUN_004ab5c0(CFilmProjector *this_ptr)

#include "nocturne.h"

CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_ctor_FUN_004ab5c0(CFilmProjector *this_ptr)

{
  char cVar1;
  CActorDestination *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_dest_cpp_CActorDestination_ctor_FUN_0045d1f0((CActorDestination *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pcVar3 = "CFilmReel";
  *(byte **)&this_ptr_00[-1].field_0xdc = &g_CFilmProjectorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(this_ptr_00,(char *)0x5df0d9);
  pcVar4 = &this_ptr_00[-1].field_0xe4;
  *(uint *)&this_ptr_00[1].field_0x68 = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5df0f0;
  *(uint *)&this_ptr_00[1].field_0x6c = 0;
  pcVar4 = &this_ptr_00[1].field_0x4;
  *(uint *)(this_ptr_00 + 1) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)&this_ptr_00[1].field_0x70 = 0;
  return (CFilmProjector *)&this_ptr_00[-2].field_0x104;
}
