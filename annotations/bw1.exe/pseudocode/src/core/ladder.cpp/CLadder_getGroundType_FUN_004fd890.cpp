// Name: core_ladder.cpp_CLadder_getGroundType_FUN_004fd890
// Address: 004fd890
// Address Range: [[004fd890, 004fd89a]]
// Convention: __cdecl
// Signature: EGroundType __cdecl core_ladder_cpp_CLadder_getGroundType_FUN_004fd890(CLadder *this_ptr)

#include "nocturne.h"

EGroundType __cdecl core_ladder_cpp_CLadder_getGroundType_FUN_004fd890(CLadder *this_ptr)

{
  return *(EGroundType *)&this_ptr->field_0x2fc;
}
