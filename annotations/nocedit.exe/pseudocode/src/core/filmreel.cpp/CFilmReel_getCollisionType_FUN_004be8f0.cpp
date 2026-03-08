// Name: core_filmreel.cpp_CFilmReel_getCollisionType_FUN_004be8f0
// Address: 004be8f0
// Address Range: [[004be8f0, 004be903]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_filmreel_cpp_CFilmReel_getCollisionType_FUN_004be8f0(CFilmReel *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_filmreel_cpp_CFilmReel_getCollisionType_FUN_004be8f0(CFilmReel *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(this_ptr->carrier == (CDemonActor *)0x0);
}
