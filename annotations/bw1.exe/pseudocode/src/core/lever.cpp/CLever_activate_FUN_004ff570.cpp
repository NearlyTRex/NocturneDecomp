// Name: core_lever.cpp_CLever_activate_FUN_004ff570
// Address: 004ff570
// Address Range: [[004ff570, 004ff5cd]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_activate_FUN_004ff570(CLever *this_ptr)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_activate_FUN_004ff570(CLever *this_ptr)

{
  this_ptr->moving = 1;
  if (this_ptr->param < (float)0.5) {
    this_ptr->move_to_pct = 1.0;
    return;
  }
  this_ptr->move_to_pct = 0.0;
  return;
}
