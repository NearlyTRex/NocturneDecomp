// Name: core_manpuz.cpp_CMirrorHack_startInteraction_FUN_0050b340
// Address: 0050b340
// Address Range: [[0050b340, 0050b35f]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMirrorHack_startInteraction_FUN_0050b340(CMirrorHack *this_ptr,CDemonActor *user)

#include "nocturne.h"

int __cdecl
core_manpuz_cpp_CMirrorHack_startInteraction_FUN_0050b340(CMirrorHack *this_ptr,CDemonActor *user)

{
  if (*(int *)(this_ptr->unk + 0x17c) != 0) {
    return 0;
  }
  *(CDemonActor **)(this_ptr->unk + 0x17c) = user;
  return 1;
}
