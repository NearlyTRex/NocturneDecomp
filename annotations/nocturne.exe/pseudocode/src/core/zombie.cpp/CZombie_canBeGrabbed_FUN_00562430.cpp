// Name: core_zombie.cpp_CZombie_canBeGrabbed_FUN_00562430
// Address: 00562430
// Address Range: [[00562430, 0056243d]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_canBeGrabbed_FUN_00562430(CZombie *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_canBeGrabbed_FUN_00562430(CZombie *this_ptr,CDemonActor *grabber,int grab_type)

{
  return (uint)(grab_type == 1);
}
