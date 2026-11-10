// Name: core_filmreel.cpp_CFilmReel_getCollisionType_FUN_00492b80
// Address: 00492b80
// Address Range: [[00492b80, 00492b93]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_filmreel_cpp_CFilmReel_getCollisionType_FUN_00492b80(CFilmReel *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_filmreel_cpp_CFilmReel_getCollisionType_FUN_00492b80(CFilmReel *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(this_ptr->carrier == (CDemonActor *)0x0);
}
