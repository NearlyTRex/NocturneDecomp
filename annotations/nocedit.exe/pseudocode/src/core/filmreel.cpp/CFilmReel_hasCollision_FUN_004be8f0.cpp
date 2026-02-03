// Name: core_filmreel.cpp_CFilmReel_hasCollision_FUN_004be8f0
// Address: 004be8f0
// Address Range: [[004be8f0, 004be903]]
// Convention: __cdecl
// Signature: int __cdecl core_filmreel_cpp_CFilmReel_hasCollision_FUN_004be8f0 (CFilmReel *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl
core_filmreel_cpp_CFilmReel_hasCollision_FUN_004be8f0
          (CFilmReel *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(this_ptr->carrier == (CDemonActor *)0x0);
}
