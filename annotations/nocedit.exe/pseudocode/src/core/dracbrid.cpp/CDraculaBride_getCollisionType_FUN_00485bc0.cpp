// Name: core_dracbrid.cpp_CDraculaBride_getCollisionType_FUN_00485bc0
// Address: 00485bc0
// Address Range: [[00485bc0, 00485bde]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_dracbrid_cpp_CDraculaBride_getCollisionType_FUN_00485bc0(CDraculaBride *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_dracbrid_cpp_CDraculaBride_getCollisionType_FUN_00485bc0(CDraculaBride *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  if (this_ptr->mist_state != 0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_0042bc20
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}
