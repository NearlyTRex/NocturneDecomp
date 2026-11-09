// Name: core_manpuz.cpp_CMirrorHack_startInteraction_FUN_00506670
// Address: 00506670
// Address Range: [[00506670, 0050668f]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMirrorHack_startInteraction_FUN_00506670(CMirrorHack *this_ptr,CDemonActor *user)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMirrorHack_startInteraction_FUN_00506670(CMirrorHack *this_ptr,CDemonActor *user)

{
  if (*(int *)&this_ptr->field_0x2d4 != 0) {
    return 0;
  }
  *(CDemonActor **)&this_ptr->field_0x2d4 = user;
  return 1;
}
