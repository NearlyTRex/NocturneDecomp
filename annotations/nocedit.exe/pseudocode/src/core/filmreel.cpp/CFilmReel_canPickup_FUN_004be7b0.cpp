// Name: core_filmreel.cpp_CFilmReel_canPickup_FUN_004be7b0
// Address: 004be7b0
// Address Range: [[004be7b0, 004be7cb]]
// Convention: __cdecl
// Signature: int __cdecl core_filmreel_cpp_CFilmReel_canPickup_FUN_004be7b0(CFilmReel *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl
core_filmreel_cpp_CFilmReel_canPickup_FUN_004be7b0(CFilmReel *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
