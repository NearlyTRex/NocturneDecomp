// Name: cockpit_pkbmpset.cpp_alignTo4ByteBoundary_FUN_0054bcc0
// Address: 0054bcc0
// Address Range: [[0054bcc0, 0054bcc9]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_pkbmpset_cpp_alignTo4ByteBoundary_FUN_0054bcc0(int value)

#include "nocturne.h"

int __cdecl cockpit_pkbmpset_cpp_alignTo4ByteBoundary_FUN_0054bcc0(int value)

{
  return value + 3U & 0xfffffffc;
}
