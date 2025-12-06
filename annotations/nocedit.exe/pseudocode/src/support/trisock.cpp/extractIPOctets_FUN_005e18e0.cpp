// Name: support_trisock.cpp_extractIPOctets_FUN_005e18e0
// Address: 005e18e0
// Address Range: [[005e18e0, 005e192b]]
// Convention: __cdecl
// Signature: void support_trisock.cpp_extractIPOctets_FUN_005e18e0(uchar * ip_bytes, uint * octet1_ptr, uint * octet2_ptr, uint * octet3_ptr, uint * octet4_ptr)

#include "nocturne.h"

void __cdecl
support_trisock_cpp_extractIPOctets_FUN_005e18e0
          (uchar *ip_bytes,uint *octet1_ptr,uint *octet2_ptr,uint *octet3_ptr,uint *octet4_ptr)

{
  if (octet1_ptr != (uint *)0x0) {
    *octet1_ptr = (uint)*ip_bytes;
  }
  if (octet2_ptr != (uint *)0x0) {
    *octet2_ptr = (uint)ip_bytes[1];
  }
  if (octet3_ptr != (uint *)0x0) {
    *octet3_ptr = (uint)ip_bytes[2];
  }
  if (octet4_ptr == (uint *)0x0) {
    return;
  }
  *octet4_ptr = (uint)ip_bytes[3];
  return;
}
