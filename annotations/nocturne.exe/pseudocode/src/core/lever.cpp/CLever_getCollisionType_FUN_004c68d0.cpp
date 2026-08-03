// Name: core_lever.cpp_CLever_getCollisionType_FUN_004c68d0
// Address: 004c68d0
// Address Range: [[004c68d0, 004c68e3]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_lever_cpp_CLever_getCollisionType_FUN_004c68d0(CLever *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_lever_cpp_CLever_getCollisionType_FUN_004c68d0(CLever *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(this_ptr->enable_collision != 0);
}
