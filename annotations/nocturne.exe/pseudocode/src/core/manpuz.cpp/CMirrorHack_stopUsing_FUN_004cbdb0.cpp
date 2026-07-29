// Name: core_manpuz.cpp_CMirrorHack_stopUsing_FUN_004cbdb0
// Address: 004cbdb0
// Address Range: [[004cbdb0, 004cbdcb]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_stopUsing_FUN_004cbdb0(CMirrorHack *this_ptr,CDemonActor *user)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_stopUsing_FUN_004cbdb0(CMirrorHack *this_ptr,CDemonActor *user)

{
  if (user != this_ptr->interacting_actor) {
    return;
  }
  this_ptr->interacting_actor = (CDemonActor *)0x0;
  return;
}
