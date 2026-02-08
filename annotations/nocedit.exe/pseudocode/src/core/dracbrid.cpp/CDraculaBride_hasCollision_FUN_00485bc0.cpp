// Name: core_dracbrid.cpp_CDraculaBride_hasCollision_FUN_00485bc0
// Address: 00485bc0
// Address Range: [[00485bc0, 00485bde]]
// Convention: __cdecl
// Signature: int __cdecl core_dracbrid_cpp_CDraculaBride_hasCollision_FUN_00485bc0 (CDraculaBride *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl
core_dracbrid_cpp_CDraculaBride_hasCollision_FUN_00485bc0
          (CDraculaBride *this_ptr,SCollisionInfo *collision_info)

{
  int iVar1;
  
  if (this_ptr->mist_state != 0) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20
                    ((CCharacter *)this_ptr,collision_info);
  return iVar1;
}
