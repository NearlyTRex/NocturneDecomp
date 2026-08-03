// Name: core_filmreel.cpp_CFilmReel_canPickup_FUN_00481d30
// Address: 00481d30
// Address Range: [[00481d30, 00481d4b]]
// Convention: __cdecl
// Signature: int __cdecl core_filmreel_cpp_CFilmReel_canPickup_FUN_00481d30(CFilmReel *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_filmreel_cpp_CFilmReel_canPickup_FUN_00481d30(CFilmReel *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
