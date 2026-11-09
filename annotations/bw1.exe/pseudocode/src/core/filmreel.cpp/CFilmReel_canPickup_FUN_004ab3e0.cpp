// Name: core_filmreel.cpp_CFilmReel_canPickup_FUN_004ab3e0
// Address: 004ab3e0
// Address Range: [[004ab3e0, 004ab3fb]]
// Convention: __cdecl
// Signature: int __cdecl core_filmreel_cpp_CFilmReel_canPickup_FUN_004ab3e0(CFilmReel *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_filmreel_cpp_CFilmReel_canPickup_FUN_004ab3e0(CFilmReel *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_FUN_0040c550(picker,"?CHero" + 1);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
