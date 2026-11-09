// Name: core_ladder.cpp_CLadder_getGroundType_FUN_004dfbb0
// Address: 004dfbb0
// Address Range: [[004dfbb0, 004dfbba]]
// Convention: __cdecl
// Signature: EGroundType __cdecl core_ladder_cpp_CLadder_getGroundType_FUN_004dfbb0(CLadder *this_ptr)

#include "nocturne.h"

EGroundType __cdecl core_ladder_cpp_CLadder_getGroundType_FUN_004dfbb0(CLadder *this_ptr)

{
  return *(EGroundType *)&this_ptr->field_0x2fc;
}
