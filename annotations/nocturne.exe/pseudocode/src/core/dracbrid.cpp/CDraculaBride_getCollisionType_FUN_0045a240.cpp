// Name: core_dracbrid.cpp_CDraculaBride_getCollisionType_FUN_0045a240
// Address: 0045a240
// Address Range: [[0045a240, 0045a25e]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_dracbrid_cpp_CDraculaBride_getCollisionType_FUN_0045a240(CDraculaBride *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_dracbrid_cpp_CDraculaBride_getCollisionType_FUN_0045a240(CDraculaBride *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  if (this_ptr->mist_state != 0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}
