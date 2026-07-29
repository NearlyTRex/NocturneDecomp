// Name: core_filmreel.cpp_CFilmReel_getCollisionType_FUN_00481e70
// Address: 00481e70
// Address Range: [[00481e70, 00481e83]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_filmreel_cpp_CFilmReel_getCollisionType_FUN_00481e70(CFilmReel *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_filmreel_cpp_CFilmReel_getCollisionType_FUN_00481e70(CFilmReel *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(this_ptr->carrier == (CDemonActor *)0x0);
}
