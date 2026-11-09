// Name: core_lever.cpp_CLever_getCollisionType_FUN_004e0a10
// Address: 004e0a10
// Address Range: [[004e0a10, 004e0a23]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_lever_cpp_CLever_getCollisionType_FUN_004e0a10(CLever *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_lever_cpp_CLever_getCollisionType_FUN_004e0a10(CLever *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(*(int *)&this_ptr->field_0x810 != 0);
}
