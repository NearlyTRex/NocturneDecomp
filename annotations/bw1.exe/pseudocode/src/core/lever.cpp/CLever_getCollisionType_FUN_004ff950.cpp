// Name: core_lever.cpp_CLever_getCollisionType_FUN_004ff950
// Address: 004ff950
// Address Range: [[004ff950, 004ff963]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_lever_cpp_CLever_getCollisionType_FUN_004ff950(CLever *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_lever_cpp_CLever_getCollisionType_FUN_004ff950(CLever *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(this_ptr->enable_collision != 0);
}
