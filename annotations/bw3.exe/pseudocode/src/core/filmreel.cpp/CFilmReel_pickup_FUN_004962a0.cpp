// Name: core_filmreel.cpp_CFilmReel_pickup_FUN_004962a0
// Address: 004962a0
// Address Range: [[004962a0, 004962ae]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmReel_pickup_FUN_004962a0(CFilmReel *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmReel_pickup_FUN_004962a0(CFilmReel *this_ptr,CDemonActor *carrier)

{
  *(CDemonActor **)&this_ptr->field_0x2d4 = carrier;
  return;
}
