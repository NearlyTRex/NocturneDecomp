// Name: core_lever.cpp_CLever_getCollisionType_FUN_004e24c0
// Address: 004e24c0
// Address Range: [[004e24c0, 004e24d3]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_lever_cpp_CLever_getCollisionType_FUN_004e24c0(CLever *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_lever_cpp_CLever_getCollisionType_FUN_004e24c0(CLever *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(this_ptr->enable_collision != 0);
}
