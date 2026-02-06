// Name: core_flies.cpp_CFlies_FUN_004cc2c0
// Address: 004cc2c0
// Address Range: [[004cc2c0, 004cc2f2]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_FUN_004cc2c0(CFlies *this_ptr)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_FUN_004cc2c0(CFlies *this_ptr)

{
  int in_stack_00000008;
  
  if ((((-1 < (int)this_ptr) && ((int)this_ptr < g_WindowWidth)) && (-1 < in_stack_00000008)) &&
     (in_stack_00000008 < g_WindowHeight)) {
    core_flies_cpp_CFlies_FUN_004cc230(this_ptr);
    return;
  }
  return;
}
