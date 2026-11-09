// Name: core_filmreel.cpp_CFilmReel_ctor_FUN_004ab2d0
// Address: 004ab2d0
// Address Range: [[004ab2d0, 004ab33c]]
// Convention: __cdecl
// Signature: CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_ctor_FUN_004ab2d0(CFilmReel *this_ptr)

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_ctor_FUN_004ab2d0(CFilmReel *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  *(byte **)&this_ptr_00[-1].field_0x178 = &g_CFilmReelVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(this_ptr_00,(char *)0x5df0a0);
  pcVar3 = (char *)0x5df0ad;
  pcVar4 = &this_ptr_00[1].field_0x4;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return (CFilmReel *)&this_ptr_00[-1].field_0x24;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return (CFilmReel *)&this_ptr_00[-1].field_0x24;
}
