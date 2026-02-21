// Name: core_scat.cpp_CScat_FUN_00558010
// Address: 00558010
// Address Range: [[00558010, 00558036]]
// Convention: __cdecl
// Signature: int __cdecl core_scat_cpp_CScat_FUN_00558010(CScat *this_ptr)

#include "nocturne.h"

int __cdecl core_scat_cpp_CScat_FUN_00558010(CScat *this_ptr)

{
  if (((this_ptr->guns_drawn != 0) && (this_ptr->weapon_actor != (CDemonActor *)0x0)) &&
     (this_ptr->weapon_actor[2].orient.vec.x == 1.12104e-44)) {
    return 1;
  }
  return 0;
}
