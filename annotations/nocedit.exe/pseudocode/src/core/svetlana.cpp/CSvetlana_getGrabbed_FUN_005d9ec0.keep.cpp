// Name: core_svetlana.cpp_CSvetlana_getGrabbed_FUN_005d9ec0
// Address: 005d9ec0
// MANUAL RECONSTRUCTION
// Address Range: [[005d9ec0, 005d9ec2]]
// Convention: __cdecl
// Signature: int __cdecl core_svetlana_cpp_CSvetlana_getGrabbed_FUN_005d9ec0(CSvetlana *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_svetlana_cpp_CSvetlana_getGrabbed_FUN_005d9ec0(CSvetlana *this_ptr,CDemonActor *grabber,int grab_type)

{
#if !NOCTURNE_AUTHENTIC_HERO_ACTIONS
  return nocturne_svetlana_get_grabbed(&this_ptr->base,grabber,grab_type);
#else
  return 0;
#endif
}
