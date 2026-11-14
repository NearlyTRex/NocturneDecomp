// Name: core_bird.cpp_CBird_isInvulnerable_FUN_004101c0
// Address: 004101c0
// Address Range: [[004101c0, 004101d3]]
// Convention: __cdecl
// Signature: int __cdecl core_bird_cpp_CBird_isInvulnerable_FUN_004101c0(CBird *this_ptr)

#include "nocturne.h"

int __cdecl core_bird_cpp_CBird_isInvulnerable_FUN_004101c0(CBird *this_ptr)

{
  return (uint)(this_ptr->shoot_me == 0);
}
