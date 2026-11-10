// Name: core_lever.cpp_CLever_activate_FUN_004e20e0
// Address: 004e20e0
// Address Range: [[004e20e0, 004e213d]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_activate_FUN_004e20e0(CLever *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lever_cpp_CLever_activate_FUN_004e20e0(CLever *this_ptr)

{
  this_ptr->moving = 1;
  if (this_ptr->param < (float)_DAT_005dbf52) {
    this_ptr->move_to_pct = 1.0;
    return;
  }
  this_ptr->move_to_pct = 0.0;
  return;
}
