// Name: core_zombie.cpp_CZombie_canBeGrabbed_FUN_005becd0
// Address: 005becd0
// Address Range: [[005becd0, 005becdd]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_canBeGrabbed_FUN_005becd0(CZombie *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_canBeGrabbed_FUN_005becd0(CZombie *this_ptr,CDemonActor *grabber,int grab_type)

{
  return (uint)(grab_type == 1);
}
