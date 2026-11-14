// Name: core_carved.cpp_CCarved_canBeGrabbed_FUN_00429000
// Address: 00429000
// Address Range: [[00429000, 0042900d]]
// Convention: __cdecl
// Signature: int __cdecl core_carved_cpp_CCarved_canBeGrabbed_FUN_00429000(CCarved *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_carved_cpp_CCarved_canBeGrabbed_FUN_00429000(CCarved *this_ptr,CDemonActor *grabber,int grab_type)

{
  return (uint)(grab_type == 1);
}
