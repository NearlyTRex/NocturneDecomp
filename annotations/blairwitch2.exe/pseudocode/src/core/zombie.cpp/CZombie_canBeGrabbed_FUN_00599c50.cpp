// Name: core_zombie.cpp_CZombie_canBeGrabbed_FUN_00599c50
// Address: 00599c50
// Address Range: [[00599c50, 00599c5d]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_canBeGrabbed_FUN_00599c50(CZombie *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_canBeGrabbed_FUN_00599c50(CZombie *this_ptr,CDemonActor *grabber,int grab_type)

{
  return (uint)(grab_type == 1);
}
