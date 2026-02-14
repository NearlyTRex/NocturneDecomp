// Name: core_manpuz.cpp_CMirrorHack_stopUsing_FUN_0050b3c0
// Address: 0050b3c0
// Address Range: [[0050b3c0, 0050b3db]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_stopUsing_FUN_0050b3c0(CMirrorHack *this_ptr,CDemonActor *user)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_stopUsing_FUN_0050b3c0(CMirrorHack *this_ptr,CDemonActor *user)

{
  if (user != *(CDemonActor **)(this_ptr->unk + 0x17c)) {
    return;
  }
  this_ptr->unk[0x17c] = '\0';
  this_ptr->unk[0x17d] = '\0';
  this_ptr->unk[0x17e] = '\0';
  this_ptr->unk[0x17f] = '\0';
  return;
}
