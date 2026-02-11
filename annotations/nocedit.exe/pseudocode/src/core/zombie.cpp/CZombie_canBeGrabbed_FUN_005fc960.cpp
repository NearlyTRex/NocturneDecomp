// Name: core_zombie.cpp_CZombie_canBeGrabbed_FUN_005fc960
// Address: 005fc960
// Address Range: [[005fc960, 005fc96d]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_canBeGrabbed_FUN_005fc960 (CZombie *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl
core_zombie_cpp_CZombie_canBeGrabbed_FUN_005fc960
          (CZombie *this_ptr,CDemonActor *grabber,int grab_type)

{
  return (uint)(grab_type == 1);
}
