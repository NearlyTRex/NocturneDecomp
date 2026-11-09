// Name: core_filmreel.cpp_CFilmReel_getCollisionType_FUN_004963d0
// Address: 004963d0
// Address Range: [[004963d0, 004963e3]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_filmreel_cpp_CFilmReel_getCollisionType_FUN_004963d0(CFilmReel *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_filmreel_cpp_CFilmReel_getCollisionType_FUN_004963d0(CFilmReel *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(*(int *)&this_ptr->field_0x2d4 == 0);
}
