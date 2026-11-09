// Name: core_filmreel.cpp_CFilmReel_pickup_FUN_004ab400
// Address: 004ab400
// Address Range: [[004ab400, 004ab40e]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmReel_pickup_FUN_004ab400(CFilmReel *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmReel_pickup_FUN_004ab400(CFilmReel *this_ptr,CDemonActor *carrier)

{
  *(CDemonActor **)&this_ptr->field_0x2d4 = carrier;
  return;
}
