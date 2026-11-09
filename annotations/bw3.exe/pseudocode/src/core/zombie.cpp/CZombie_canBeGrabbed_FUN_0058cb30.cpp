// Name: core_zombie.cpp_CZombie_canBeGrabbed_FUN_0058cb30
// Address: 0058cb30
// Address Range: [[0058cb30, 0058cb3d]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_canBeGrabbed_FUN_0058cb30(CZombie *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_canBeGrabbed_FUN_0058cb30(CZombie *this_ptr,CDemonActor *grabber,int grab_type)

{
  return (uint)(grab_type == 1);
}
