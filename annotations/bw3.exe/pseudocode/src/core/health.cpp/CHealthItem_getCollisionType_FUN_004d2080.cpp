// Name: core_health.cpp_CHealthItem_getCollisionType_FUN_004d2080
// Address: 004d2080
// Address Range: [[004d2080, 004d208f]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_health_cpp_CHealthItem_getCollisionType_FUN_004d2080(CHealthItem *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_health_cpp_CHealthItem_getCollisionType_FUN_004d2080(CHealthItem *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(*(int *)collision_info == 4);
}
