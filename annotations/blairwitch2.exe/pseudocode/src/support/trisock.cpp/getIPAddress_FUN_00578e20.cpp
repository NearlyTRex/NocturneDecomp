// Name: support_trisock.cpp_getIPAddress_FUN_00578e20
// Address: 00578e20
// Address Range: [[00578e20, 00578e26]]
// Convention: __cdecl
// Signature: uint __cdecl support_trisock_cpp_getIPAddress_FUN_00578e20(SNetworkAddr *net_addr)

#include "nocturne.h"

uint __cdecl support_trisock_cpp_getIPAddress_FUN_00578e20(SNetworkAddr *net_addr)

{
  return net_addr->ip_address;
}
