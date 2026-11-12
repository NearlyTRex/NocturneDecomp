// Name: core_demnfolk.cpp_CDemnfolk_canBeGrabbed_FUN_00458f00
// Address: 00458f00
// Address Range: [[00458f00, 00458f0d]]
// Convention: __cdecl
// Signature: int __cdecl core_demnfolk_cpp_CDemnfolk_canBeGrabbed_FUN_00458f00(CDemnfolk *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_demnfolk_cpp_CDemnfolk_canBeGrabbed_FUN_00458f00(CDemnfolk *this_ptr,CDemonActor *grabber,int grab_type)

{
  return (uint)(grab_type == 1);
}
