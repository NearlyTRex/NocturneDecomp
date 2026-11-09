// Name: core_filmreel.cpp_CFilmProjector_ctor_FUN_00492c10
// Address: 00492c10
// Address Range: [[00492c10, 00492cc9]]
// Convention: __cdecl
// Signature: CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_ctor_FUN_00492c10(CFilmProjector *this_ptr)

#include "nocturne.h"

CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_ctor_FUN_00492c10(CFilmProjector *this_ptr)

{
  char cVar1;
  CActorDestination *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_dest_cpp_CActorDestination_ctor_FUN_00447090((CActorDestination *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pcVar3 = "CFilmReel";
  *(byte **)&this_ptr_00[-1].field_0xdc = &g_CFilmProjectorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(this_ptr_00,(char *)0x5d5297);
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
  pcVar3 = (char *)0x5d52ae;
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
  return (CFilmProjector *)&this_ptr_00[-3].field_0x124;
}
