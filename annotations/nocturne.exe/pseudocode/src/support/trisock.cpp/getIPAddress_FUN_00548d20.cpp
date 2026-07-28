// Name: support_trisock.cpp_getIPAddress_FUN_00548d20
// Address: 00548d20
// Address Range: [[00548d20, 00548d26]]
// Convention: __cdecl
// Signature: uint __cdecl support_trisock_cpp_getIPAddress_FUN_00548d20(SNetworkAddr *net_addr)

#include "nocturne.h"

uint __cdecl support_trisock_cpp_getIPAddress_FUN_00548d20(SNetworkAddr *net_addr)

{
  return net_addr->ip_address;
}
