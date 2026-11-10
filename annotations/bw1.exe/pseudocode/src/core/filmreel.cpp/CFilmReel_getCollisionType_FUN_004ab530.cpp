// Name: core_filmreel.cpp_CFilmReel_getCollisionType_FUN_004ab530
// Address: 004ab530
// Address Range: [[004ab530, 004ab543]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_filmreel_cpp_CFilmReel_getCollisionType_FUN_004ab530(CFilmReel *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_filmreel_cpp_CFilmReel_getCollisionType_FUN_004ab530(CFilmReel *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(this_ptr->carrier == (CDemonActor *)0x0);
}
