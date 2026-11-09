// Name: core_vessel.cpp_CCryptVessel_getCollisionType_FUN_005a98a0
// Address: 005a98a0
// Address Range: [[005a98a0, 005a98ba]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_vessel_cpp_CCryptVessel_getCollisionType_FUN_005a98a0(CCryptVessel *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_vessel_cpp_CCryptVessel_getCollisionType_FUN_005a98a0(CCryptVessel *this_ptr,SCollisionInfo *collision_info)

{
  if ((*(int *)&this_ptr->field_0x70 == 1) && (*(int *)&this_ptr->field_0x2d4 == 0)) {
    return COLLISION_TYPE_MESH;
  }
  return COLLISION_TYPE_NONE;
}
