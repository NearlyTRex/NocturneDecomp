// Name: core_lever.cpp_CLever_hasCollision_FUN_00505060
// Address: 00505060
// Address Range: [[00505060, 00505073]]
// Convention: __cdecl
// Signature: int __cdecl core_lever_cpp_CLever_hasCollision_FUN_00505060(CLever *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl
core_lever_cpp_CLever_hasCollision_FUN_00505060(CLever *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(this_ptr->enable_collision != 0);
}
